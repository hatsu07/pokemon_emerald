	@ src/strings.c:1005 gText_SelectPkmnToSwap
	.globl gText_Rom_5DC0C2
gText_Rom_5DC0C2: @ 0x085DC0C2
	.string "てばなすポケモンを えらんでください$"
	.if (. - gText_Rom_5DC0C2) > 0x13
	.error "gText_Rom_5DC0C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC0C2) < 0x13
	.space 0x13 - (. - gText_Rom_5DC0C2)
	.endif
