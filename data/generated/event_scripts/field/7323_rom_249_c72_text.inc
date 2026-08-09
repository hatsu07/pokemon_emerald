	@ field-script:0x248B1B FieldScriptText_249C72
	.globl gText_Rom_249C72
gText_Rom_249C72: @ 0x08249C72
	.string "こんにちは！\pこちらでは　ポケモンコンテスト\nうけつけを　おこなって　います！$"
	.if (. - gText_Rom_249C72) > 0x28
	.error "gText_Rom_249C72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249C72) < 0x28
	.space 0x28 - (. - gText_Rom_249C72)
	.endif
	@ analyzed canonical ROM range 0x08249C9A-0x08249CC3
sAnalyzedEventData_08249C9A: @ 0x08249C9A
EventScript_08249C9A: @ 0x08249C9A
	gotostd_if 0x2E, 0x16
	writebytetoaddr 0x1A, 0x27110AFB
	setorcopyvar 0x9F00, 0x7359
	bufferleadmonspeciesname 0x5A
	bufferleadmonspeciesname 0x63
	trainerbattlebegin
	moveobjectoffscreen 0xFE19
	doweather
	compare_var_to_var 0x0B02, 0x001F
	setmysteryeventstatus 0x2E
	specialvar_ 0x1903, 0x0300
	callstd 0x12
	callstd 0x44
	killscript
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xAB, 0xFF
