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
EventScript_0820F7BA: @ 0x0820F7BA
	.byte 0x00
.globl EventScript_JP_0820F7BB
EventScript_JP_0820F7BB: @ 0x0820F7BB
	loadword 0x00, gText_Rom_20F7CD
	callstd 0x02
	end
.globl EventScript_JP_0820F7C4
EventScript_JP_0820F7C4: @ 0x0820F7C4
	loadword 0x00, gText_Rom_20F819
	callstd 0x02
	end
