package main

import (
	"github.com/ibrohimislam/stegano-bpcs/engine"
	"github.com/visualfc/goqt/ui"
	"os"
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
		inp_path := "/home/ibrohim/Pictures/vm.png"     //img_path_textbox.Text()
		out_path := "/home/ibrohim/Pictures/vm_new.png" //out_path_textbox.Text()

		inp_file, err := os.Open(inp_path)
		if err != nil {
			panic(err.Error())
		}

		out_file, err := os.Create(out_path)
		if err != nil {
			panic(err.Error())
		}
		defer out_file.Close()

		encryptor := engine.Caesar{}

		bpcs := engine.Bpcs{inp_file, out_file, encryptor}
		bpcs.Embed(key, msg)
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
