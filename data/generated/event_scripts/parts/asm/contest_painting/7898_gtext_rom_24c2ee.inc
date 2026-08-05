	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C2EE
gText_Rom_24C2EE: @ 0x0824C2EE
	.string "こっち　むいて！\nキュート　ポケモン　{0xFD}{0x02}　ちゃん$"
	.if (. - gText_Rom_24C2EE) != 0x1a
	.error "gText_Rom_24C2EE must retain its original byte length"
	.endif
