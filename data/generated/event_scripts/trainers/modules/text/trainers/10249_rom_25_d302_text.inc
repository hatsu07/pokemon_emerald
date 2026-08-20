	@ data/text/trainers.inc:1484 Route115_Text_CyndyIntro (+1 aliases)
	.globl gText_Rom_25D302
gText_Rom_25D302: @ 0x0825D302
	.string "この すなはまは わたしの\nヒミツの しゅぎょう ばしょ!\lかってに はいって こないでよ!{EOS}"
	.if (. - gText_Rom_25D302) > 0x2f
	.error "gText_Rom_25D302 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D302) < 0x2f
	.space 0x2f - (. - gText_Rom_25D302)
	.endif
