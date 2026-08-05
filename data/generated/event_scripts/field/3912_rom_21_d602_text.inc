	@ field-script:0x245B4C FieldScriptText_21D602
	.globl gText_Rom_21D602
gText_Rom_21D602: @ 0x0821D602
	.string "ちいさな　どうくつを　はっけん！"
	.byte EOS
	.if (. - gText_Rom_21D602) > 0x11
	.error "gText_Rom_21D602 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21D602) < 0x11
	.space 0x11 - (. - gText_Rom_21D602)
	.endif
