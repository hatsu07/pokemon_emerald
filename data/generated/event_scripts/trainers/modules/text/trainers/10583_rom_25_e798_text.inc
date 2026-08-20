	@ data/text/trainers.inc:1964 Route119_Text_DougIntro (+1 aliases)
	.globl gText_Rom_25E798
gText_Rom_25E798: @ 0x0825E798
	.string "やっと ボクを つかまえられたね!\nそれとも にげようと していたのかな?{EOS}"
	.if (. - gText_Rom_25E798) > 0x26
	.error "gText_Rom_25E798 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E798) < 0x26
	.space 0x26 - (. - gText_Rom_25E798)
	.endif
