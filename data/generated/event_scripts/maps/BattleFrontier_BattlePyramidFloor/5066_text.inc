	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:491 BattlePyramid_Text_SevenTrainersRemaining6
	.globl gText_Rom_22E8D9
gText_Rom_22E8D9: @ 0x0822E8D9
	.string "のこり 7にんの\nトレーナーを たおせるかい?"
	.byte EOS
	.if (. - gText_Rom_22E8D9) > 0x18
	.error "gText_Rom_22E8D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E8D9) < 0x18
	.space 0x18 - (. - gText_Rom_22E8D9)
	.endif
