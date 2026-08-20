	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C353
gText_Rom_24C353: @ 0x0824C353
	.string "パワフル　マッスル\nハッスル　{0xFD}{0x02}{EOS}"
	.if (. - gText_Rom_24C353) > 0x12
	.error "gText_Rom_24C353 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C353) < 0x12
	.space 0x12 - (. - gText_Rom_24C353)
	.endif
