	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C37D
gText_Rom_24C37D: @ 0x0824C37D
	.string "タフネス　マイティー\nハイパーポケモン　{0xFD}{0x02}！$"
	.if (. - gText_Rom_24C37D) > 0x18
	.error "gText_Rom_24C37D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C37D) < 0x18
	.space 0x18 - (. - gText_Rom_24C37D)
	.endif
