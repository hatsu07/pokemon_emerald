	@ data/text/apprentice.inc:646 gText_ApprenticeMonThanks11
	.globl gText_Rom_2716E5
gText_Rom_2716E5: @ 0x082716E5
	.string "{STR_VAR_1}かーっ! ようよう!\nそんなら ノリノリで さがしてくるぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!$"
	.if (. - gText_Rom_2716E5) > 0x37
	.error "gText_Rom_2716E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2716E5) < 0x37
	.space 0x37 - (. - gText_Rom_2716E5)
	.endif
