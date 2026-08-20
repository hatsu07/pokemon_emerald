	@ data/text/trainers.inc:1079 Route111_Text_HaydenPostBattle
	.globl gText_Rom_25C268
gText_Rom_25C268: @ 0x0825C268
	.string "はらが なった!\nきのみでも やいて たべようかナ?{EOS}"
	.if (. - gText_Rom_25C268) > 0x1b
	.error "gText_Rom_25C268 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C268) < 0x1b
	.space 0x1b - (. - gText_Rom_25C268)
	.endif
