	@ data/text/berries.inc:214 SootopolisCity_Text_LikeSeasonBornIn
	.globl gText_Rom_263FF1
gText_Rom_263FF1: @ 0x08263FF1
	.string "はる なつ あき ふゆ\nはるに うまれると はるが すきで\lなつに うまれると なつが すきなのかな?$"
	.if (. - gText_Rom_263FF1) > 0x34
	.error "gText_Rom_263FF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263FF1) < 0x34
	.space 0x34 - (. - gText_Rom_263FF1)
	.endif
