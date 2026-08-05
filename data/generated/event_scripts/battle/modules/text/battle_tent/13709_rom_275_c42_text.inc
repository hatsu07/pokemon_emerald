	@ data/text/battle_tent.inc:374 VerdanturfTown_BattleTentLobby_Text_RulesAreListed2 (+1 aliases)
	.globl gText_Rom_275C42
gText_Rom_275C42: @ 0x08275C42
	.string "バトルテント シダケかいじょうの\nルールが かかれている!$"
	.if (. - gText_Rom_275C42) > 0x1e
	.error "gText_Rom_275C42 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275C42) < 0x1e
	.space 0x1e - (. - gText_Rom_275C42)
	.endif
