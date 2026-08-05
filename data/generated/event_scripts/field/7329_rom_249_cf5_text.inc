	@ field-script:0x248C10 FieldScriptText_249CF5
	.globl gText_Rom_249CF5
gText_Rom_249CF5: @ 0x08249CF5
	.string "ポケモンコンテストは　4にんの　トレーナーが\n1ぴきずつ　ポケモンを　もちよって\l4ひきで　おこなわれます！\pコンテスト　には　1じ　しんさと\n2じ　しんさが　あります！\p1じ　しんさでは　かいじょうの\nおきゃくさまが　きにいった　ポケモンを\lとうひょう　します！\p2じ　しんさでは　ポケモンが　じゅんばんに\nとくいな　わざで　アピールを　します！\lしんさいんに　ちゅうもくされたり\lおきゃくさまに　わざを　きにいられたり……\lとにかく　たくさん　めだって　ください！\p1じしんさと　2じしんさの　けっかから\nそうごうポイントを　だして\lいちばん　たかかった　ポケモンが\lゆうしょう　できます！$"
	.if (. - gText_Rom_249CF5) > 0x12a
	.error "gText_Rom_249CF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249CF5) < 0x12a
	.space 0x12a - (. - gText_Rom_249CF5)
	.endif
