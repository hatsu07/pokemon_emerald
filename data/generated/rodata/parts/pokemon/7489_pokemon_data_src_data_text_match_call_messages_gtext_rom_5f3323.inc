	@ src/data/text/match_call_messages.h:239 gText_MatchCallParasolLady_Madeline_Intro2
	.globl gText_Rom_5F3323
gText_Rom_5F3323: @ 0x085F3323
	.string "ようじん しなくちゃね!$"
	.if (. - gText_Rom_5F3323) > 0xd
	.error "gText_Rom_5F3323 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3323) < 0xd
	.space 0xd - (. - gText_Rom_5F3323)
	.endif
