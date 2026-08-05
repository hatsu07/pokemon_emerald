	@ data/text/apprentice.inc:418 gText_ApprenticeItemAlreadyRecommended11
	.globl gText_Rom_26FAA7
gText_Rom_26FAA7: @ 0x0826FAA7
	.string "{STR_VAR_1}かーっ! おいおい!\nそれなら きいたことが あるぜ!\lなんか ちがうやつを たのむぜ!\pそれとも あれかな?\nなにも もたせなくて いいのかな?"
	.byte EOS
	.if (. - gText_Rom_26FAA7) > 0x4c
	.error "gText_Rom_26FAA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FAA7) < 0x4c
	.space 0x4c - (. - gText_Rom_26FAA7)
	.endif
