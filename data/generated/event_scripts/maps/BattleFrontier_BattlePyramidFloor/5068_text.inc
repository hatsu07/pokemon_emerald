	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:494 BattlePyramid_Text_SixTrainersRemaining6
	.globl gText_Rom_22E8F1
gText_Rom_22E8F1: @ 0x0822E8F1
	.string "のこり 6にんの\nトレーナーを たおせるかい?"
	.byte EOS
	.if (. - gText_Rom_22E8F1) > 0x18
	.error "gText_Rom_22E8F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E8F1) < 0x18
	.space 0x18 - (. - gText_Rom_22E8F1)
	.endif
