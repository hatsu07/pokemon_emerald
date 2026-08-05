	@ src/main_menu.c:266 gText_MainMenuOption
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8C87
gText_Rom_5C8C87: @ 0x085C8C87
	.string "せっていを かえる$"
	.if (. - gText_Rom_5C8C87) != 0xa
	.error "gText_Rom_5C8C87 must retain its original byte length"
	.endif
