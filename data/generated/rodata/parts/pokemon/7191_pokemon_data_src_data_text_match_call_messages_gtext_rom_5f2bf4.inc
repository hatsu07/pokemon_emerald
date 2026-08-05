	@ src/data/text/match_call_messages.h:71 gText_MatchCallPokeManiac_Steve_Strategy
	.globl gText_Rom_5F2BF4
gText_Rom_5F2BF4: @ 0x085F2BF4
	.string "パワーで ねじふせる……$"
	.if (. - gText_Rom_5F2BF4) > 0xd
	.error "gText_Rom_5F2BF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2BF4) < 0xd
	.space 0xd - (. - gText_Rom_5F2BF4)
	.endif
