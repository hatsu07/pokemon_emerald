	@ field-script:0x242153 FieldScriptText_2422BC
	.globl gText_Rom_2422BC
gText_Rom_2422BC: @ 0x082422BC
	.string "まだ　こうかん　するかい？{EOS}"
	.if (. - gText_Rom_2422BC) > 0xe
	.error "gText_Rom_2422BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2422BC) < 0xe
	.space 0xe - (. - gText_Rom_2422BC)
	.endif
