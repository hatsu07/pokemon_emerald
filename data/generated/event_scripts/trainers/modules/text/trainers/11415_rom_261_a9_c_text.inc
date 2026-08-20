	@ data/text/trainers.inc:3200 Route131_Text_TaliaPostBattle
	.globl gText_Rom_261A9C
gText_Rom_261A9C: @ 0x08261A9C
	.string "この そばに ふしぎな ばしょが あるわよ\nたかい とうが そびえているの!\lみてきたら どうかしら?{EOS}"
	.if (. - gText_Rom_261A9C) > 0x34
	.error "gText_Rom_261A9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261A9C) < 0x34
	.space 0x34 - (. - gText_Rom_261A9C)
	.endif
