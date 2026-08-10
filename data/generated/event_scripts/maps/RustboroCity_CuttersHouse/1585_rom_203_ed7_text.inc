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
EventScript_JP_08203F16: @ 0x08203F16
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203F28 @ gText_Rom_203F28
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08203F1F: @ 0x08203F1F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203F64 @ gText_Rom_203F64
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
