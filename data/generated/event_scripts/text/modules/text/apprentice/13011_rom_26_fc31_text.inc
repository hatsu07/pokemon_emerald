	@ data/text/apprentice.inc:433 gText_ApprenticeItemAlreadyRecommended12
	.globl gText_Rom_26FC31
gText_Rom_26FC31: @ 0x0826FC31
	.string "ちょっと まったァ!\nその {STR_VAR_1}って\lまえに きいたことが ある!? ある!!\pほかのを おしえて!\nそれとも {STR_VAR_2}には\lなにも もたせなくて いいって こと!?"
	.byte EOS
	.if (. - gText_Rom_26FC31) > 0x52
	.error "gText_Rom_26FC31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FC31) < 0x52
	.space 0x52 - (. - gText_Rom_26FC31)
	.endif
