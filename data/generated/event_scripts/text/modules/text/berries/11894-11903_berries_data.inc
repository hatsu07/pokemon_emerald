
	@ data/text/berries.inc:166 Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis
	.globl gText_Rom_263DE8
gText_Rom_263DE8: @ 0x08263DE8
	.string "こんにちは!\pおはなは せわを すれば するほど\nたくさん きれいに さいて くれるの\pあなたも せわを したく なった でしょ?\nこれ あげるわ$"
	.if (. - gText_Rom_263DE8) > 0x4a
	.error "gText_Rom_263DE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263DE8) < 0x4a
	.space 0x4a - (. - gText_Rom_263DE8)
	.endif

	@ data/text/berries.inc:173 Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation
	.globl gText_Rom_263E32
gText_Rom_263E32: @ 0x08263E32
	.string "きのみが そだつ たびに\nじょうろで みずを あげてね!\pあとね\pきのみは ずっと ずっと ほうっておくと\nじめんに おちてしまうの\lでもね そこから また めがでて くるの!\pすごいよね!\nいきものの ちからを かんじるよね$"
	.if (. - gText_Rom_263E32) > 0x72
	.error "gText_Rom_263E32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263E32) < 0x72
	.space 0x72 - (. - gText_Rom_263E32)
	.endif

	@ data/text/berries.inc:183 Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers
	.globl gText_Rom_263EA4
gText_Rom_263EA4: @ 0x08263EA4
	.string "おねーちゃんたちを みならって\nがんばって おはなを そだててるの\pはい! これあげる!$"
	.if (. - gText_Rom_263EA4) > 0x2d
	.error "gText_Rom_263EA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263EA4) < 0x2d
	.space 0x2d - (. - gText_Rom_263EA4)
	.endif

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

	@ data/text/berries.inc:196 SootopolisCity_Text_NameIsKiriHaveOneOfThese
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_263F33
gText_Rom_263F33: @ 0x08263F33
	.string "{STR_VAR_1} なまえ なんていうの?\p……… ……… ………\nへー いいねー\pわたしは キリ っていう なまえなの\pパパと ママが すくすくと そだって\nこころの あたたかい おんなのこに なって\lほしいっていう ねがいを こめたんだって!\p{STR_VAR_1}にも これ あげる$"
	.if (. - gText_Rom_263F33) != 0x81
	.error "gText_Rom_263F33 must retain its original byte length"
	.endif
