	@ src/strings.c:1004 gText_PkmnSwap
	.globl gText_Rom_5DC0B4
gText_Rom_5DC0B4: @ 0x085DC0B4
	.string "ポケモンこうかん     $"
	.if (. - gText_Rom_5DC0B4) > 0xe
	.error "gText_Rom_5DC0B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC0B4) < 0xe
	.space 0xe - (. - gText_Rom_5DC0B4)
	.endif
