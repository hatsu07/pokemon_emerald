	@ src/data/text/match_call_messages.h:93 gText_MatchCallGuitarist_Fernando_Intro1
	.globl gText_Rom_5F2CD8
gText_Rom_5F2CD8: @ 0x085F2CD8
	.string "オレの つくった きょくで$"
	.if (. - gText_Rom_5F2CD8) > 0xe
	.error "gText_Rom_5F2CD8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CD8) < 0xe
	.space 0xe - (. - gText_Rom_5F2CD8)
	.endif
