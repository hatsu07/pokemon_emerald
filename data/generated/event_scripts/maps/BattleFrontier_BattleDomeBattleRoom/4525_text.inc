	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:939 BattleFrontier_BattleDomeBattleRoom_Text_TrainerIsWinner
	.globl gText_Rom_229547
gText_Rom_229547: @ 0x08229547
	.string "{STR_VAR_2}さんの かちです\nおめでとう ございます!{EOS}"
	.if (. - gText_Rom_229547) > 0x18
	.error "gText_Rom_229547 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229547) < 0x18
	.space 0x18 - (. - gText_Rom_229547)
	.endif
