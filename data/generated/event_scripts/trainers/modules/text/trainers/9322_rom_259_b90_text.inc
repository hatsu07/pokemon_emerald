	@ data/text/trainers.inc:142 Route103_Text_PeteIntro (+1 aliases)
	.globl gText_Rom_259B90
gText_Rom_259B90: @ 0x08259B90
	.string "この くらいの きょり\nおよいで わたれば いーのにさ!"
	.byte EOS
	.if (. - gText_Rom_259B90) > 0x1d
	.error "gText_Rom_259B90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259B90) < 0x1d
	.space 0x1d - (. - gText_Rom_259B90)
	.endif
