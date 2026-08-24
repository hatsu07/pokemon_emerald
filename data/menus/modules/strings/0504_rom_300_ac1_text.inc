	@ src/strings.c:305 gText_ChoosePokemon
	.globl gText_ChoosePokemon
gText_ChoosePokemon: @ 0x08300AC1
	.string "ポケモンを えらんで ください{EOS}"
	.if (. - gText_ChoosePokemon) > 0x10
	.error "gText_ChoosePokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_ChoosePokemon) < 0x10
	.space 0x10 - (. - gText_ChoosePokemon)
	.endif
