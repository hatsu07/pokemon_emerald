	@ data/text/secret_base_trainers.inc:19 SecretBase_Text_Trainer5Intro
	.globl gText_Rom_2451FC
gText_Rom_2451FC: @ 0x082451FC
	.string "ひみつきちを つくれる ばしょは\nほかにも たくさん あるけど\lここが いちばん きにいったの!\pねっ! すてきでしょ!\pあっ もし よかったら\nポケモン しょうぶ しない?$"
	.if (. - gText_Rom_2451FC) > 0x58
	.error "gText_Rom_2451FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2451FC) < 0x58
	.space 0x58 - (. - gText_Rom_2451FC)
	.endif
