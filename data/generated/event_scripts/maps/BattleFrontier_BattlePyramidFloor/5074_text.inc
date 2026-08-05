	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:503 BattlePyramid_Text_ThreeTrainersRemaining6
	.globl gText_Rom_22E939
gText_Rom_22E939: @ 0x0822E939
	.string "のこり 3にんの\nトレーナーを たおせるかい?"
	.byte EOS
	.if (. - gText_Rom_22E939) > 0x18
	.error "gText_Rom_22E939 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E939) < 0x18
	.space 0x18 - (. - gText_Rom_22E939)
	.endif
