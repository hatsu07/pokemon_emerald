	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:990 BattleFrontier_BattleDomeBattleRoom_Text_CanAchieveChampionFirstTry
	.globl gText_Rom_2296D6
gText_Rom_2296D6: @ 0x082296D6
	.string "はつしゅつじょう はつゆうしょうの\nいぎょう たっせい なるか!?\p{EOS}"
	.if (. - gText_Rom_2296D6) > 0x23
	.error "gText_Rom_2296D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2296D6) < 0x23
	.space 0x23 - (. - gText_Rom_2296D6)
	.endif
