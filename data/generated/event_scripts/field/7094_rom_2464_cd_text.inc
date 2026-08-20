	@ field-script:0x246529 FieldScriptText_2464CD
	.globl gText_Rom_2464CD
gText_Rom_2464CD: @ 0x082464CD
	.string "そう　いらないんだ…\nほしくなったら　また　こえかけてね！{EOS}"
	.if (. - gText_Rom_2464CD) > 0x1e
	.error "gText_Rom_2464CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2464CD) < 0x1e
	.space 0x1e - (. - gText_Rom_2464CD)
	.endif
