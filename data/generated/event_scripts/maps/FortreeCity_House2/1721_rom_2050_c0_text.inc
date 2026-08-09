	@ data/maps/FortreeCity_House2/scripts.inc:62 FortreeCity_House2_Text_YouGuessedWrong
	.globl gText_Rom_2050C0
gText_Rom_2050C0: @ 0x082050C0
	.string "ざんねん……\nはずれ じゃ……$"
	.if (. - gText_Rom_2050C0) > 0x10
	.error "gText_Rom_2050C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2050C0) < 0x10
	.space 0x10 - (. - gText_Rom_2050C0)
	.endif
	@ analyzed canonical ROM range 0x082050D0-0x082050E2
sAnalyzedEventData_082050D0: @ 0x082050D0
EventScript_082050D0: @ 0x082050D0
	nop
	loadword 0x00, gText_Rom_2050E3
	callstd 0x02
	end
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0F, 0x00, 0x6E, 0x51, 0x20, 0x08, 0x09, 0x02, 0x02
