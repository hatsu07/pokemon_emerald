	@ src/data/text/match_call_messages.h:289 gText_MatchCallPkmnRanger_Catherine_Intro2
	.globl gText_Rom_5F354D
gText_Rom_5F354D: @ 0x085F354D
	.string "きゅうじょくんれんを してるの$"
	.if (. - gText_Rom_5F354D) > 0x10
	.error "gText_Rom_5F354D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F354D) < 0x10
	.space 0x10 - (. - gText_Rom_5F354D)
	.endif
