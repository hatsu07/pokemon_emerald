	@ src/pokemon_storage_system.c:933 sText_OutOf30
	.globl gText_Rom_54B258
gText_Rom_54B258: @ 0x0854B258
	.string "/30$"
	.if (. - gText_Rom_54B258) > 0x4
	.error "gText_Rom_54B258 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_54B258) < 0x4
	.space 0x4 - (. - gText_Rom_54B258)
	.endif
	.globl gUnknown_854B25C
gUnknown_854B25C: @ 0x0854B25C
	.incbin "baserom.gba", 0x54b25c, 0x20
	.globl gUnknown_854B27C
gUnknown_854B27C: @ 0x0854B27C
	.incbin "baserom.gba", 0x54b27c, 0x800
	.globl gUnknown_854BA7C
gUnknown_854BA7C: @ 0x0854BA7C
	.incbin "baserom.gba", 0x54ba7c, 0x180
	.globl gUnknown_854BBFC
gUnknown_854BBFC: @ 0x0854BBFC
	.incbin "baserom.gba", 0x54bbfc, 0x98
	.globl gUnknown_854BC94
gUnknown_854BC94: @ 0x0854BC94
	.incbin "baserom.gba", 0x54bc94, 0x12c
	.globl gUnknown_854BDC0
gUnknown_854BDC0: @ 0x0854BDC0
	.incbin "baserom.gba", 0x54bdc0, 0xfc
	.globl gUnknown_854BEBC
gUnknown_854BEBC: @ 0x0854BEBC
	.incbin "baserom.gba", 0x54bebc, 0x40
	.globl gUnknown_854BEFC
gUnknown_854BEFC: @ 0x0854BEFC
	.incbin "baserom.gba", 0x54befc, 0x20
	.globl gUnknown_854BF1C
gUnknown_854BF1C: @ 0x0854BF1C
	.incbin "baserom.gba", 0x54bf1c, 0x20
	.globl gUnknown_854BF3C
gUnknown_854BF3C: @ 0x0854BF3C
	.incbin "baserom.gba", 0x54bf3c, 0x20
	.globl gUnknown_854BF5C
gUnknown_854BF5C: @ 0x0854BF5C
	.incbin "baserom.gba", 0x54bf5c, 0x20
	.globl gUnknown_854BF7C
gUnknown_854BF7C: @ 0x0854BF7C
	.incbin "baserom.gba", 0x54bf7c, 0x20
	.globl gUnknown_854BF9C
gUnknown_854BF9C: @ 0x0854BF9C
	.incbin "baserom.gba", 0x54bf9c, 0x6c0
	.globl gUnknown_854C65C
gUnknown_854C65C: @ 0x0854C65C
	.incbin "baserom.gba", 0x54c65c, 0xb0
	.globl gUnknown_854C70C
gUnknown_854C70C: @ 0x0854C70C
	.incbin "baserom.gba", 0x54c70c, 0x48
	.globl gUnknown_854C754
gUnknown_854C754: @ 0x0854C754
	.incbin "baserom.gba", 0x54c754, 0x18
	.globl gUnknown_854C76C
gUnknown_854C76C: @ 0x0854C76C
	.incbin "baserom.gba", 0x54c76c, 0x238
	.globl gUnknown_854C9A4
gUnknown_854C9A4: @ 0x0854C9A4
	.incbin "baserom.gba", 0x54c9a4, 0x20
	.globl gUnknown_854C9C4
gUnknown_854C9C4: @ 0x0854C9C4
	.incbin "baserom.gba", 0x54c9c4, 0x20
	.globl gUnknown_854C9E4
gUnknown_854C9E4: @ 0x0854C9E4
	.incbin "baserom.gba", 0x54c9e4, 0x10
	.globl gUnknown_854C9F4
gUnknown_854C9F4: @ 0x0854C9F4
	.incbin "baserom.gba", 0x54c9f4, 0x8
	.globl gUnknown_854C9FC
gUnknown_854C9FC: @ 0x0854C9FC
	.incbin "baserom.gba", 0x54c9fc, 0x8
	.globl gUnknown_854CA04
gUnknown_854CA04: @ 0x0854CA04
	.incbin "baserom.gba", 0x54ca04, 0x18
	.globl gUnknown_854CA1C
