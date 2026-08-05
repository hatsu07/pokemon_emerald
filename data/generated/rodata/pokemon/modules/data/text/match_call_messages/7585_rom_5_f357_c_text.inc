	@ src/data/text/match_call_messages.h:293 gText_MatchCallPkmnRanger_Jackson_Intro1
	.globl gText_Rom_5F357C
gText_Rom_5F357C: @ 0x085F357C
	.string "しぜんを こわす やからは$"
	.if (. - gText_Rom_5F357C) > 0xe
	.error "gText_Rom_5F357C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F357C) < 0xe
	.space 0xe - (. - gText_Rom_5F357C)
	.endif
