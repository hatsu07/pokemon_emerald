	@ data/text/trainers.inc:1889 Route118_Text_BarnyIntro (+1 aliases)
	.globl gText_Rom_25E483
gText_Rom_25E483: @ 0x0825E483
	.string "あたしゃ つりびとだが トレーナーでもある\nつった ポケモン ちゃんと そだててるよ!$"
	.if (. - gText_Rom_25E483) > 0x2c
	.error "gText_Rom_25E483 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E483) < 0x2c
	.space 0x2c - (. - gText_Rom_25E483)
	.endif
