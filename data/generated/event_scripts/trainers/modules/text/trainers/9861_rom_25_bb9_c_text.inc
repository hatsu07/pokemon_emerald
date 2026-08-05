	@ data/text/trainers.inc:923 Route111_Text_BeauDefeat (+1 aliases)
	.globl gText_Rom_25BB9C
gText_Rom_25BB9C: @ 0x0825BB9C
	.string "きぶん だけじゃ かてないか……$"
	.if (. - gText_Rom_25BB9C) > 0x11
	.error "gText_Rom_25BB9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BB9C) < 0x11
	.space 0x11 - (. - gText_Rom_25BB9C)
	.endif
