	@ field-script:0x212143 FieldScriptText_212181
	.globl gText_Rom_212181
gText_Rom_212181: @ 0x08212181
	.string "ぼくの　にいちゃん　かせきマニア……\nかせき　だいすき　ナイスガイ　さ……\pちなみに　あなを　ほるのも　だいすきで……\nこの　あなも　じぶんで　ほったんだ……\pこれを　あげるから……\nきみも　にいちゃん　みたいに\lあなを　ほってみなよ……$"
	.if (. - gText_Rom_212181) > 0x78
	.error "gText_Rom_212181 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212181) < 0x78
	.space 0x78 - (. - gText_Rom_212181)
	.endif
