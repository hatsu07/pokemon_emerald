	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:480 BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame
	.globl gText_Rom_22FC01
gText_Rom_22FC01: @ 0x0822FC01
	.string "おまちしておりました!\pバトルアリーナに おつれする まえに\nレポートを かきますので おまちくだされ!"
	.byte EOS
	.if (. - gText_Rom_22FC01) > 0x35
	.error "gText_Rom_22FC01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FC01) < 0x35
	.space 0x35 - (. - gText_Rom_22FC01)
	.endif
