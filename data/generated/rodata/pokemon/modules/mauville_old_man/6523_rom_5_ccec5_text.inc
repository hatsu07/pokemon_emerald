	@ asm/mauville_old_man.s:1144 StorytellerDisplayStory
	.globl gText_Rom_5CCEC5
gText_Rom_5CCEC5: @ 0x085CCEC5
	.string "someone$"
	.if (. - gText_Rom_5CCEC5) > 0x8
	.error "gText_Rom_5CCEC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCEC5) < 0x8
	.space 0x8 - (. - gText_Rom_5CCEC5)
	.endif
