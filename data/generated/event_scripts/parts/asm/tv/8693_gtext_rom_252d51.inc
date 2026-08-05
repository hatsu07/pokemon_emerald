	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+11 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_252D51
gText_Rom_252D51: @ 0x08252D51
	.string "しょうりを　おさめた\n{0xFD}{0x02}さん！\lおめでとう　ございました！\pやぶれて　しまった\n{0xFD}{0x03}さん！\lつぎは　がんばって　ください！\pいじょう\n『ポケモン　たいせん　そくほう！』　でした"
	.byte EOS
	.if (. - gText_Rom_252D51) != 0x5a
	.error "gText_Rom_252D51 must retain its original byte length"
	.endif
