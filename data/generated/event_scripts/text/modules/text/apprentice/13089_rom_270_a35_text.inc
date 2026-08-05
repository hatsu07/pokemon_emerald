	@ data/text/apprentice.inc:550 gText_ApprenticeMonFirstThanks11
	.globl gText_Rom_270A35
gText_Rom_270A35: @ 0x08270A35
	.string "{STR_VAR_1}かーっ! ようよう!\nそんなら ノリノリで いれかえるぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!"
	.byte EOS
	.if (. - gText_Rom_270A35) > 0x36
	.error "gText_Rom_270A35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270A35) < 0x36
	.space 0x36 - (. - gText_Rom_270A35)
	.endif
