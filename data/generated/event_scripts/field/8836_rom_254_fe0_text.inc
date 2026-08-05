	@ field-script:0x255170 FieldScriptText_254FE0
	.globl gText_Rom_254FE0
gText_Rom_254FE0: @ 0x08254FE0
	.string "きみ　いま　そのグッズ　かざってるね\nかざってる　グッズは　こうかん　できないよ"
	.byte EOS
	.if (. - gText_Rom_254FE0) > 0x29
	.error "gText_Rom_254FE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254FE0) < 0x29
	.space 0x29 - (. - gText_Rom_254FE0)
	.endif
