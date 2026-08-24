	@ field-script:0x211DFB FieldScriptText_211E4F
	.globl FieldScriptText_211E4F
FieldScriptText_211E4F: @ 0x08211E4F
	.string "あらあら　あなたの　ポケモン\nつかれてるんじゃ　ないかえ？\pよかったら　やすんで　おいき！\nそうだ　それがいい！　そうしなさい！{EOS}"
	.if (. - FieldScriptText_211E4F) > 0x41
	.error "FieldScriptText_211E4F may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_211E4F) < 0x41
	.space 0x41 - (. - FieldScriptText_211E4F)
	.endif

	@ field-script:0x211E1A FieldScriptText_211E90
	.globl FieldScriptText_211E90
FieldScriptText_211E90: @ 0x08211E90
	.string "そうそう\nここで　ゆっくり　して　おいき！{EOS}"
	.if (. - FieldScriptText_211E90) > 0x16
	.error "FieldScriptText_211E90 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_211E90) < 0x16
	.space 0x16 - (. - FieldScriptText_211E90)
	.endif
