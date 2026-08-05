	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+29 aliases)
	.globl gText_Rom_2517CA
gText_Rom_2517CA: @ 0x082517CA
	.string "{0xFD}{0x02}さんは　きのみブレンダーを\nいちにちで　{0xFD}{0x03}　かい　まわしました！\pさすがに　さいごの　ほうでは\n{0xFD}{0x02}さんの　めも\lくるくる　まわってしまい\lまるで　パッチールの　ように\lなってしまった　そうですよ！$"
	.if (. - gText_Rom_2517CA) > 0x67
	.error "gText_Rom_2517CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2517CA) < 0x67
	.space 0x67 - (. - gText_Rom_2517CA)
	.endif
