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
	@ Replaced baserom.gba range: offset=0x20A51A, size=0x13
	.byte 0x00, 0x0F, 0x00, 0x2D, 0xA5, 0x20, 0x08, 0x09, 0x02, 0x02, 0x0F, 0x00, 0x6C, 0xA5, 0x20, 0x08
	.byte 0x09, 0x02, 0x02
