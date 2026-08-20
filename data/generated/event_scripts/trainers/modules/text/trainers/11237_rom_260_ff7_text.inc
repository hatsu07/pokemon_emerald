	@ data/text/trainers.inc:2936 Route127_Text_AidanIntro (+1 aliases)
	.globl gText_Rom_260FF7
gText_Rom_260FF7: @ 0x08260FF7
	.string "とりポケモンは すごく めが いい!\nおおぞら たかくから えものを みつけるぜ!{EOS}"
	.if (. - gText_Rom_260FF7) > 0x2a
	.error "gText_Rom_260FF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260FF7) < 0x2a
	.space 0x2a - (. - gText_Rom_260FF7)
	.endif
