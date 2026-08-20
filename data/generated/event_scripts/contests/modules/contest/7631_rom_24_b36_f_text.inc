	@ asm/contest.s:5766 sub_080D9DD8
	.globl gText_Rom_24B36F
gText_Rom_24B36F: @ 0x0824B36F
	.string "アピールタイム　しゅうりょう！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24B36F) > 0x1c
	.error "gText_Rom_24B36F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B36F) < 0x1c
	.space 0x1c - (. - gText_Rom_24B36F)
	.endif
