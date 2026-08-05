	@ src/main_menu.c:269 gText_MainMenuMysteryEvents
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8CA7
gText_Rom_5C8CA7: @ 0x085C8CA7
	.string "ふしぎな できごと$"
	.if (. - gText_Rom_5C8CA7) != 0xa
	.error "gText_Rom_5C8CA7 must retain its original byte length"
	.endif
