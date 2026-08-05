	@ data/text/trainers.inc:3044 Route128_Text_HarrisonIntro (+1 aliases)
	.globl gText_Rom_261475
gText_Rom_261475: @ 0x08261475
	.string "きみが また つよそーだもんね!\nオレ かてっかな?$"
	.if (. - gText_Rom_261475) > 0x1b
	.error "gText_Rom_261475 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261475) < 0x1b
	.space 0x1b - (. - gText_Rom_261475)
	.endif
