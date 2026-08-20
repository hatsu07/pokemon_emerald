	@ field-script:0x248F07 FieldScriptText_24A1CD
	.globl gText_Rom_24A1CD
gText_Rom_24A1CD: @ 0x0824A1CD
	.string "しかい『はい！　これより\nおともだち　4にん　つうしんの\lポケモン　{0xFD}{0x03}コンテストが\lはじまります！\pしゅつじょう　される　トレーナーと\nポケモンの　みなさんは　こちら！{EOS}"
	.if (. - gText_Rom_24A1CD) > 0x56
	.error "gText_Rom_24A1CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A1CD) < 0x56
	.space 0x56 - (. - gText_Rom_24A1CD)
	.endif
