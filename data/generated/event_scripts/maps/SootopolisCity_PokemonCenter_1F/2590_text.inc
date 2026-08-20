	@ data/maps/SootopolisCity_PokemonCenter_1F/scripts.inc:49 SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge
	.globl gText_Rom_20F0D5
gText_Rom_20F0D5: @ 0x0820F0D5
	.string "この まちの みんなが みんな\nいえに とじこもって でてこないんです!\pそう いってる わたしも\nここから でたくないんです……{EOS}"
	.if (. - gText_Rom_20F0D5) > 0x42
	.error "gText_Rom_20F0D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F0D5) < 0x42
	.space 0x42 - (. - gText_Rom_20F0D5)
	.endif
