	@ field-script:0x27683F FieldScriptText_275F81
	.globl gText_Rom_275F81
gText_Rom_275F81: @ 0x08275F81
	.string "ふふーん\nおれの　ポケモンは　すごいのさ！\lどの　ポケモンよりも　かっこいいのさ！\p……って　いばってたら\nかいちょうに　おこられちゃった\pもう　いばらない　ことに　したから\nかわりに　おまえの　ポケモンに\lいばる　わざを　おしえて　やってもいいぜ{EOS}"
	.if (. - gText_Rom_275F81) > 0x7d
	.error "gText_Rom_275F81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275F81) < 0x7d
	.space 0x7d - (. - gText_Rom_275F81)
	.endif
