	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:394 BattleFrontier_BattleArenaLobby_Text_OkayToSave
	.globl gText_Rom_22F8DB
gText_Rom_22F8DB: @ 0x0822F8DB
	.string "バトルアリーナへ おつれする まえに\nレポートを かきますが よろしいですかな?"
	.byte EOS
	.if (. - gText_Rom_22F8DB) > 0x29
	.error "gText_Rom_22F8DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22F8DB) < 0x29
	.space 0x29 - (. - gText_Rom_22F8DB)
	.endif
