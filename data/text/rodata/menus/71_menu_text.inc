	@ src/data/party_menu.h:796 party_menu_line_796 (+2 aliases)
	.globl gText_Rom_300AD1
gText_Rom_300AD1: @ 0x08300AD1
	.string "つよさをみる$"
	.if (. - gText_Rom_300AD1) > 0x7
	.error "gText_Rom_300AD1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AD1) < 0x7
	.space 0x7 - (. - gText_Rom_300AD1)
	.endif
	.incbin "baserom.gba", 0x300ad8, 0x16

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
	.incbin "baserom.gba", 0x300afb, 0x1
	.globl gUnknown_8300AFC
gUnknown_8300AFC: @ 0x08300AFC
	.incbin "baserom.gba", 0x300afc, 0x2c
	.globl gUnknown_8300B28
gUnknown_8300B28: @ 0x08300B28
	.incbin "baserom.gba", 0x300b28, 0x10

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
	.incbin "baserom.gba", 0x300bd9, 0x3
	.globl gUnknown_8300BDC
gUnknown_8300BDC: @ 0x08300BDC
	.incbin "baserom.gba", 0x300bdc, 0x24
	.globl gUnknown_8300C00
gUnknown_8300C00: @ 0x08300C00
	.incbin "baserom.gba", 0x300c00, 0x4
	.globl gUnknown_8300C04
gUnknown_8300C04: @ 0x08300C04
	.incbin "baserom.gba", 0x300c04, 0x10
	.globl gUnknown_8300C14
gUnknown_8300C14: @ 0x08300C14
	.incbin "baserom.gba", 0x300c14, 0x98
	.globl gUnknown_8300CAC
gUnknown_8300CAC: @ 0x08300CAC
	.incbin "baserom.gba", 0x300cac, 0x94
	.globl gUnknown_8300D40
gUnknown_8300D40: @ 0x08300D40
	.incbin "baserom.gba", 0x300d40, 0x2024
	.globl gUnknown_8302D64
gUnknown_8302D64: @ 0x08302D64
	.incbin "baserom.gba", 0x302d64, 0x1fa0
	.globl gUnknown_8304D04
gUnknown_8304D04: @ 0x08304D04
	.incbin "baserom.gba", 0x304d04, 0x1020
	.globl gUnknown_8305D24
gUnknown_8305D24: @ 0x08305D24
	.incbin "baserom.gba", 0x305d24, 0x60
	.globl gUnknown_8305D84
gUnknown_8305D84: @ 0x08305D84
	.incbin "baserom.gba", 0x305d84, 0x1420
	.globl gUnknown_83071A4
gUnknown_83071A4: @ 0x083071A4
	.incbin "baserom.gba", 0x3071a4, 0x2840
	.globl gUnknown_83099E4
gUnknown_83099E4: @ 0x083099E4
	.incbin "baserom.gba", 0x3099e4, 0x100
	.globl gUnknown_8309AE4
gUnknown_8309AE4: @ 0x08309AE4
	.incbin "baserom.gba", 0x309ae4, 0x100
	.globl gUnknown_8309BE4
gUnknown_8309BE4: @ 0x08309BE4
	.incbin "baserom.gba", 0x309be4, 0x1000
	.globl gUnknown_830ABE4
gUnknown_830ABE4: @ 0x0830ABE4
	.incbin "baserom.gba", 0x30abe4, 0x1000
	.globl gUnknown_830BBE4
gUnknown_830BBE4: @ 0x0830BBE4
	.incbin "baserom.gba", 0x30bbe4, 0x100
	.globl gUnknown_830BCE4
gUnknown_830BCE4: @ 0x0830BCE4
	.incbin "baserom.gba", 0x30bce4, 0x200
	.globl gUnknown_830BEE4
gUnknown_830BEE4: @ 0x0830BEE4
	.incbin "baserom.gba", 0x30bee4, 0x200
	.globl gUnknown_830C0E4
gUnknown_830C0E4: @ 0x0830C0E4
	.incbin "baserom.gba", 0x30c0e4, 0x20
	.globl gUnknown_830C104
gUnknown_830C104: @ 0x0830C104
	.incbin "baserom.gba", 0x30c104, 0x690
	.globl gUnknown_830C794
gUnknown_830C794: @ 0x0830C794
	.incbin "baserom.gba", 0x30c794, 0x7c8
	.globl gUnknown_830CF5C
gUnknown_830CF5C: @ 0x0830CF5C
	.incbin "baserom.gba", 0x30cf5c, 0x8
	.globl gUnknown_830CF64
gUnknown_830CF64: @ 0x0830CF64
	.incbin "baserom.gba", 0x30cf64, 0x8
	.globl gUnknown_830CF6C
gUnknown_830CF6C: @ 0x0830CF6C
	.incbin "baserom.gba", 0x30cf6c, 0x48
	.globl gUnknown_830CFB4
gUnknown_830CFB4: @ 0x0830CFB4
	.incbin "baserom.gba", 0x30cfb4, 0x8
	.globl gUnknown_830CFBC
gUnknown_830CFBC: @ 0x0830CFBC
	.incbin "baserom.gba", 0x30cfbc, 0x8
	.globl gUnknown_830CFC4
gUnknown_830CFC4: @ 0x0830CFC4
	.incbin "baserom.gba", 0x30cfc4, 0x8
	.globl gUnknown_830CFCC
gUnknown_830CFCC: @ 0x0830CFCC
	.incbin "baserom.gba", 0x30cfcc, 0x38
	.globl gUnknown_830D004
