	@ field-script:0x258DA2 FieldScriptText_2585FC
	.globl gText_Rom_2585FC
gText_Rom_2585FC: @ 0x082585FC
	.string "そうか…\nおじさん　さみしい…"
	.byte EOS
	.if (. - gText_Rom_2585FC) > 0x10
	.error "gText_Rom_2585FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2585FC) < 0x10
	.space 0x10 - (. - gText_Rom_2585FC)
	.endif
