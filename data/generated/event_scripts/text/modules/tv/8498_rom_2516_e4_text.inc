	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+29 aliases)
	.globl gText_Rom_2516E4
gText_Rom_2516E4: @ 0x082516E4
	.string "{0xFD}{0x02}さんは　ゲームコーナーの\nルーレットを　いちにちで\l{0xFD}{0x03}　かい　まわしました！\p{0xFD}{0x02}さんは　あそんで　いるとき\n「ボールの　うごきが　よめた……！」と\lめを　まっかにして\lそれは　すごい　かおで\lさけんでいた　そうですよ！$"
	.if (. - gText_Rom_2516E4) > 0x72
	.error "gText_Rom_2516E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2516E4) < 0x72
	.space 0x72 - (. - gText_Rom_2516E4)
	.endif
