	.space 0x2, 0x00
	.4byte gText_Rom_53731A
	.4byte gText_Rom_537323
	.4byte gText_Rom_53732D
	.4byte gText_Rom_537336
	.4byte gText_Rom_537345
	.4byte gText_Rom_53733B
	.4byte gText_Rom_537341
	@ src/option_menu.c:76 gText_TextSpeedSlow
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_TextSpeedSlow
gText_TextSpeedSlow: @ 0x0853736C
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}おそい{EOS}"
	.if (. - gText_TextSpeedSlow) != 0xa
	.error "gText_TextSpeedSlow must retain its original byte length"
	.endif

	@ src/option_menu.c:77 gText_TextSpeedMid
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_TextSpeedMid
gText_TextSpeedMid: @ 0x08537376
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}ふつう{EOS}"
	.if (. - gText_TextSpeedMid) != 0xa
	.error "gText_TextSpeedMid must retain its original byte length"
	.endif

	@ src/option_menu.c:78 gText_TextSpeedFast
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_TextSpeedFast
gText_TextSpeedFast: @ 0x08537380
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}はやい{EOS}"
	.if (. - gText_TextSpeedFast) != 0xa
	.error "gText_TextSpeedFast must retain its original byte length"
	.endif
