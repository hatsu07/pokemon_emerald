	@ field-script:0x248B24 FieldScriptText_249BD6
	.globl gText_Rom_249BD6
gText_Rom_249BD6: @ 0x08249BD6
	.string "こんにちは！\pこちらでは　ポケモンコンテスト\nうけつけを　おこなって……\l……あら？\pおきゃくさまは　まだ　ポロックケースを\nもっていらっしゃらない　ようですね\pでは　こちらを　さしあげましょう！{EOS}"
	.if (. - gText_Rom_249BD6) > 0x63
	.error "gText_Rom_249BD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249BD6) < 0x63
	.space 0x63 - (. - gText_Rom_249BD6)
	.endif
