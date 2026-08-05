	@ data/text/apprentice.inc:742 gText_ApprenticeMoveThanks11
	.globl gText_Rom_27232D
gText_Rom_27232D: @ 0x0827232D
	.string "{STR_VAR_1}かーっ! ようよう!\nそんなら ノリノリで おぼえさせるぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!$"
	.if (. - gText_Rom_27232D) > 0x37
	.error "gText_Rom_27232D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27232D) < 0x37
	.space 0x37 - (. - gText_Rom_27232D)
	.endif
