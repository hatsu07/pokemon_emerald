	@ data/text/apprentice.inc:403 gText_ApprenticeItemAlreadyRecommended10
	.globl gText_Rom_26F967
gText_Rom_26F967: @ 0x0826F967
	.string "あー それは いちど\nおしえて もらったことが あるだろ?\lちがうので なにか ないかな?\pそれとも {STR_VAR_2}は\nなにも もたせなくて いいのかな?"
	.byte EOS
	.if (. - gText_Rom_26F967) > 0x49
	.error "gText_Rom_26F967 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F967) < 0x49
	.space 0x49 - (. - gText_Rom_26F967)
	.endif
