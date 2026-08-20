	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BCAA
gText_Rom_24BCAA: @ 0x0824BCAA
	.string "つぎの　ターンの　じゅんばんを\nおかしく　した！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24BCAA) > 0x25
	.error "gText_Rom_24BCAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BCAA) < 0x25
	.space 0x25 - (. - gText_Rom_24BCAA)
	.endif
