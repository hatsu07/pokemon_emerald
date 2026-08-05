	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:476 BattlePyramid_Text_FourTrainersRemaining5
	.globl gText_Rom_22E805
gText_Rom_22E805: @ 0x0822E805
	.string "きみならば\nあと 4にん いる すごうで トレーナーを\lたおせるかも しれないな"
	.byte EOS
	.if (. - gText_Rom_22E805) > 0x29
	.error "gText_Rom_22E805 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E805) < 0x29
	.space 0x29 - (. - gText_Rom_22E805)
	.endif
