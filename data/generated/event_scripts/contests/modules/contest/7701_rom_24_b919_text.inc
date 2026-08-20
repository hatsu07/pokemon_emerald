	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B919
gText_Rom_24B919: @ 0x0824B919
	.string "ちょうしが　いい　ポケモンの\nじゃまを　しようと　した！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24B919) > 0x29
	.error "gText_Rom_24B919 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B919) < 0x29
	.space 0x29 - (. - gText_Rom_24B919)
	.endif
