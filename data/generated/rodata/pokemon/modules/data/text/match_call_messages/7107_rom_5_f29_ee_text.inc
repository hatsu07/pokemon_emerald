	@ src/data/text/match_call_messages.h:23 gText_MatchCallTuber_Ricky_Intro1
	.globl gText_Rom_5F29EE
gText_Rom_5F29EE: @ 0x085F29EE
	.string "およげない わけじゃ ないよ!$"
	.if (. - gText_Rom_5F29EE) > 0x10
	.error "gText_Rom_5F29EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F29EE) < 0x10
	.space 0x10 - (. - gText_Rom_5F29EE)
	.endif
