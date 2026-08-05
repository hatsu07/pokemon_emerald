	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+2 aliases)
	.globl gText_Rom_24D9C3
gText_Rom_24D9C3: @ 0x0824D9C3
	.string "『さいきんの　できごと』\pポケモントレーナーに　とって\nまいにちが　ものがたりです\lその　ものがたりを　すこしでも\lしょうかい　できたら　うれしいですね\pさて　きょうは　トレーナーの\n{0xFD}{0x02}さんの　おはなしです\p{0xFD}{0x02}さん　さいきん\nどんなことが　あったんで　しょうか？\lさっそく　みてみることに　しましょう\pえーと……$"
	.if (. - gText_Rom_24D9C3) > 0x9f
	.error "gText_Rom_24D9C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D9C3) < 0x9f
	.space 0x9f - (. - gText_Rom_24D9C3)
	.endif
