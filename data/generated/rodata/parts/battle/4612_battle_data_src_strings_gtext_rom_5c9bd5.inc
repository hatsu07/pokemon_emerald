	@ src/strings.c:257 gText_NoMoreThanVar1Pkmn
	.globl gText_Rom_5C9BD5
gText_Rom_5C9BD5: @ 0x085C9BD5
	.string "さんか できる ポケモンは\n{STR_VAR_1}ひき まで です!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9BD5) > 0x1c
	.error "gText_Rom_5C9BD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9BD5) < 0x1c
	.space 0x1c - (. - gText_Rom_5C9BD5)
	.endif
