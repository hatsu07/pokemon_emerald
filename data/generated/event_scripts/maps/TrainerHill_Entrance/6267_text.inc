	@ data/maps/TrainerHill_Entrance/scripts.inc:305 TrainerHill_Entrance_Text_TrainersInEveryRoom
	.globl gText_Rom_23BB16
gText_Rom_23BB16: @ 0x0823BB16
	.string "ただいま あつまっている\nトレーナーさんは ……\pすべての へやに トレーナーさんが\nあつまっている みたいですね!"
	.byte EOS
	.if (. - gText_Rom_23BB16) > 0x3b
	.error "gText_Rom_23BB16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BB16) < 0x3b
	.space 0x3b - (. - gText_Rom_23BB16)
	.endif
