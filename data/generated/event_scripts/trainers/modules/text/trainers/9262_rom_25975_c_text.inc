	@ data/text/trainers.inc:52 Route103_Text_DaisyIntro (+1 aliases)
	.globl gText_Rom_25975C
gText_Rom_25975C: @ 0x0825975C
	.string "こころ やすらぐ かおりに\nあなたも さそわれたのですね……"
	.byte EOS
	.if (. - gText_Rom_25975C) > 0x1f
	.error "gText_Rom_25975C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25975C) < 0x1f
	.space 0x1f - (. - gText_Rom_25975C)
	.endif
