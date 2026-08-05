	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:488 BattlePyramid_Text_ZeroTrainersRemaining5
	.globl gText_Rom_22E8A9
gText_Rom_22E8A9: @ 0x0822E8A9
	.string "きみは ほんとうに つよい\pもう ここには どこにも\nきみを たおせる トレーナーは おらんよ"
	.byte EOS
	.if (. - gText_Rom_22E8A9) > 0x30
	.error "gText_Rom_22E8A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E8A9) < 0x30
	.space 0x30 - (. - gText_Rom_22E8A9)
	.endif
