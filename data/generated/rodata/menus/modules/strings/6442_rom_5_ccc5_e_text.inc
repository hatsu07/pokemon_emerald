	@ src/strings.c:817 gText_BattleFactoryDesc
	.globl gText_Rom_5CCC5E
gText_Rom_5CCC5E: @ 0x085CCC5E
	.string "レンタルポケモンで しょうりする。\nちしきを ためされる。$"
	.if (. - gText_Rom_5CCC5E) > 0x1e
	.error "gText_Rom_5CCC5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCC5E) < 0x1e
	.space 0x1e - (. - gText_Rom_5CCC5E)
	.endif
