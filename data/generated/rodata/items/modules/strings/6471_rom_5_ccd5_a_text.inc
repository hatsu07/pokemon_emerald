	@ src/strings.c:827 gText_AnnouncingRankings
	.globl gText_Rom_5CCD5A
gText_Rom_5CCD5A: @ 0x085CCD5A
	.string "じゅんいの はっぴょう!!$"
	.if (. - gText_Rom_5CCD5A) > 0xe
	.error "gText_Rom_5CCD5A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD5A) < 0xe
	.space 0xe - (. - gText_Rom_5CCD5A)
	.endif
