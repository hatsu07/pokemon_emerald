	@ field-script:0x25641B FieldScriptText_256397
	.globl gText_Rom_256397
gText_Rom_256397: @ 0x08256397
	.string "あと　おもったんだけどさ…"
	.byte EOS
	.if (. - gText_Rom_256397) > 0xe
	.error "gText_Rom_256397 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_256397) < 0xe
	.space 0xe - (. - gText_Rom_256397)
	.endif
