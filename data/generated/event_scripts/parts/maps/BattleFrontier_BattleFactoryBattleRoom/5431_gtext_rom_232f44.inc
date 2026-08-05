	@ data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.inc:271 BattleFrontier_BattleFactoryBattleRoom_Text_ReceivedKnowledgeSymbol
	.globl gText_Rom_232F44
gText_Rom_232F44: @ 0x08232F44
	.string "フロンティアパスに\nノウレッジシンボルが きざまれた!"
	.byte EOS
	.if (. - gText_Rom_232F44) > 0x1c
	.error "gText_Rom_232F44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232F44) < 0x1c
	.space 0x1c - (. - gText_Rom_232F44)
	.endif
