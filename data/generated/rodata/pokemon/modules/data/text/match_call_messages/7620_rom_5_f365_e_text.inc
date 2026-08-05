	@ src/data/text/match_call_messages.h:314 gText_MatchCallHiker_Sawyer_Intro2
	.globl gText_Rom_5F365E
gText_Rom_5F365E: @ 0x085F365E
	.string "おねいさんも すきだぞ$"
	.if (. - gText_Rom_5F365E) > 0xc
	.error "gText_Rom_5F365E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F365E) < 0xc
	.space 0xc - (. - gText_Rom_5F365E)
	.endif
