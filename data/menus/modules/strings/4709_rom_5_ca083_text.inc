	@ src/strings.c:310 gText_DoWhatWithPokemon
	.globl gText_DoWhatWithPokemon
gText_DoWhatWithPokemon: @ 0x085CA083
	.string "{STR_VAR_1}を どうする?{EOS}"
	.if (. - gText_DoWhatWithPokemon) > 0xa
	.error "gText_DoWhatWithPokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_DoWhatWithPokemon) < 0xa
	.space 0xa - (. - gText_DoWhatWithPokemon)
	.endif
