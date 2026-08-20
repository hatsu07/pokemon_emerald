	@ data/text/trainers.inc:3359 Route134_Text_LaurelDefeat (+1 aliases)
	.globl gText_Rom_2620CE
gText_Rom_2620CE: @ 0x082620CE
	.string "あらららららっ!{EOS}"
	.if (. - gText_Rom_2620CE) > 0x9
	.error "gText_Rom_2620CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2620CE) < 0x9
	.space 0x9 - (. - gText_Rom_2620CE)
	.endif
