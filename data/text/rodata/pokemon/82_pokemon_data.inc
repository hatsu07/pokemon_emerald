	@ src/pokedex.c:850 sText_No000
	.globl gText_Rom_539C08
gText_Rom_539C08: @ 0x08539C08
	.string "{NO}000$"
	.if (. - gText_Rom_539C08) > 0x6
	.error "gText_Rom_539C08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_539C08) < 0x6
	.space 0x6 - (. - gText_Rom_539C08)
	.endif
	.globl gUnknown_8539C0E
gUnknown_8539C0E: @ 0x08539C0E
	.incbin "baserom.gba", 0x539c0e, 0x42

	.include "data/pokemon/pokedex_descriptions.inc"
	.include "data/pokemon/pokedex_entries.inc"

	.globl gUnknown_85430F0
gUnknown_85430F0: @ 0x085430F0
	.incbin "baserom.gba", 0x5430f0, 0x20
	.globl gUnknown_8543110
gUnknown_8543110: @ 0x08543110
	.incbin "baserom.gba", 0x543110, 0x10
	.globl gUnknown_8543120
gUnknown_8543120: @ 0x08543120
	.incbin "baserom.gba", 0x543120, 0x28
	.globl gUnknown_8543148
gUnknown_8543148: @ 0x08543148
	.incbin "baserom.gba", 0x543148, 0x8
	.globl gUnknown_8543150
gUnknown_8543150: @ 0x08543150
	.incbin "baserom.gba", 0x543150, 0x18
	.globl gUnknown_8543168
gUnknown_8543168: @ 0x08543168
	.incbin "baserom.gba", 0x543168, 0x676
	.globl gUnknown_85437DE
gUnknown_85437DE: @ 0x085437DE
	.incbin "baserom.gba", 0x5437de, 0x7e
	.globl gUnknown_854385C
gUnknown_854385C: @ 0x0854385C
	.incbin "baserom.gba", 0x54385c, 0x58c
	.globl gUnknown_8543DE8
gUnknown_8543DE8: @ 0x08543DE8
	.incbin "baserom.gba", 0x543de8, 0x19c
	.globl gUnknown_8543F84
gUnknown_8543F84: @ 0x08543F84
	.incbin "baserom.gba", 0x543f84, 0x188
	.globl gUnknown_854410C
gUnknown_854410C: @ 0x0854410C
	.incbin "baserom.gba", 0x54410c, 0x28
	.globl gUnknown_8544134
gUnknown_8544134: @ 0x08544134
	.incbin "baserom.gba", 0x544134, 0x18
	.globl gUnknown_854414C
gUnknown_854414C: @ 0x0854414C
	.incbin "baserom.gba", 0x54414c, 0x54
	.globl gUnknown_85441A0
gUnknown_85441A0: @ 0x085441A0
	.incbin "baserom.gba", 0x5441a0, 0x1c
	.globl gUnknown_85441BC
gUnknown_85441BC: @ 0x085441BC
	.incbin "baserom.gba", 0x5441bc, 0x1c
	.globl gUnknown_85441D8
gUnknown_85441D8: @ 0x085441D8
	.incbin "baserom.gba", 0x5441d8, 0x1c
	.globl gUnknown_85441F4
gUnknown_85441F4: @ 0x085441F4
	.incbin "baserom.gba", 0x5441f4, 0x1c
	.globl gUnknown_8544210
gUnknown_8544210: @ 0x08544210
	.incbin "baserom.gba", 0x544210, 0x18
	.globl gUnknown_8544228
gUnknown_8544228: @ 0x08544228
	.incbin "baserom.gba", 0x544228, 0x38
	.globl gUnknown_8544260
gUnknown_8544260: @ 0x08544260
	.incbin "baserom.gba", 0x544260, 0x58
	.globl gUnknown_85442B8
