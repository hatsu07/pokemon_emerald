	@ src/data/text/match_call_messages.h:266 gText_MatchCallCollector_Edwin_Strategy
	.globl gText_Rom_5F3445
gText_Rom_5F3445: @ 0x085F3445
	.string "ポケモンを キズつけないように$"
	.if (. - gText_Rom_5F3445) > 0x10
	.error "gText_Rom_5F3445 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3445) < 0x10
	.space 0x10 - (. - gText_Rom_5F3445)
	.endif
