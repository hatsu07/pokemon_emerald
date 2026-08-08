	@ data/text/trainers.inc:2885 Route126_Text_SiennaDefeat (+1 aliases)
	.globl gText_Rom_260E31
gText_Rom_260E31: @ 0x08260E31
	.string "ハートで まけたわ!$"
	.if (. - gText_Rom_260E31) > 0xb
	.error "gText_Rom_260E31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260E31) < 0xb
	.space 0xb - (. - gText_Rom_260E31)
	.endif
