	@ src/trainer_card.c:1184 sText_HofTime
	.globl gText_Rom_5467B8
gText_Rom_5467B8: @ 0x085467B8
	.string "{STR_VAR_1}:{STR_VAR_2}:{STR_VAR_3}$"
	.if (. - gText_Rom_5467B8) > 0x9
	.error "gText_Rom_5467B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5467B8) < 0x9
	.space 0x9 - (. - gText_Rom_5467B8)
	.endif
	.globl gUnknown_85467C1
gUnknown_85467C1: @ 0x085467C1
	.incbin "baserom.gba", 0x5467c1, 0x3
	.globl gUnknown_85467C4
gUnknown_85467C4: @ 0x085467C4
	.4byte gText_Rom_5CC367
	.4byte gText_Rom_5CC370
	.4byte gText_Rom_5CC367
	.globl gUnknown_85467D0
gUnknown_85467D0: @ 0x085467D0
	.incbin "baserom.gba", 0x5467d0, 0x6
	.globl gUnknown_85467D6
gUnknown_85467D6: @ 0x085467D6
	.incbin "baserom.gba", 0x5467d6, 0x6
	.globl gUnknown_85467DC
gUnknown_85467DC: @ 0x085467DC
	.incbin "baserom.gba", 0x5467dc, 0x4
	.globl gUnknown_85467E0
gUnknown_85467E0: @ 0x085467E0
	.incbin "baserom.gba", 0x5467e0, 0x4
	.globl gUnknown_85467E4
gUnknown_85467E4: @ 0x085467E4
	.incbin "baserom.gba", 0x5467e4, 0x1c0
	.globl gUnknown_85469A4
gUnknown_85469A4: @ 0x085469A4
	.incbin "baserom.gba", 0x5469a4, 0x5c7

	@ src/strings.c:412 gText_ApostropheSBase
	.globl gText_Rom_546F6B
gText_Rom_546F6B: @ 0x08546F6B
	.string " きち$"
	.if (. - gText_Rom_546F6B) > 0x4
	.error "gText_Rom_546F6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_546F6B) < 0x4
	.space 0x4 - (. - gText_Rom_546F6B)
	.endif
	.incbin "baserom.gba", 0x546f6f, 0xcbe

	@ src/strings.c:412 gText_ApostropheSBase
	.globl gText_Rom_547C2D
gText_Rom_547C2D: @ 0x08547C2D
	.string " きち$"
	.if (. - gText_Rom_547C2D) > 0x4
	.error "gText_Rom_547C2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_547C2D) < 0x4
	.space 0x4 - (. - gText_Rom_547C2D)
	.endif
	.incbin "baserom.gba", 0x547c31, 0x537
	.globl gUnknown_8548168
gUnknown_8548168: @ 0x08548168
	.incbin "baserom.gba", 0x548168, 0x14a8
	.globl gUnknown_8549610
gUnknown_8549610: @ 0x08549610
	.incbin "baserom.gba", 0x549610, 0x2e8
	.globl gUnknown_85498F8
gUnknown_85498F8: @ 0x085498F8
	.incbin "baserom.gba", 0x5498f8, 0x260
	.globl gUnknown_8549B58
gUnknown_8549B58: @ 0x08549B58
	.incbin "baserom.gba", 0x549b58, 0x260
	.globl gUnknown_8549DB8
gUnknown_8549DB8: @ 0x08549DB8
	.incbin "baserom.gba", 0x549db8, 0x18
	.globl gUnknown_8549DD0
gUnknown_8549DD0: @ 0x08549DD0
	.incbin "baserom.gba", 0x549dd0, 0x18
	.globl gUnknown_8549DE8
gUnknown_8549DE8: @ 0x08549DE8
	.incbin "baserom.gba", 0x549de8, 0x38
	.globl gUnknown_8549E20
gUnknown_8549E20: @ 0x08549E20
	.incbin "baserom.gba", 0x549e20, 0xffc
	.globl gUnknown_854AE1C
gUnknown_854AE1C: @ 0x0854AE1C
	.incbin "baserom.gba", 0x54ae1c, 0xe8
	.globl gUnknown_854AF04
