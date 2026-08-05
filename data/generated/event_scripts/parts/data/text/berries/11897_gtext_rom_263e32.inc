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
