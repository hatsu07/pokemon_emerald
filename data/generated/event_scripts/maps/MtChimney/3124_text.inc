	@ data/maps/MtChimney/scripts.inc:788 MtChimney_Text_MelissaIntro (+1 aliases)
	.globl gText_Rom_2158E1
gText_Rom_2158E1: @ 0x082158E1
	.string "なんだか もえあがってきて\nたたかいたくて たまらないのっ!$"
	.if (. - gText_Rom_2158E1) > 0x1f
	.error "gText_Rom_2158E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2158E1) < 0x1f
	.space 0x1f - (. - gText_Rom_2158E1)
	.endif
