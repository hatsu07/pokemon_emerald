	@ src/strings.c:994 gText_SelectSecondPkmn
	.globl gText_Rom_5DBBB5
gText_Rom_5DBBB5: @ 0x085DBBB5
	.string "2ばんめのポケモンを えらんでください$"
	.if (. - gText_Rom_5DBBB5) > 0x14
	.error "gText_Rom_5DBBB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBB5) < 0x14
	.space 0x14 - (. - gText_Rom_5DBBB5)
	.endif
