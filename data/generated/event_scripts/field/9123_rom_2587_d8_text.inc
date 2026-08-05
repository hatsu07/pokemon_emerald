	@ field-script:0x258E96 FieldScriptText_2587D8
	.globl gText_Rom_2587D8
gText_Rom_2587D8: @ 0x082587D8
	.string "よっしっ！　おにいさん　たちと　いっしょに\nポロックを　つくりたいんだね！"
	.byte EOS
	.if (. - gText_Rom_2587D8) > 0x26
	.error "gText_Rom_2587D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2587D8) < 0x26
	.space 0x26 - (. - gText_Rom_2587D8)
	.endif
