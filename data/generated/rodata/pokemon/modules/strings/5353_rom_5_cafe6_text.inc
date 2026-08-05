	@ src/strings.c:510 gText_BattlePokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAFE6
gText_Rom_5CAFE6: @ 0x085CAFE6
	.string "でてくるポケモン$"
	.if (. - gText_Rom_5CAFE6) != 0x9
	.error "gText_Rom_5CAFE6 must retain its original byte length"
	.endif
