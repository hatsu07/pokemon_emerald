	@ data/text/berries.inc:188 Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries
	.globl gText_Rom_263ED1
gText_Rom_263ED1: @ 0x08263ED1
	.string "きのみは うめて おおきく したり\nポケモンに もたせたり できるの\pでも さいきん きのみを いくつか まぜると\nポケモンの おかしになる きかいが\lある らしいんだ\pあたしも おかし ほしー$"
	.if (. - gText_Rom_263ED1) > 0x62
	.error "gText_Rom_263ED1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263ED1) < 0x62
	.space 0x62 - (. - gText_Rom_263ED1)
	.endif
