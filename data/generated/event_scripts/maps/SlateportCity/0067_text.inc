	@ data/maps/SlateportCity/scripts.inc:1087 SlateportCity_Text_BuyTooMuch
	.globl gText_Rom_1DCFAA
gText_Rom_1DCFAA: @ 0x081DCFAA
	.string "ここに くると うれしくて\nつい たくさん かいもの しちゃう!$"
	.if (. - gText_Rom_1DCFAA) > 0x21
	.error "gText_Rom_1DCFAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCFAA) < 0x21
	.space 0x21 - (. - gText_Rom_1DCFAA)
	.endif
