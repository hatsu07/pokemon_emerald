	@ src/strings.c:622 gText_LyricsCantBeDeleted
	.globl gText_Rom_5CBCEF
gText_Rom_5CBCEF: @ 0x085CBCEF
	.string "かしを けすことは できません!$"
	.if (. - gText_Rom_5CBCEF) > 0x11
	.error "gText_Rom_5CBCEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBCEF) < 0x11
	.space 0x11 - (. - gText_Rom_5CBCEF)
	.endif
