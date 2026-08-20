	@ data/text/trainers.inc:671 Route109_Text_CarterDefeated (+1 aliases)
	.globl gText_Rom_25B12E
gText_Rom_25B12E: @ 0x0825B12E
	.string "おじさん まけちゃったな……{EOS}"
	.if (. - gText_Rom_25B12E) > 0xf
	.error "gText_Rom_25B12E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B12E) < 0xf
	.space 0xf - (. - gText_Rom_25B12E)
	.endif
