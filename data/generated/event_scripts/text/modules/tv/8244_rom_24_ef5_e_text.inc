	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+6 aliases)
	.globl gText_Rom_24EF5E
gText_Rom_24EF5E: @ 0x0824EF5E
	.string "こんにちは\p『きょうの　かいもの　じょうず』の\nじかん　です\pインタビュアー『みなさん　おげんきですか？\pきょうは　{0xFD}{0x03}の\nおみせに　きています\pさいきん　なにが　うれているのか\nチェック　してみましょう！$"
	.if (. - gText_Rom_24EF5E) > 0x68
	.error "gText_Rom_24EF5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24EF5E) < 0x68
	.space 0x68 - (. - gText_Rom_24EF5E)
	.endif
