	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:464 BattlePyramid_Text_ZeroTrainersRemaining4
	.globl gText_Rom_22E76B
gText_Rom_22E76B: @ 0x0822E76B
	.string "あなたを たおせる トレーナーは\nもう だれも いないわ……"
	.byte EOS
	.if (. - gText_Rom_22E76B) > 0x1f
	.error "gText_Rom_22E76B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E76B) < 0x1f
	.space 0x1f - (. - gText_Rom_22E76B)
	.endif
