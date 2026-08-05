	@ data/text/berries.inc:44 Route114_Text_FunToThinkAboutBerries
	.globl gText_Rom_263958
gText_Rom_263958: @ 0x08263958
	.string "どの きのみを うめるか?\nきのみは つかうのか ふやすのか?\pって なやむのも また たのしいよ$"
	.if (. - gText_Rom_263958) > 0x32
	.error "gText_Rom_263958 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263958) < 0x32
	.space 0x32 - (. - gText_Rom_263958)
	.endif
