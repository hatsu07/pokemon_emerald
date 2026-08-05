	@ field-script:0x2591C4 FieldScriptText_258B94
	.globl gText_Rom_258B94
gText_Rom_258B94: @ 0x08258B94
	.string "きのみブレンダーで　ともだちと　いっしょに\nきのみから　ポロックを　つくります\pつうしんに　はいる　まえに\nレポートを　かいても　よろしいですか？"
	.byte EOS
	.if (. - gText_Rom_258B94) > 0x4a
	.error "gText_Rom_258B94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258B94) < 0x4a
	.space 0x4a - (. - gText_Rom_258B94)
	.endif
