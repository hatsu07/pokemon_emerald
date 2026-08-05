	@ data/maps/BattleFrontier_BattlePyramidTop/scripts.inc:237 BattleFrontier_BattlePyramidTop_Text_ReceivedBraveSymbol
	.globl gText_Rom_22EFC9
gText_Rom_22EFC9: @ 0x0822EFC9
	.string "フロンティアパスに\nブレイブシンボルが きざまれた!"
	.byte EOS
	.if (. - gText_Rom_22EFC9) > 0x1b
	.error "gText_Rom_22EFC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22EFC9) < 0x1b
	.space 0x1b - (. - gText_Rom_22EFC9)
	.endif
