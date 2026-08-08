	@ data/maps/MossdeepCity_House1/scripts.inc:24 MossdeepCity_House1_Text_HmmYourPokemon
	.globl gText_Rom_20C36C
gText_Rom_20C36C: @ 0x0820C36C
	.string "ムムムッ!\nきみの {STR_VAR_1}……$"
	.if (. - gText_Rom_20C36C) > 0xf
	.error "gText_Rom_20C36C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C36C) < 0xf
	.space 0xf - (. - gText_Rom_20C36C)
	.endif
