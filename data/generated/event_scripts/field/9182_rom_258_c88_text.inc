	@ field-script:0x2590FC FieldScriptText_258C88
	.globl gText_Rom_258C88
gText_Rom_258C88: @ 0x08258C88
	.string "わしは　ポロックを\nつくるのが　だいすきで\pいつも　きのみを\nもって　きてるんだ"
	.byte EOS
	.if (. - gText_Rom_258C88) > 0x29
	.error "gText_Rom_258C88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258C88) < 0x29
	.space 0x29 - (. - gText_Rom_258C88)
	.endif
