	@ src/strings.c:234 gText_SpaceForVar1Full
	.globl gText_Rom_5C99DE
gText_Rom_5C99DE: @ 0x085C99DE
	.string "{STR_VAR_1} を\nいれる ばしょが いっぱいです{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C99DE) > 0x17
	.error "gText_Rom_5C99DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C99DE) < 0x17
	.space 0x17 - (. - gText_Rom_5C99DE)
	.endif
