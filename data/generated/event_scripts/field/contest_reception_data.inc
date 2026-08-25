	@ field-script:0x248B24 FieldScriptText_249BD6
	.globl FieldScriptText_249BD6
FieldScriptText_249BD6: @ 0x08249BD6
	.string "こんにちは！\pこちらでは　ポケモンコンテスト\nうけつけを　おこなって……\l……あら？\pおきゃくさまは　まだ　ポロックケースを\nもっていらっしゃらない　ようですね\pでは　こちらを　さしあげましょう！{EOS}"
	.if (. - FieldScriptText_249BD6) > 0x63
	.error "FieldScriptText_249BD6 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_249BD6) < 0x63
	.space 0x63 - (. - FieldScriptText_249BD6)
	.endif
	@ field-script:0x248B3B FieldScriptText_249C39
	.globl FieldScriptText_249C39
FieldScriptText_249C39: @ 0x08249C39
	.string "というわけで　あらためまして……\pこんにちは！\pこちらでは　ポケモンコンテスト\nうけつけを　おこなって　います！{EOS}"
	.if (. - FieldScriptText_249C39) > 0x39
	.error "FieldScriptText_249C39 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_249C39) < 0x39
	.space 0x39 - (. - FieldScriptText_249C39)
	.endif
	@ field-script:0x248B1B FieldScriptText_249C72
	.globl FieldScriptText_249C72
FieldScriptText_249C72: @ 0x08249C72
	.string "こんにちは！\pこちらでは　ポケモンコンテスト\nうけつけを　おこなって　います！{EOS}"
	.if (. - FieldScriptText_249C72) > 0x28
	.error "FieldScriptText_249C72 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_249C72) < 0x28
	.space 0x28 - (. - FieldScriptText_249C72)
	.endif
	@ analyzed canonical ROM range 0x08249C9A-0x08249CC3
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08249C9A: @ 0x08249C9A
EventText_JP_08249C9A: @ 0x08249C9A
	.string "こんにちは\pこちらは　ポケモンコンテストの\n4めいさま　せんようの　うけつけです!{EOS}"