gUnknown_854AF04: @ 0x0854AF04
	.incbin "baserom.gba", 0x54af04, 0x8
	.globl gUnknown_854AF0C
gUnknown_854AF0C: @ 0x0854AF0C
	.incbin "baserom.gba", 0x54af0c, 0xc
	.globl gUnknown_854AF18
gUnknown_854AF18: @ 0x0854AF18
	.incbin "baserom.gba", 0x54af18, 0xc
	.globl gUnknown_854AF24
gUnknown_854AF24: @ 0x0854AF24
	.incbin "baserom.gba", 0x54af24, 0x28
	.globl gUnknown_854AF4C
gUnknown_854AF4C: @ 0x0854AF4C
	.incbin "baserom.gba", 0x54af4c, 0x20
	.globl gUnknown_854AF6C
gUnknown_854AF6C: @ 0x0854AF6C
	.incbin "baserom.gba", 0x54af6c, 0x3
	.globl gUnknown_854AF6F
gUnknown_854AF6F: @ 0x0854AF6F
	.incbin "baserom.gba", 0x54af6f, 0x3
	.globl gUnknown_854AF72
gUnknown_854AF72: @ 0x0854AF72
	.incbin "baserom.gba", 0x54af72, 0x6
	.globl gUnknown_854AF78
gUnknown_854AF78: @ 0x0854AF78
	.incbin "baserom.gba", 0x54af78, 0x68
	.globl gUnknown_854AFE0
gUnknown_854AFE0: @ 0x0854AFE0
	.incbin "baserom.gba", 0x54afe0, 0x18
	.globl gUnknown_854AFF8
gUnknown_854AFF8: @ 0x0854AFF8
	.incbin "baserom.gba", 0x54aff8, 0x10
	.globl gUnknown_854B008
gUnknown_854B008: @ 0x0854B008
	.incbin "baserom.gba", 0x54b008, 0xd0
	.globl gUnknown_854B0D8
gUnknown_854B0D8: @ 0x0854B0D8
	.incbin "baserom.gba", 0x54b0d8, 0x30
	.globl gUnknown_854B108
gUnknown_854B108: @ 0x0854B108
	.incbin "baserom.gba", 0x54b108, 0x18
	.globl gUnknown_854B120
gUnknown_854B120: @ 0x0854B120
	.incbin "baserom.gba", 0x54b120, 0x18
	.globl gUnknown_854B138
gUnknown_854B138: @ 0x0854B138
	.incbin "baserom.gba", 0x54b138, 0x3c
	.globl gUnknown_854B174
gUnknown_854B174: @ 0x0854B174
	.incbin "baserom.gba", 0x54b174, 0x70
	.globl gUnknown_854B1E4
gUnknown_854B1E4: @ 0x0854B1E4
	.incbin "baserom.gba", 0x54b1e4, 0x28
	.globl gUnknown_854B20C
gUnknown_854B20C: @ 0x0854B20C
	.incbin "baserom.gba", 0x54b20c, 0x28
	.globl gUnknown_854B234
gUnknown_854B234: @ 0x0854B234
	.incbin "baserom.gba", 0x54b234, 0x24
	.globl gUnknown_854B258
gUnknown_854B258: @ 0x0854B258

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
	.4byte MonPlaceChange_Move
	.4byte MonPlaceChange_Place
	.4byte MonPlaceChange_Shift
	.globl gUnknown_85564A0
gUnknown_85564A0: @ 0x085564A0
	.incbin "baserom.gba", 0x5564a0, 0x18
	.globl gUnknown_85564B8
gUnknown_85564B8: @ 0x085564B8
	@ Resolved pointer table; original ROM range 0x5564B8..0x5564DF.
	.4byte HandleInput_InBox
	.4byte 0
	.4byte HandleInput_InParty
	.4byte TYPE_FIGHT
	.4byte HandleInput_OnBox
	.4byte TYPE_FLYING
	.4byte HandleInput_OnButtons
	.4byte TYPE_POISON
	.4byte 0
	.4byte 0
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
