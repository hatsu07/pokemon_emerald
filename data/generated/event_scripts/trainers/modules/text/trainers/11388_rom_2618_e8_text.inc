	@ data/text/trainers.inc:3161 Route131_Text_KaraIntro (+1 aliases)
	.globl gText_Rom_2618E8
gText_Rom_2618E8: @ 0x082618E8
	.string "なんで オトコって\nビキニが すき なのかしらね!\pみんな わたしの こと\nジロジロ みるのよ!{EOS}"
	.if (. - gText_Rom_2618E8) > 0x31
	.error "gText_Rom_2618E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2618E8) < 0x31
	.space 0x31 - (. - gText_Rom_2618E8)
	.endif
