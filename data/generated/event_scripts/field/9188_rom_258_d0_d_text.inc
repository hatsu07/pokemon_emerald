	@ field-script:0x25917B FieldScriptText_258D0D
	.globl gText_Rom_258D0D
gText_Rom_258D0D: @ 0x08258D0D
	.string "これで　いっしょに　きのみブレンダーで\nポロックを　つくろうや"
	.byte EOS
	.if (. - gText_Rom_258D0D) > 0x20
	.error "gText_Rom_258D0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258D0D) < 0x20
	.space 0x20 - (. - gText_Rom_258D0D)
	.endif
