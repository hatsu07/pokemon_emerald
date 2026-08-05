	@ data/text/secret_base_trainers.inc:34 SecretBase_Text_Trainer5PreChampion
	.globl gText_Rom_2452B2
gText_Rom_2452B2: @ 0x082452B2
	.string "ひみつきちを つくれる ばしょは\nほかにも たくさん あるけど\lここが いちばん きにいったの!\pねっ! すてきでしょ!$"
	.if (. - gText_Rom_2452B2) > 0x3d
	.error "gText_Rom_2452B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2452B2) < 0x3d
	.space 0x3d - (. - gText_Rom_2452B2)
	.endif
