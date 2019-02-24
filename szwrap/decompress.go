package szwrap

import "C"
import (
	"fmt"
	"runtime"
	"unsafe"
)

func bitsToBytes(bits int) int {
	if bits > 16 {
		return 4
	}
	if bits > 8 {
		return 2
	}

	return 1
}

func NOAADecompress(input []byte, bitsPerPixel, pixelsPerBlock, pixelsPerScanline, mask int) (output []byte, err error) {
	mask = mask | SZ_RAW_OPTION_MASK // By default NOAA don't send RAW, but their images are RAW.

	params := NewSZ_com_t()

	params.SetOptions_mask(mask)
	params.SetBits_per_pixel(bitsPerPixel)
	params.SetPixels_per_block(pixelsPerBlock)
	params.SetPixels_per_scanline(pixelsPerScanline)

	output = make([]byte, pixelsPerScanline*bitsToBytes(bitsPerPixel))
	destLen := int64(len(output))

	if len(input) == 0 {
		return output, nil
	}

	inputPtr := uintptr(unsafe.Pointer(&input[0]))
	outputPtr := uintptr(unsafe.Pointer(&output[0]))

	runtime.LockOSThread()
	status := SZ_BufftoBuffDecompress(outputPtr, &destLen, inputPtr, int64(len(input)), params)
	runtime.UnlockOSThread()

	if status == 0 {
		return output[:destLen], nil
	}

	return output, fmt.Errorf("error decompressing: Code %d", status)
}
