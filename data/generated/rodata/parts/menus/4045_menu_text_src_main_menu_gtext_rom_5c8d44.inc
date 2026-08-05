	@ src/main_menu.c:259 gText_SaveFileCorrupted
	.globl gText_Rom_5C8D44
gText_Rom_5C8D44: @ 0x085C8D44
	.string "レポートが せいかくに かかれていないので\nそのまえのレポートを よみます!$"
	.if (. - gText_Rom_5C8D44) > 0x27
	.error "gText_Rom_5C8D44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8D44) < 0x27
	.space 0x27 - (. - gText_Rom_5C8D44)
	.endif
