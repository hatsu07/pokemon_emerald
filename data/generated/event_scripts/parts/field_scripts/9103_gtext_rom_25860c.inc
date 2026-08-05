	@ field-script:0x258DEB FieldScriptText_25860C
	.globl gText_Rom_25860C
gText_Rom_25860C: @ 0x0825860C
	.string "じゃあ　ポロックの　つくりかたは\nもう　しってるかい？"
	.byte EOS
	.if (. - gText_Rom_25860C) > 0x1c
	.error "gText_Rom_25860C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25860C) < 0x1c
	.space 0x1c - (. - gText_Rom_25860C)
	.endif
