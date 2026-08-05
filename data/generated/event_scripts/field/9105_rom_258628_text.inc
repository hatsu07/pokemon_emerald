	@ field-script:0x258E04 FieldScriptText_258628
	.globl gText_Rom_258628
gText_Rom_258628: @ 0x08258628
	.string "じゃあ　はじめるぞ！\pレッツ　きのみブレンダー！！"
	.byte EOS
	.if (. - gText_Rom_258628) > 0x1a
	.error "gText_Rom_258628 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258628) < 0x1a
	.space 0x1a - (. - gText_Rom_258628)
	.endif
