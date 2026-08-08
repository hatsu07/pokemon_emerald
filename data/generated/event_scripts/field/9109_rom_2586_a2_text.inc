	@ field-script:0x258DAC FieldScriptText_2586A2
	.globl gText_Rom_2586A2
gText_Rom_2586A2: @ 0x082586A2
	.string "あれ？\nでも　きのみを　もってない　みたいだね\pきのみが　ないと　ポロックは\nつくれないんだよ"
	.byte EOS
	.if (. - gText_Rom_2586A2) > 0x30
	.error "gText_Rom_2586A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2586A2) < 0x30
	.space 0x30 - (. - gText_Rom_2586A2)
	.endif
