	@ src/strings.c:1006 gText_SelectPkmnToAccept
	.globl gText_Rom_5DC0D5
gText_Rom_5DC0D5: @ 0x085DC0D5
	.string "うけとるポケモンを えらんでください$"
	.if (. - gText_Rom_5DC0D5) > 0x13
	.error "gText_Rom_5DC0D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC0D5) < 0x13
	.space 0x13 - (. - gText_Rom_5DC0D5)
	.endif
