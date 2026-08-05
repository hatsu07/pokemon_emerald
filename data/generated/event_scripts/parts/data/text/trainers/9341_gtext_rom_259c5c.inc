	@ data/text/trainers.inc:169 Route103_Text_MarcosIntro (+1 aliases)
	.globl gText_Rom_259C5C
gText_Rom_259C5C: @ 0x08259C5C
	.string "おれっちの ギターに さそわれて\nやって きたのかーい?"
	.byte EOS
	.if (. - gText_Rom_259C5C) > 0x1d
	.error "gText_Rom_259C5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259C5C) < 0x1d
	.space 0x1d - (. - gText_Rom_259C5C)
	.endif
