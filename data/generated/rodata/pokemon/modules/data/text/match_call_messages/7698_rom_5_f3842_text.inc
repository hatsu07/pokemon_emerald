	@ src/data/text/match_call_messages.h:359 gText_MatchCallMysticDuo_TateAndLiza_Intro2
	.globl gText_Rom_5F3842
gText_Rom_5F3842: @ 0x085F3842
	.string "くべつが つかなく なるのよ!$"
	.if (. - gText_Rom_5F3842) > 0x10
	.error "gText_Rom_5F3842 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3842) < 0x10
	.space 0x10 - (. - gText_Rom_5F3842)
	.endif
