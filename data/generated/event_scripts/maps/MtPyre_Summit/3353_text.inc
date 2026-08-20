	@ data/maps/MtPyre_Summit/scripts.inc:562 MtPyre_Summit_Text_GroudonKyogreTale
	.globl gText_Rom_217647
gText_Rom_217647: @ 0x08217647
	.string "とおい とおい おおむかしの こと……\pせかいでは りくと うみの ポケモンが\nはげしい たたかいを くりひろげていた\pりくの ポケモンは\nだいちを もりあげ じめんを ひろげ\pうみの ポケモンは\nあらなみを おこして うみを ひろげた\p2ひきの たたかいは おわることなく\nこの せかいは もえさかる ほのおと\lふきあれる あらしで うめつくされた\pそれを しずめたのが\nあいいろのたま と べにいろのたま……\pふたつの たまから ひろがる ひかりが\n2ひきの いかりを しずめた\pそして おとなしくなった 2ひきは\nかいてい ふかく もぐっていき\lやがて そのすがたを けしたのじゃ……{EOS}"
	.if (. - gText_Rom_217647) > 0x128
	.error "gText_Rom_217647 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217647) < 0x128
	.space 0x128 - (. - gText_Rom_217647)
	.endif
