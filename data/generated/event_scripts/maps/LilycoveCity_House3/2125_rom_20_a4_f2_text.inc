	@ data/maps/LilycoveCity_House3/scripts.inc:121 LilycoveCity_House3_Text_GoingToEnterContest
	.globl gText_Rom_20A4F2
gText_Rom_20A4F2: @ 0x0820A4F2
	.string "ポケモンの たくましさ じまん したいから\nみんなで コンテスト してるんだ！$"
	.if (. - gText_Rom_20A4F2) > 0x28
	.error "gText_Rom_20A4F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A4F2) < 0x28
	.space 0x28 - (. - gText_Rom_20A4F2)
	.endif
	@ analyzed canonical ROM range 0x0820A51A-0x0820A52C
sAnalyzedEventData_0820A51A: @ 0x0820A51A
EventScript_0820A51A: @ 0x0820A51A
	nop
	loadword 0x00, gText_Rom_20A52D
	callstd 0x02
	end
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0F, 0x00, 0x6C, 0xA5, 0x20, 0x08, 0x09, 0x02, 0x02
