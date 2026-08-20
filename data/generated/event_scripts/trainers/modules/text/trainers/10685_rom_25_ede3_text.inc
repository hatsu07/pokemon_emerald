	@ data/text/trainers.inc:2117 Route120_Text_ColinDefeat (+1 aliases)
	.globl gText_Rom_25EDE3
gText_Rom_25EDE3: @ 0x0825EDE3
	.string "キミの ほうが\nいちまい うわて だった!{EOS}"
	.if (. - gText_Rom_25EDE3) > 0x16
	.error "gText_Rom_25EDE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EDE3) < 0x16
	.space 0x16 - (. - gText_Rom_25EDE3)
	.endif
