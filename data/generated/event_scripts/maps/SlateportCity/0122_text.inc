	@ data/maps/SlateportCity/scripts.inc:1230 SlateportCity_Text_MarketSign
	.globl gText_Rom_1DD53C
gText_Rom_1DD53C: @ 0x081DD53C
	.string "「カイナ いちば」\nここでしか かえない もの たくさん!{EOS}"
	.if (. - gText_Rom_1DD53C) > 0x1e
	.error "gText_Rom_1DD53C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD53C) < 0x1e
	.space 0x1e - (. - gText_Rom_1DD53C)
	.endif
