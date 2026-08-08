	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:487 BattleFrontier_BattleArenaLobby_Text_RecordLastMatch
	.globl gText_Rom_22FC36
gText_Rom_22FC36: @ 0x0822FC36
	.string "バトルアリーナで\nさいごに おこなった たたかいを\lフロンティアパスに きろく されますかな?"
	.byte EOS
	.if (. - gText_Rom_22FC36) > 0x30
	.error "gText_Rom_22FC36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FC36) < 0x30
	.space 0x30 - (. - gText_Rom_22FC36)
	.endif
