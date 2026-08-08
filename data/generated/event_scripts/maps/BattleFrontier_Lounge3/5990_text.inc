	@ data/maps/BattleFrontier_Lounge3/scripts.inc:311 BattleFrontier_Lounge3_Text_BackedWrongTrainer
	.globl gText_Rom_2384DF
gText_Rom_2384DF: @ 0x082384DF
	.string "まーたー はーずーれー?\pあたし ふつうに\nたたかった ほうが いいの かなぁー"
	.byte EOS
	.if (. - gText_Rom_2384DF) > 0x29
	.error "gText_Rom_2384DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2384DF) < 0x29
	.space 0x29 - (. - gText_Rom_2384DF)
	.endif
