	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:473 BattlePyramid_Text_FiveTrainersRemaining5
	.globl gText_Rom_22E7DC
gText_Rom_22E7DC: @ 0x0822E7DC
	.string "きみならば\nあと 5にん いる すごうで トレーナーを\lたおせるかも しれないな"
	.byte EOS
	.if (. - gText_Rom_22E7DC) > 0x29
	.error "gText_Rom_22E7DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E7DC) < 0x29
	.space 0x29 - (. - gText_Rom_22E7DC)
	.endif
