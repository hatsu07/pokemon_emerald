	@ data/maps/SootopolisCity/scripts.inc:1462 SootopolisCity_Text_SootopolisSkyBeautiful
	.globl gText_Rom_1E317C
gText_Rom_1E317C: @ 0x081E317C
	.string "ルネは かざんの\nかこうの なかに できた まち\pうえを みあげると\nかこうも いっしょに みえてしまって\lそらの すべては みえない\pでも だからこそ\nルネから みえる そらが\lいちばん うつくしいの$"
	.if (. - gText_Rom_1E317C) > 0x66
	.error "gText_Rom_1E317C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E317C) < 0x66
	.space 0x66 - (. - gText_Rom_1E317C)
	.endif
