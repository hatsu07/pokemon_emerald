	@ field-script:0x2229F4 FieldScriptText_222BE7
	.globl gText_Rom_222BE7
gText_Rom_222BE7: @ 0x08222BE7
	.string "ここは　バトルアリーナ！\nつどえ！　さいきょう　チーム！$"
	.if (. - gText_Rom_222BE7) > 0x1d
	.error "gText_Rom_222BE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222BE7) < 0x1d
	.space 0x1d - (. - gText_Rom_222BE7)
	.endif
