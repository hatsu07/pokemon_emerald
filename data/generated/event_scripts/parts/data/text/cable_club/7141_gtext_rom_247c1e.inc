	@ data/text/cable_club.inc:20 CableClub_Text_NeedTwoMonsForDoubleBattle
	.globl gText_Rom_247C1E
gText_Rom_247C1E: @ 0x08247C1E
	.string "ダブルバトルでは 2ひき いじょうの\nポケモンが ひつようです$"
	.if (. - gText_Rom_247C1E) > 0x20
	.error "gText_Rom_247C1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247C1E) < 0x20
	.space 0x20 - (. - gText_Rom_247C1E)
	.endif
