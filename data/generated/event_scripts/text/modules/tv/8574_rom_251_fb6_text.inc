	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251FB6
gText_Rom_251FB6: @ 0x08251FB6
	.string "つくえの　うえを\nゆびで　さわっています！\pどうやら　ほこりが\nきに　なっている　みたいです！\pいやー\nいがいに　こまかい　ですねー$"
	.if (. - gText_Rom_251FB6) > 0x43
	.error "gText_Rom_251FB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251FB6) < 0x43
	.space 0x43 - (. - gText_Rom_251FB6)
	.endif
