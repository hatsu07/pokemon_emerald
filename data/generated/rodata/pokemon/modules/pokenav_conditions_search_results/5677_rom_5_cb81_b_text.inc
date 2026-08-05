	@ src/pokenav_conditions_search_results.c:25 gText_NumberIndex
	.globl gText_Rom_5CB81B
gText_Rom_5CB81B: @ 0x085CB81B
	.string "{DYNAMIC 0}ばんめ$"
	.if (. - gText_Rom_5CB81B) > 0x6
	.error "gText_Rom_5CB81B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB81B) < 0x6
	.space 0x6 - (. - gText_Rom_5CB81B)
	.endif
