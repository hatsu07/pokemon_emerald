	@ data/text/trainers.inc:1121 Route112_Text_LarryIntro (+1 aliases)
	.globl gText_Rom_25C43E
gText_Rom_25C43E: @ 0x0825C43E
	.string "ぼくは つよいんだ……\nまけても ないたり しないぞ……!$"
	.if (. - gText_Rom_25C43E) > 0x1e
	.error "gText_Rom_25C43E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C43E) < 0x1e
	.space 0x1e - (. - gText_Rom_25C43E)
	.endif
