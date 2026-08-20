	@ data/text/trainers.inc:1955 Route119_Text_TaylorIntro (+1 aliases)
	.globl gText_Rom_25E72A
gText_Rom_25E72A: @ 0x0825E72A
	.string "きみが まえに すすんだら\nぼくらも すすむ\pきみが みぎへ まがれば\nぼくらも まがる……{EOS}"
	.if (. - gText_Rom_25E72A) > 0x2f
	.error "gText_Rom_25E72A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E72A) < 0x2f
	.space 0x2f - (. - gText_Rom_25E72A)
	.endif
