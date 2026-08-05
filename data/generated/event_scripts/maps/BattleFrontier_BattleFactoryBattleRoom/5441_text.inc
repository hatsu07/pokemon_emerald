	@ data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.inc:301 BattleFrontier_BattleFactoryBattleRoom_Text_KnowledgeSymbolTookGoldenShine
	.globl gText_Rom_23305D
gText_Rom_23305D: @ 0x0823305D
	.string "ノウレッジシンボルが\nきんいろに かがやいた!"
	.byte EOS
	.if (. - gText_Rom_23305D) > 0x18
	.error "gText_Rom_23305D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23305D) < 0x18
	.space 0x18 - (. - gText_Rom_23305D)
	.endif
