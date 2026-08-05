	@ field-script:0x2590D4 FieldScriptText_258B24
	.globl gText_Rom_258B24
gText_Rom_258B24: @ 0x08258B24
	.string "よっしっ！　きょうこそ\nブレンダーの　さいこうそくどを　だすぞ！"
	.byte EOS
	.if (. - gText_Rom_258B24) > 0x21
	.error "gText_Rom_258B24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258B24) < 0x21
	.space 0x21 - (. - gText_Rom_258B24)
	.endif
