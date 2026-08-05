	@ field-script:0x248EEE FieldScriptText_24A17F
	.globl gText_Rom_24A17F
gText_Rom_24A17F: @ 0x0824A17F
	.string "しかい『はい！　これより\n{0xFD}{0x04}　ランクの\lポケモン　{0xFD}{0x03}コンテストが\lはじまります！\pしゅつじょう　される　トレーナーと\nポケモンの　みなさんは　こちら！$"
	.if (. - gText_Rom_24A17F) > 0x4e
	.error "gText_Rom_24A17F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A17F) < 0x4e
	.space 0x4e - (. - gText_Rom_24A17F)
	.endif
