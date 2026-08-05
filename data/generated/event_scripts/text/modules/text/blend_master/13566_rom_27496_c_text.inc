	@ data/text/blend_master.inc:71 BerryBlender_Text_MadeAmazingPokeblocksWithMaster
	.globl gText_Rom_27496C
gText_Rom_27496C: @ 0x0827496C
	.string "めいじんと いっしょに やったら\nとっても すごい ポロック できたの$"
	.if (. - gText_Rom_27496C) > 0x24
	.error "gText_Rom_27496C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27496C) < 0x24
	.space 0x24 - (. - gText_Rom_27496C)
	.endif
