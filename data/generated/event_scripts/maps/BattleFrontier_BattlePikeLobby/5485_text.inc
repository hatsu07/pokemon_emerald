	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:397 BattleFrontier_BattlePikeLobby_Text_NeverHadToBattleTrainer
	.globl gText_Rom_233AA9
gText_Rom_233AA9: @ 0x08233AA9
	.string "あたし 10かいは クリアしたけど\nいっかいも トレーナーと\lたたかった こと ないんだよぅ!"
	.byte EOS
	.if (. - gText_Rom_233AA9) > 0x30
	.error "gText_Rom_233AA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233AA9) < 0x30
	.space 0x30 - (. - gText_Rom_233AA9)
	.endif
