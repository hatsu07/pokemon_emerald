	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:522 BattleFrontier_BattleTowerBattleRoom_Text_ReceivedAbilitySymbol
	.globl gText_Rom_2225E5
gText_Rom_2225E5: @ 0x082225E5
	.string "フロンティアパスに\nアビリティシンボルが きざまれた!{EOS}"
	.if (. - gText_Rom_2225E5) > 0x1c
	.error "gText_Rom_2225E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2225E5) < 0x1c
	.space 0x1c - (. - gText_Rom_2225E5)
	.endif