gUnknown_830D004: @ 0x0830D004
	.incbin "baserom.gba", 0x30d004, 0x8
	.globl gUnknown_830D00C
gUnknown_830D00C: @ 0x0830D00C
	.incbin "baserom.gba", 0x30d00c, 0x2c
	.globl gUnknown_830D038
gUnknown_830D038: @ 0x0830D038
	.incbin "baserom.gba", 0x30d038, 0x8
	.globl gUnknown_830D040
gUnknown_830D040: @ 0x0830D040
	.incbin "baserom.gba", 0x30d040, 0x70
	.globl gUnknown_830D0B0
gUnknown_830D0B0: @ 0x0830D0B0
	.incbin "baserom.gba", 0x30d0b0, 0x8
	.globl gUnknown_830D0B8
gUnknown_830D0B8: @ 0x0830D0B8
	.incbin "baserom.gba", 0x30d0b8, 0x18
	.globl gUnknown_830D0D0
gUnknown_830D0D0: @ 0x0830D0D0
	.incbin "baserom.gba", 0x30d0d0, 0x18
	.globl gUnknown_830D0E8
gUnknown_830D0E8: @ 0x0830D0E8
	.incbin "baserom.gba", 0x30d0e8, 0x28
	.globl gUnknown_830D110
gUnknown_830D110: @ 0x0830D110
	.incbin "baserom.gba", 0x30d110, 0x4
	.globl gUnknown_830D114
gUnknown_830D114: @ 0x0830D114
	.incbin "baserom.gba", 0x30d114, 0xf0
	.globl gUnknown_830D204
gUnknown_830D204: @ 0x0830D204
	.incbin "baserom.gba", 0x30d204, 0x3c
	.globl gUnknown_830D240
gUnknown_830D240: @ 0x0830D240

	@ asm/trade.s:9631 sub_0807B624
	.globl gText_Rom_30D240
gText_Rom_30D240: @ 0x0830D240
	.string "{0xFD}{0x02}に\n{0xFD}{0x03}を　おくります！$"
	.if (. - gText_Rom_30D240) > 0xf
	.error "gText_Rom_30D240 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30D240) < 0xf
	.space 0xf - (. - gText_Rom_30D240)
	.endif
	.globl gUnknown_830D24F
gUnknown_830D24F: @ 0x0830D24F

	@ asm/trade.s:9700 sub_0807B624
	.globl gText_Rom_30D24F
gText_Rom_30D24F: @ 0x0830D24F
	.string "ばいばい　{0xFD}{0x03}！$"
	.if (. - gText_Rom_30D24F) > 0x9
	.error "gText_Rom_30D24F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30D24F) < 0x9
	.space 0x9 - (. - gText_Rom_30D24F)
	.endif
	.globl gUnknown_830D258
gUnknown_830D258: @ 0x0830D258

	@ asm/trade.s:11177 sub_0807B624
	.globl gText_Rom_30D258
gText_Rom_30D258: @ 0x0830D258
	.string "{0xFD}{0x02}から\n{0xFD}{0x04}が　おくられてきた！$"
	.if (. - gText_Rom_30D258) > 0x12
	.error "gText_Rom_30D258 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30D258) < 0x12
	.space 0x12 - (. - gText_Rom_30D258)
	.endif
	.globl gUnknown_830D26A
gUnknown_830D26A: @ 0x0830D26A

	@ asm/trade.s:11253 sub_0807B624
	.globl gText_Rom_30D26A
gText_Rom_30D26A: @ 0x0830D26A
	.string "{0xFD}{0x04}を　かわいがって　あげてね！$"
	.if (. - gText_Rom_30D26A) > 0x11
	.error "gText_Rom_30D26A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30D26A) < 0x11
	.space 0x11 - (. - gText_Rom_30D26A)
	.endif
	.incbin "baserom.gba", 0x30d27b, 0x1
	.globl gUnknown_830D27C
gUnknown_830D27C: @ 0x0830D27C
	.incbin "baserom.gba", 0x30d27c, 0x10
	.globl gUnknown_830D28C
gUnknown_830D28C: @ 0x0830D28C
	.incbin "baserom.gba", 0x30d28c, 0x8
	.globl gUnknown_830D294
gUnknown_830D294: @ 0x0830D294
	.incbin "baserom.gba", 0x30d294, 0x10
	.globl gUnknown_830D2A4
gUnknown_830D2A4: @ 0x0830D2A4
	.incbin "baserom.gba", 0x30d2a4, 0x6c
	.globl gUnknown_830D310
gUnknown_830D310: @ 0x0830D310
	.incbin "baserom.gba", 0x30d310, 0x44
	.globl gUnknown_830D354
gUnknown_830D354: @ 0x0830D354
	.incbin "baserom.gba", 0x30d354, 0x20
	.globl gUnknown_830D374
gUnknown_830D374: @ 0x0830D374
	.incbin "baserom.gba", 0x30d374, 0x400
	.globl gUnknown_830D774
gUnknown_830D774: @ 0x0830D774
	.incbin "baserom.gba", 0x30d774, 0x1f04

	@ src/data/script_menu.h:637 script_menu_line_637 (+3 aliases)
	.globl gText_Rom_30F678
gText_Rom_30F678: @ 0x0830F678
	.string "いいえ$"
	.if (. - gText_Rom_30F678) > 0x4
	.error "gText_Rom_30F678 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F678) < 0x4
	.space 0x4 - (. - gText_Rom_30F678)
	.endif
	.incbin "baserom.gba", 0x30f67c, 0x32
	.globl gUnknown_830F6AE
gUnknown_830F6AE: @ 0x0830F6AE

