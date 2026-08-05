	@ src/pokenav_match_call_data.c:274 gText_MayBrendanMatchCallDesc
	.globl gText_Rom_5F7397
gText_Rom_5F7397: @ 0x085F7397
	.string "おとなりさん$"
	.if (. - gText_Rom_5F7397) > 0x7
	.error "gText_Rom_5F7397 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7397) < 0x7
	.space 0x7 - (. - gText_Rom_5F7397)
	.endif
