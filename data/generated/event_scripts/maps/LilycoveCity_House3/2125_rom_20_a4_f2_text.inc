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
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820A51A: @ 0x0820A51A
	.byte 0x00
EventScript_JP_0820A51B: @ 0x0820A51B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820A52D @ gText_Rom_20A52D
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820A524: @ 0x0820A524
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820A56C @ gText_Rom_20A56C
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
