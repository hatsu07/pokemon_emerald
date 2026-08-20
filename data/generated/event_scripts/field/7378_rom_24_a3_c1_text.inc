	@ field-script:0x2497A0 FieldScriptText_24A3C1
	.globl gText_Rom_24A3C1
gText_Rom_24A3C1: @ 0x0824A3C1
	.string "しんさいん『では…　はっぴょう　します！{EOS}"
	.if (. - gText_Rom_24A3C1) > 0x15
	.error "gText_Rom_24A3C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A3C1) < 0x15
	.space 0x15 - (. - gText_Rom_24A3C1)
	.endif
