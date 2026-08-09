	@ data/maps/SootopolisCity_House2/scripts.inc:27 SootopolisCity_House2_Text_OughtToVisitAndSee
	.globl gText_Rom_20F45E
gText_Rom_20F45E: @ 0x0820F45E
	.string "そうですか……\nいちど いかれては どうでしょう……$"
	.if (. - gText_Rom_20F45E) > 0x1b
	.error "gText_Rom_20F45E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F45E) < 0x1b
	.space 0x1b - (. - gText_Rom_20F45E)
	.endif
	@ analyzed canonical ROM range 0x0820F479-0x0820F4AB
sAnalyzedEventData_0820F479: @ 0x0820F479
EventScript_0820F479: @ 0x0820F479
	nop
	lock
	faceplayer
	loadword 0x00, gText_Rom_20F4AC
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_0820F499
	loadword 0x00, gText_Rom_20F516
	callstd 0x04
	release
	end
EventScript_0820F499: @ 0x0820F499
	loadword 0x00, gText_Rom_20F502
	callstd 0x04
	release
	end
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0F, 0x00, 0x42, 0xF5, 0x20, 0x08, 0x09, 0x02, 0x02
