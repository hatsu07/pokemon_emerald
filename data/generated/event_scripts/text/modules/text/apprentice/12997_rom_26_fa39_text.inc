	@ data/text/apprentice.inc:412 gText_ApprenticeThanksNoHeldItem11
	.globl gText_Rom_26FA39
gText_Rom_26FA39: @ 0x0826FA39
	.string "そうかーっ! ようよう!\nそんなら ノリノリで てぶらでいくぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!"
	.byte EOS
	.if (. - gText_Rom_26FA39) > 0x37
	.error "gText_Rom_26FA39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FA39) < 0x37
	.space 0x37 - (. - gText_Rom_26FA39)
	.endif
