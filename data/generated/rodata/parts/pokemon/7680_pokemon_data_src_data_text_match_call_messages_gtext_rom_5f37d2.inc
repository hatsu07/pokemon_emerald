	@ src/data/text/match_call_messages.h:349 gText_MatchCallReliableOne_Dad_Intro2
	.globl gText_Rom_5F37D2
gText_Rom_5F37D2: @ 0x085F37D2
	.string "まいにち かよっています$"
	.if (. - gText_Rom_5F37D2) > 0xd
	.error "gText_Rom_5F37D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F37D2) < 0xd
	.space 0xd - (. - gText_Rom_5F37D2)
	.endif
