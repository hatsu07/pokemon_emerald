	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:497 BattlePyramid_Text_FiveTrainersRemaining6
	.globl gText_Rom_22E909
gText_Rom_22E909: @ 0x0822E909
	.string "のこり 5にんの\nトレーナーを たおせるかい?"
	.byte EOS
	.if (. - gText_Rom_22E909) > 0x18
	.error "gText_Rom_22E909 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E909) < 0x18
	.space 0x18 - (. - gText_Rom_22E909)
	.endif
