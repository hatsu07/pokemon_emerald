	@ data/text/trainers.inc:2864 Route126_Text_LeonardoIntro (+1 aliases)
	.globl gText_Rom_260D55
gText_Rom_260D55: @ 0x08260D55
	.string "きょねん まで およげなかった オレも\nかいパンやろうに なれたんだ\lいまなら なんでも できる きがする!{EOS}"
	.if (. - gText_Rom_260D55) > 0x37
	.error "gText_Rom_260D55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260D55) < 0x37
	.space 0x37 - (. - gText_Rom_260D55)
	.endif
