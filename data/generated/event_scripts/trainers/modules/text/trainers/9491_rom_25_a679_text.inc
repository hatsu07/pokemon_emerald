	@ data/text/trainers.inc:392 Route106_Text_ElliotRematchDefeated (+1 aliases)
	.globl gText_Rom_25A679
gText_Rom_25A679: @ 0x0825A679
	.string "また ごうかいに まけたぞーっ!{EOS}"
	.if (. - gText_Rom_25A679) > 0x11
	.error "gText_Rom_25A679 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A679) < 0x11
	.space 0x11 - (. - gText_Rom_25A679)
	.endif
