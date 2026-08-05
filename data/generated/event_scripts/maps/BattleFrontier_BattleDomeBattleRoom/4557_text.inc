	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1024 BattleFrontier_BattleDomeBattleRoom_Text_DoBattlesExistSolelyForTrainer
	.globl gText_Rom_229787
gText_Rom_229787: @ 0x08229787
	.string "この ひとの ために\nこの たいかいは あるのでしょうか!?\p$"
	.if (. - gText_Rom_229787) > 0x20
	.error "gText_Rom_229787 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229787) < 0x20
	.space 0x20 - (. - gText_Rom_229787)
	.endif
