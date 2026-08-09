	@ src/data/easy_chat/easy_chat_group_people.h:304 easy_chat_group_people_line_304 (+1 aliases)
	.globl gText_Rom_5611EC
gText_Rom_5611EC: @ 0x085611EC
	.string "ちゃん$"
	.if (. - gText_Rom_5611EC) > 0x4
	.error "gText_Rom_5611EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5611EC) < 0x4
	.space 0x4 - (. - gText_Rom_5611EC)
	.endif
	@ analyzed canonical ROM range 0x085611F0-0x0856122B
sAnalyzedData_085611F0: @ 0x085611F0
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0000, 0x0000, 0x7500, 0x5652, 0x00FF, 0x0000, 0x1A00, 0x0000
	.2byte 0x0FFF, 0x0808, 0x0018, 0x003E, 0x0037, 0x002D, 0x013D, 0x0503
	.2byte 0x0A01, 0x3C0A, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0xFFFF, 0x0000, 0x016C, 0x7B59
