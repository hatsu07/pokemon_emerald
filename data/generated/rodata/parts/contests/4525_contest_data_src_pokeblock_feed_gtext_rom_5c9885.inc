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
