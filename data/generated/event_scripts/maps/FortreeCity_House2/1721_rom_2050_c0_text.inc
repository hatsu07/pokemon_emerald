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
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082050D0: @ 0x082050D0
	.byte 0x00
.globl EventScript_JP_082050D1
EventScript_JP_082050D1: @ 0x082050D1
	loadword 0x00, gText_Rom_2050E3
	callstd 0x02
	end
.globl EventScript_JP_082050DA
EventScript_JP_082050DA: @ 0x082050DA
	loadword 0x00, gText_Rom_20516E
	callstd 0x02
	end
