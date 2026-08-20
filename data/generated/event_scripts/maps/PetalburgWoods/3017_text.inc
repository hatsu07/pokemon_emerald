	@ data/maps/PetalburgWoods/scripts.inc:413 PetalburgWoods_Text_MyPokemonHaveGrown (+1 aliases)
	.globl gText_Rom_214945
gText_Rom_214945: @ 0x08214945
	.string "ぼくの むしポケモン そだったぞ!\nこれで また にんきもの だぜ!{EOS}"
	.if (. - gText_Rom_214945) > 0x23
	.error "gText_Rom_214945 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_214945) < 0x23
	.space 0x23 - (. - gText_Rom_214945)
	.endif
