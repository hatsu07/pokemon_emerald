	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:359 BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena
	.globl gText_Rom_22F6F9
gText_Rom_22F6F9: @ 0x0822F6F9
	.string "トレーナーの とうしを ためす ばしょ!!\pバトルアリーナへ\nようこそ おいでなされた!\pこちらでは かちぬきチームバトルの\nあんないを しておりますぞ!"
	.byte EOS
	.if (. - gText_Rom_22F6F9) > 0x4e
	.error "gText_Rom_22F6F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22F6F9) < 0x4e
	.space 0x4e - (. - gText_Rom_22F6F9)
	.endif
