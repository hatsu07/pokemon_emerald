	@ src/data/text/match_call_messages.h:123 gText_MatchCallPsychic_Cameron_Intro1
	.globl gText_Rom_5F2E39
gText_Rom_5F2E39: @ 0x085F2E39
	.string "おまえの かんがえは$"
	.if (. - gText_Rom_5F2E39) > 0xb
	.error "gText_Rom_5F2E39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E39) < 0xb
	.space 0xb - (. - gText_Rom_5F2E39)
	.endif
