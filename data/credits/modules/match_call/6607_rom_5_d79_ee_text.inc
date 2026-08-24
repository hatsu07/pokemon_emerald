	@ src/match_call.c:1204 sText_PokenavCallEllipsis
	.globl sText_PokenavCallEllipsis
sText_PokenavCallEllipsis: @ 0x085D79EE
	.string "…………\p{EOS}"
	.if (. - sText_PokenavCallEllipsis) > 0x6
	.error "sText_PokenavCallEllipsis may not grow beyond its original slot"
	.endif
	.if (. - sText_PokenavCallEllipsis) < 0x6
	.space 0x6 - (. - sText_PokenavCallEllipsis)
	.endif
