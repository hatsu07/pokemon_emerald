	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C247
gText_Rom_24C247: @ 0x0824C247
	.string "スーパー　クール\nノンストップ　{0xFD}{0x02}{EOS}"
	.if (. - gText_Rom_24C247) > 0x13
	.error "gText_Rom_24C247 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C247) < 0x13
	.space 0x13 - (. - gText_Rom_24C247)
	.endif
