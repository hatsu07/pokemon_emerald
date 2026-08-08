	@ field-script:0x2645D2 FieldScriptText_264CD7
	.globl gText_Rom_264CD7
gText_Rom_264CD7: @ 0x08264CD7
	.string "あれっ？\pいまは　あなたの　かんがえた　クイズに\nチャレンジする　ひとを　さがしてるの！\lだから　また　こんどね！$"
	.if (. - gText_Rom_264CD7) > 0x3a
	.error "gText_Rom_264CD7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264CD7) < 0x3a
	.space 0x3a - (. - gText_Rom_264CD7)
	.endif
