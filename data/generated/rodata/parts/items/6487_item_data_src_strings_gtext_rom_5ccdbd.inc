	@ src/strings.c:837 gText_WantToPlayAgain (+1 aliases)
	.globl gText_Rom_5CCDBD
gText_Rom_5CCDBD: @ 0x085CCDBD
	.string "もういちど あそびますか？$"
	.if (. - gText_Rom_5CCDBD) > 0xe
	.error "gText_Rom_5CCDBD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCDBD) < 0xe
	.space 0xe - (. - gText_Rom_5CCDBD)
	.endif
