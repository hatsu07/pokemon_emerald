	@ src/strings.c:816 gText_BattleArenaDesc
	.globl gText_Rom_5CCC3B
gText_Rom_5CCC3B: @ 0x085CCC3B
	.string "つよい ポケモンの チームで しょうりする。\nとうしを ためされる。$"
	.if (. - gText_Rom_5CCC3B) > 0x23
	.error "gText_Rom_5CCC3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCC3B) < 0x23
	.space 0x23 - (. - gText_Rom_5CCC3B)
	.endif
