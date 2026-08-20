	@ data/text/trainers.inc:362 Route105_Text_AndresRematchDefeated (+1 aliases)
	.globl gText_Rom_25A543
gText_Rom_25A543: @ 0x0825A543
	.string "うん…… やっぱり かてないな{EOS}"
	.if (. - gText_Rom_25A543) > 0x10
	.error "gText_Rom_25A543 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A543) < 0x10
	.space 0x10 - (. - gText_Rom_25A543)
	.endif
