	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24C071
gText_Rom_24C071: @ 0x0824C071
	.string "かんきゃくの\nちゅうもくを　あつめた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24C071) > 0x20
	.error "gText_Rom_24C071 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C071) < 0x20
	.space 0x20 - (. - gText_Rom_24C071)
	.endif
