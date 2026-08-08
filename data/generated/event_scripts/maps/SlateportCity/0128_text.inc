	@ data/maps/SlateportCity/scripts.inc:1245 SlateportCity_Text_NameRatersHouseSign
	.globl gText_Rom_1DD5D6
gText_Rom_1DD5D6: @ 0x081DD5D6
	.string "「せいめい はんだんし の いえ」\nポケモンの なまえ うらないます$"
	.if (. - gText_Rom_1DD5D6) > 0x23
	.error "gText_Rom_1DD5D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD5D6) < 0x23
	.space 0x23 - (. - gText_Rom_1DD5D6)
	.endif
