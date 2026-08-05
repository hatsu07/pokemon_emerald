	@ src/data/text/match_call_messages.h:311 gText_MatchCallHiker_Sawyer_Strategy
	.globl gText_Rom_5F363C
gText_Rom_5F363C: @ 0x085F363C
	.string "あつく たたかうぞ!$"
	.if (. - gText_Rom_5F363C) > 0xb
	.error "gText_Rom_5F363C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F363C) < 0xb
	.space 0xb - (. - gText_Rom_5F363C)
	.endif
