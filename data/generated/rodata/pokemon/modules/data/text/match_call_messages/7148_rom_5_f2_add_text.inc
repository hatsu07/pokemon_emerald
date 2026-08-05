	@ src/data/text/match_call_messages.h:44 gText_MatchCallCooltrainer_Wilton_Intro2
	.globl gText_Rom_5F2ADD
gText_Rom_5F2ADD: @ 0x085F2ADD
	.string "ゆうとうせい なんだよ$"
	.if (. - gText_Rom_5F2ADD) > 0xc
	.error "gText_Rom_5F2ADD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2ADD) < 0xc
	.space 0xc - (. - gText_Rom_5F2ADD)
	.endif
