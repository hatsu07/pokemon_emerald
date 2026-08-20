	@ field-script:0x212A53 FieldScriptText_262621
	.globl gText_Rom_262621
gText_Rom_262621: @ 0x08262621
	.string "サファリゾーンへ　ようこそ！\p500えんで　ポケモン　つかまえほうだい！\nサファリゲームに　さんか　しますか？{EOS}"
	.if (. - gText_Rom_262621) > 0x38
	.error "gText_Rom_262621 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262621) < 0x38
	.space 0x38 - (. - gText_Rom_262621)
	.endif
