	@ data/text/trainers.inc:401 Route106_Text_NedDefeated (+1 aliases)
	.globl gText_Rom_25A6F8
gText_Rom_25A6F8: @ 0x0825A6F8
	.string "トイレを がまん してたから\nまけたんだよ きっと……{EOS}"
	.if (. - gText_Rom_25A6F8) > 0x1c
	.error "gText_Rom_25A6F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A6F8) < 0x1c
	.space 0x1c - (. - gText_Rom_25A6F8)
	.endif
