	@ data/maps/SlateportCity/scripts.inc:1009 SlateportCity_Text_VisitedMuseumOften
	.globl gText_Rom_1DCCF6
gText_Rom_1DCCF6: @ 0x081DCCF6
	.string "この はくぶつかん には\nこどもの ころ わたしも よく きました\pかんないの てんじひんを みて\nうみの しんぴに あこがれた ものです$"
	.if (. - gText_Rom_1DCCF6) > 0x46
	.error "gText_Rom_1DCCF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCCF6) < 0x46
	.space 0x46 - (. - gText_Rom_1DCCF6)
	.endif
