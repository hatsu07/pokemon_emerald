	@ data/maps/LilycoveCity_PokemonCenter_1F/scripts.inc:54 LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels
	.globl gText_Rom_2082FD
gText_Rom_2082FD: @ 0x082082FD
	.string "ちかごろ ひとの ポケモンを うばったり\nいんせきを よこどり したりする\lろくでもない やつらが いるらしいな！{EOS}"
	.if (. - gText_Rom_2082FD) > 0x3a
	.error "gText_Rom_2082FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2082FD) < 0x3a
	.space 0x3a - (. - gText_Rom_2082FD)
	.endif
