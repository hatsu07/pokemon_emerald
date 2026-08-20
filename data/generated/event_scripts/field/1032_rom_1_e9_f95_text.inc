	@ field-script:0x1E8F6B FieldScriptText_1E9F95
	.globl gText_Rom_1E9F95
gText_Rom_1E9F95: @ 0x081E9F95
	.string "ここより　{ESCAPE}{0x03}へ3ぽ　{ESCAPE}{0x00}へ2ほ　ゆけば\nそこは　すてきな　「カラクリやしき」！{EOS}"
	.if (. - gText_Rom_1E9F95) > 0x2b
	.error "gText_Rom_1E9F95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9F95) < 0x2b
	.space 0x2b - (. - gText_Rom_1E9F95)
	.endif
