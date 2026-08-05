	@ src/strings.c:993 gText_SelectFirstPkmn
	.globl gText_Rom_5DBBA1
gText_Rom_5DBBA1: @ 0x085DBBA1
	.string "1ばんめのポケモンを えらんでください$"
	.if (. - gText_Rom_5DBBA1) > 0x14
	.error "gText_Rom_5DBBA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBA1) < 0x14
	.space 0x14 - (. - gText_Rom_5DBBA1)
	.endif
