	@ field-script:0x257804 FieldScriptText_257C73
	.globl gText_Rom_257C73
gText_Rom_257C73: @ 0x08257C73
	.string "わしは　そだてや　ばあさんじゃ\pおまえさんの　かわりに　ポケモンを\nそだてて　あげるよ\pなにか　そだてて　ほしいのかい？"
	.byte EOS
	.if (. - gText_Rom_257C73) > 0x3d
	.error "gText_Rom_257C73 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257C73) < 0x3d
	.space 0x3d - (. - gText_Rom_257C73)
	.endif