gUnknown_85442B8: @ 0x085442B8
	.incbin "baserom.gba", 0x5442b8, 0x60
	.globl gUnknown_8544318
gUnknown_8544318: @ 0x08544318
	.incbin "baserom.gba", 0x544318, 0x98
	.globl gUnknown_85443B0
gUnknown_85443B0: @ 0x085443B0
	.incbin "baserom.gba", 0x5443b0, 0x2
	.globl gUnknown_85443B2
gUnknown_85443B2: @ 0x085443B2
	.incbin "baserom.gba", 0x5443b2, 0x1

	@ src/strings.c:83 gText_DexSearchAlphaABC
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_5443B3
gText_Rom_5443B3: @ 0x085443B3
	.string "あいうえお$"
	.if (. - gText_Rom_5443B3) != 0x6
	.error "gText_Rom_5443B3 must retain its original byte length"
	.endif
	.globl gUnknown_85443B8
	.set gUnknown_85443B8, gText_Rom_5443B3 + 0x5
	.incbin "baserom.gba", 0x5443b9, 0x13
	.globl gUnknown_85443CC
gUnknown_85443CC: @ 0x085443CC
	.incbin "baserom.gba", 0x5443cc, 0x30
	.globl gUnknown_85443FC
gUnknown_85443FC: @ 0x085443FC
	.incbin "baserom.gba", 0x5443fc, 0x10
	.globl gUnknown_854440C
gUnknown_854440C: @ 0x0854440C
	.incbin "baserom.gba", 0x54440c, 0x10
	.globl gUnknown_854441C
gUnknown_854441C: @ 0x0854441C
	.incbin "baserom.gba", 0x54441c, 0x740
	.globl gUnknown_8544B5C
gUnknown_8544B5C: @ 0x08544B5C
	.incbin "baserom.gba", 0x544b5c, 0x6c0
	.globl gUnknown_854521C
gUnknown_854521C: @ 0x0854521C
	.incbin "baserom.gba", 0x54521c, 0x174
	.globl gUnknown_8545390
gUnknown_8545390: @ 0x08545390
	.incbin "baserom.gba", 0x545390, 0x1a0
	.globl gUnknown_8545530
gUnknown_8545530: @ 0x08545530
	.incbin "baserom.gba", 0x545530, 0x1b8
	.globl gUnknown_85456E8
gUnknown_85456E8: @ 0x085456E8
	.incbin "baserom.gba", 0x5456e8, 0xdc
	.globl gUnknown_85457C4
gUnknown_85457C4: @ 0x085457C4
	.incbin "baserom.gba", 0x5457c4, 0x12c
	.globl gUnknown_85458F0
gUnknown_85458F0: @ 0x085458F0
	.incbin "baserom.gba", 0x5458f0, 0x180
	.globl gUnknown_8545A70
gUnknown_8545A70: @ 0x08545A70
	.incbin "baserom.gba", 0x545a70, 0x18c
	.globl gUnknown_8545BFC
gUnknown_8545BFC: @ 0x08545BFC
	.incbin "baserom.gba", 0x545bfc, 0x98
	.globl gUnknown_8545C94
gUnknown_8545C94: @ 0x08545C94
	.incbin "baserom.gba", 0x545c94, 0x478
	.globl gUnknown_854610C
gUnknown_854610C: @ 0x0854610C
	.incbin "baserom.gba", 0x54610c, 0x20
	.globl gUnknown_854612C
gUnknown_854612C: @ 0x0854612C
	.incbin "baserom.gba", 0x54612c, 0x20
	.globl gUnknown_854614C
gUnknown_854614C: @ 0x0854614C
	.incbin "baserom.gba", 0x54614c, 0x20
	.globl gUnknown_854616C
gUnknown_854616C: @ 0x0854616C
	.incbin "baserom.gba", 0x54616c, 0x20
	.globl gUnknown_854618C
gUnknown_854618C: @ 0x0854618C
	.incbin "baserom.gba", 0x54618c, 0x20
	.globl gUnknown_85461AC
