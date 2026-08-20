	@ data/text/trainers.inc:3341 Route133_Text_ConorDefeat (+1 aliases)
	.globl gText_Rom_26203E
gText_Rom_26203E: @ 0x0826203E
	.string "きみは しっかりしとるな{EOS}"
	.if (. - gText_Rom_26203E) > 0xd
	.error "gText_Rom_26203E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26203E) < 0xd
	.space 0xd - (. - gText_Rom_26203E)
	.endif
