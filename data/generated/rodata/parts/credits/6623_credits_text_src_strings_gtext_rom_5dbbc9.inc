	@ src/strings.c:995 gText_SelectThirdPkmn
	.globl gText_Rom_5DBBC9
gText_Rom_5DBBC9: @ 0x085DBBC9
	.string "3ばんめのポケモンを えらんでください$"
	.if (. - gText_Rom_5DBBC9) > 0x14
	.error "gText_Rom_5DBBC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBC9) < 0x14
	.space 0x14 - (. - gText_Rom_5DBBC9)
	.endif
