	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:191 LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_205F45
gText_Rom_205F45: @ 0x08205F45
	.string "かぜに なびいて きもち よさそうに\nゆれている くさポケモンが えがかれている{EOS}"
	.if (. - gText_Rom_205F45) != 0x29
	.error "gText_Rom_205F45 must retain its original byte length"
	.endif
