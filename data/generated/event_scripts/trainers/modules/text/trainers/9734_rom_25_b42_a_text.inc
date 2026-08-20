	@ data/text/trainers.inc:746 Route110_Text_BenjaminIntro (+1 aliases)
	.globl gText_Rom_25B42A
gText_Rom_25B42A: @ 0x0825B42A
	.string "じてんしゃの スピード でても\nあせっちゃ いけないよ!{EOS}"
	.if (. - gText_Rom_25B42A) > 0x1d
	.error "gText_Rom_25B42A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B42A) < 0x1d
	.space 0x1d - (. - gText_Rom_25B42A)
	.endif
