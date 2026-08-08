	@ data/maps/LittlerootTown/scripts.inc:993 LittlerootTown_Text_GoodLuckCatchingPokemon
	.globl gText_Rom_1E468B
gText_Rom_1E468B: @ 0x081E468B
	.string "ポケモンを つかまえに いくの?\nがんばってね!$"
	.if (. - gText_Rom_1E468B) > 0x19
	.error "gText_Rom_1E468B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E468B) < 0x19
	.space 0x19 - (. - gText_Rom_1E468B)
	.endif
