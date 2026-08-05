	@ field-script:0x235422 FieldScriptText_2354D0
	.globl gText_Rom_2354D0
gText_Rom_2354D0: @ 0x082354D0
	.string "へー　すごいね！\nぼくも　がんばらなきゃ！"
	.byte EOS
	.if (. - gText_Rom_2354D0) > 0x16
	.error "gText_Rom_2354D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2354D0) < 0x16
	.space 0x16 - (. - gText_Rom_2354D0)
	.endif
