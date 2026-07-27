	@ src/battle_controller_player.c:2517 immuneIcon
	.globl gText_Rom_B3A50A
gText_Rom_B3A50A: @ 0x08B3A50A
	.string "{BIG_MULT_X}$"
	.if (. - gText_Rom_B3A50A) > 0x3
	.error "gText_Rom_B3A50A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_B3A50A) < 0x3
	.space 0x3 - (. - gText_Rom_B3A50A)
	.endif
	.incbin "baserom.gba", 0xb3a50d, 0xc5fdf
	.globl gUnknown_8C004EC
gUnknown_8C004EC: @ 0x08C004EC
	.incbin "baserom.gba", 0xc004ec, 0x44
	.globl gUnknown_8C00530
gUnknown_8C00530: @ 0x08C00530
	.incbin "baserom.gba", 0xc00530, 0x1dd8
	.globl gUnknown_8C02308
gUnknown_8C02308: @ 0x08C02308
	.incbin "baserom.gba", 0xc02308, 0x70f0
	.globl gUnknown_8C093F8
gUnknown_8C093F8: @ 0x08C093F8
	.incbin "baserom.gba", 0xc093f8, 0x87ec
	.globl gUnknown_8C11BE4
gUnknown_8C11BE4: @ 0x08C11BE4
	.incbin "baserom.gba", 0xc11be4, 0x52b4
	.globl gUnknown_8C16E98
gUnknown_8C16E98: @ 0x08C16E98
	.incbin "baserom.gba", 0xc16e98, 0x118
	.globl gUnknown_8C16FB0
gUnknown_8C16FB0: @ 0x08C16FB0
	.incbin "baserom.gba", 0xc16fb0, 0x1c8
	.globl gUnknown_8C17178
gUnknown_8C17178: @ 0x08C17178
	.incbin "baserom.gba", 0xc17178, 0x810
	.globl gUnknown_8C17988
gUnknown_8C17988: @ 0x08C17988
	.incbin "baserom.gba", 0xc17988, 0x130
	.globl gUnknown_8C17AB8
gUnknown_8C17AB8: @ 0x08C17AB8
	.incbin "baserom.gba", 0xc17ab8, 0xb98
	.globl gUnknown_8C18650
gUnknown_8C18650: @ 0x08C18650
	.incbin "baserom.gba", 0xc18650, 0x107c
	.globl gUnknown_8C196CC
gUnknown_8C196CC: @ 0x08C196CC
	.incbin "baserom.gba", 0xc196cc, 0x868
	.globl gUnknown_8C19F34
gUnknown_8C19F34: @ 0x08C19F34
	.incbin "baserom.gba", 0xc19f34, 0x114
	.globl gUnknown_8C1A048
gUnknown_8C1A048: @ 0x08C1A048
	.incbin "baserom.gba", 0xc1a048, 0x12c
	.globl gUnknown_8C1A174
gUnknown_8C1A174: @ 0x08C1A174
	.incbin "baserom.gba", 0xc1a174, 0x188
	.globl gUnknown_8C1A2FC
gUnknown_8C1A2FC: @ 0x08C1A2FC
	.incbin "baserom.gba", 0xc1a2fc, 0x2404
	.globl gUnknown_8C1C700
gUnknown_8C1C700: @ 0x08C1C700
	.incbin "baserom.gba", 0xc1c700, 0x9f4
	.globl gUnknown_8C1D0F4
gUnknown_8C1D0F4: @ 0x08C1D0F4
	.incbin "baserom.gba", 0xc1d0f4, 0x13c
	.globl gUnknown_8C1D230
gUnknown_8C1D230: @ 0x08C1D230
	.incbin "baserom.gba", 0xc1d230, 0x28
	.globl gUnknown_8C1D258
gUnknown_8C1D258: @ 0x08C1D258
	.incbin "baserom.gba", 0xc1d258, 0x34b4
	.globl gUnknown_8C2070C
gUnknown_8C2070C: @ 0x08C2070C
	.incbin "baserom.gba", 0xc2070c, 0x1c
	.globl gUnknown_8C20728
gUnknown_8C20728: @ 0x08C20728
	.incbin "baserom.gba", 0xc20728, 0x1f8c
	.globl gUnknown_8C226B4
gUnknown_8C226B4: @ 0x08C226B4
	.incbin "baserom.gba", 0xc226b4, 0xcd0
	.globl gUnknown_8C23384
gUnknown_8C23384: @ 0x08C23384
	.incbin "baserom.gba", 0xc23384, 0xa70
	.globl gUnknown_8C23DF4
gUnknown_8C23DF4: @ 0x08C23DF4
	.incbin "baserom.gba", 0xc23df4, 0x28
	.globl gUnknown_8C23E1C
gUnknown_8C23E1C: @ 0x08C23E1C
	.incbin "baserom.gba", 0xc23e1c, 0xc58
	.globl gUnknown_8C24A74
