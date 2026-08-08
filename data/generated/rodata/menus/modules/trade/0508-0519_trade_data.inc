	@ src/data/trade.h:49 sJPText_PressBButtonToQuit
	.globl gText_Rom_300AEE
gText_Rom_300AEE: @ 0x08300AEE
	.string "Bボタン で もどります$"
	.if (. - gText_Rom_300AEE) > 0xd
	.error "gText_Rom_300AEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AEE) < 0xd
	.space 0xd - (. - gText_Rom_300AEE)
	.endif
	.space 0x1, 0x00
	.globl gUnknown_8300AFC
gUnknown_8300AFC: @ 0x08300AFC
	@ Replaced baserom.gba range: offset=0x300AFC, size=0x2C
	.byte 0xBD, 0x0A, 0x30, 0x08, 0xC1, 0x0A, 0x30, 0x08, 0xD1, 0x0A, 0x30, 0x08, 0xD8, 0x0A, 0x30, 0x08
	.byte 0xE0, 0x0A, 0x30, 0x08, 0xEE, 0x0A, 0x30, 0x08, 0x5D, 0x63, 0xAE, 0x60, 0x5D, 0x2D, 0x20, 0x29
	.byte 0xFF, 0x0A, 0x03, 0x06, 0x2E, 0x16, 0x41, 0x0D, 0xFF, 0x00, 0x00, 0x00
	.globl gUnknown_8300B28
gUnknown_8300B28: @ 0x08300B28
	@ Replaced baserom.gba range: offset=0x300B28, size=0x10
	.byte 0x14, 0x0B, 0x30, 0x08, 0x39, 0x9A, 0x07, 0x08, 0x1D, 0x0B, 0x30, 0x08, 0x5D, 0x9A, 0x07, 0x08

	@ asm/trade.s:5988 sub_08079BD4
	.globl gText_Rom_300B38
gText_Rom_300B38: @ 0x08300B38
	.string "{COLOR}{0x02}{HIGHLIGHT}{0x01}{SHADOW}{0x03}つうしんたいきちゅう！\nしばらくおまちください$"
	.if (. - gText_Rom_300B38) > 0x21
	.error "gText_Rom_300B38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300B38) < 0x21
	.space 0x21 - (. - gText_Rom_300B38)
	.endif

	@ asm/trade.s:5988 sub_08079BD4
	.globl gText_Rom_300B59
gText_Rom_300B59: @ 0x08300B59
	.string "{COLOR}{0x02}{HIGHLIGHT}{0x01}{SHADOW}{0x03}こうかんは\nキャンセル　されました！$"
	.if (. - gText_Rom_300B59) > 0x1c
	.error "gText_Rom_300B59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300B59) < 0x1c
	.space 0x1c - (. - gText_Rom_300B59)
	.endif

	@ asm/trade.s:5988 sub_08079BD4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_300B75
gText_Rom_300B75: @ 0x08300B75
	.string "{COLOR}{0x02}{HIGHLIGHT}{0x01}{SHADOW}{0x03}そのポケモンを　こうかんすると\nせんとうできなくなっちゃうよ！$"
	.if (. - gText_Rom_300B75) != 0x29
	.error "gText_Rom_300B75 must retain its original byte length"
	.endif
	.globl gText_Rom_300B7E
	.set gText_Rom_300B7E, gText_Rom_300B75 + 0x9

	@ asm/trade.s:5988 sub_08079BD4
	.globl gText_Rom_300B9E
gText_Rom_300B9E: @ 0x08300B9E
	.string "{COLOR}{0x02}{HIGHLIGHT}{0x01}{SHADOW}{0x03}ともだちの　しゅうりょうを\nまっています……$"
	.if (. - gText_Rom_300B9E) > 0x20
	.error "gText_Rom_300B9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300B9E) < 0x20
	.space 0x20 - (. - gText_Rom_300B9E)
	.endif

	@ asm/trade.s:5988 sub_08079BD4
	.globl gText_Rom_300BBE
gText_Rom_300BBE: @ 0x08300BBE
	.string "ともだちは　ポケモンの\nこうかんを　したいようです！$"
	.if (. - gText_Rom_300BBE) > 0x1b
	.error "gText_Rom_300BBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300BBE) < 0x1b
	.space 0x1b - (. - gText_Rom_300BBE)
	.endif
	.space 0x3, 0x00
