	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:422 BattlePyramid_Text_SixTrainersRemaining3
	.globl gText_Rom_22E53B
gText_Rom_22E53B: @ 0x0822E53B
	.string "やるねー!\pでも この だんに あと 6にんも いる\nトレーナーを たおせるかな?"
	.byte EOS
	.if (. - gText_Rom_22E53B) > 0x2a
	.error "gText_Rom_22E53B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E53B) < 0x2a
	.space 0x2a - (. - gText_Rom_22E53B)
	.endif
