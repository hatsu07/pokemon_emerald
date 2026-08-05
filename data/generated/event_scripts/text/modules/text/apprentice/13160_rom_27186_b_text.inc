	@ data/text/apprentice.inc:658 gText_ApprenticeMonThanks13
	.globl gText_Rom_27186B
gText_Rom_27186B: @ 0x0827186B
	.string "ん わかった {STR_VAR_1}な!\nじゃあ たいちょうの いいときに\lさがしてみるよ!\pこれからも おれを よろしく たのむよ!$"
	.if (. - gText_Rom_27186B) > 0x3b
	.error "gText_Rom_27186B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27186B) < 0x3b
	.space 0x3b - (. - gText_Rom_27186B)
	.endif
