	@ src/data/text/match_call_messages.h:264 gText_MatchCallSailor_Cory_Intro2
	.globl gText_Rom_5F3435
gText_Rom_5F3435: @ 0x085F3435
	.string "おなかで くうきを すうのだ!$"
	.if (. - gText_Rom_5F3435) > 0x10
	.error "gText_Rom_5F3435 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3435) < 0x10
	.space 0x10 - (. - gText_Rom_5F3435)
	.endif
