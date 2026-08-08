	@ field-script:0x26489B FieldScriptText_26509A
	.globl gText_Rom_26509A
gText_Rom_26509A: @ 0x0826509A
	.string "だから　おねがい！\pあなたの　ポロック　ひとつで　いいから\nあたしたちに　ちょうだい！$"
	.if (. - gText_Rom_26509A) > 0x2c
	.error "gText_Rom_26509A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26509A) < 0x2c
	.space 0x2c - (. - gText_Rom_26509A)
	.endif
