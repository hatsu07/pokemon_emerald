	@ field-script:0x1EA345 FieldScriptText_1EADDB
	.globl gText_Rom_1EADDB
gText_Rom_1EADDB: @ 0x081EADDB
	.string "ツメのかせきは\nすなに　もぐって　しまった……$"
	.if (. - gText_Rom_1EADDB) > 0x18
	.error "gText_Rom_1EADDB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EADDB) < 0x18
	.space 0x18 - (. - gText_Rom_1EADDB)
	.endif
