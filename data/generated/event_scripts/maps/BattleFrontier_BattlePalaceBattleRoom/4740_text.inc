	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:567 BattleFrontier_BattlePalaceBattleRoom_Text_SpiritsSymbolTookGoldenShine
	.globl gText_Rom_22BC8E
gText_Rom_22BC8E: @ 0x0822BC8E
	.string "スピリットシンボルが\nきんいろに かがやいた!{EOS}"
	.if (. - gText_Rom_22BC8E) > 0x18
	.error "gText_Rom_22BC8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22BC8E) < 0x18
	.space 0x18 - (. - gText_Rom_22BC8E)
	.endif
