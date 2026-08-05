	@ src/data/text/match_call_messages.h:336 gText_MatchCallSwellShock_Wattson_Strategy
	.globl gText_Rom_5F3743
gText_Rom_5F3743: @ 0x085F3743
	.string "ビリビリ しびれ させる$"
	.if (. - gText_Rom_5F3743) > 0xd
	.error "gText_Rom_5F3743 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3743) < 0xd
	.space 0xd - (. - gText_Rom_5F3743)
	.endif
