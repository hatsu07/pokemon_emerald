	@ src/strings.c:1017 gText_AcceptThisPkmn
	.globl gText_Rom_5DC12B
gText_Rom_5DC12B: @ 0x085DC12B
	.string "このポケモンを うけとりますか?$"
	.if (. - gText_Rom_5DC12B) > 0x11
	.error "gText_Rom_5DC12B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC12B) < 0x11
	.space 0x11 - (. - gText_Rom_5DC12B)
	.endif
