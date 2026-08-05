	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C365
gText_Rom_24C365: @ 0x0824C365
	.string "ストロング　ストロンガー\nストロンゲスト　{0xFD}{0x02}$"
	.if (. - gText_Rom_24C365) > 0x18
	.error "gText_Rom_24C365 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C365) < 0x18
	.space 0x18 - (. - gText_Rom_24C365)
	.endif
