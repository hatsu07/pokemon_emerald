	@ field-script:0x264883 FieldScriptText_264FF8
	.globl gText_Rom_264FF8
gText_Rom_264FF8: @ 0x08264FF8
	.string "こっちは　おともだちの　{0xFD}{0x02}だよ！\nとーっても　{0xFD}{0x03}い　のよ！\pでもねー　もっと　もっと\n{0xFD}{0x03}く　なると　おもうんだー！$"
	.if (. - gText_Rom_264FF8) > 0x3d
	.error "gText_Rom_264FF8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264FF8) < 0x3d
	.space 0x3d - (. - gText_Rom_264FF8)
	.endif
