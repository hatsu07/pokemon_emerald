	@ field-script:0x211DFB FieldScriptText_211E4F
	.globl gText_Rom_211E4F
gText_Rom_211E4F: @ 0x08211E4F
	.string "あらあら　あなたの　ポケモン\nつかれてるんじゃ　ないかえ？\pよかったら　やすんで　おいき！\nそうだ　それがいい！　そうしなさい！$"
	.if (. - gText_Rom_211E4F) > 0x41
	.error "gText_Rom_211E4F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211E4F) < 0x41
	.space 0x41 - (. - gText_Rom_211E4F)
	.endif

	@ field-script:0x211E1A FieldScriptText_211E90
	.globl gText_Rom_211E90
gText_Rom_211E90: @ 0x08211E90
	.string "そうそう\nここで　ゆっくり　して　おいき！$"
	.if (. - gText_Rom_211E90) > 0x16
	.error "gText_Rom_211E90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211E90) < 0x16
	.space 0x16 - (. - gText_Rom_211E90)
	.endif
