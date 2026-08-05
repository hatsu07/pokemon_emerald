	@ data/text/trainers.inc:245 Route104_Text_WinstonIntro (+1 aliases)
	.globl gText_Rom_25A031
gText_Rom_25A031: @ 0x0825A031
	.string "ボクが あいてして あげるよ\nこの おかねもちの ボクがね$"
	.if (. - gText_Rom_25A031) > 0x1e
	.error "gText_Rom_25A031 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A031) < 0x1e
	.space 0x1e - (. - gText_Rom_25A031)
	.endif
