	@ data/text/cable_club.inc:69 CableClub_Text_CantDoubleBattleWithXPlayers
	.globl gText_Rom_247DE5
gText_Rom_247DE5: @ 0x08247DE5
	.string "ダブルバトルは {STR_VAR_1}にんでは\nあそぶことは できません!$"
	.if (. - gText_Rom_247DE5) > 0x1d
	.error "gText_Rom_247DE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247DE5) < 0x1d
	.space 0x1d - (. - gText_Rom_247DE5)
	.endif
