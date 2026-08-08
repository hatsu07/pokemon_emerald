	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B8D0
gText_Rom_24B8D0: @ 0x0824B8D0
	.string "ちょうしが　いい　ポケモンを\nからかってみた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B8D0) > 0x24
	.error "gText_Rom_24B8D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B8D0) < 0x24
	.space 0x24 - (. - gText_Rom_24B8D0)
	.endif
