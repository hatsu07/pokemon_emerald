	@ src/data/text/match_call_messages.h:124 gText_MatchCallPsychic_Cameron_Intro2
	.globl gText_Rom_5F2E44
gText_Rom_5F2E44: @ 0x085F2E44
	.string "すべて おみとおしだ!$"
	.if (. - gText_Rom_5F2E44) > 0xc
	.error "gText_Rom_5F2E44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E44) < 0xc
	.space 0xc - (. - gText_Rom_5F2E44)
	.endif
