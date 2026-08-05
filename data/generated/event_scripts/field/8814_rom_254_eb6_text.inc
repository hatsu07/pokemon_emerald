	@ field-script:0x255068 FieldScriptText_254EB6
	.globl gText_Rom_254EB6
gText_Rom_254EB6: @ 0x08254EB6
	.string "わし　グッズこうかんオヤジ\nわしと　グッズの　こうかん　する？"
	.byte EOS
	.if (. - gText_Rom_254EB6) > 0x20
	.error "gText_Rom_254EB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254EB6) < 0x20
	.space 0x20 - (. - gText_Rom_254EB6)
	.endif
