	@ src/match_call.c:1204 sText_PokenavCallEllipsis
	.globl gText_Rom_5D79EE
gText_Rom_5D79EE: @ 0x085D79EE
	.string "…………\p$"
	.if (. - gText_Rom_5D79EE) > 0x6
	.error "gText_Rom_5D79EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D79EE) < 0x6
	.space 0x6 - (. - gText_Rom_5D79EE)
	.endif
