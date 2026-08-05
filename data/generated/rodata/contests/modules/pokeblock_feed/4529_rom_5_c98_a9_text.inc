	@ src/pokeblock_feed.c:101 sText_Var1DisdainfullyAteVar2
	.globl gText_Rom_5C98A9
gText_Rom_5C98A9: @ 0x085C98A9
	.string "{STR_VAR_1}は {STR_VAR_2}を\nいやそうに たべた!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C98A9) > 0x15
	.error "gText_Rom_5C98A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C98A9) < 0x15
	.space 0x15 - (. - gText_Rom_5C98A9)
	.endif
