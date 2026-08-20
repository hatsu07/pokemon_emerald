	@ data/maps/FortreeCity_House4/scripts.inc:68 FortreeCity_House4_Text_GoBirdPokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_205293
gText_Rom_205293: @ 0x08205293
	.string "それっ!\nゆけっ とりポケモン{EOS}"
	.if (. - gText_Rom_205293) != 0x10
	.error "gText_Rom_205293 must retain its original byte length"
	.endif
