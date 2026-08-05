	@ data/text/cable_club.inc:145 CableClub_Text_YouMayTradeHere
	.globl gText_Rom_248014
gText_Rom_248014: @ 0x08248014
	.string "ともだちと ポケモンの\nこうかんが たのしめます$"
	.if (. - gText_Rom_248014) > 0x19
	.error "gText_Rom_248014 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248014) < 0x19
	.space 0x19 - (. - gText_Rom_248014)
	.endif
