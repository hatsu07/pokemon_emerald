	@ field-script:0x23A472 FieldScriptText_23AAAF
	.globl gText_Rom_23AAAF
gText_Rom_23AAAF: @ 0x0823AAAF
	.string "ひきかえサービス　コーナーは\nバトルタワーの　ちかくに　あります\pこちらでは　バトルフロンティアの\nなかで　ためた　バトルポイントを\lすてきな　けいひんと\lこうかんする　ことが　できます！"
	.byte EOS
	.if (. - gText_Rom_23AAAF) > 0x5f
	.error "gText_Rom_23AAAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23AAAF) < 0x5f
	.space 0x5f - (. - gText_Rom_23AAAF)
	.endif
