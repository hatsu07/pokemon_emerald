	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:482 BattlePyramid_Text_TwoTrainersRemaining5
	.globl gText_Rom_22E857
gText_Rom_22E857: @ 0x0822E857
	.string "きみならば\nあと 2にん いる すごうで トレーナーを\lたおせるかも しれないな"
	.byte EOS
	.if (. - gText_Rom_22E857) > 0x29
	.error "gText_Rom_22E857 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E857) < 0x29
	.space 0x29 - (. - gText_Rom_22E857)
	.endif
