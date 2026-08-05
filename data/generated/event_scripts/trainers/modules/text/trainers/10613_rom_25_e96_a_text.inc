	@ data/text/trainers.inc:2009 Route119_Text_JacksonPostRematch
	.globl gText_Rom_25E96A
gText_Rom_25E96A: @ 0x0825E96A
	.string "とにかく ポケモンを しんじろ!\nじぶんを しんじろ!\lそうすれば みちは ひらける!$"
	.if (. - gText_Rom_25E96A) > 0x2c
	.error "gText_Rom_25E96A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E96A) < 0x2c
	.space 0x2c - (. - gText_Rom_25E96A)
	.endif
