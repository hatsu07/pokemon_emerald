	@ data/maps/SlateportCity/scripts.inc:1075 SlateportCity_Text_SeaIsSoWet
	.globl gText_Rom_1DCF33
gText_Rom_1DCF33: @ 0x081DCF33
	.string "うみって おおきいなあ……\pひょっとして うみって\nポケモンが ながした なみだで\lできてるのかなあ……$"
	.if (. - gText_Rom_1DCF33) > 0x35
	.error "gText_Rom_1DCF33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCF33) < 0x35
	.space 0x35 - (. - gText_Rom_1DCF33)
	.endif
