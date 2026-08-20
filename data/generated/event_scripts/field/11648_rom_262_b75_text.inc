	@ field-script:0x21EB6D FieldScriptText_262B75
	.globl gText_Rom_262B75
gText_Rom_262B75: @ 0x08262B75
	.string "わーい　わーい！\nはじめて　みる　ポケモンが　いっぱい！{EOS}"
	.if (. - gText_Rom_262B75) > 0x1d
	.error "gText_Rom_262B75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262B75) < 0x1d
	.space 0x1d - (. - gText_Rom_262B75)
	.endif
