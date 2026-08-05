	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:491 BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack
	.globl gText_Rom_22FC66
gText_Rom_22FC66: @ 0x0822FC66
	.string "はんていで まけちゃった……\pまもる ばっかりで\nせめなかったのが よくなかった みたい……"
	.byte EOS
	.if (. - gText_Rom_22FC66) > 0x2f
	.error "gText_Rom_22FC66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FC66) < 0x2f
	.space 0x2f - (. - gText_Rom_22FC66)
	.endif
