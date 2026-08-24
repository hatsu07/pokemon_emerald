	@ src/strings.c:622 gText_LyricsCantBeDeleted
	.globl gText_LyricsCantBeDeleted
gText_LyricsCantBeDeleted: @ 0x085CBCEF
	.string "かしを けすことは できません!{EOS}"
	.if (. - gText_LyricsCantBeDeleted) > 0x11
	.error "gText_LyricsCantBeDeleted may not grow beyond its original slot"
	.endif
	.if (. - gText_LyricsCantBeDeleted) < 0x11
	.space 0x11 - (. - gText_LyricsCantBeDeleted)
	.endif
