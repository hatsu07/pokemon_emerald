	@ data/text/apprentice.inc:415 gText_ApprenticeThanksHeldItem11
	.globl gText_Rom_26FA70
gText_Rom_26FA70: @ 0x0826FA70
	.string "{STR_VAR_1}かーっ! ようよう!\nそんなら ノリノリで もたせてみるぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!"
	.byte EOS
	.if (. - gText_Rom_26FA70) > 0x37
	.error "gText_Rom_26FA70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FA70) < 0x37
	.space 0x37 - (. - gText_Rom_26FA70)
	.endif
