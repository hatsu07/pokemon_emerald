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
sAnalyzedEventData_08203F99: @ 0x08203F99
EventScript_08203F99: @ 0x08203F99
	nop
	loadword 0x00, gText_Rom_203FB6
	callstd 0x02
	end
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x6A, 0x5A, 0x30, 0xA1, 0x3B, 0x01, 0x00, 0x00, 0x0F, 0x00, 0xDE, 0x3F, 0x20, 0x08, 0x09, 0x04
	.byte 0xC5, 0x6C, 0x02
