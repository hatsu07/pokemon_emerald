	@ data/maps/BattleFrontier_Lounge2/scripts.inc:212 BattleFrontier_Lounge2_Text_AmazingPowersOfObservation
	.globl gText_Rom_23769E
gText_Rom_23769E: @ 0x0823769E
	.string "すっげえ かんさつりょくー!!\nやっぱ センパイは ちがうっすわー"
	.byte EOS
	.if (. - gText_Rom_23769E) > 0x22
	.error "gText_Rom_23769E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23769E) < 0x22
	.space 0x22 - (. - gText_Rom_23769E)
	.endif
