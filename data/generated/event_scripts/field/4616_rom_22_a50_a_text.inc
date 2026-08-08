	@ field-script:0x229FBF FieldScriptText_22A50A
	.globl gText_Rom_22A50A
gText_Rom_22A50A: @ 0x0822A50A
	.string "レベル50のへや　オープンレベルのへやが\nあるが　どちらに　ちょうせん　するのだ？$"
	.if (. - gText_Rom_22A50A) > 0x2a
	.error "gText_Rom_22A50A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22A50A) < 0x2a
	.space 0x2a - (. - gText_Rom_22A50A)
	.endif
