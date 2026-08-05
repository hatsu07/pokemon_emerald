	@ data/text/trainers.inc:2624 Route124_Text_GraceDefeat (+1 aliases)
	.globl gText_Rom_2602CE
gText_Rom_2602CE: @ 0x082602CE
	.string "こんなに つよいなんて\nおもいも しなかったわ!$"
	.if (. - gText_Rom_2602CE) > 0x19
	.error "gText_Rom_2602CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2602CE) < 0x19
	.space 0x19 - (. - gText_Rom_2602CE)
	.endif
