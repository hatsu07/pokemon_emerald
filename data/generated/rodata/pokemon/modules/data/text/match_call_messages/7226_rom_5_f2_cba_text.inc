	@ src/data/text/match_call_messages.h:91 gText_MatchCallGuitarist_Fernando_Strategy
	.globl gText_Rom_5F2CBA
gText_Rom_5F2CBA: @ 0x085F2CBA
	.string "しびれる サウンド だゼ!$"
	.if (. - gText_Rom_5F2CBA) > 0xe
	.error "gText_Rom_5F2CBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CBA) < 0xe
	.space 0xe - (. - gText_Rom_5F2CBA)
	.endif
