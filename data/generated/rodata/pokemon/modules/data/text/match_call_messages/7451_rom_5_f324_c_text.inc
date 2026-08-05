	@ src/data/text/match_call_messages.h:219 gText_MatchCallDragonTamer_Nicolas_Intro2
	.globl gText_Rom_5F324C
gText_Rom_5F324C: @ 0x085F324C
	.string "つくってやるぜ!$"
	.if (. - gText_Rom_5F324C) > 0x9
	.error "gText_Rom_5F324C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F324C) < 0x9
	.space 0x9 - (. - gText_Rom_5F324C)
	.endif
