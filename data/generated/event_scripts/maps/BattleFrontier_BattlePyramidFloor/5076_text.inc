	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:506 BattlePyramid_Text_TwoTrainersRemaining6
	.globl gText_Rom_22E951
gText_Rom_22E951: @ 0x0822E951
	.string "のこり 2にんの\nトレーナーを たおせるかい?"
	.byte EOS
	.if (. - gText_Rom_22E951) > 0x18
	.error "gText_Rom_22E951 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E951) < 0x18
	.space 0x18 - (. - gText_Rom_22E951)
	.endif
