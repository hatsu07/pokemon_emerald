	@ src/strings.c:837 gText_WantToPlayAgain (+1 aliases)
	.globl gText_Rom_5CCE71
gText_Rom_5CCE71: @ 0x085CCE71
	.string "もういちど あそびますか？$"
	.if (. - gText_Rom_5CCE71) > 0xe
	.error "gText_Rom_5CCE71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCE71) < 0xe
	.space 0xe - (. - gText_Rom_5CCE71)
	.endif
