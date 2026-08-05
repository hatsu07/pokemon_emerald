	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:479 BattlePyramid_Text_ThreeTrainersRemaining5
	.globl gText_Rom_22E82E
gText_Rom_22E82E: @ 0x0822E82E
	.string "きみならば\nあと 3にん いる すごうで トレーナーを\lたおせるかも しれないな"
	.byte EOS
	.if (. - gText_Rom_22E82E) > 0x29
	.error "gText_Rom_22E82E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E82E) < 0x29
	.space 0x29 - (. - gText_Rom_22E82E)
	.endif
