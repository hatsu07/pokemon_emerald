	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BBA4
gText_Rom_24BBA4: @ 0x0824BBA4
	.string "まえの　ポケモンと\nちがうタイプで　きにいられた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24BBA4) > 0x26
	.error "gText_Rom_24BBA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BBA4) < 0x26
	.space 0x26 - (. - gText_Rom_24BBA4)
	.endif
