	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:529 BattleFrontier_BattlePalaceBattleRoom_Text_ReceivedSpiritsSymbol
	.globl gText_Rom_22BB02
gText_Rom_22BB02: @ 0x0822BB02
	.string "フロンティアパスに\nスピリットシンボルが きざまれた!{EOS}"
	.if (. - gText_Rom_22BB02) > 0x1c
	.error "gText_Rom_22BB02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22BB02) < 0x1c
	.space 0x1c - (. - gText_Rom_22BB02)
	.endif
