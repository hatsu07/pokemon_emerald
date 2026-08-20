	@ data/text/trainers.inc:347 Route105_Text_AndresIntro (+1 aliases)
	.globl gText_Rom_25A4A3
gText_Rom_25A4A3: @ 0x0825A4A3
	.string "うみに こそ なにかが あると\nかくしんが ある!{EOS}"
	.if (. - gText_Rom_25A4A3) > 0x1a
	.error "gText_Rom_25A4A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A4A3) < 0x1a
	.space 0x1a - (. - gText_Rom_25A4A3)
	.endif
