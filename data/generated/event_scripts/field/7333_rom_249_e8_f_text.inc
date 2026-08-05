	@ field-script:0x248C2C FieldScriptText_249E8F
	.globl gText_Rom_249E8F
gText_Rom_249E8F: @ 0x08249E8F
	.string "ポケモンコンテスト　には\nノーマルランク　スーパーランク\lハイパーランク　そしてマスターランク\lという　4つの　ランクが　あります\pノーマルランク　には　すべての\nポケモンが　でることが　できます\pノーマルランクで　ゆうしょう　できた\nポケモンは　おなじ　しゅるいの\lスーパーランクの　コンテストに　でられます\pおなじように　スーパーで　ゆうしょう　すれば\nハイパーに　ハイパーで　ゆうしょう　すれば\lマスターランクに　でられるのです\pマスターランクで　ゆうしょう　した\nポケモンは　なんどでも　マスターランクの\lコンテストに　でる　ことが　できます$"
	.if (. - gText_Rom_249E8F) > 0x114
	.error "gText_Rom_249E8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249E8F) < 0x114
	.space 0x114 - (. - gText_Rom_249E8F)
	.endif
