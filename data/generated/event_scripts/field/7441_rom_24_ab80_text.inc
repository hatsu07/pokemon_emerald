	@ field-script:0x248F0E FieldScriptText_24AB80
	.globl gText_Rom_24AB80
gText_Rom_24AB80: @ 0x0824AB80
	.string "しかい『はい！　これより\nおともだち　4にん　つうしんの\lポケモン　{0xFD}{0x03}コンテストが\lはじまります！{EOS}"
	.if (. - gText_Rom_24AB80) > 0x33
	.error "gText_Rom_24AB80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AB80) < 0x33
	.space 0x33 - (. - gText_Rom_24AB80)
	.endif
