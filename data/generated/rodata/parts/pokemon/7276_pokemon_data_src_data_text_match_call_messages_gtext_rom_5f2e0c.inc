	@ src/data/text/match_call_messages.h:119 gText_MatchCallBugManiac_Jeffrey_Intro2
	.globl gText_Rom_5F2E0C
gText_Rom_5F2E0C: @ 0x085F2E0C
	.string "むしポケモン つかまえる……$"
	.if (. - gText_Rom_5F2E0C) > 0xf
	.error "gText_Rom_5F2E0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E0C) < 0xf
	.space 0xf - (. - gText_Rom_5F2E0C)
	.endif
