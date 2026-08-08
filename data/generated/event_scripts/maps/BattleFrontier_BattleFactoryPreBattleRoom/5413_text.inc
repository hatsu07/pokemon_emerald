	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:632 BattleFrontier_BattleFactoryPreBattleRoom_Text_WaitFewMoments
	.globl gText_Rom_2328CF
gText_Rom_2328CF: @ 0x082328CF
	.string "もうしわけ ありません!\nしょうしょう おまちください!"
	.byte EOS
	.if (. - gText_Rom_2328CF) > 0x1d
	.error "gText_Rom_2328CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2328CF) < 0x1d
	.space 0x1d - (. - gText_Rom_2328CF)
	.endif
