	@ field-script:0x212323 FieldScriptText_2123BF
	.globl gText_Rom_2123BF
gText_Rom_2123BF: @ 0x082123BF
	.string "きみも　カセキを　みつけたんだね……\nすてき……　うっとり　しちゃうよ……\pきみ　その　カセキ　どうするの……？\pきいた　はなしでは　デボンでは\nカセキを　ポケモンに　いきかえらせる\lけんきゅうを　している　そうだよ……\pぼくは　カセキが　すきだから\nそんなこと　しないけどね……$"
	.if (. - gText_Rom_2123BF) > 0x8d
	.error "gText_Rom_2123BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2123BF) < 0x8d
	.space 0x8d - (. - gText_Rom_2123BF)
	.endif
