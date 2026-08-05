	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:500 BattlePyramid_Text_FourTrainersRemaining6
	.globl gText_Rom_22E921
gText_Rom_22E921: @ 0x0822E921
	.string "のこり 4にんの\nトレーナーを たおせるかい?"
	.byte EOS
	.if (. - gText_Rom_22E921) > 0x18
	.error "gText_Rom_22E921 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E921) < 0x18
	.space 0x18 - (. - gText_Rom_22E921)
	.endif
