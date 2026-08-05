	@ field-script:0x23C4B6 FieldScriptText_23C6BB
	.globl gText_Rom_23C6BB
gText_Rom_23C6BB: @ 0x0823C6BB
	.string "はいよー"
	.byte EOS
	.if (. - gText_Rom_23C6BB) > 0x5
	.error "gText_Rom_23C6BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C6BB) < 0x5
	.space 0x5 - (. - gText_Rom_23C6BB)
	.endif
