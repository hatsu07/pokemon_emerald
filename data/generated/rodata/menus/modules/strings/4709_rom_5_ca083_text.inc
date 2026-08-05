	@ src/strings.c:310 gText_DoWhatWithPokemon
	.globl gText_Rom_5CA083
gText_Rom_5CA083: @ 0x085CA083
	.string "{STR_VAR_1}を どうする?$"
	.if (. - gText_Rom_5CA083) > 0xa
	.error "gText_Rom_5CA083 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA083) < 0xa
	.space 0xa - (. - gText_Rom_5CA083)
	.endif
