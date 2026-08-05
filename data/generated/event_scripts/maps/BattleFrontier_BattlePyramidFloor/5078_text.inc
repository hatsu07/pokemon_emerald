	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:509 BattlePyramid_Text_OneTrainersRemaining6
	.globl gText_Rom_22E969
gText_Rom_22E969: @ 0x0822E969
	.string "のこり 1にんの\nトレーナーを たおせるかい?"
	.byte EOS
	.if (. - gText_Rom_22E969) > 0x18
	.error "gText_Rom_22E969 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E969) < 0x18
	.space 0x18 - (. - gText_Rom_22E969)
	.endif
