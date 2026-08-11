	@ data/maps/SootopolisCity_House4/scripts.inc:28 SootopolisCity_House4_Text_Azumarill
	.globl gText_Rom_20F64D
gText_Rom_20F64D: @ 0x0820F64D
	.string "マリルリ『まるりー$"
	.if (. - gText_Rom_20F64D) > 0xa
	.error "gText_Rom_20F64D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F64D) < 0xa
	.space 0xa - (. - gText_Rom_20F64D)
	.endif
	@ analyzed canonical ROM range 0x0820F657-0x0820F669
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820F657: @ 0x0820F657
	.byte 0x00
EventScript_JP_0820F658: @ 0x0820F658
	loadword 0x00, gText_Rom_20F66A
	callstd 0x02
	end
EventScript_JP_0820F661: @ 0x0820F661
	loadword 0x00, gText_Rom_20F6B4
	callstd 0x02
	end
