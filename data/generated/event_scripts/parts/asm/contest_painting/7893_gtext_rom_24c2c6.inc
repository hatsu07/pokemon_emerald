	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C2C6
gText_Rom_24C2C6: @ 0x0824C2C6
	.string "ラブリー　スウィート　{0xFD}{0x02}　ちゃん{EOS}"
	.if (. - gText_Rom_24C2C6) != 0x12
	.error "gText_Rom_24C2C6 must retain its original byte length"
	.endif
