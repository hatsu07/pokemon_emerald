	@ data/text/trainers.inc:2105 Route119_Text_RachelIntro (+1 aliases)
	.globl gText_Rom_25ED6F
gText_Rom_25ED6F: @ 0x0825ED6F
	.string "いつでも どこでも\nパラソルを てばなさないの!{EOS}"
	.if (. - gText_Rom_25ED6F) > 0x19
	.error "gText_Rom_25ED6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ED6F) < 0x19
	.space 0x19 - (. - gText_Rom_25ED6F)
	.endif
