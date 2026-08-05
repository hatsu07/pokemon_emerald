	@ data/text/apprentice.inc:190 gText_ApprenticeLevelModeThanks11
	.globl gText_Rom_26E3C1
gText_Rom_26E3C1: @ 0x0826E3C1
	.string "{STR_VAR_1}かーっ! ようよう!\nそんなら ノリノリで いってみるぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!"
	.byte EOS
	.if (. - gText_Rom_26E3C1) > 0x36
	.error "gText_Rom_26E3C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E3C1) < 0x36
	.space 0x36 - (. - gText_Rom_26E3C1)
	.endif
