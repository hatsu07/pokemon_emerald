	@ src/data/text/match_call_messages.h:94 gText_MatchCallGuitarist_Fernando_Intro2
	.globl gText_Rom_5F2CE6
gText_Rom_5F2CE6: @ 0x085F2CE6
	.string "みんな しびれるゼ!$"
	.if (. - gText_Rom_5F2CE6) > 0xb
	.error "gText_Rom_5F2CE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CE6) < 0xb
	.space 0xb - (. - gText_Rom_5F2CE6)
	.endif
