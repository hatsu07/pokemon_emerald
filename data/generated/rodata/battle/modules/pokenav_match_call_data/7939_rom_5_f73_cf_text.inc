	@ src/pokenav_match_call_data.c:380 pokenav_match_call_data_line_380
	.globl gText_Rom_5F73CF
gText_Rom_5F73CF: @ 0x085F73CF
	.string "いわのゆうとうせい$"
	.if (. - gText_Rom_5F73CF) > 0xa
	.error "gText_Rom_5F73CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73CF) < 0xa
	.space 0xa - (. - gText_Rom_5F73CF)
	.endif
