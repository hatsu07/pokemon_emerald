	@ src/pokenav_match_call_data.c:653 gText_MatchCallMay_Strategy
	.globl gText_Rom_5CC836
gText_Rom_5CC836: @ 0x085CC836
	.string "しょうぶは とくいじゃないかも$"
	.if (. - gText_Rom_5CC836) > 0x10
	.error "gText_Rom_5CC836 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC836) < 0x10
	.space 0x10 - (. - gText_Rom_5CC836)
	.endif
