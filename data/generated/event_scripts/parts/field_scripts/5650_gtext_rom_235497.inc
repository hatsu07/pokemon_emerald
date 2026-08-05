	@ field-script:0x2353FA FieldScriptText_235497
	.globl gText_Rom_235497
gText_Rom_235497: @ 0x08235497
	.string "バトルパレス　バトルアリーナ\nバトルピラミッド　の　きろくは　こちら"
	.byte EOS
	.if (. - gText_Rom_235497) > 0x23
	.error "gText_Rom_235497 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_235497) < 0x23
	.space 0x23 - (. - gText_Rom_235497)
	.endif
