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
	.incbin "baserom.gba", 0x5467c4, 0xc
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

