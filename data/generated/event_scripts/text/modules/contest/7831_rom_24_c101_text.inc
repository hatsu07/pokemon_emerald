	@ asm/contest.s:11866 sub_080DCBC0 (+3 aliases)
	.globl gText_Rom_24C101
gText_Rom_24C101: @ 0x0824C101
	.string "たくましさ{EOS}"
	.if (. - gText_Rom_24C101) > 0x6
	.error "gText_Rom_24C101 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C101) < 0x6
	.space 0x6 - (. - gText_Rom_24C101)
	.endif
	@ Decoded text from ROM range: offset=0x24C107, size=0x6
	.string "テンション{EOS}"
