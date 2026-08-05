	@ field-script:0x23C488 FieldScriptText_23C6CA
	.globl gText_Rom_23C6CA
gText_Rom_23C6CA: @ 0x0823C6CA
	.string "それは　ざんねん　だねー"
	.byte EOS
	.if (. - gText_Rom_23C6CA) > 0xd
	.error "gText_Rom_23C6CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C6CA) < 0xd
	.space 0xd - (. - gText_Rom_23C6CA)
	.endif
