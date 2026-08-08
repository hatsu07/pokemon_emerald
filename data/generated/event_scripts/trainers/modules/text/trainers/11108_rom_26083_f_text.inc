	@ data/text/trainers.inc:2744 Route125_Text_ErnestIntro (+1 aliases)
	.globl gText_Rom_26083F
gText_Rom_26083F: @ 0x0826083F
	.string "オレさまは たくましい ふなのり!\nせかいの うみを わたりあるく おとこ!$"
	.if (. - gText_Rom_26083F) > 0x27
	.error "gText_Rom_26083F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26083F) < 0x27
	.space 0x27 - (. - gText_Rom_26083F)
	.endif
