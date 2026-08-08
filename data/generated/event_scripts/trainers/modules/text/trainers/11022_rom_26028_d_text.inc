	@ data/text/trainers.inc:2618 Route124_Text_JennyPostRematch
	.globl gText_Rom_26028D
gText_Rom_26028D: @ 0x0826028D
	.string "なんとなく だけど\nカラクリやしきに いってみようかな……$"
	.if (. - gText_Rom_26028D) > 0x1e
	.error "gText_Rom_26028D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26028D) < 0x1e
	.space 0x1e - (. - gText_Rom_26028D)
	.endif
