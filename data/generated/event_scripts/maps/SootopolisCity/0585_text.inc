	@ data/maps/SootopolisCity/scripts.inc:1516 SootopolisCity_Text_AquaMagmaDidntMeanHarm
	.globl gText_Rom_1E37B8
gText_Rom_1E37B8: @ 0x081E37B8
	.string "ミクリ『{PLAYER}{KUN}……\pマグマだんと アクアだんの ふたりも\nきっと わるぎは なかったの だろうね\pちょっと かれらの はなしを\nきいてやって みては どうかな……{EOS}"
	.if (. - gText_Rom_1E37B8) > 0x53
	.error "gText_Rom_1E37B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E37B8) < 0x53
	.space 0x53 - (. - gText_Rom_1E37B8)
	.endif
