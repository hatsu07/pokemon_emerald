	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:583 BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50
	.globl gText_Rom_227AB0
gText_Rom_227AB0: @ 0x08227AB0
	.string "ぜんかい おこなわれた レベル50\nシングル バトルトーナメントの けっかだ!$"
	.if (. - gText_Rom_227AB0) > 0x28
	.error "gText_Rom_227AB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_227AB0) < 0x28
	.space 0x28 - (. - gText_Rom_227AB0)
	.endif
