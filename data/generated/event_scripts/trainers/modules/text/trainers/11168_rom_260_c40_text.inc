	@ data/text/trainers.inc:2834 Route126_Text_BrendaIntro (+1 aliases)
	.globl gText_Rom_260C40
gText_Rom_260C40: @ 0x08260C40
	.string "ねえ ねえ\nおねえさんと しょうぶ しない?$"
	.if (. - gText_Rom_260C40) > 0x17
	.error "gText_Rom_260C40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260C40) < 0x17
	.space 0x17 - (. - gText_Rom_260C40)
	.endif
