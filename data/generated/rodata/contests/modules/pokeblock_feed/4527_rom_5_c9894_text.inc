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
