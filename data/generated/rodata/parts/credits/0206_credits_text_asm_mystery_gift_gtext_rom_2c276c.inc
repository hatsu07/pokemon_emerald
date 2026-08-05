	@ asm/mystery_gift.s:2007 task00_mystery_gift
	.globl gText_Rom_2C276C
gText_Rom_2C276C: @ 0x082C276C
	.string "つうしん　しています,,,$"
	.if (. - gText_Rom_2C276C) > 0xe
	.error "gText_Rom_2C276C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C276C) < 0xe
	.space 0xe - (. - gText_Rom_2C276C)
	.endif
