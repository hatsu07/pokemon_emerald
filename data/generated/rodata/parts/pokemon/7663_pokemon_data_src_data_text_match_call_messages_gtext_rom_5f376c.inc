	@ src/data/text/match_call_messages.h:339 gText_MatchCallSwellShock_Wattson_Intro2
	.globl gText_Rom_5F376C
gText_Rom_5F376C: @ 0x085F376C
	.string "いかんぞ ……ワシもな$"
	.if (. - gText_Rom_5F376C) > 0xc
	.error "gText_Rom_5F376C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F376C) < 0xc
	.space 0xc - (. - gText_Rom_5F376C)
	.endif
