	@ data/maps/LilycoveCity/scripts.inc:609 LilycoveCity_Text_SomeonePuntedTeamAquaOut
	.globl gText_Rom_1E0F57
gText_Rom_1E0F57: @ 0x081E0F57
	.string "あんた しってるかい?\pだれかが アクアだんを\nけちらしてくれた らしいんだ!\pおかげで ホエルコ いなくなって\nうみに でられるように なったよ!{EOS}"
	.if (. - gText_Rom_1E0F57) > 0x4b
	.error "gText_Rom_1E0F57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0F57) < 0x4b
	.space 0x4b - (. - gText_Rom_1E0F57)
	.endif
