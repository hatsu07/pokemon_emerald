	@ src/data/text/match_call_messages.h:37 gText_MatchCallCooltrainer_Brooke_Pokemon
	.globl gText_Rom_5F2A8B
gText_Rom_5F2A8B: @ 0x085F2A8B
	.string "バランスが いのちよ!$"
	.if (. - gText_Rom_5F2A8B) > 0xc
	.error "gText_Rom_5F2A8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2A8B) < 0xc
	.space 0xc - (. - gText_Rom_5F2A8B)
	.endif
