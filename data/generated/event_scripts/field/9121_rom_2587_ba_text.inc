	@ field-script:0x206E33 FieldScriptText_2587BA
	.globl gText_Rom_2587BA
gText_Rom_2587BA: @ 0x082587BA
	.string "どんな　ポロックが　できるのかしら？\nドキドキ　しちゃう！"
	.byte EOS
	.if (. - gText_Rom_2587BA) > 0x1e
	.error "gText_Rom_2587BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2587BA) < 0x1e
	.space 0x1e - (. - gText_Rom_2587BA)
	.endif
