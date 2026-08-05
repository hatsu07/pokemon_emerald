	@ src/strings.c:284 gText_PkmnWokeUp2
	.globl gText_Rom_5C9ED4
gText_Rom_5C9ED4: @ 0x085C9ED4
	.string "{STR_VAR_1}は\nめを さました{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9ED4) > 0xe
	.error "gText_Rom_5C9ED4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9ED4) < 0xe
	.space 0xe - (. - gText_Rom_5C9ED4)
	.endif
