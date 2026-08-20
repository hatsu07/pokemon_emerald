	@ data/text/trainers.inc:380 Route106_Text_ElliotDefeated (+1 aliases)
	.globl gText_Rom_25A5F1
gText_Rom_25A5F1: @ 0x0825A5F1
	.string "まるで うみづりの ように\nごうかいに まけたぞーっ!{EOS}"
	.if (. - gText_Rom_25A5F1) > 0x1c
	.error "gText_Rom_25A5F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A5F1) < 0x1c
	.space 0x1c - (. - gText_Rom_25A5F1)
	.endif
