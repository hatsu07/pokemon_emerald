	@ src/pokenav_match_call_data.c:360 pokenav_match_call_data_line_360
	.globl gText_Rom_5F73C1
gText_Rom_5F73C1: @ 0x085F73C1
	.string "しんしゅつきぼつ$"
	.if (. - gText_Rom_5F73C1) > 0x9
	.error "gText_Rom_5F73C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73C1) < 0x9
	.space 0x9 - (. - gText_Rom_5F73C1)
	.endif
