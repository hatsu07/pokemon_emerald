	@ field-script:0x248B1B FieldScriptText_249C72
	.globl gText_Rom_249C72
gText_Rom_249C72: @ 0x08249C72
	.string "こんにちは！\pこちらでは　ポケモンコンテスト\nうけつけを　おこなって　います！{EOS}"
	.if (. - gText_Rom_249C72) > 0x28
	.error "gText_Rom_249C72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249C72) < 0x28
	.space 0x28 - (. - gText_Rom_249C72)
	.endif
	@ analyzed canonical ROM range 0x08249C9A-0x08249CC3
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08249C9A: @ 0x08249C9A
EventText_JP_08249C9A: @ 0x08249C9A
	.string "こんにちは\pこちらは　ポケモンコンテストの\n4めいさま　せんようの　うけつけです!{EOS}"
