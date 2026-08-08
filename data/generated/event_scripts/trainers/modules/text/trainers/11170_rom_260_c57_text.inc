	@ data/text/trainers.inc:2837 Route126_Text_BrendaDefeat (+1 aliases)
	.globl gText_Rom_260C57
gText_Rom_260C57: @ 0x08260C57
	.string "いやーんっ!$"
	.if (. - gText_Rom_260C57) > 0x7
	.error "gText_Rom_260C57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260C57) < 0x7
	.space 0x7 - (. - gText_Rom_260C57)
	.endif