gUnknown_85461AC: @ 0x085461AC
	.incbin "baserom.gba", 0x5461ac, 0x20
	.globl gUnknown_85461CC
gUnknown_85461CC: @ 0x085461CC
	.incbin "baserom.gba", 0x5461cc, 0x20
	.globl gUnknown_85461EC
gUnknown_85461EC: @ 0x085461EC
	.incbin "baserom.gba", 0x5461ec, 0x20
	.globl gUnknown_854620C
gUnknown_854620C: @ 0x0854620C
	.incbin "baserom.gba", 0x54620c, 0x20
	.globl gUnknown_854622C
gUnknown_854622C: @ 0x0854622C
	.incbin "baserom.gba", 0x54622c, 0x248
	.globl gUnknown_8546474
gUnknown_8546474: @ 0x08546474
	.incbin "baserom.gba", 0x546474, 0x2a0
	.globl gUnknown_8546714
gUnknown_8546714: @ 0x08546714
	.incbin "baserom.gba", 0x546714, 0x10
	.globl gUnknown_8546724
gUnknown_8546724: @ 0x08546724
	.incbin "baserom.gba", 0x546724, 0x20
	.globl gUnknown_8546744
gUnknown_8546744: @ 0x08546744
	.incbin "baserom.gba", 0x546744, 0x14
	.globl gUnknown_8546758
gUnknown_8546758: @ 0x08546758
	.incbin "baserom.gba", 0x546758, 0x14
	.globl gUnknown_854676C
gUnknown_854676C: @ 0x0854676C
	.incbin "baserom.gba", 0x54676c, 0x3
	.globl gUnknown_854676F
gUnknown_854676F: @ 0x0854676F
	.incbin "baserom.gba", 0x54676f, 0x6
	.globl gUnknown_8546775
gUnknown_8546775: @ 0x08546775
	.incbin "baserom.gba", 0x546775, 0x3
	.globl gUnknown_8546778
gUnknown_8546778: @ 0x08546778
	.incbin "baserom.gba", 0x546778, 0x8
	.globl gUnknown_8546780
gUnknown_8546780: @ 0x08546780
	.incbin "baserom.gba", 0x546780, 0x8
	.globl gUnknown_8546788
gUnknown_8546788: @ 0x08546788
	.incbin "baserom.gba", 0x546788, 0x18
	.globl gUnknown_85467A0
gUnknown_85467A0: @ 0x085467A0
	.incbin "baserom.gba", 0x5467a0, 0x2
	.globl gUnknown_85467A2
gUnknown_85467A2: @ 0x085467A2
	.incbin "baserom.gba", 0x5467a2, 0x2
	.globl gUnknown_85467A4
gUnknown_85467A4: @ 0x085467A4
	.incbin "baserom.gba", 0x5467a4, 0x8
	.globl gUnknown_85467AC
gUnknown_85467AC: @ 0x085467AC
	.incbin "baserom.gba", 0x5467ac, 0x2
	.globl gUnknown_85467AE
gUnknown_85467AE: @ 0x085467AE
	.incbin "baserom.gba", 0x5467ae, 0x2
	.globl gUnknown_85467B0
gUnknown_85467B0: @ 0x085467B0
	.incbin "baserom.gba", 0x5467b0, 0x2
	.globl gUnknown_85467B2
gUnknown_85467B2: @ 0x085467B2
	.incbin "baserom.gba", 0x5467b2, 0x2
	.globl gUnknown_85467B4
gUnknown_85467B4: @ 0x085467B4
	.incbin "baserom.gba", 0x5467b4, 0x2
	.globl gUnknown_85467B6
gUnknown_85467B6: @ 0x085467B6
	.incbin "baserom.gba", 0x5467b6, 0x2
	.globl gUnknown_85467B8
gUnknown_85467B8: @ 0x085467B8

