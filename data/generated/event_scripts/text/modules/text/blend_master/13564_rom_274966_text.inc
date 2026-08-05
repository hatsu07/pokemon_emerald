	@ data/text/blend_master.inc:68 BerryBlender_Text_WhatAnExpert
	.globl gText_Rom_274966
gText_Rom_274966: @ 0x08274966
	.string "うめぇー!$"
	.if (. - gText_Rom_274966) > 0x6
	.error "gText_Rom_274966 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274966) < 0x6
	.space 0x6 - (. - gText_Rom_274966)
	.endif
