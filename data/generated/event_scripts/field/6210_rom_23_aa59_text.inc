	@ field-script:0x23A464 FieldScriptText_23AA59
	.globl gText_Rom_23AA59
gText_Rom_23AA59: @ 0x0823AA59
	.string "ランキングホールは\nバトルタワーの　ちかくに　あります\pこちらは　バトルフロンティアで\nたたかった　トレーナーたちの\lもっとも　すばらしい　きろくを\lみることが　できます"
	.byte EOS
	.if (. - gText_Rom_23AA59) > 0x56
	.error "gText_Rom_23AA59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23AA59) < 0x56
	.space 0x56 - (. - gText_Rom_23AA59)
	.endif
