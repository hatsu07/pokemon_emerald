	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251AFA
gText_Rom_251AFA: @ 0x08251AFA
	.string "テレビの　まえの　みなさんも\n{0xFD}{0x02}さんの　ひみつきちを\lたずねて　みては　いかがでしょうか？\pそれでは　また　だれかの　ひみつきちで\nおあいしましょう！　さようなら！$"
	.if (. - gText_Rom_251AFA) > 0x54
	.error "gText_Rom_251AFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251AFA) < 0x54
	.space 0x54 - (. - gText_Rom_251AFA)
	.endif
