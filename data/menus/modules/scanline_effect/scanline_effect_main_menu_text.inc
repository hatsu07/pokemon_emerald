	@ src/main_menu.c:266 gText_MainMenuOption
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MainMenuOption_Copy_MainMenu
gText_MainMenuOption_Copy_MainMenu: @ 0x08537310
	.string "せっていを かえる{EOS}"
	.if (. - gText_MainMenuOption_Copy_MainMenu) != 0xa
	.error "gText_MainMenuOption_Copy_MainMenu must retain its original byte length"
	.endif
