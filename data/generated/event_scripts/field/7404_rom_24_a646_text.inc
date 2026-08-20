	@ field-script:0x207195 FieldScriptText_24A646
	.globl gText_Rom_24A646
gText_Rom_24A646: @ 0x0824A646
	.string "おたがいの　せんたくが　ちがっているようです{EOS}"
	.if (. - gText_Rom_24A646) > 0x17
	.error "gText_Rom_24A646 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A646) < 0x17
	.space 0x17 - (. - gText_Rom_24A646)
	.endif
