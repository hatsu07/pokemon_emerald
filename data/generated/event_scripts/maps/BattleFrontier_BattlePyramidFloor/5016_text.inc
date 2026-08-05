	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:416 BattlePyramid_Text_ZeroTrainersRemaining2
	.globl gText_Rom_22E4F1
gText_Rom_22E4F1: @ 0x0822E4F1
	.string "くやしいー!\pでも もう たたかえる\nトレーナーが いないのー"
	.byte EOS
	.if (. - gText_Rom_22E4F1) > 0x20
	.error "gText_Rom_22E4F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E4F1) < 0x20
	.space 0x20 - (. - gText_Rom_22E4F1)
	.endif
