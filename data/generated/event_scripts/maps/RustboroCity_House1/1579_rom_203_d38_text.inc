	@ data/maps/RustboroCity_House1/scripts.inc:48 RustboroCity_House1_Text_AllSortsOfPlaces
	.globl gText_Rom_203D38
gText_Rom_203D38: @ 0x08203D38
	.string "いろんな ばしょに\nいろんな ポケモンが いる\lいろんな ひとも いる\pそれが たのしみで わしも\nいろんな ところに でかけるのさ!$"
	.if (. - gText_Rom_203D38) > 0x44
	.error "gText_Rom_203D38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203D38) < 0x44
	.space 0x44 - (. - gText_Rom_203D38)
	.endif
	@ analyzed canonical ROM range 0x08203D7C-0x08203DBB
sAnalyzedEventData_08203D7C: @ 0x08203D7C
EventScript_08203D7C: @ 0x08203D7C
	nop
	lock
	faceplayer
	checkflag 0x0089
	goto_if 0x01, EventScript_08203DA9
	loadword 0x00, gText_Rom_203DBC
	callstd 0x04
	setorcopyvar 0x8000, 0x0153
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	setflag 0x0089
	loadword 0x00, gText_Rom_203E46
	callstd 0x04
	release
	end
EventScript_08203DA9: @ 0x08203DA9
	loadword 0x00, gText_Rom_203E46
	callstd 0x04
	release
	end
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0F, 0x00, 0xD7, 0x3E, 0x20, 0x08, 0x09, 0x02, 0x02
