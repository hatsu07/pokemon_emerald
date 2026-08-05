	@ data/text/trainers.inc:2918 Route127_Text_HenryIntro (+1 aliases)
	.globl gText_Rom_260F54
gText_Rom_260F54: @ 0x08260F54
	.string "おっと!? なみのり している\nポケモンを つりあげて しまったか?$"
	.if (. - gText_Rom_260F54) > 0x23
	.error "gText_Rom_260F54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260F54) < 0x23
	.space 0x23 - (. - gText_Rom_260F54)
	.endif
