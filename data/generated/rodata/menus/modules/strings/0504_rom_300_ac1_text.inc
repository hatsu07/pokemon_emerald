	@ src/strings.c:305 gText_ChoosePokemon
	.globl gText_Rom_300AC1
gText_Rom_300AC1: @ 0x08300AC1
	.string "ポケモンを えらんで ください$"
	.if (. - gText_Rom_300AC1) > 0x10
	.error "gText_Rom_300AC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AC1) < 0x10
	.space 0x10 - (. - gText_Rom_300AC1)
	.endif
