	@ data/maps/AquaHideout_1F/scripts.inc:56 AquaHideout_1F_Text_WhereMightMagmaHideoutBe
	.globl gText_Rom_217A3C
gText_Rom_217A3C: @ 0x08217A3C
	.string "なんだ なんだ!\nおまえは マグマだんの したっぱか!?\pマグマだんめ アジトで すごいポケモンを\nめざめさせる つもり らしいな!\pえーい! アジトは\nいったい どこに あるって いうんだ!$"
	.if (. - gText_Rom_217A3C) > 0x61
	.error "gText_Rom_217A3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217A3C) < 0x61
	.space 0x61 - (. - gText_Rom_217A3C)
	.endif
