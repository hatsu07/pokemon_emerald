	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24DB69
gText_Rom_24DB69: @ 0x0824DB69
	.string "こんにちは\n『ポケモン　ニュース』の　じかんです\pたいへん　めずらしい　ニュースが\nはいって　きました\p{0xFD}{0x02}で\n{0xFD}{0x03}が　たいりょうはっせい　した\lという　ほうこくが　ありました！\p{0xFD}{0x03}と　いえば\nなかなか　みつけることが　むずかしい\lポケモンとしても　ゆうめい　ですね\pあなたも　このしんぴてきな\n{0xFD}{0x03}の　たいりょうはっせいを\lみにいっては　いかが　でしょうか？\pいじょう\n『ポケモン　ニュース』でした$"
	.if (. - gText_Rom_24DB69) != 0xca
	.error "gText_Rom_24DB69 must retain its original byte length"
	.endif
