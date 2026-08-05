	@ src/data/text/match_call_messages.h:221 gText_MatchCallBirdKeeper_Robert_Strategy
	.globl gText_Rom_5F3255
gText_Rom_5F3255: @ 0x085F3255
	.string "おれの テクニック みせてやる$"
	.if (. - gText_Rom_5F3255) > 0x10
	.error "gText_Rom_5F3255 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3255) < 0x10
	.space 0x10 - (. - gText_Rom_5F3255)
	.endif
