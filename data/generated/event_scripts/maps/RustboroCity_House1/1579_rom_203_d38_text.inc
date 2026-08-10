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
sAnalyzedEventData_08203D7C: @ 0x08203D7C
EventScript_08203D7C: @ 0x08203D7C
	.byte 0x00
EventScript_JP_08203D7D: @ 0x08203D7D
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0089
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08203DA9 @ EventScript_JP_08203DA9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203DBC @ gText_Rom_203DBC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0153
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: setflag
	.byte 0x29
	.2byte 0x0089
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203E46 @ gText_Rom_203E46
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_08203DA9: @ 0x08203DA9
EventScript_JP_08203DA9: @ 0x08203DA9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203E46 @ gText_Rom_203E46
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08203DB3: @ 0x08203DB3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203ED7 @ gText_Rom_203ED7
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
