	@ field-script:0x249981 FieldScriptText_24A425
	.globl gText_Rom_24A425
gText_Rom_24A425: @ 0x0824A425
	.string "しかい『さあ！\nしょうひんを　おうけとり　ください！{EOS}"
	.if (. - gText_Rom_24A425) > 0x1b
	.error "gText_Rom_24A425 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A425) < 0x1b
	.space 0x1b - (. - gText_Rom_24A425)
	.endif
