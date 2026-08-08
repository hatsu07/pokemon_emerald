	@ field-script:0x222AAF FieldScriptText_243DC6
	.globl gText_Rom_243DC6
gText_Rom_243DC6: @ 0x08243DC6
	.string "おかしな　きは\nホエルコじょうろを　いやがっている！\pおかしな　きが　おそいかかってきた！$"
	.if (. - gText_Rom_243DC6) > 0x2e
	.error "gText_Rom_243DC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243DC6) < 0x2e
	.space 0x2e - (. - gText_Rom_243DC6)
	.endif
