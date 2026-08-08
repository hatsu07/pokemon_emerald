	@ field-script:0x229E4D FieldScriptText_22A6CC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22A6CC
gText_Rom_22A6CC: @ 0x0822A6CC
	.string "よいものを　みせて　もらった\pそれでは　せいせきを　レポートに　かくぞ\nしばし　またれよ……$"
	.if (. - gText_Rom_22A6CC) != 0x2f
	.error "gText_Rom_22A6CC must retain its original byte length"
	.endif
