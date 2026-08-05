	@ field-script:0x235B01 FieldScriptText_236288
	.globl gText_Rom_236288
gText_Rom_236288: @ 0x08236288
	.string "ひきかえサービス　コーナーへ\nようこそ！\pこちらでは　おきゃくさまの　ためた\nバトルポイントと　すてきな　けいひんを\lこうかん　いたします！\pでは　けいひんを　おえらび　ください！"
	.byte EOS
	.if (. - gText_Rom_236288) > 0x5b
	.error "gText_Rom_236288 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236288) < 0x5b
	.space 0x5b - (. - gText_Rom_236288)
	.endif
	@ Embedded ROM bytes: file offset 0x2362E3, size 0x13
	.byte 0x44, 0x1A, 0x00, 0x09, 0x02, 0x1B, 0x2E, 0x2D, 0x00, 0x05, 0x04, 0x27, 0x47, 0x00, 0x08, 0x41
	.byte 0x0B, 0x02, 0xFF
