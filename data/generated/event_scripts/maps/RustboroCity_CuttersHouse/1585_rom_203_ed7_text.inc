	@ data/maps/RustboroCity_CuttersHouse/scripts.inc:30 RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees
	.globl gText_Rom_203ED7
gText_Rom_203ED7: @ 0x08203ED7
	.string "この カナズミが おおきくなるとき\nおとうさん みんなの ために\lいあいぎりを つかって\lあたりを きりひらいたんだって!$"
	.if (. - gText_Rom_203ED7) > 0x3e
	.error "gText_Rom_203ED7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203ED7) < 0x3e
	.space 0x3e - (. - gText_Rom_203ED7)
	.endif
	@ analyzed canonical ROM range 0x08203F15-0x08203F27
sAnalyzedEventData_08203F15: @ 0x08203F15
EventScript_08203F15: @ 0x08203F15
	nop
	loadword 0x00, gText_Rom_203F28
	callstd 0x02
	end
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0F, 0x00, 0x64, 0x3F, 0x20, 0x08, 0x09, 0x02, 0x02
