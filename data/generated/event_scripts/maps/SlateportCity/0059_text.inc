	@ data/maps/SlateportCity/scripts.inc:1063 SlateportCity_Text_ShouldveBroughtMyGameBoy
	.globl gText_Rom_1DCECA
gText_Rom_1DCECA: @ 0x081DCECA
	.string "ぶつぶつぶつ……\pゲームボーイが あれば\nぎょうれつも たいくつ しないぜ\pぶつぶつぶつ……$"
	.if (. - gText_Rom_1DCECA) > 0x2f
	.error "gText_Rom_1DCECA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCECA) < 0x2f
	.space 0x2f - (. - gText_Rom_1DCECA)
	.endif
