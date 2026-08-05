	@ src/main_menu.c:265 gText_MainMenuContinue
	.globl gText_Rom_5C8C7C
gText_Rom_5C8C7C: @ 0x085C8C7C
	.string "つづきから はじめる$"
	.if (. - gText_Rom_5C8C7C) > 0xb
	.error "gText_Rom_5C8C7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C7C) < 0xb
	.space 0xb - (. - gText_Rom_5C8C7C)
	.endif
