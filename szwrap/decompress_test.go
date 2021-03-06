package szwrap

import "testing"

var decompressData = []byte{
	0, 0, 23, 252, 0, 0, 0, 0, 1, 255, 69, 63, 91, 160, 0, 98, 128, 69, 57, 220, 250, 74,
	125, 223, 127, 33, 129, 16, 64, 46, 242, 196, 64, 24, 8, 8, 127, 192, 36, 78, 112, 129,
	1, 5, 85, 77, 187, 221, 179, 16, 11, 34, 105, 1, 235, 30, 49, 34, 216, 0, 109, 46, 222,
	189, 228, 90, 88, 70, 5, 0, 0, 2, 99, 31, 60, 126, 12, 127, 159, 216, 255, 233, 147, 22,
	66, 213, 11, 48, 145, 191, 254, 194, 39, 231, 249, 143, 255, 6, 112, 143, 6, 138, 57, 6,
	227, 252, 143, 163, 29, 255, 248, 231, 255, 227, 224, 128, 127, 192, 40, 193, 127, 247,
	31, 255, 228, 69, 255, 252, 64, 127, 224, 252, 95, 240, 111, 142, 127, 254, 63, 200,
	255, 31, 249, 228, 24, 162, 240, 126, 65, 162, 11, 255, 224, 199, 246, 3, 252, 35,
	255, 243, 4, 127, 252, 7, 4, 124, 239, 248, 131, 71, 241, 0, 248, 143, 32, 254, 56,
	143, 131, 131, 7, 131, 142, 14, 13, 130, 68, 241, 255, 226, 15, 17, 5, 49, 131, 227,
	196, 255, 255, 31, 248, 145, 204, 113, 255, 248, 255, 7, 48, 120, 128, 116, 24, 13, 254,
	62, 127, 5, 193, 16, 87, 228, 25, 226, 48, 102, 64, 71, 252, 112, 79, 136, 46, 38, 59, 65,
	160, 149, 210, 63, 127, 128, 64, 49, 62, 193, 204, 7, 142, 255, 144, 92, 123, 162, 255, 31,
	248, 128, 126, 62, 39, 192, 61, 141, 207, 239, 140, 2, 159, 146, 124, 70, 35, 0, 224, 27,
	241, 253, 253, 199, 193, 255, 227, 143, 119, 241, 189, 244, 248, 255, 255, 4, 126, 227,
	252, 79, 249, 192, 120, 231, 248, 12, 72, 40, 248, 57, 209, 15, 220, 30, 181, 66, 233,
	68, 74, 94, 97, 112, 143, 210, 149, 18, 175, 33, 29, 125, 96, 152, 140, 104, 133, 14,
	132, 162, 250, 184, 220, 180, 138, 8, 210, 154, 29, 234, 78, 126, 154, 0, 0, 0, 3, 255,
	255, 249, 133, 105, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 8, 17, 165, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
}

func DecompressTest(t *testing.T) {
	var v []byte
	var err error
	for i := 0; i < 9999; i++ {
		v, err = NOAADecompress(decompressData, 8, 32, 5424, 177|SZ_RAW_OPTION_MASK)

		if err != nil {
			t.Error(err)
		}

		if len(v) != 5424 {
			t.Errorf("Expected 5424 bytes got %d", len(v))
		}
	}
}
