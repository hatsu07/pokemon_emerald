	@ src/data/text/match_call_messages.h:88 gText_MatchCallBlackBelt_Koji_Intro1
	.globl gText_Rom_5F2CA4
gText_Rom_5F2CA4: @ 0x085F2CA4
	.string "おれと はだしで$"
	.if (. - gText_Rom_5F2CA4) > 0x9
	.error "gText_Rom_5F2CA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CA4) < 0x9
	.space 0x9 - (. - gText_Rom_5F2CA4)
	.endif
