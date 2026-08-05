	@ src/strings.c:304 gText_TeachWhichPokemon2
	.globl gText_Rom_5CA024
gText_Rom_5CA024: @ 0x085CA024
	.string "どのポケモンに おぼえさせますか?$"
	.if (. - gText_Rom_5CA024) > 0x12
	.error "gText_Rom_5CA024 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA024) < 0x12
	.space 0x12 - (. - gText_Rom_5CA024)
	.endif
