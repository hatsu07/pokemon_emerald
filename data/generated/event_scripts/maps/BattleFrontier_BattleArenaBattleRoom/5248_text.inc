	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:621 BattleFrontier_BattleArenaBattleRoom_Text_GutsSymbolTookGoldenShine
	.globl gText_Rom_230D6B
gText_Rom_230D6B: @ 0x08230D6B
	.string "ガッツシンボルが\nきんいろに かがやいた!"
	.byte EOS
	.if (. - gText_Rom_230D6B) > 0x16
	.error "gText_Rom_230D6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230D6B) < 0x16
	.space 0x16 - (. - gText_Rom_230D6B)
	.endif
