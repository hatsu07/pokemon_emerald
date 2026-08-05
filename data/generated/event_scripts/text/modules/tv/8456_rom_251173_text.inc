	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+28 aliases)
	.globl gText_Rom_251173
gText_Rom_251173: @ 0x08251173
	.string "こんにちは！\n『ポケモン　ニュース』の　じかんです\pバトルフロンティアから\nうれしい　ニュースが　はいって　きました！$"
	.if (. - gText_Rom_251173) > 0x3c
	.error "gText_Rom_251173 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251173) < 0x3c
	.space 0x3c - (. - gText_Rom_251173)
	.endif
