	@ data/maps/SootopolisCity_House6/scripts.inc:46 SootopolisCity_House6_Text_LovePlushDolls
	.globl gText_Rom_20F7AA
gText_Rom_20F7AA: @ 0x0820F7AA
	.string "あたし ぬいぐるみ だいすき!$"
	.if (. - gText_Rom_20F7AA) > 0x10
	.error "gText_Rom_20F7AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F7AA) < 0x10
	.space 0x10 - (. - gText_Rom_20F7AA)
	.endif
	@ analyzed canonical ROM range 0x0820F7BA-0x0820F7CC
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_0820F7BA: @ 0x0820F7BA
EventScript_0820F7BA: @ 0x0820F7BA
	.byte 0x00
EventScript_JP_0820F7BB: @ 0x0820F7BB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F7CD @ gText_Rom_20F7CD
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820F7C4: @ 0x0820F7C4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F819 @ gText_Rom_20F819
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
