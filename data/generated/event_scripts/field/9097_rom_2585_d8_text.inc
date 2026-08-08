	@ field-script:0x258D89 FieldScriptText_2585D8
	.globl gText_Rom_2585D8
gText_Rom_2585D8: @ 0x082585D8
	.string "お！　おじさんと　いっしょに\nポロックを　つくりたいのかい？"
	.byte EOS
	.if (. - gText_Rom_2585D8) > 0x1f
	.error "gText_Rom_2585D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2585D8) < 0x1f
	.space 0x1f - (. - gText_Rom_2585D8)
	.endif
