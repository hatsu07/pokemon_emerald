	@ data/text/trainers.inc:1550 Route115_Text_MarleneIntro (+1 aliases)
	.globl gText_Rom_25D588
gText_Rom_25D588: @ 0x0825D588
	.string "めいそうの じゃまを したわね……\nおしおき させて もらうわ!$"
	.if (. - gText_Rom_25D588) > 0x21
	.error "gText_Rom_25D588 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D588) < 0x21
	.space 0x21 - (. - gText_Rom_25D588)
	.endif
