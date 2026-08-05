	@ src/data/text/match_call_messages.h:87 gText_MatchCallBlackBelt_Koji_Pokemon
	.globl gText_Rom_5F2C95
gText_Rom_5F2C95: @ 0x085F2C95
	.string "おれの れんしゅう あいて!$"
	.if (. - gText_Rom_5F2C95) > 0xf
	.error "gText_Rom_5F2C95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C95) < 0xf
	.space 0xf - (. - gText_Rom_5F2C95)
	.endif
