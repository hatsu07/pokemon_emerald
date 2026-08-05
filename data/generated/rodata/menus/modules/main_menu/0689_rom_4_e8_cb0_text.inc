	@ src/main_menu.c:274 gText_ContinueMenuPlayer (+2 aliases)
	.globl gText_Rom_4E8CB0
gText_Rom_4E8CB0: @ 0x084E8CB0
	.string "しゅじんこう$"
	.if (. - gText_Rom_4E8CB0) > 0x7
	.error "gText_Rom_4E8CB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8CB0) < 0x7
	.space 0x7 - (. - gText_Rom_4E8CB0)
	.endif
