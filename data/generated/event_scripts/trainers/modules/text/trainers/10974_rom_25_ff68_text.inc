	@ data/text/trainers.inc:2546 Route123_Text_AlbertoIntro (+1 aliases)
	.globl gText_Rom_25FF68
gText_Rom_25FF68: @ 0x0825FF68
	.string "オレ マジ とりポケモンが すき!\nとりイカス! とりサイコー!{EOS}"
	.if (. - gText_Rom_25FF68) > 0x21
	.error "gText_Rom_25FF68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FF68) < 0x21
	.space 0x21 - (. - gText_Rom_25FF68)
	.endif
