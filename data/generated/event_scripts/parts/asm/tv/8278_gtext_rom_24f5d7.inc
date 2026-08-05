	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gText_Rom_24F5D7
gText_Rom_24F5D7: @ 0x0824F5D7
	.string "『きょうの　ライバル　トレーナー』\pポケモン　トレーナーの　みなさん！\nごきげん　いかがですか？\pきょうも　みなさんの　ライバルたちの\nようすに　ついて　おつたえします！$"
	.if (. - gText_Rom_24F5D7) > 0x56
	.error "gText_Rom_24F5D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F5D7) < 0x56
	.space 0x56 - (. - gText_Rom_24F5D7)
	.endif
