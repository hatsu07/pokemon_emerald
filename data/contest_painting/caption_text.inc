	@ asm/contest_painting.s:432 PrintContestPaintingCaption
	.globl gText_Rom_5C941F
gText_Rom_5C941F: @ 0x085C941F
	.string "　{EOS}"
	.if (. - gText_Rom_5C941F) > 0x2
	.error "gText_Rom_5C941F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C941F) < 0x2
	.space 0x2 - (. - gText_Rom_5C941F)
	.endif
