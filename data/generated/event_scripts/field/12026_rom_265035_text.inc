	@ field-script:0x2649B8 FieldScriptText_265035
	.globl gText_Rom_265035
gText_Rom_265035: @ 0x08265035
	.string "だから　おねがいー！\pあなたの　ポロックー　ひとつで　いいから\nあたしたちに　ちょうだい！\p……　って　あれー？\nあなた　ポロックケース　もってないじゃん？\lしかたないなー　じゃあ　また　こんどねー！{EOS}"
	.if (. - gText_Rom_265035) > 0x65
	.error "gText_Rom_265035 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265035) < 0x65
	.space 0x65 - (. - gText_Rom_265035)
	.endif
