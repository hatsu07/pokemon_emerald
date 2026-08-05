
	@ trainerbattle-cfg:0x1EA5AC TrainerBattleText_1EAADB
	.globl gText_Rom_1EAADB
gText_Rom_1EAADB: @ 0x081EAADB
	.string "フガッ！　つよいのう……\nまごの　いうことは　ほんとう　じゃった$"
	.if (. - gText_Rom_1EAADB) > 0x21
	.error "gText_Rom_1EAADB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAADB) < 0x21
	.space 0x21 - (. - gText_Rom_1EAADB)
	.endif
