	@ data/text/trainers.inc:737 Route110_Text_AnthonyIntro (+1 aliases)
	.globl gText_Rom_25B3DF
gText_Rom_25B3DF: @ 0x0825B3DF
	.string "ヘイ ユー!\nワタシの スピードに ついてこれるかな!?{EOS}"
	.if (. - gText_Rom_25B3DF) > 0x1d
	.error "gText_Rom_25B3DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B3DF) < 0x1d
	.space 0x1d - (. - gText_Rom_25B3DF)
	.endif
