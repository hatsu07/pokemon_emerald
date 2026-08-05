	@ src/data/text/match_call_messages.h:171 gText_MatchCallYoungster_Calvin_Strategy
	.globl gText_Rom_5F3040
gText_Rom_5F3040: @ 0x085F3040
	.string "できること やってやるぜ!$"
	.if (. - gText_Rom_5F3040) > 0xe
	.error "gText_Rom_5F3040 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3040) < 0xe
	.space 0xe - (. - gText_Rom_5F3040)
	.endif
