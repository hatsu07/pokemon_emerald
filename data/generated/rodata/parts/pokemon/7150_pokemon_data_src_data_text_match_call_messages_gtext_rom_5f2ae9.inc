	@ src/data/text/match_call_messages.h:46 gText_MatchCallHexManiac_Valerie_Strategy
	.globl gText_Rom_5F2AE9
gText_Rom_5F2AE9: @ 0x085F2AE9
	.string "じわりじわりと くるしめます$"
	.if (. - gText_Rom_5F2AE9) > 0xf
	.error "gText_Rom_5F2AE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2AE9) < 0xf
	.space 0xf - (. - gText_Rom_5F2AE9)
	.endif
