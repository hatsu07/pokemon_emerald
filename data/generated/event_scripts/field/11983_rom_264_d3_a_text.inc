	@ field-script:0x2645FD FieldScriptText_264D3A
	.globl gText_Rom_264D3A
gText_Rom_264D3A: @ 0x08264D3A
	.string "せいかい　したら\nしょうひんも　あるよー！\lあなた　チャレンジ　して　みない？{EOS}"
	.if (. - gText_Rom_264D3A) > 0x28
	.error "gText_Rom_264D3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264D3A) < 0x28
	.space 0x28 - (. - gText_Rom_264D3A)
	.endif
