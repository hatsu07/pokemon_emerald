	@ src/data/text/match_call_messages.h:122 gText_MatchCallPsychic_Cameron_Pokemon
	.globl gText_Rom_5F2E29
gText_Rom_5F2E29: @ 0x085F2E29
	.string "ふしぎな ちからを もつ ヤツ$"
	.if (. - gText_Rom_5F2E29) > 0x10
	.error "gText_Rom_5F2E29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E29) < 0x10
	.space 0x10 - (. - gText_Rom_5F2E29)
	.endif
