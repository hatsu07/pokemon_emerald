	@ field-script:0x2623D0 FieldScriptText_262452
	.globl gText_Rom_262452
gText_Rom_262452: @ 0x08262452
	.string "サファリゾーンを\nこのまま　しゅうりょう　しますか？{EOS}"
	.if (. - gText_Rom_262452) > 0x1b
	.error "gText_Rom_262452 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262452) < 0x1b
	.space 0x1b - (. - gText_Rom_262452)
	.endif
