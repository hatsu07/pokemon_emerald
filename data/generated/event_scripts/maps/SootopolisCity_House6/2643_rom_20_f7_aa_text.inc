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
sAnalyzedEventData_0820F7BA: @ 0x0820F7BA
EventScript_0820F7BA: @ 0x0820F7BA
	nop
	loadword 0x00, gText_Rom_20F7CD
	callstd 0x02
	end
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0F, 0x00, 0x19, 0xF8, 0x20, 0x08, 0x09, 0x02, 0x02
