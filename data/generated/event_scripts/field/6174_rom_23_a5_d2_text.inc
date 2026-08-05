	@ field-script:0x23A264 FieldScriptText_23A5D2
	.globl gText_Rom_23A5D2
gText_Rom_23A5D2: @ 0x0823A5D2
	.string "はじめての　おきゃくさまですね！\nこちらへ　どうぞ！"
	.byte EOS
	.if (. - gText_Rom_23A5D2) > 0x1b
	.error "gText_Rom_23A5D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A5D2) < 0x1b
	.space 0x1b - (. - gText_Rom_23A5D2)
	.endif