gUnknown_854CA1C: @ 0x0854CA1C
	.incbin "baserom.gba", 0x54ca1c, 0xf8
	.globl gUnknown_854CB14
gUnknown_854CB14: @ 0x0854CB14
	.incbin "baserom.gba", 0x54cb14, 0x58
	.globl gUnknown_854CB6C
gUnknown_854CB6C: @ 0x0854CB6C
	.incbin "baserom.gba", 0x54cb6c, 0x18
	.globl gUnknown_854CB84
gUnknown_854CB84: @ 0x0854CB84
	.incbin "baserom.gba", 0x54cb84, 0x48
	.globl gUnknown_854CBCC
gUnknown_854CBCC: @ 0x0854CBCC
	.incbin "baserom.gba", 0x54cbcc, 0x4c58
	.globl gUnknown_8551824
gUnknown_8551824: @ 0x08551824
	.incbin "baserom.gba", 0x551824, 0x44
	.globl gUnknown_8551868
gUnknown_8551868: @ 0x08551868
	.incbin "baserom.gba", 0x551868, 0x41d8
	.globl gUnknown_8555A40
gUnknown_8555A40: @ 0x08555A40
	.incbin "baserom.gba", 0x555a40, 0xc0
	.globl gUnknown_8555B00
gUnknown_8555B00: @ 0x08555B00
	.incbin "baserom.gba", 0x555b00, 0x7c
	.globl gUnknown_8555B7C
gUnknown_8555B7C: @ 0x08555B7C
	.incbin "baserom.gba", 0x555b7c, 0x28
	.globl gUnknown_8555BA4
gUnknown_8555BA4: @ 0x08555BA4
	.incbin "baserom.gba", 0x555ba4, 0x38
	.globl gUnknown_8555BDC
gUnknown_8555BDC: @ 0x08555BDC
	.incbin "baserom.gba", 0x555bdc, 0x8b8
	.globl gUnknown_8556494
gUnknown_8556494: @ 0x08556494
	.incbin "baserom.gba", 0x556494, 0xc
	.globl gUnknown_85564A0
gUnknown_85564A0: @ 0x085564A0
	.incbin "baserom.gba", 0x5564a0, 0x18
	.globl gUnknown_85564B8
gUnknown_85564B8: @ 0x085564B8
	.incbin "baserom.gba", 0x5564b8, 0x28
	.globl gUnknown_85564E0
gUnknown_85564E0: @ 0x085564E0
	.incbin "baserom.gba", 0x5564e0, 0x18
	.globl gUnknown_85564F8
gUnknown_85564F8: @ 0x085564F8
	.incbin "baserom.gba", 0x5564f8, 0x54
	.globl gUnknown_855654C
gUnknown_855654C: @ 0x0855654C
	.incbin "baserom.gba", 0x55654c, 0x18
	.globl gUnknown_8556564
gUnknown_8556564: @ 0x08556564
	.incbin "baserom.gba", 0x556564, 0x18
	.globl gUnknown_855657C
gUnknown_855657C: @ 0x0855657C
	.incbin "baserom.gba", 0x55657c, 0x9c
	.globl gUnknown_8556618
gUnknown_8556618: @ 0x08556618
	.incbin "baserom.gba", 0x556618, 0x8
	.globl gUnknown_8556620
gUnknown_8556620: @ 0x08556620
	.incbin "baserom.gba", 0x556620, 0x14c
	.globl gUnknown_855676C
gUnknown_855676C: @ 0x0855676C
	.incbin "baserom.gba", 0x55676c, 0x18
	.globl gUnknown_8556784
gUnknown_8556784: @ 0x08556784
	.incbin "baserom.gba", 0x556784, 0x20
	.globl gUnknown_85567A4
gUnknown_85567A4: @ 0x085567A4
	.incbin "baserom.gba", 0x5567a4, 0x60
	.globl gMonIconTable
gMonIconTable: @ 0x08556804
	.incbin "baserom.gba", 0x556804, 0x6e0
	.globl gMonIconPaletteIndices
gMonIconPaletteIndices: @ 0x08556EE4
	.incbin "baserom.gba", 0x556ee4, 0x1b8
	.globl gMonIconPaletteTable
gMonIconPaletteTable: @ 0x0855709C
	.incbin "baserom.gba", 0x55709c, 0x30
	.globl gUnknown_85570CC
