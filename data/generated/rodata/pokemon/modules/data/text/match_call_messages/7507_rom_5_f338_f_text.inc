	@ src/data/text/match_call_messages.h:249 gText_MatchCallPicnicker_Diana_Intro2
	.globl gText_Rom_5F338F
gText_Rom_5F338F: @ 0x085F338F
	.string "なにが あるのかしら……?$"
	.if (. - gText_Rom_5F338F) > 0xe
	.error "gText_Rom_5F338F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F338F) < 0xe
	.space 0xe - (. - gText_Rom_5F338F)
	.endif
