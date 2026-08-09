	@ data/maps/FortreeCity_House4/scripts.inc:80 FortreeCity_House4_Text_Wingull (+1 aliases)
	.globl gText_Rom_205338
gText_Rom_205338: @ 0x08205338
	.string "キャモメ『ぴひょー!$"
	.if (. - gText_Rom_205338) > 0xb
	.error "gText_Rom_205338 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205338) < 0xb
	.space 0xb - (. - gText_Rom_205338)
	.endif
	@ analyzed canonical ROM range 0x08205343-0x08205368
sAnalyzedEventData_08205343: @ 0x08205343
EventScript_08205343: @ 0x08205343
	nop
	loadword 0x00, gText_Rom_205369
	callstd 0x02
	end
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0F, 0x00, 0xA4, 0x53, 0x20, 0x08, 0x09, 0x02, 0x02, 0x6A, 0x5A, 0x30, 0xA1, 0x20, 0x01, 0x00
	.byte 0x00, 0x0F, 0x00, 0xE4, 0x53, 0x20, 0x08, 0x09, 0x04, 0xC5, 0x6C, 0x02
