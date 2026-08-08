	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:440 BattlePyramid_Text_ZeroTrainersRemaining3
	.globl gText_Rom_22E633
gText_Rom_22E633: @ 0x0822E633
	.string "やるねー!\pこの だんには たたかえる トレーナーは\nもう だれも いないよ"
	.byte EOS
	.if (. - gText_Rom_22E633) > 0x27
	.error "gText_Rom_22E633 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E633) < 0x27
	.space 0x27 - (. - gText_Rom_22E633)
	.endif
