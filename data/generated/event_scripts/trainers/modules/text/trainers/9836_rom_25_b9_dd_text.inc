	@ data/text/trainers.inc:887 Route110_Text_JosephDefeated (+1 aliases)
	.globl gText_Rom_25B9DD
gText_Rom_25B9DD: @ 0x0825B9DD
	.string "ノリが いいね あんた……{EOS}"
	.if (. - gText_Rom_25B9DD) > 0xe
	.error "gText_Rom_25B9DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B9DD) < 0xe
	.space 0xe - (. - gText_Rom_25B9DD)
	.endif
