	@ data/text/trainers.inc:3062 Route129_Text_ChaseIntro (+1 aliases)
	.globl gText_Rom_261517
gText_Rom_261517: @ 0x08261517
	.string "オレは しょしんしゃ トライアスリート\nはじめての レースで きんちょう!{EOS}"
	.if (. - gText_Rom_261517) > 0x26
	.error "gText_Rom_261517 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261517) < 0x26
	.space 0x26 - (. - gText_Rom_261517)
	.endif
