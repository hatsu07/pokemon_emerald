	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:470 BattlePyramid_Text_SixTrainersRemaining5
	.globl gText_Rom_22E7B3
gText_Rom_22E7B3: @ 0x0822E7B3
	.string "きみならば\nあと 6にん いる すごうで トレーナーを\lたおせるかも しれないな"
	.byte EOS
	.if (. - gText_Rom_22E7B3) > 0x29
	.error "gText_Rom_22E7B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E7B3) < 0x29
	.space 0x29 - (. - gText_Rom_22E7B3)
	.endif
