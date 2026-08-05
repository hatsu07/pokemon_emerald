	@ src/data/text/match_call_messages.h:36 gText_MatchCallCooltrainer_Brooke_Strategy
	.globl gText_Rom_5F2A7B
gText_Rom_5F2A7B: @ 0x085F2A7B
	.string "あいての じゃくてんを せめる$"
	.if (. - gText_Rom_5F2A7B) > 0x10
	.error "gText_Rom_5F2A7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2A7B) < 0x10
	.space 0x10 - (. - gText_Rom_5F2A7B)
	.endif
