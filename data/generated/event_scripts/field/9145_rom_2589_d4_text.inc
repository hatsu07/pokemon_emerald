	@ field-script:0x258FA0 FieldScriptText_2589D4
	.globl gText_Rom_2589D4
gText_Rom_2589D4: @ 0x082589D4
	.string "じゃあ　もちろん　ポロックの　つくりかたは\nしっているわね？"
	.byte EOS
	.if (. - gText_Rom_2589D4) > 0x1f
	.error "gText_Rom_2589D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2589D4) < 0x1f
	.space 0x1f - (. - gText_Rom_2589D4)
	.endif
