	@ data/text/berries.inc:84 LilycoveCity_Text_PokeblocksSuitPokemon
	.globl gText_Rom_263ABA
gText_Rom_263ABA: @ 0x08263ABA
	.string "やっぱり\pわたしに シンプルさが にあうように\nポケモンには ポロックが にあうな$"
	.if (. - gText_Rom_263ABA) > 0x2a
	.error "gText_Rom_263ABA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263ABA) < 0x2a
	.space 0x2a - (. - gText_Rom_263ABA)
	.endif
