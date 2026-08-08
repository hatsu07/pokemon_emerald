	@ field-script:0x2563C8 FieldScriptText_256362
	.globl gText_Rom_256362
gText_Rom_256362: @ 0x08256362
	.string "わし　メルヘンおやじ\nとても　いい　はなし　するよ\pわしの　ハナシ　ききたい？"
	.byte EOS
	.if (. - gText_Rom_256362) > 0x28
	.error "gText_Rom_256362 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_256362) < 0x28
	.space 0x28 - (. - gText_Rom_256362)
	.endif
