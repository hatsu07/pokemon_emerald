	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:280 Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_241A04
gText_Rom_241A04: @ 0x08241A04
	.string "ありがとうよ\nきみの おかげで たすかったよ\pおれいと いっては なんだが\nこの ポケモンを もらって おくれ{EOS}"
	.if (. - gText_Rom_241A04) != 0x38
	.error "gText_Rom_241A04 must retain its original byte length"
	.endif
