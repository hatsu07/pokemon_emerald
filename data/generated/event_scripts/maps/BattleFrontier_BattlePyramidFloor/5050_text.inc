	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:467 BattlePyramid_Text_SevenTrainersRemaining5
	.globl gText_Rom_22E78A
gText_Rom_22E78A: @ 0x0822E78A
	.string "きみならば\nあと 7にん いる すごうで トレーナーを\lたおせるかも しれないな"
	.byte EOS
	.if (. - gText_Rom_22E78A) > 0x29
	.error "gText_Rom_22E78A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E78A) < 0x29
	.space 0x29 - (. - gText_Rom_22E78A)
	.endif
