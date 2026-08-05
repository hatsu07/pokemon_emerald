	@ src/data/text/match_call_messages.h:294 gText_MatchCallPkmnRanger_Jackson_Intro2
	.globl gText_Rom_5F358A
gText_Rom_5F358A: @ 0x085F358A
	.string "ぜったいに ゆるさない!$"
	.if (. - gText_Rom_5F358A) > 0xd
	.error "gText_Rom_5F358A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F358A) < 0xd
	.space 0xd - (. - gText_Rom_5F358A)
	.endif
