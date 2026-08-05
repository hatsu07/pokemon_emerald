	@ data/text/blend_master.inc:65 BerryBlender_Text_WickedlyFast
	.globl gText_Rom_274961
gText_Rom_274961: @ 0x08274961
	.string "はぇー!$"
	.if (. - gText_Rom_274961) > 0x5
	.error "gText_Rom_274961 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274961) < 0x5
	.space 0x5 - (. - gText_Rom_274961)
	.endif
