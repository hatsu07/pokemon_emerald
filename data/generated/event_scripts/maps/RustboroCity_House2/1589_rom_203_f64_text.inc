	@ data/maps/RustboroCity_House2/scripts.inc:15 RustboroCity_House2_Text_RoxanneKnowsALot
	.globl gText_Rom_203F64
gText_Rom_203F64: @ 0x08203F64
	.string "ジムリーダーの ツツジ ねーちゃん\nすっごい ポケモン くわしくて\lすっごい ポケモン つよいんだから!$"
	.if (. - gText_Rom_203F64) > 0x35
	.error "gText_Rom_203F64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203F64) < 0x35
	.space 0x35 - (. - gText_Rom_203F64)
	.endif
	@ analyzed canonical ROM range 0x08203F99-0x08203FB5
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_08203F99: @ 0x08203F99
EventScript_08203F99: @ 0x08203F99
	.byte 0x00
EventScript_JP_08203F9A: @ 0x08203F9A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203FB6 @ gText_Rom_203FB6
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08203FA3: @ 0x08203FA3
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x013B
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203FDE @ gText_Rom_203FDE
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
