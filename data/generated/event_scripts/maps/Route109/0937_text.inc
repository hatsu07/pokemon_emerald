	@ data/maps/Route109/scripts.inc:500 Route109_Text_ChillAtMyPapasSpot
	.globl gText_Rom_1E8C50
gText_Rom_1E8C50: @ 0x081E8C50
	.string "あつい トレーナーさんも\nあつくない トレーナーさんも\lおとうさんの おみせに よってってー!$"
	.if (. - gText_Rom_1E8C50) > 0x30
	.error "gText_Rom_1E8C50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E8C50) < 0x30
	.space 0x30 - (. - gText_Rom_1E8C50)
	.endif
