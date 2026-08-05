	@ src/data/text/match_call_messages.h:194 gText_MatchCallTriathlete_Abigail_Intro2
	.globl gText_Rom_5F3136
gText_Rom_5F3136: @ 0x085F3136
	.string "たのしくて のめりこんじゃった$"
	.if (. - gText_Rom_5F3136) > 0x10
	.error "gText_Rom_5F3136 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3136) < 0x10
	.space 0x10 - (. - gText_Rom_5F3136)
	.endif
