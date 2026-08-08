	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:451 BattleFrontier_BattleArenaLobby_Text_RecordAchievement (+1 aliases)
	.globl gText_Rom_22FB3C
gText_Rom_22FB3C: @ 0x0822FB3C
	.string "せいせきを レポートに かきますので\nおまちくだされ!"
	.byte EOS
	.if (. - gText_Rom_22FB3C) > 0x1c
	.error "gText_Rom_22FB3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FB3C) < 0x1c
	.space 0x1c - (. - gText_Rom_22FB3C)
	.endif
