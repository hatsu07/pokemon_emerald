	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:295 BattleFrontier_BattleDomePreBattleRoom_Text_RestoreMonsToFullHealth
	.globl gText_Rom_2284EE
gText_Rom_2284EE: @ 0x082284EE
	.string "おつかれさまでした!\pポケモンの たいりょくを\nかいふく いたします!$"
	.if (. - gText_Rom_2284EE) > 0x24
	.error "gText_Rom_2284EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2284EE) < 0x24
	.space 0x24 - (. - gText_Rom_2284EE)
	.endif
