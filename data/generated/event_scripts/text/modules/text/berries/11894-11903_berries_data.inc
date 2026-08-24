
	@ data/text/berries.inc:166 Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis
	.globl Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis
Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis: @ 0x08263DE8
	.string "こんにちは!\pおはなは せわを すれば するほど\nたくさん きれいに さいて くれるの\pあなたも せわを したく なった でしょ?\nこれ あげるわ{EOS}"
	.if (. - Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis) > 0x4a
	.error "Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis may not grow beyond its original slot"
	.endif
	.if (. - Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis) < 0x4a
	.space 0x4a - (. - Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis)
	.endif

	@ data/text/berries.inc:173 Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation
	.globl Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation
Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation: @ 0x08263E32
	.string "きのみが そだつ たびに\nじょうろで みずを あげてね!\pあとね\pきのみは ずっと ずっと ほうっておくと\nじめんに おちてしまうの\lでもね そこから また めがでて くるの!\pすごいよね!\nいきものの ちからを かんじるよね{EOS}"
	.if (. - Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation) > 0x72
	.error "Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation may not grow beyond its original slot"
	.endif
	.if (. - Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation) < 0x72
	.space 0x72 - (. - Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation)
	.endif

	@ data/text/berries.inc:183 Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers
	.globl Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers
Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers: @ 0x08263EA4
	.string "おねーちゃんたちを みならって\nがんばって おはなを そだててるの\pはい! これあげる!{EOS}"
	.if (. - Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers) > 0x2d
	.error "Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers may not grow beyond its original slot"
	.endif
	.if (. - Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers) < 0x2d
	.space 0x2d - (. - Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers)
	.endif

	@ data/text/berries.inc:188 Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries
	.globl Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries
Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries: @ 0x08263ED1
	.string "きのみは うめて おおきく したり\nポケモンに もたせたり できるの\pでも さいきん きのみを いくつか まぜると\nポケモンの おかしになる きかいが\lある らしいんだ\pあたしも おかし ほしー{EOS}"
	.if (. - Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries) > 0x62
	.error "Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries may not grow beyond its original slot"
	.endif
	.if (. - Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries) < 0x62
	.space 0x62 - (. - Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries)
	.endif

	@ data/text/berries.inc:196 SootopolisCity_Text_NameIsKiriHaveOneOfThese
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SootopolisCity_Text_NameIsKiriHaveOneOfThese
SootopolisCity_Text_NameIsKiriHaveOneOfThese: @ 0x08263F33
	.string "{STR_VAR_1} なまえ なんていうの?\p……… ……… ………\nへー いいねー\pわたしは キリ っていう なまえなの\pパパと ママが すくすくと そだって\nこころの あたたかい おんなのこに なって\lほしいっていう ねがいを こめたんだって!\p{STR_VAR_1}にも これ あげる{EOS}"
	.if (. - SootopolisCity_Text_NameIsKiriHaveOneOfThese) != 0x81
	.error "SootopolisCity_Text_NameIsKiriHaveOneOfThese must retain its original byte length"
	.endif
