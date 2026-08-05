	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B986
gText_Rom_24B986: @ 0x0824B986
	.string "まえの　ポケモンたちに\nまけないくらい　はりきった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B986) > 0x27
	.error "gText_Rom_24B986 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B986) < 0x27
	.space 0x27 - (. - gText_Rom_24B986)
	.endif
