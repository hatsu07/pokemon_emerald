	@ field-script:0x21ECB6 FieldScriptText_21EEF6
	.globl gText_Rom_21EEF6
gText_Rom_21EEF6: @ 0x0821EEF6
	.string "ここは　バトルチューブ！\nえらべ！　3つの　みち！"
	.byte EOS
	.if (. - gText_Rom_21EEF6) > 0x1a
	.error "gText_Rom_21EEF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EEF6) < 0x1a
	.space 0x1a - (. - gText_Rom_21EEF6)
	.endif
