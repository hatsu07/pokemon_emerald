	@ src/main_menu.c:268 gText_MainMenuMysteryGift2
	.globl gText_Rom_5C8C9C
gText_Rom_5C8C9C: @ 0x085C8C9C
	.string "ふしぎな もらいもの$"
	.if (. - gText_Rom_5C8C9C) > 0xb
	.error "gText_Rom_5C8C9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C9C) < 0xb
	.space 0xb - (. - gText_Rom_5C8C9C)
	.endif
