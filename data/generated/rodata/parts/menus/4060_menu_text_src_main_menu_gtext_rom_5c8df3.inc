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
