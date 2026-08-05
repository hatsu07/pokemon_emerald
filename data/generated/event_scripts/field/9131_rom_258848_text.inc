	@ field-script:0x258EDC FieldScriptText_258848
	.globl gText_Rom_258848
gText_Rom_258848: @ 0x08258848
	.string "よっしっ！　じゃあ　はじめるよ！\pレッツ　きのみブレンダー！！"
	.byte EOS
	.if (. - gText_Rom_258848) > 0x20
	.error "gText_Rom_258848 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258848) < 0x20
	.space 0x20 - (. - gText_Rom_258848)
	.endif
