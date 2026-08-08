	@ data/text/trainers.inc:25 Route102_Text_AllenIntro (+1 aliases)
	.globl gText_Rom_25963A
gText_Rom_25963A: @ 0x0825963A
	.string "きみ トレーナーに なったばかり?\nおたがい しょしんしゃ だね!"
	.byte EOS
	.if (. - gText_Rom_25963A) > 0x22
	.error "gText_Rom_25963A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25963A) < 0x22
	.space 0x22 - (. - gText_Rom_25963A)
	.endif