gUnknown_8C24A74: @ 0x08C24A74
	.incbin "baserom.gba", 0xc24a74, 0x28
	.globl gUnknown_8C24A9C
gUnknown_8C24A9C: @ 0x08C24A9C
	.incbin "baserom.gba", 0xc24a9c, 0x5c3c
	.globl gUnknown_8C2A6D8
gUnknown_8C2A6D8: @ 0x08C2A6D8
	.incbin "baserom.gba", 0xc2a6d8, 0xa0
	.globl gUnknown_8C2A778
gUnknown_8C2A778: @ 0x08C2A778
	.incbin "baserom.gba", 0xc2a778, 0x18
	.globl gUnknown_8C2A790
gUnknown_8C2A790: @ 0x08C2A790
	.incbin "baserom.gba", 0xc2a790, 0x27d0
	.globl gUnknown_8C2CF60
gUnknown_8C2CF60: @ 0x08C2CF60
	.incbin "baserom.gba", 0xc2cf60, 0x24
	.globl gUnknown_8C2CF84
gUnknown_8C2CF84: @ 0x08C2CF84
	.incbin "baserom.gba", 0xc2cf84, 0x240
	.globl gUnknown_8C2D1C4
gUnknown_8C2D1C4: @ 0x08C2D1C4
	.incbin "baserom.gba", 0xc2d1c4, 0x600
	.globl gUnknown_8C2D7C4
gUnknown_8C2D7C4: @ 0x08C2D7C4
	.incbin "baserom.gba", 0xc2d7c4, 0x210
	.globl gUnknown_8C2D9D4
gUnknown_8C2D9D4: @ 0x08C2D9D4
	.incbin "baserom.gba", 0xc2d9d4, 0x11c
	.globl gUnknown_8C2DAF0
gUnknown_8C2DAF0: @ 0x08C2DAF0
	.incbin "baserom.gba", 0xc2daf0, 0x11c
	.globl gUnknown_8C2DC0C
gUnknown_8C2DC0C: @ 0x08C2DC0C
	.incbin "baserom.gba", 0xc2dc0c, 0x20
	.globl gUnknown_8C2DC2C
gUnknown_8C2DC2C: @ 0x08C2DC2C
	.incbin "baserom.gba", 0xc2dc2c, 0x20
	.globl gUnknown_8C2DC4C
gUnknown_8C2DC4C: @ 0x08C2DC4C
	.incbin "baserom.gba", 0xc2dc4c, 0x20
	.globl gUnknown_8C2DC6C
gUnknown_8C2DC6C: @ 0x08C2DC6C
	.incbin "baserom.gba", 0xc2dc6c, 0x20
	.globl gUnknown_8C2DC8C
gUnknown_8C2DC8C: @ 0x08C2DC8C
	.incbin "baserom.gba", 0xc2dc8c, 0x20
	.globl gUnknown_8C2DCAC
gUnknown_8C2DCAC: @ 0x08C2DCAC
	.incbin "baserom.gba", 0xc2dcac, 0x20
	.globl gUnknown_8C2DCCC
gUnknown_8C2DCCC: @ 0x08C2DCCC
	.incbin "baserom.gba", 0xc2dccc, 0x20
	.globl gUnknown_8C2DCEC
gUnknown_8C2DCEC: @ 0x08C2DCEC
	.incbin "baserom.gba", 0xc2dcec, 0x20
	.globl gUnknown_8C2DD0C
gUnknown_8C2DD0C: @ 0x08C2DD0C
	.incbin "baserom.gba", 0xc2dd0c, 0x13c
	.globl gUnknown_8C2DE48
gUnknown_8C2DE48: @ 0x08C2DE48
	.incbin "baserom.gba", 0xc2de48, 0x20
	.globl gUnknown_8C2DE68
gUnknown_8C2DE68: @ 0x08C2DE68
	.incbin "baserom.gba", 0xc2de68, 0xc8c
	.globl gUnknown_8C2EAF4
gUnknown_8C2EAF4: @ 0x08C2EAF4
	.incbin "baserom.gba", 0xc2eaf4, 0x4c
	.globl gUnknown_8C2EB40
gUnknown_8C2EB40: @ 0x08C2EB40
	.incbin "baserom.gba", 0xc2eb40, 0x114c0
	.globl gUnknown_8C40000
gUnknown_8C40000: @ 0x08C40000
	.incbin "baserom.gba", 0xc40000, 0xe177

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_C4E177
gText_Rom_C4E177: @ 0x08C4E177
	.string "ラララ$"
	.if (. - gText_Rom_C4E177) > 0x4
	.error "gText_Rom_C4E177 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_C4E177) < 0x4
	.space 0x4 - (. - gText_Rom_C4E177)
	.endif
	.incbin "baserom.gba", 0xc4e17b, 0x144b

