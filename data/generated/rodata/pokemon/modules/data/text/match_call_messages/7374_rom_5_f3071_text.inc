	@ src/data/text/match_call_messages.h:176 gText_MatchCallFisherman_Elliot_Strategy
	.globl gText_Rom_5F3071
gText_Rom_5F3071: @ 0x085F3071
	.string "じっくり たたかう!$"
	.if (. - gText_Rom_5F3071) > 0xb
	.error "gText_Rom_5F3071 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3071) < 0xb
	.space 0xb - (. - gText_Rom_5F3071)
	.endif