gUnknown_85570CC: @ 0x085570CC
	.incbin "baserom.gba", 0x5570cc, 0x44
	.globl gUnknown_8557110
gUnknown_8557110: @ 0x08557110
	.incbin "baserom.gba", 0x557110, 0x34
	.globl gUnknown_8557144
gUnknown_8557144: @ 0x08557144
	.incbin "baserom.gba", 0x557144, 0x8
	.globl gUnknown_855714C
gUnknown_855714C: @ 0x0855714C
	.incbin "baserom.gba", 0x55714c, 0x18
	.globl gUnknown_8557164
gUnknown_8557164: @ 0x08557164
	.incbin "baserom.gba", 0x557164, 0x2
	.globl gUnknown_8557166
gUnknown_8557166: @ 0x08557166
	.incbin "baserom.gba", 0x557166, 0x62
	.globl gUnknown_85571C8
gUnknown_85571C8: @ 0x085571C8
	.incbin "baserom.gba", 0x5571c8, 0x18
	.globl gUnknown_85571E0
gUnknown_85571E0: @ 0x085571E0
	.incbin "baserom.gba", 0x5571e0, 0x1680
	.globl gUnknown_8558860
gUnknown_8558860: @ 0x08558860
	.incbin "baserom.gba", 0x558860, 0x1680
	.globl gUnknown_8559EE0
gUnknown_8559EE0: @ 0x08559EE0
	.incbin "baserom.gba", 0x559ee0, 0xc0
	.globl gUnknown_8559FA0
gUnknown_8559FA0: @ 0x08559FA0
	.incbin "baserom.gba", 0x559fa0, 0x20
	.globl gUnknown_8559FC0
gUnknown_8559FC0: @ 0x08559FC0
	.incbin "baserom.gba", 0x559fc0, 0xb4
	.globl gUnknown_855A074
gUnknown_855A074: @ 0x0855A074
	.incbin "baserom.gba", 0x55a074, 0x5f0
	.globl gUnknown_855A664
gUnknown_855A664: @ 0x0855A664
	.incbin "baserom.gba", 0x55a664, 0x8
	.globl gUnknown_855A66C
gUnknown_855A66C: @ 0x0855A66C
	.incbin "baserom.gba", 0x55a66c, 0x8
	.globl gUnknown_855A674
gUnknown_855A674: @ 0x0855A674
	.incbin "baserom.gba", 0x55a674, 0x8
	.globl gUnknown_855A67C
gUnknown_855A67C: @ 0x0855A67C
	.incbin "baserom.gba", 0x55a67c, 0x4c
	.globl gUnknown_855A6C8
gUnknown_855A6C8: @ 0x0855A6C8
	.incbin "baserom.gba", 0x55a6c8, 0x4
	.globl gUnknown_855A6CC
gUnknown_855A6CC: @ 0x0855A6CC
	.incbin "baserom.gba", 0x55a6cc, 0x4
	.globl gUnknown_855A6D0
gUnknown_855A6D0: @ 0x0855A6D0
	.incbin "baserom.gba", 0x55a6d0, 0x8
	.globl gUnknown_855A6D8
gUnknown_855A6D8: @ 0x0855A6D8
	.incbin "baserom.gba", 0x55a6d8, 0x8
	.globl gUnknown_855A6E0
gUnknown_855A6E0: @ 0x0855A6E0
	.incbin "baserom.gba", 0x55a6e0, 0x3c
	.globl gUnknown_855A71C
gUnknown_855A71C: @ 0x0855A71C
	.incbin "baserom.gba", 0x55a71c, 0x90
	.globl gUnknown_855A7AC
gUnknown_855A7AC: @ 0x0855A7AC
	.incbin "baserom.gba", 0x55a7ac, 0x18
	.globl gUnknown_855A7C4
gUnknown_855A7C4: @ 0x0855A7C4
	.incbin "baserom.gba", 0x55a7c4, 0x158
	.globl gUnknown_855A91C
gUnknown_855A91C: @ 0x0855A91C
	.incbin "baserom.gba", 0x55a91c, 0x8
	.globl gUnknown_855A924
gUnknown_855A924: @ 0x0855A924
	.incbin "baserom.gba", 0x55a924, 0x1c
	.globl gUnknown_855A940
gUnknown_855A940: @ 0x0855A940
	.incbin "baserom.gba", 0x55a940, 0x90

