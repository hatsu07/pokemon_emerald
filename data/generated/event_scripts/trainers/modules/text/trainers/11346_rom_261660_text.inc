	@ data/text/trainers.inc:3098 Route129_Text_ClarenceIntro (+1 aliases)
	.globl gText_Rom_261660
gText_Rom_261660: @ 0x08261660
	.string "なみのりも けっこう たいへんだろ?$"
	.if (. - gText_Rom_261660) > 0x13
	.error "gText_Rom_261660 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261660) < 0x13
	.space 0x13 - (. - gText_Rom_261660)
	.endif
