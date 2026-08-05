	@ src/data/text/match_call_messages.h:19 gText_MatchCallTuber_Lola_Intro2
	.globl gText_Rom_5F29C1
gText_Rom_5F29C1: @ 0x085F29C1
	.string "およげるように なりたいなー$"
	.if (. - gText_Rom_5F29C1) > 0xf
	.error "gText_Rom_5F29C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F29C1) < 0xf
	.space 0xf - (. - gText_Rom_5F29C1)
	.endif
