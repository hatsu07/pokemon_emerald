	@ src/data/text/match_call_messages.h:206 gText_MatchCallTriathlete_Benjamin_Strategy
	.globl gText_Rom_5F31AB
gText_Rom_5F31AB: @ 0x085F31AB
	.string "おして おしまくる さくせん!$"
	.if (. - gText_Rom_5F31AB) > 0x10
	.error "gText_Rom_5F31AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F31AB) < 0x10
	.space 0x10 - (. - gText_Rom_5F31AB)
	.endif
