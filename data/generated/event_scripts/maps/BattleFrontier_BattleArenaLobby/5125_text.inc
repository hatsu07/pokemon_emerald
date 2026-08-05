	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:398 BattleFrontier_BattleArenaLobby_Text_WhichLevelMode
	.globl gText_Rom_22F904
gText_Rom_22F904: @ 0x0822F904
	.string "バトルアリーナには\nレベル50と オープンレベルと ありますが\lどちらに まいられますかな?"
	.byte EOS
	.if (. - gText_Rom_22F904) > 0x2f
	.error "gText_Rom_22F904 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22F904) < 0x2f
	.space 0x2f - (. - gText_Rom_22F904)
	.endif
