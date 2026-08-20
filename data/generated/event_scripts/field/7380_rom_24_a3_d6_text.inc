	@ field-script:0x24983C FieldScriptText_24A3D6
	.globl gText_Rom_24A3D6
gText_Rom_24A3D6: @ 0x0824A3D6
	.string "しかい『エントリーナンバー　{0xFD}{0x03}ばん\n{0xFD}{0x04}さん！　そして　{0xFD}{0x02}！\lおめでとう　ございます！{EOS}"
	.if (. - gText_Rom_24A3D6) > 0x2e
	.error "gText_Rom_24A3D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A3D6) < 0x2e
	.space 0x2e - (. - gText_Rom_24A3D6)
	.endif
