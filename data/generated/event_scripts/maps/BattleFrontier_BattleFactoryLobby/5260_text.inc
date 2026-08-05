	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:357 BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode
	.globl gText_Rom_231469
gText_Rom_231469: @ 0x08231469
	.string "レベル50と オープンレベルの イベント\nどちらに ちょうせん しますか?"
	.byte EOS
	.if (. - gText_Rom_231469) > 0x26
	.error "gText_Rom_231469 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231469) < 0x26
	.space 0x26 - (. - gText_Rom_231469)
	.endif
