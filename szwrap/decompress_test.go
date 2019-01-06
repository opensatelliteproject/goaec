package szwrap

import "testing"

func DecompressTest(t *testing.T) {
	// TODO: Implement me

	v := make([]byte, 0)

	v, err := NOAADecompress(v, 8, 16, 0, 0)

	if err != nil {
		t.Error(err)
	}
}
