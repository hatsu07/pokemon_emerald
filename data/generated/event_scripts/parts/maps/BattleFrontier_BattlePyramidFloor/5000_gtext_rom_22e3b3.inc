	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:392 BattlePyramid_Text_ZeroTrainersRemaining1
	.globl gText_Rom_22E3B3
gText_Rom_22E3B3: @ 0x0822E3B3
	.string "とっても つよかったよー!!\pもう だれも\nかてる ひとは いないよー!!"
	.byte EOS
	.if (. - gText_Rom_22E3B3) > 0x26
	.error "gText_Rom_22E3B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E3B3) < 0x26
	.space 0x26 - (. - gText_Rom_22E3B3)
	.endif
