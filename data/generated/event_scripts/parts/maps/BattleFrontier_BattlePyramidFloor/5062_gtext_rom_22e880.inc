	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:485 BattlePyramid_Text_OneTrainersRemaining5
	.globl gText_Rom_22E880
gText_Rom_22E880: @ 0x0822E880
	.string "きみならば\nあと 1にん いる すごうで トレーナーを\lたおせるかも しれないな"
	.byte EOS
	.if (. - gText_Rom_22E880) > 0x29
	.error "gText_Rom_22E880 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E880) < 0x29
	.space 0x29 - (. - gText_Rom_22E880)
	.endif
