	@ data/text/trainers.inc:2735 Route125_Text_SharonIntro (+1 aliases)
	.globl gText_Rom_260803
gText_Rom_260803: @ 0x08260803
	.string "わたしの そだてた みずポケモンと\nたたかって みない?$"
	.if (. - gText_Rom_260803) > 0x1d
	.error "gText_Rom_260803 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260803) < 0x1d
	.space 0x1d - (. - gText_Rom_260803)
	.endif
