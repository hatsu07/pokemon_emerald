	@ data/text/blend_master.inc:24 BerryBlender_Text_BlendMasterKnowHowToMakePokeblocks
	.globl gText_Rom_2747F1
gText_Rom_2747F1: @ 0x082747F1
	.string "そうじゃろう!\nそうじゃろう!\pとろころで おぬし……\nむろん ポロックの つくりかたは\lしっておる じゃろうな?$"
	.if (. - gText_Rom_2747F1) > 0x3a
	.error "gText_Rom_2747F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2747F1) < 0x3a
	.space 0x3a - (. - gText_Rom_2747F1)
	.endif
