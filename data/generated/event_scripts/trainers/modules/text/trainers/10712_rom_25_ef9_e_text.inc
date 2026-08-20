	@ data/text/trainers.inc:2156 Route120_Text_JennaDefeat (+1 aliases)
	.globl gText_Rom_25EF9E
gText_Rom_25EF9E: @ 0x0825EF9E
	.string "たいりょく だけは あったのに……{EOS}"
	.if (. - gText_Rom_25EF9E) > 0x12
	.error "gText_Rom_25EF9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EF9E) < 0x12
	.space 0x12 - (. - gText_Rom_25EF9E)
	.endif
