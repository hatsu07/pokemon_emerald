	@ field-script:0x258FB9 FieldScriptText_2589F3
	.globl gText_Rom_2589F3
gText_Rom_2589F3: @ 0x082589F3
	.string "あらあら！　じゃあ　はじめるよ！\pレッツ　きのみブレンダー！！"
	.byte EOS
	.if (. - gText_Rom_2589F3) > 0x20
	.error "gText_Rom_2589F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2589F3) < 0x20
	.space 0x20 - (. - gText_Rom_2589F3)
	.endif
