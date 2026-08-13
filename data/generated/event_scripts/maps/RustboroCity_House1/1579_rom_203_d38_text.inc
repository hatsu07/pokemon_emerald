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
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08203D7C: @ 0x08203D7C
	.byte 0x00
.globl EventScript_JP_08203D7D
EventScript_JP_08203D7D: @ 0x08203D7D
	lock
	faceplayer
	checkflag 0x0089
	goto_if 0x01, EventScript_JP_08203DA9
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
EventScript_JP_08203DA9: @ 0x08203DA9
	loadword 0x00, gText_Rom_203E46
	callstd 0x04
	release
	end
.globl EventScript_JP_08203DB3
EventScript_JP_08203DB3: @ 0x08203DB3
	loadword 0x00, gText_Rom_203ED7
	callstd 0x02
	end
