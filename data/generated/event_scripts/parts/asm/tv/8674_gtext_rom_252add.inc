	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252ADD
gText_Rom_252ADD: @ 0x08252ADD
	.string "2じ　しんさの　アピールで　1ども\nかんきゃくが　もりあがり　ませんでした\pほかの　ポケモンの　ことは　きにせず\nもっと　かんきゃくに　むかって\lアピールをして　ほしいです"
	.byte EOS
	.if (. - gText_Rom_252ADD) > 0x57
	.error "gText_Rom_252ADD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252ADD) < 0x57
	.space 0x57 - (. - gText_Rom_252ADD)
	.endif
