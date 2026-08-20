	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:451 BattleFrontier_BattleArenaLobby_Text_RecordAchievement (+1 aliases)
	.globl gText_Rom_22CB38
gText_Rom_22CB38: @ 0x0822CB38
	.string "せいせきを レポートに かきますので\nおまちくだされ!{EOS}"
	.if (. - gText_Rom_22CB38) > 0x1c
	.error "gText_Rom_22CB38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CB38) < 0x1c
	.space 0x1c - (. - gText_Rom_22CB38)
	.endif
