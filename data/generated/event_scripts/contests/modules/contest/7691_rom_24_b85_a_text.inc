	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B85A
gText_Rom_24B85A: @ 0x0824B85A
	.string "つぎに　まっている　ポケモンを\nきんちょう　させようと　した！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24B85A) > 0x2c
	.error "gText_Rom_24B85A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B85A) < 0x2c
	.space 0x2c - (. - gText_Rom_24B85A)
	.endif
