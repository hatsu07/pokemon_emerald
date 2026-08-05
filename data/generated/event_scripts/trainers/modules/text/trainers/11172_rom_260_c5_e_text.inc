	@ data/text/trainers.inc:2840 Route126_Text_BrendaPostBattle
	.globl gText_Rom_260C5E
gText_Rom_260C5E: @ 0x08260C5E
	.string "こうして ポケモンと\nうみで あそぶのが だいすきなの!$"
	.if (. - gText_Rom_260C5E) > 0x1d
	.error "gText_Rom_260C5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260C5E) < 0x1d
	.space 0x1d - (. - gText_Rom_260C5E)
	.endif
