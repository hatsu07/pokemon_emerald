	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:425 BattlePyramid_Text_FiveTrainersRemaining3
	.globl gText_Rom_22E565
gText_Rom_22E565: @ 0x0822E565
	.string "やるねー!\pでも この だんに あと 5にんも いる\nトレーナーを たおせるかな?"
	.byte EOS
	.if (. - gText_Rom_22E565) > 0x2a
	.error "gText_Rom_22E565 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E565) < 0x2a
	.space 0x2a - (. - gText_Rom_22E565)
	.endif
