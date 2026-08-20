	@ data/text/trainers.inc:680 Route109_Text_PaulDefeated (+1 aliases)
	.globl gText_Rom_25B189
gText_Rom_25B189: @ 0x0825B189
	.string "リキ『やあ まいったな……{EOS}"
	.if (. - gText_Rom_25B189) > 0xe
	.error "gText_Rom_25B189 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B189) < 0xe
	.space 0xe - (. - gText_Rom_25B189)
	.endif
