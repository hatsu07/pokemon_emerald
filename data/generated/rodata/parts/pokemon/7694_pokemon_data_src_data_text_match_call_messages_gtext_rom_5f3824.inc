	@ src/data/text/match_call_messages.h:357 gText_MatchCallMysticDuo_TateAndLiza_Pokemon
	.globl gText_Rom_5F3824
gText_Rom_5F3824: @ 0x085F3824
	.string "いつも なかよしの ポケモン!$"
	.if (. - gText_Rom_5F3824) > 0x10
	.error "gText_Rom_5F3824 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3824) < 0x10
	.space 0x10 - (. - gText_Rom_5F3824)
	.endif
