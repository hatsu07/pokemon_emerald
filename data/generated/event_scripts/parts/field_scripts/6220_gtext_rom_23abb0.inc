	@ field-script:0x23A506 FieldScriptText_23ABB0
	.globl gText_Rom_23ABB0
gText_Rom_23ABB0: @ 0x0823ABB0
	.string "レベル50の　コースでは　なまえの　とおり\nレベル50までの　ポケモンを\lちょうせん　させることが　できます\pただし　レベル50より　ひくい　レベルの\nポケモンを　つれた　トレーナーが\lとうじょう　することは　ありません\lくれぐれも　ごちゅうい　ください\pなお　このコースが　バトルフロンティアの\nたたかいの　きほんと　なって　いますので\lぜひ　チャレンジして　みてください"
	.byte EOS
	.if (. - gText_Rom_23ABB0) > 0xbc
	.error "gText_Rom_23ABB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23ABB0) < 0xbc
	.space 0xbc - (. - gText_Rom_23ABB0)
	.endif
