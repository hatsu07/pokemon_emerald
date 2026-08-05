	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+29 aliases)
	.globl gText_Rom_251968
gText_Rom_251968: @ 0x08251968
	.string "いやー　すごい　ですね！\p{0xFD}{0x02}さん！\nあなたが　きょうの　ナンバー1です！！\pテレビの　まえの　みなさんも\n{0xFD}{0x02}さんに　まけずに\lいちにち　がんばりましょうね！$"
	.if (. - gText_Rom_251968) > 0x51
	.error "gText_Rom_251968 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251968) < 0x51
	.space 0x51 - (. - gText_Rom_251968)
	.endif
