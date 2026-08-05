	@ data/text/cable_club.inc:148 CableClub_Text_YouMayBattleHere
	.globl gText_Rom_24802D
gText_Rom_24802D: @ 0x0824802D
	.string "ともだちと ポケモンの\nたいせんが たのしめます$"
	.if (. - gText_Rom_24802D) > 0x19
	.error "gText_Rom_24802D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24802D) < 0x19
	.space 0x19 - (. - gText_Rom_24802D)
	.endif
