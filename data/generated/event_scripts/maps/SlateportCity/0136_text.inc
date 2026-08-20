	@ data/maps/SlateportCity/scripts.inc:1278 SlateportCity_Text_ExchangeWhatWithIt
	.globl gText_Rom_1DD734
gText_Rom_1DD734: @ 0x081DD734
	.string "なにと こうかん しましょ?{EOS}"
	.if (. - gText_Rom_1DD734) > 0xf
	.error "gText_Rom_1DD734 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD734) < 0xf
	.space 0xf - (. - gText_Rom_1DD734)
	.endif
