	@ field-script:0x23A456 FieldScriptText_23AA0C
	.globl gText_Rom_23AA0C
gText_Rom_23AA0C: @ 0x0823AA0C
	.string "バトルピラミッドは　きょだいな\nピラミッドの　かたちをした　たてものです\pこちらでは　バトルアドベンチャー　という\nイベントを　かいさい　しております！"
	.byte EOS
	.if (. - gText_Rom_23AA0C) > 0x4d
	.error "gText_Rom_23AA0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23AA0C) < 0x4d
	.space 0x4d - (. - gText_Rom_23AA0C)
	.endif
