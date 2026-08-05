	@ field-script:0x276B7F FieldScriptText_27663B
	.globl gText_Rom_27663B
gText_Rom_27663B: @ 0x0827663B
	.string "あーあ\nルネシティの　ジムリーダーって\lすっごく　すてきだから\lライバルが　いっぱい　なのよねー\pこの　あたしが　すてみで　ぶつかっても\nダメだったわ！\pねえ　あなた！\nせっかく　だから　この　あたしの\lじきでんの　すてみタックル！\lあなたの　ポケモンに　おしえさせてよ！$"
	.if (. - gText_Rom_27663B) > 0x89
	.error "gText_Rom_27663B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27663B) < 0x89
	.space 0x89 - (. - gText_Rom_27663B)
	.endif
