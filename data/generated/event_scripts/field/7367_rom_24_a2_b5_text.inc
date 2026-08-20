	@ field-script:0x2490F4 FieldScriptText_24A2B5
	.globl gText_Rom_24A2B5
gText_Rom_24A2B5: @ 0x0824A2B5
	.string "　　　　とうひょう　ちゅう…{EOS}"
	.if (. - gText_Rom_24A2B5) > 0xf
	.error "gText_Rom_24A2B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A2B5) < 0xf
	.space 0xf - (. - gText_Rom_24A2B5)
	.endif
