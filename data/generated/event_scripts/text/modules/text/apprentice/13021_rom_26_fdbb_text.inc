	@ data/text/apprentice.inc:448 gText_ApprenticeItemAlreadyRecommended13
	.globl gText_Rom_26FDBB
gText_Rom_26FDBB: @ 0x0826FDBB
	.string "いやいや {STR_VAR_1}は\nこのあいだ おしえて くれただろ?\lもっと すごいの おしえてくれよ!\pあ それとも\n{STR_VAR_2}には なにも もたせなくて\lいいって ことかな?"
	.byte EOS
	.if (. - gText_Rom_26FDBB) > 0x4f
	.error "gText_Rom_26FDBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FDBB) < 0x4f
	.space 0x4f - (. - gText_Rom_26FDBB)
	.endif
