	@ field-script:0x2645DC FieldScriptText_264D11
	.globl gText_Rom_264D11
gText_Rom_264D11: @ 0x08264D11
	.string "いま　{0xFD}{0x02}さんの　かんがえた　クイズに\nこたえて　くれる　ひとを　さがしてるの！$"
	.if (. - gText_Rom_264D11) > 0x29
	.error "gText_Rom_264D11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264D11) < 0x29
	.space 0x29 - (. - gText_Rom_264D11)
	.endif
