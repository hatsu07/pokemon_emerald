	@ src/data/text/match_call_messages.h:358 gText_MatchCallMysticDuo_TateAndLiza_Intro1
	.globl gText_Rom_5F3834
gText_Rom_5F3834: @ 0x085F3834
	.string "おとうさんは わたしたちの$"
	.if (. - gText_Rom_5F3834) > 0xe
	.error "gText_Rom_5F3834 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3834) < 0xe
	.space 0xe - (. - gText_Rom_5F3834)
	.endif
