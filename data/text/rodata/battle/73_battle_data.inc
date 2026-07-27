	@ src/data/trainers.h:33929 trainers_line_33929
	.globl gText_Rom_30F722
gText_Rom_30F722: @ 0x0830F722
	.string "ヨシノリ$"
	.if (. - gText_Rom_30F722) > 0x5
	.error "gText_Rom_30F722 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F722) < 0x5
	.space 0x5 - (. - gText_Rom_30F722)
	.endif
	.incbin "baserom.gba", 0x30f727, 0x26

