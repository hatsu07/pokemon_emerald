	@ src/main_menu.c:267 gText_MainMenuMysteryGift (+1 aliases)
	.globl gText_Rom_5C8C91
gText_Rom_5C8C91: @ 0x085C8C91
	.string "ふしぎな おくりもの$"
	.if (. - gText_Rom_5C8C91) > 0xb
	.error "gText_Rom_5C8C91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C91) < 0xb
	.space 0xb - (. - gText_Rom_5C8C91)
	.endif
