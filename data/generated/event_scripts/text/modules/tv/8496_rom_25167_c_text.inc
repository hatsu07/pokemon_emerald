	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+29 aliases)
	.globl gText_Rom_25167C
gText_Rom_25167C: @ 0x0825167C
	.string "{0xFD}{0x02}さんは　ゲームコーナーの\nスロットを　いちにちで\l{0xFD}{0x03}　かい　まわしました！\p{0xFD}{0x02}さんは　あそんで　いるときに\n「スロットが　とまって　みえる……！」と\lブツブツ　ぶきみに\lつぶやいていた　そうですよ！$"
	.if (. - gText_Rom_25167C) > 0x68
	.error "gText_Rom_25167C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25167C) < 0x68
	.space 0x68 - (. - gText_Rom_25167C)
	.endif
