	@ field-script:0x254E64 FieldScriptText_2564DC
	.globl gText_Rom_2564DC
gText_Rom_2564DC: @ 0x082564DC
	.string "そう……\nわし　ざんねん……"
	.byte EOS
	.if (. - gText_Rom_2564DC) > 0xf
	.error "gText_Rom_2564DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2564DC) < 0xf
	.space 0xf - (. - gText_Rom_2564DC)
	.endif
