	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:512 BattleFrontier_BattlePalaceBattleRoom_Text_ProveYourBondWithMons
	.globl gText_Rom_22BA71
gText_Rom_22BA71: @ 0x0822BA71
	.string "ポケモンとの きずな!!\nここに しめせぇい!!{EOS}"
	.if (. - gText_Rom_22BA71) > 0x19
	.error "gText_Rom_22BA71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22BA71) < 0x19
	.space 0x19 - (. - gText_Rom_22BA71)
	.endif
