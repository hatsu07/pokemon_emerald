	@ data/text/trainers.inc:2615 Route124_Text_JennyRematchDefeat (+1 aliases)
	.globl gText_Rom_26027A
gText_Rom_26027A: @ 0x0826027A
	.string "おかしいなあ\nまた まけちゃった……{EOS}"
	.if (. - gText_Rom_26027A) > 0x13
	.error "gText_Rom_26027A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26027A) < 0x13
	.space 0x13 - (. - gText_Rom_26027A)
	.endif
