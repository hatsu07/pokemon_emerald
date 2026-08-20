	@ data/text/trainers.inc:2201 Route120_Text_ClarissaIntro (+1 aliases)
	.globl gText_Rom_25F184
gText_Rom_25F184: @ 0x0825F184
	.string "あたしが パラソルを もってる りゆう?\pうふふ あたしに かてたら\nおしえて あげても いいかな?{EOS}"
	.if (. - gText_Rom_25F184) > 0x33
	.error "gText_Rom_25F184 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F184) < 0x33
	.space 0x33 - (. - gText_Rom_25F184)
	.endif
