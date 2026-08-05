	@ src/data/text/match_call_messages.h:337 gText_MatchCallSwellShock_Wattson_Pokemon
	.globl gText_Rom_5F3750
gText_Rom_5F3750: @ 0x085F3750
	.string "でんきの パワーを くらえ!$"
	.if (. - gText_Rom_5F3750) > 0xf
	.error "gText_Rom_5F3750 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3750) < 0xf
	.space 0xf - (. - gText_Rom_5F3750)
	.endif
