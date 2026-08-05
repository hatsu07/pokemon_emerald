	@ src/data/text/match_call_messages.h:186 gText_MatchCallTriathlete_Maria_Strategy
	.globl gText_Rom_5F30DC
gText_Rom_5F30DC: @ 0x085F30DC
	.string "スピード いのち!$"
	.if (. - gText_Rom_5F30DC) > 0xa
	.error "gText_Rom_5F30DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F30DC) < 0xa
	.space 0xa - (. - gText_Rom_5F30DC)
	.endif
