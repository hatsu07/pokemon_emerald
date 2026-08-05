	@ src/data/text/match_call_messages.h:117 gText_MatchCallBugManiac_Jeffrey_Pokemon
	.globl gText_Rom_5F2DEC
gText_Rom_5F2DEC: @ 0x085F2DEC
	.string "むしポケモンって かっこいいぜ$"
	.if (. - gText_Rom_5F2DEC) > 0x10
	.error "gText_Rom_5F2DEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2DEC) < 0x10
	.space 0x10 - (. - gText_Rom_5F2DEC)
	.endif
