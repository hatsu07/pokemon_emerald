	@ data/text/blend_master.inc:40 BerryBlender_Text_BlendMasterLetsBerryBlender
	.globl gText_Rom_274891
gText_Rom_274891: @ 0x08274891
	.string "よしっ!\pでは はじめるぞ!\pめいじんと いっしょに\nレッツ きのみブレンダー!$"
	.if (. - gText_Rom_274891) > 0x29
	.error "gText_Rom_274891 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274891) < 0x29
	.space 0x29 - (. - gText_Rom_274891)
	.endif
