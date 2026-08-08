	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:428 BattlePyramid_Text_FourTrainersRemaining3
	.globl gText_Rom_22E58F
gText_Rom_22E58F: @ 0x0822E58F
	.string "やるねー!\pでも この だんに あと 4にん いる\nトレーナーを たおせるかな?"
	.byte EOS
	.if (. - gText_Rom_22E58F) > 0x29
	.error "gText_Rom_22E58F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E58F) < 0x29
	.space 0x29 - (. - gText_Rom_22E58F)
	.endif
