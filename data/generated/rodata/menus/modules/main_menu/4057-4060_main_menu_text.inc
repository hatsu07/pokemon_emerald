	@ src/main_menu.c:275 gText_ContinueMenuTime (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8DEC
gText_Rom_5C8DEC: @ 0x085C8DEC
	.string "プレイじかん$"
	.if (. - gText_Rom_5C8DEC) != 0x7
	.error "gText_Rom_5C8DEC must retain its original byte length"
	.endif
	.globl gText_Rom_5C8DEF
	.set gText_Rom_5C8DEF, gText_Rom_5C8DEC + 0x3

	@ src/main_menu.c:277 gText_ContinueMenuBadges (+2 aliases)
	.globl gText_Rom_5C8DF3
gText_Rom_5C8DF3: @ 0x085C8DF3
	.string "もっているバッジ$"
	.if (. - gText_Rom_5C8DF3) > 0x9
	.error "gText_Rom_5C8DF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8DF3) < 0x9
	.space 0x9 - (. - gText_Rom_5C8DF3)
	.endif
