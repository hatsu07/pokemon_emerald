	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:434 BattlePyramid_Text_TwoTrainersRemaining3
	.globl gText_Rom_22E5E1
gText_Rom_22E5E1: @ 0x0822E5E1
	.string "やるねー!\pでも この だんに あと 2にん いる\nトレーナーを たおせるかな?"
	.byte EOS
	.if (. - gText_Rom_22E5E1) > 0x29
	.error "gText_Rom_22E5E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E5E1) < 0x29
	.space 0x29 - (. - gText_Rom_22E5E1)
	.endif
