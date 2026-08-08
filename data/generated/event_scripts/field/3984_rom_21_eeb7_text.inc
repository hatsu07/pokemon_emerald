	@ field-script:0x21ECA4 FieldScriptText_21EEB7
	.globl gText_Rom_21EEB7
gText_Rom_21EEB7: @ 0x0821EEB7
	.string "ここは　バトルドーム！\nめざせ！　むてきの　スーパースター！"
	.byte EOS
	.if (. - gText_Rom_21EEB7) > 0x1f
	.error "gText_Rom_21EEB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EEB7) < 0x1f
	.space 0x1f - (. - gText_Rom_21EEB7)
	.endif
