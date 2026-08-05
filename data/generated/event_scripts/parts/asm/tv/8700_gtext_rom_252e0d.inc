	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+11 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_252E0D
gText_Rom_252E0D: @ 0x08252E0D
	.string "{0xFD}{0x03}さん　チームに　とっては\n{0xFD}{0x04}が　ブレーキ　だったのが\lいたかった　ようです\pしょうりを　おさめた\n{0xFD}{0x02}さん　チーム！\lおめでとう　ございました！\pやぶれて　しまった\n{0xFD}{0x03}さん　チーム！\lつぎこそ　がんばって　ください！\pいじょう\n『ポケモン　たいせん　そくほう！』　でした"
	.byte EOS
	.if (. - gText_Rom_252E0D) != 0x8c
	.error "gText_Rom_252E0D must retain its original byte length"
	.endif
