	@ data/maps/BattleFrontier_Lounge2/scripts.inc:209 BattleFrontier_Lounge2_Text_NewsGatheringPower
	.globl gText_Rom_23767B
gText_Rom_23767B: @ 0x0823767B
	.string "すっげえ じょうほうりょくー!!\nやっぱ センパイは ちがうっすよー"
	.byte EOS
	.if (. - gText_Rom_23767B) > 0x23
	.error "gText_Rom_23767B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23767B) < 0x23
	.space 0x23 - (. - gText_Rom_23767B)
	.endif
