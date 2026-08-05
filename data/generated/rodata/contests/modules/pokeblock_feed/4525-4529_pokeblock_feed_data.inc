	@ src/pokeblock_feed.c:99 sText_Var1AteTheVar2
	.globl gText_Rom_5C9885
gText_Rom_5C9885: @ 0x085C9885
	.string "{STR_VAR_1}は {STR_VAR_2}を\nたべた!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9885) > 0xf
	.error "gText_Rom_5C9885 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9885) < 0xf
	.space 0xf - (. - gText_Rom_5C9885)
	.endif
	.globl gUnknown_85C9894
gUnknown_85C9894: @ 0x085C9894

	@ src/pokeblock_feed.c:100 sText_Var1HappilyAteVar2
	.globl gText_Rom_5C9894
gText_Rom_5C9894: @ 0x085C9894
	.string "{STR_VAR_1}は {STR_VAR_2}を\nよろこんで たべた!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9894) > 0x15
	.error "gText_Rom_5C9894 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9894) < 0x15
	.space 0x15 - (. - gText_Rom_5C9894)
	.endif
	.globl gUnknown_85C98A9
gUnknown_85C98A9: @ 0x085C98A9

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
