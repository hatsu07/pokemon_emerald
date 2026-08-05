	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:571 BattleFrontier_BattleArenaLobby_Text_CongratsOnDefeatingTycoon
	.globl gText_Rom_230023
gText_Rom_230023: @ 0x08230023
	.string "アリーナキャプテンからの きんぼし!\nならびに 7にんぬき たっせい!\lまこと みごとで ございました!"
	.byte EOS
	.if (. - gText_Rom_230023) > 0x35
	.error "gText_Rom_230023 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230023) < 0x35
	.space 0x35 - (. - gText_Rom_230023)
	.endif
