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
EventScript_08203F99: @ 0x08203F99
	.byte 0x00
.globl EventScript_JP_08203F9A
EventScript_JP_08203F9A: @ 0x08203F9A
	loadword 0x00, gText_Rom_203FB6
	callstd 0x02
	end
.globl EventScript_JP_08203FA3
EventScript_JP_08203FA3: @ 0x08203FA3
	lock
	faceplayer
	waitse
	playmoncry 0x013B, 0x0000
	loadword 0x00, gText_Rom_203FDE
	callstd 0x04
	waitmoncry
	release
	end
