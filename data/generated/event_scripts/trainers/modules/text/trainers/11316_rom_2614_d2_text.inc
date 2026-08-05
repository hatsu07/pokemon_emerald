	@ data/text/trainers.inc:3053 Route128_Text_CarleeIntro (+1 aliases)
	.globl gText_Rom_2614D2
gText_Rom_2614D2: @ 0x082614D2
	.string "この へんは ひざしが\nいちだんと つよいわねえ!$"
	.if (. - gText_Rom_2614D2) > 0x1a
	.error "gText_Rom_2614D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2614D2) < 0x1a
	.space 0x1a - (. - gText_Rom_2614D2)
	.endif
