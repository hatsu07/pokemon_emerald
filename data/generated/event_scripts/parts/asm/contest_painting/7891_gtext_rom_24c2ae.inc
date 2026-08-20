	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C2AE
gText_Rom_24C2AE: @ 0x0824C2AE
	.string "ポケモンセンター　の\nスーパー　アイドル　{0xFD}{0x02}{EOS}"
	.if (. - gText_Rom_24C2AE) > 0x18
	.error "gText_Rom_24C2AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C2AE) < 0x18
	.space 0x18 - (. - gText_Rom_24C2AE)
	.endif
