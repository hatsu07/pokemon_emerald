	@ field-script:0x229E31 FieldScriptText_22A72D
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22A72D
gText_Rom_22A72D: @ 0x0822A72D
	.string "せいせきを　レポートに　かくぞ\nしばし　またれよ……$"
	.if (. - gText_Rom_22A72D) != 0x1b
	.error "gText_Rom_22A72D must retain its original byte length"
	.endif
