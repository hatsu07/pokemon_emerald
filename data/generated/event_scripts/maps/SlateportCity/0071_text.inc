	@ data/maps/SlateportCity/scripts.inc:1095 SlateportCity_Text_CantChangeTradeMonName
	.globl gText_Rom_1DCFF4
gText_Rom_1DCFF4: @ 0x081DCFF4
	.string "ひとと こうかんした ポケモンは\nニックネームを かえられないわよ!\pだって つけた ひとの きもちが\nこめられて いるんですもの!$"
	.if (. - gText_Rom_1DCFF4) > 0x43
	.error "gText_Rom_1DCFF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCFF4) < 0x43
	.space 0x43 - (. - gText_Rom_1DCFF4)
	.endif
