	@ field-script:0x235B2A FieldScriptText_236561
	.globl gText_Rom_236561
gText_Rom_236561: @ 0x08236561
	.string "おきゃくさま……\nバトルポイントが　たりません……"
	.byte EOS
	.if (. - gText_Rom_236561) > 0x1a
	.error "gText_Rom_236561 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236561) < 0x1a
	.space 0x1a - (. - gText_Rom_236561)
	.endif
