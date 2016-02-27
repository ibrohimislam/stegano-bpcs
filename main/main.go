package main

import (
	"os"
	"image/png"
	"github.com/visualfc/goqt/ui"
)

type EmbedForm struct {
	*ui.QWidget
}

func NewEmbedForm() *EmbedForm {
	form := &EmbedForm{
		ui.NewWidget(),
	}

	vbox := ui.NewVBoxLayout()
	img_path_textbox := ui.NewLineEdit()
	vbox.AddWidget(img_path_textbox)
	out_path_textbox := ui.NewLineEdit()
	vbox.AddWidget(out_path_textbox)

	databox := ui.NewHBoxLayout()
	key_textbox := ui.NewLineEdit()
	msg_textbox := ui.NewLineEdit()
	databox.AddWidget(key_textbox)
	databox.AddWidget(msg_textbox)
	vbox.AddLayout(databox)

	exec_button := ui.NewPushButton()
	exec_button.SetText("Execute")
	exec_button.OnClicked(func() {
		key := key_textbox.Text()
		msg := msg_textbox.Text()
		img_path := "/home/ibrohim/Pictures/vm.png" //img_path_textbox.Text()
		out_path := "/home/ibrohim/Pictures/vm_new.png" //out_path_textbox.Text()

		img_file, err := os.Open(img_path)
		if err != nil {
			panic(err.Error())
		}

		img, err := png.Decode(img_file)
		if err != nil {
			panic(err.Error())
		}

		stego_image := Encrypt(img, key, msg)

		out_file, err := os.Create(out_path)
		if err != nil {
			panic(err.Error())
		}
		defer out_file.Close()

		err = png.Encode(out_file, stego_image)
		if err != nil {
			panic(err.Error())
		}
	})
	vbox.AddWidget(exec_button)

	form.SetLayout(vbox)
	form.SetWindowTitle("Embed Text to Picture")
	return form
}

func main() {
	ui.Run(func() {
		form := NewEmbedForm()
		form.Show()
	})
}
