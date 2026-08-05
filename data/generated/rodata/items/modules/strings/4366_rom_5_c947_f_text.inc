	@ src/strings.c:162 gText_MoveVar1Where
	.globl gText_Rom_5C947F
gText_Rom_5C947F: @ 0x085C947F
	.string "{STR_VAR_1}を\nどこに いれますか?$"
	.if (. - gText_Rom_5C947F) > 0xf
	.error "gText_Rom_5C947F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C947F) < 0xf
	.space 0xf - (. - gText_Rom_5C947F)
	.endif
