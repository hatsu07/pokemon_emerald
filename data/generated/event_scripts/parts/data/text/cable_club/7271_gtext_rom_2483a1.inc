	@ data/text/cable_club.inc:218 MossdeepCity_GameCorner_1F_Text_AllGoodToGo
	.globl gText_Rom_2483A1
gText_Rom_2483A1: @ 0x082483A1
	.string "じゅんびが できたよ\nげんきに あそんで おいで!$"
	.if (. - gText_Rom_2483A1) > 0x1a
	.error "gText_Rom_2483A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2483A1) < 0x1a
	.space 0x1a - (. - gText_Rom_2483A1)
	.endif
