	@ data/maps/FortreeCity_House4/scripts.inc:80 FortreeCity_House4_Text_Wingull (+1 aliases)
	.globl gText_Rom_205338
gText_Rom_205338: @ 0x08205338
	.string "キャモメ『ぴひょー!$"
	.if (. - gText_Rom_205338) > 0xb
	.error "gText_Rom_205338 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205338) < 0xb
	.space 0xb - (. - gText_Rom_205338)
	.endif
	@ analyzed canonical ROM range 0x08205343-0x08205368
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_08205343: @ 0x08205343
EventScript_08205343: @ 0x08205343
	.byte 0x00
EventScript_JP_08205344: @ 0x08205344
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205369 @ gText_Rom_205369
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820534D: @ 0x0820534D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082053A4 @ gText_Rom_2053A4
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08205356: @ 0x08205356
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x0120
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082053E4 @ gText_Rom_2053E4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
