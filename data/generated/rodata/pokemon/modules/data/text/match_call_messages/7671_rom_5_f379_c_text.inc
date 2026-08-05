	@ src/data/text/match_call_messages.h:344 gText_MatchCallPassionBurn_Flannery_Intro2
	.globl gText_Rom_5F379C
gText_Rom_5F379C: @ 0x085F379C
	.string "おんせんで スッキリ!$"
	.if (. - gText_Rom_5F379C) > 0xc
	.error "gText_Rom_5F379C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F379C) < 0xc
	.space 0xc - (. - gText_Rom_5F379C)
	.endif
