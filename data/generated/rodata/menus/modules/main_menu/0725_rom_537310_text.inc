	@ src/main_menu.c:266 gText_MainMenuOption
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_537310
gText_Rom_537310: @ 0x08537310
	.string "せっていを かえる{EOS}"
	.if (. - gText_Rom_537310) != 0xa
	.error "gText_Rom_537310 must retain its original byte length"
	.endif
