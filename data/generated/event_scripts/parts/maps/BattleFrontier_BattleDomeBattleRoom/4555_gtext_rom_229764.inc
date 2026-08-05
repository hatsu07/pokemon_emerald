	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1019 BattleFrontier_BattleDomeBattleRoom_Text_CanAnyoneHopeToBeatTrainer
	.globl gText_Rom_229764
gText_Rom_229764: @ 0x08229764
	.string "この ひとに かてる トレーナーは\nはたして いるのでしょうか!?\p$"
	.if (. - gText_Rom_229764) > 0x23
	.error "gText_Rom_229764 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229764) < 0x23
	.space 0x23 - (. - gText_Rom_229764)
	.endif
