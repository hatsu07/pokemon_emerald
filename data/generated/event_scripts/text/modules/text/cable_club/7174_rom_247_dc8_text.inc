	@ data/text/cable_club.inc:66 CableClub_Text_CantSingleBattleWithXPlayers
	.globl gText_Rom_247DC8
gText_Rom_247DC8: @ 0x08247DC8
	.string "シングルバトルは {STR_VAR_1}にんで\nあそぶことは できません!$"
	.if (. - gText_Rom_247DC8) > 0x1d
	.error "gText_Rom_247DC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247DC8) < 0x1d
	.space 0x1d - (. - gText_Rom_247DC8)
	.endif
