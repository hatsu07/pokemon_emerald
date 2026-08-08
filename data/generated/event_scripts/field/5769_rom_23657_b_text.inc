	@ field-script:0x235BAD FieldScriptText_23657B
	.globl gText_Rom_23657B
gText_Rom_23657B: @ 0x0823657B
	.string "おきゃくさま……\nパソコンが　いっぱいの　ようです……"
	.byte EOS
	.if (. - gText_Rom_23657B) > 0x1c
	.error "gText_Rom_23657B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23657B) < 0x1c
	.space 0x1c - (. - gText_Rom_23657B)
	.endif
