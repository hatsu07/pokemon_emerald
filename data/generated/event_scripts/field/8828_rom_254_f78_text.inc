	@ field-script:0x255116 FieldScriptText_254F78
	.globl gText_Rom_254F78
gText_Rom_254F78: @ 0x08254F78
	.string "じゃあ　こうかんに　だしてくれる\nグッズを　えらんで！"
	.byte EOS
	.if (. - gText_Rom_254F78) > 0x1c
	.error "gText_Rom_254F78 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254F78) < 0x1c
	.space 0x1c - (. - gText_Rom_254F78)
	.endif
