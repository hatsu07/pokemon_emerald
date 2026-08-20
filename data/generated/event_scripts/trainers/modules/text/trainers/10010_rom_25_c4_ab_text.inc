	@ data/text/trainers.inc:1133 Route112_Text_CarolDefeat (+1 aliases)
	.globl gText_Rom_25C4AB
gText_Rom_25C4AB: @ 0x0825C4AB
	.string "こんなに つよいなんて……!{EOS}"
	.if (. - gText_Rom_25C4AB) > 0xf
	.error "gText_Rom_25C4AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C4AB) < 0xf
	.space 0xf - (. - gText_Rom_25C4AB)
	.endif
