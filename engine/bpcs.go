package engine

import (
	"image/png"
	"os"
)

type Encryptor interface {
	Encrypt(plainText, key string) string
	Decrypt(cipherText, key string) string
}

type Bpcs struct {
	InputFile  *os.File
	OutputFile *os.File
	Encryptor  Encryptor
}

func (this Bpcs) Embed(msg, key string) {
	img, err := png.Decode(this.InputFile)
	if err != nil {
		panic(err.Error())
	}

	//cipherText := this.Encryptor.Encrypt(msg, key)

	err = png.Encode(this.OutputFile, img)
	if err != nil {
		panic(err.Error())
	}
}
