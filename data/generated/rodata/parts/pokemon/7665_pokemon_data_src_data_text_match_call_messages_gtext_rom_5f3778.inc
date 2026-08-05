	@ src/data/text/match_call_messages.h:341 gText_MatchCallPassionBurn_Flannery_Strategy
	.globl gText_Rom_5F3778
gText_Rom_5F3778: @ 0x085F3778
	.string "つよきに せめる$"
	.if (. - gText_Rom_5F3778) > 0x9
	.error "gText_Rom_5F3778 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3778) < 0x9
	.space 0x9 - (. - gText_Rom_5F3778)
	.endif
