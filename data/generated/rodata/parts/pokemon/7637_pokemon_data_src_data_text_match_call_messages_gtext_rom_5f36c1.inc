	@ src/data/text/match_call_messages.h:324 gText_MatchCallPkmnTrainer_Wally_Intro2
	.globl gText_Rom_5F36C1
gText_Rom_5F36C1: @ 0x085F36C1
	.string "いっしょに つよくなったんです$"
	.if (. - gText_Rom_5F36C1) > 0x10
	.error "gText_Rom_5F36C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F36C1) < 0x10
	.space 0x10 - (. - gText_Rom_5F36C1)
	.endif
