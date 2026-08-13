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
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08203F15: @ 0x08203F15
	.byte 0x00
.globl EventScript_JP_08203F16
EventScript_JP_08203F16: @ 0x08203F16
	loadword 0x00, gText_Rom_203F28
	callstd 0x02
	end
.globl EventScript_JP_08203F1F
EventScript_JP_08203F1F: @ 0x08203F1F
	loadword 0x00, gText_Rom_203F64
	callstd 0x02
	end
