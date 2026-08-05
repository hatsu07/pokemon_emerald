	@ src/strings.c:444 gText_CantThrowAwayInUse
	.globl gText_Rom_5CA7F2
gText_Rom_5CA7F2: @ 0x085CA7F2
	.string "このグッズは おかれて いるので\nすてる ことが できません!$"
	.if (. - gText_Rom_5CA7F2) > 0x20
	.error "gText_Rom_5CA7F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA7F2) < 0x20
	.space 0x20 - (. - gText_Rom_5CA7F2)
	.endif
