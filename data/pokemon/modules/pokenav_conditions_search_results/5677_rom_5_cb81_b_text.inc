	@ src/pokenav_conditions_search_results.c:25 gText_NumberIndex
	.globl gText_NumberIndex
gText_NumberIndex: @ 0x085CB81B
	.string "{DYNAMIC 0}ばんめ{EOS}"
	.if (. - gText_NumberIndex) > 0x6
	.error "gText_NumberIndex may not grow beyond its original slot"
	.endif
	.if (. - gText_NumberIndex) < 0x6
	.space 0x6 - (. - gText_NumberIndex)
	.endif
