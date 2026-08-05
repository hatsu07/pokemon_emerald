	@ data/maps/LilycoveCity/scripts.inc:623 LilycoveCity_Text_MissingPokemonCameBack
	.globl gText_Rom_1E0FFF
gText_Rom_1E0FFF: @ 0x081E0FFF
	.string "いなくなってた わたしの ポケモン\nいつのまにか かえってきたの!$"
	.if (. - gText_Rom_1E0FFF) > 0x22
	.error "gText_Rom_1E0FFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0FFF) < 0x22
	.space 0x22 - (. - gText_Rom_1E0FFF)
	.endif
