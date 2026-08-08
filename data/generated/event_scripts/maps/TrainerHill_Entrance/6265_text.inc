	@ data/maps/TrainerHill_Entrance/scripts.inc:302 TrainerHill_Entrance_Text_TrainersUpToFloorX
	.globl gText_Rom_23BAEE
gText_Rom_23BAEE: @ 0x0823BAEE
	.string "ただいま あつまっている\nトレーナーさんは ……\p{STR_VAR_1}かい までの ようですね"
	.byte EOS
	.if (. - gText_Rom_23BAEE) > 0x28
	.error "gText_Rom_23BAEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BAEE) < 0x28
	.space 0x28 - (. - gText_Rom_23BAEE)
	.endif
