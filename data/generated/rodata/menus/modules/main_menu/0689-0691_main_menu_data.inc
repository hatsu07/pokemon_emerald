	@ src/main_menu.c:274 gText_ContinueMenuPlayer (+2 aliases)
	.globl gText_Rom_4E8CB0
gText_Rom_4E8CB0: @ 0x084E8CB0
	.string "しゅじんこう{EOS}"
	.if (. - gText_Rom_4E8CB0) > 0x7
	.error "gText_Rom_4E8CB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8CB0) < 0x7
	.space 0x7 - (. - gText_Rom_4E8CB0)
	.endif

	@ src/main_menu.c:277 gText_ContinueMenuBadges (+2 aliases)
	.globl gText_Rom_4E8CB7
gText_Rom_4E8CB7: @ 0x084E8CB7
	.string "もっているバッジ{EOS}"
	.if (. - gText_Rom_4E8CB7) > 0x9
	.error "gText_Rom_4E8CB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8CB7) < 0x9
	.space 0x9 - (. - gText_Rom_4E8CB7)
	.endif
