package main

import "github.com/visualfc/goqt/ui"

type EncryptForm struct {
	*ui.QWidget
}

func NewEncryptForm() *EncryptForm {
	form := &EncryptForm{}
	form.QWidget = ui.NewWidget()
	form.InstallEventFilter(form)
	return form
}


func main() {
	ui.Run(func() {
		form := NewEncryptForm()
		form.Show()
	})
}
