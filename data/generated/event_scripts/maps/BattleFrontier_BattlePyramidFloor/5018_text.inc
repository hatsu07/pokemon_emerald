	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:419 BattlePyramid_Text_SevenTrainersRemaining3
	.globl gText_Rom_22E511
gText_Rom_22E511: @ 0x0822E511
	.string "やるねー!\pでも この だんに あと 7にんも いる\nトレーナーを たおせるかな?"
	.byte EOS
	.if (. - gText_Rom_22E511) > 0x2a
	.error "gText_Rom_22E511 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E511) < 0x2a
	.space 0x2a - (. - gText_Rom_22E511)
	.endif
