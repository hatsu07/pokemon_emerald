	@ field-script:0x1EAF2C FieldScriptText_1EB0EC
	.globl gText_Rom_1EB0EC
gText_Rom_1EB0EC: @ 0x081EB0EC
	.string "「えんとつやま　ロープウェイ　のりば」\n{ESCAPE}{0x00}　このさき　すぐ！{EOS}"
	.if (. - gText_Rom_1EB0EC) > 0x21
	.error "gText_Rom_1EB0EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EB0EC) < 0x21
	.space 0x21 - (. - gText_Rom_1EB0EC)
	.endif
