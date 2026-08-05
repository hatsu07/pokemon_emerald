	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:589 BattleFrontier_BattleArenaBattleRoom_Text_ReceivedGutsSymbol
	.globl gText_Rom_230C53
gText_Rom_230C53: @ 0x08230C53
	.string "フロンティアパスに\nガッツシンボルが きざまれた!"
	.byte EOS
	.if (. - gText_Rom_230C53) > 0x1a
	.error "gText_Rom_230C53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230C53) < 0x1a
	.space 0x1a - (. - gText_Rom_230C53)
	.endif
