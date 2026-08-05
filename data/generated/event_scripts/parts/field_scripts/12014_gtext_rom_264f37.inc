	@ field-script:0x2647D8 FieldScriptText_264F37
	.globl gText_Rom_264F37
gText_Rom_264F37: @ 0x08264F37
	.string "すてきな　しょうひんだね！\pじゃあ　つぎに　クイズの\nもんだいと　こたえを　かんがえてね！$"
	.if (. - gText_Rom_264F37) > 0x2e
	.error "gText_Rom_264F37 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264F37) < 0x2e
	.space 0x2e - (. - gText_Rom_264F37)
	.endif
