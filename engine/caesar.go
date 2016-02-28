package engine

type Caesar struct{}

func (_ Caesar) Encrypt(plainText, _ string) string {
	return plainText
}

func (_ Caesar) Decrypt(cipherText, _ string) string {
	return cipherText
}
