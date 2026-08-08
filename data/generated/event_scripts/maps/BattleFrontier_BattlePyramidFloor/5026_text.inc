	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:431 BattlePyramid_Text_ThreeTrainersRemaining3
	.globl gText_Rom_22E5B8
gText_Rom_22E5B8: @ 0x0822E5B8
	.string "やるねー!\pでも この だんに あと 3にん いる\nトレーナーを たおせるかな?"
	.byte EOS
	.if (. - gText_Rom_22E5B8) > 0x29
	.error "gText_Rom_22E5B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E5B8) < 0x29
	.space 0x29 - (. - gText_Rom_22E5B8)
	.endif
