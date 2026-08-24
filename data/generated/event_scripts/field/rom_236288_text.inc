	@ field-script:0x235B01 FieldScriptText_236288
	.globl FieldScriptText_236288
FieldScriptText_236288: @ 0x08236288
	.string "ひきかえサービス　コーナーへ\nようこそ！\pこちらでは　おきゃくさまの　ためた\nバトルポイントと　すてきな　けいひんを\lこうかん　いたします！\pでは　けいひんを　おえらび　ください！"
	.byte EOS
	.if (. - FieldScriptText_236288) > 0x5b
	.error "FieldScriptText_236288 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_236288) < 0x5b
	.space 0x5b - (. - FieldScriptText_236288)
	.endif
	@ Embedded ROM bytes: file offset 0x2362E3, size 0x13
	@ semanticized-mass: charmap string (19 bytes including EOS)
	.string "では　けいひんを　おえらび　ください"
	.byte EOS
