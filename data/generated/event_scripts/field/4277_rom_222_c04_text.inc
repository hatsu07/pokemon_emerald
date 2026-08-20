	@ field-script:0x2229FD FieldScriptText_222C04
	.globl gText_Rom_222C04
gText_Rom_222C04: @ 0x08222C04
	.string "ここは　バトルピラミッド！\nすすめ！　バトルアドベンチャー！{EOS}"
	.if (. - gText_Rom_222C04) > 0x1f
	.error "gText_Rom_222C04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222C04) < 0x1f
	.space 0x1f - (. - gText_Rom_222C04)
	.endif
