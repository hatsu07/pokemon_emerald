	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:437 BattlePyramid_Text_OneTrainersRemaining3
	.globl gText_Rom_22E60A
gText_Rom_22E60A: @ 0x0822E60A
	.string "やるねー!\pでも この だんに あと 1にん いる\nトレーナーを たおせるかな?"
	.byte EOS
	.if (. - gText_Rom_22E60A) > 0x29
	.error "gText_Rom_22E60A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E60A) < 0x29
	.space 0x29 - (. - gText_Rom_22E60A)
	.endif
