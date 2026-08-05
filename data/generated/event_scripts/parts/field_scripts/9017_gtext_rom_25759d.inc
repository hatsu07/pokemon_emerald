	@ field-script:0x257324 FieldScriptText_25759D
	.globl gText_Rom_25759D
gText_Rom_25759D: @ 0x0825759D
	.string "あれ？　いまは　きが　のらないんだね？\pだったら　いつでも　いいよ！"
	.byte EOS
	.if (. - gText_Rom_25759D) > 0x23
	.error "gText_Rom_25759D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25759D) < 0x23
	.space 0x23 - (. - gText_Rom_25759D)
	.endif
