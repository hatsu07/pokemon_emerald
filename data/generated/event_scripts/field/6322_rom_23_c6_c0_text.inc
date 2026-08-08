	@ field-script:0x23C4D9 FieldScriptText_23C6C0
	.globl gText_Rom_23C6C0
gText_Rom_23C6C0: @ 0x0823C6C0
	.string "おかねが　ないよー"
	.byte EOS
	.if (. - gText_Rom_23C6C0) > 0xa
	.error "gText_Rom_23C6C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C6C0) < 0xa
	.space 0xa - (. - gText_Rom_23C6C0)
	.endif
