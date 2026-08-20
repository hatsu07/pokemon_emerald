	@ field-script:0x211E28 FieldScriptText_211EA6
	.globl gText_Rom_211EA6
gText_Rom_211EA6: @ 0x08211EA6
	.string "あらあら\nまだ　つかれてるんじゃ　ないかえ？\pもういちど　やすんで　おいき！\nそうだ　それがいい！　そうしなさい！{EOS}"
	.if (. - gText_Rom_211EA6) > 0x3a
	.error "gText_Rom_211EA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211EA6) < 0x3a
	.space 0x3a - (. - gText_Rom_211EA6)
	.endif
