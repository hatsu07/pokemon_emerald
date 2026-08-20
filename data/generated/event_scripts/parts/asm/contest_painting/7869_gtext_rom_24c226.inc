	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+3 aliases)
	.globl gText_Rom_24C226
gText_Rom_24C226: @ 0x0824C226
	.string "つうしん{EOS}"
	.if (. - gText_Rom_24C226) > 0x5
	.error "gText_Rom_24C226 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C226) < 0x5
	.space 0x5 - (. - gText_Rom_24C226)
	.endif
