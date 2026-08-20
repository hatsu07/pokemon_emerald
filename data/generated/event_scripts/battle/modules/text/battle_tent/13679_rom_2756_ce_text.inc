	@ data/text/battle_tent.inc:326 SlateportCity_BattleTentLobby_Text_RulesAreListed
	.globl gText_Rom_2756CE
gText_Rom_2756CE: @ 0x082756CE
	.string "バトルトレードの ルールが かかれてる!{EOS}"
	.if (. - gText_Rom_2756CE) > 0x15
	.error "gText_Rom_2756CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2756CE) < 0x15
	.space 0x15 - (. - gText_Rom_2756CE)
	.endif
