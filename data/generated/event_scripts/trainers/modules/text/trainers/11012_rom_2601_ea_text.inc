	@ data/text/trainers.inc:2603 Route124_Text_JennyDefeat (+1 aliases)
	.globl gText_Rom_2601EA
gText_Rom_2601EA: @ 0x082601EA
	.string "あーあ\nまけちゃった……{EOS}"
	.if (. - gText_Rom_2601EA) > 0xd
	.error "gText_Rom_2601EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2601EA) < 0xd
	.space 0xd - (. - gText_Rom_2601EA)
	.endif
