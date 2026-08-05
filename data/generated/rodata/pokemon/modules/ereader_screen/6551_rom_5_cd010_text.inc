	@ asm/ereader_screen.s:807 sub_081D4704
	.globl gText_Rom_5CD010
gText_Rom_5CD010: @ 0x085CD010
	.string "つうしん　しゅうりょう！$"
	.if (. - gText_Rom_5CD010) > 0xd
	.error "gText_Rom_5CD010 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD010) < 0xd
	.space 0xd - (. - gText_Rom_5CD010)
	.endif
