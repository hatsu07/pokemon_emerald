	@ data/text/cable_club.inc:225 MossdeepCity_GameCorner_1F_Text_ExplainRequiredMon
	.globl gText_Rom_2483D0
gText_Rom_2483D0: @ 0x082483D0
	.string "ゲームに さんかできる\nポケモンを もって いないんだね\pだれが さんか できるか\nせつめいを しようか?$"
	.if (. - gText_Rom_2483D0) > 0x36
	.error "gText_Rom_2483D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2483D0) < 0x36
	.space 0x36 - (. - gText_Rom_2483D0)
	.endif
