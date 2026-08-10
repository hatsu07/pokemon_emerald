	@ data/maps/SootopolisCity_House3/scripts.inc:31 SootopolisCity_House3_Text_TrainerFanClubWasWild
	.globl gText_Rom_20F542
gText_Rom_20F542: @ 0x0820F542
	.string "ねっしんな ファンは ホウエン いがいの\nちいきからも やってくるの!\pあたしが ミナモの\nトレーナー ファンクラブに いったときも\lとっても すごかったもの!$"
	.if (. - gText_Rom_20F542) > 0x51
	.error "gText_Rom_20F542 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F542) < 0x51
	.space 0x51 - (. - gText_Rom_20F542)
	.endif
	@ analyzed canonical ROM range 0x0820F593-0x0820F5B8
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_0820F593: @ 0x0820F593
EventScript_0820F593: @ 0x0820F593
	.byte 0x00
EventScript_JP_0820F594: @ 0x0820F594
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F5B9 @ gText_Rom_20F5B9
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820F59D: @ 0x0820F59D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F60F @ gText_Rom_20F60F
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820F5A6: @ 0x0820F5A6
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x00B8
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F64D @ gText_Rom_20F64D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
