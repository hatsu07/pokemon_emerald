	@ field-script:0x23C439 FieldScriptText_23C5D9
	.globl gText_Rom_23C5D9
gText_Rom_23C5D9: @ 0x0823C5D9
	.string "あつーい　しょうぶ　みせてくれー！\pそのためだけに　わし\nこの　うみのいえを　やってるんだねー！"
	.byte EOS
	.if (. - gText_Rom_23C5D9) > 0x31
	.error "gText_Rom_23C5D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C5D9) < 0x31
	.space 0x31 - (. - gText_Rom_23C5D9)
	.endif
