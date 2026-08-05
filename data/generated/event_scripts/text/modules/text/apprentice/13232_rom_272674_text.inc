	@ data/text/apprentice.inc:766 gText_ApprenticeMoveThanks15
	.globl gText_Rom_272674
gText_Rom_272674: @ 0x08272674
	.string "{STR_VAR_1}……\nまちがいなく そうなの かね?\pいや ほんとう なら いいんだ\nどうも ありがとう\lこんな わたしの ポケモンでも\lおぼえて くれると いいな\pでは いずれまた あおう!$"
	.if (. - gText_Rom_272674) > 0x5b
	.error "gText_Rom_272674 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272674) < 0x5b
	.space 0x5b - (. - gText_Rom_272674)
	.endif
