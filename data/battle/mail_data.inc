	@ pret/pokeemerald-jp direct xref for 0x0857AEB4: mail.s: MailReadBuildGraphics
	.globl gMailData_0857AEB4
gMailData_0857AEB4: @ 0x0857AEB4
	@ analyzed canonical ROM range 0x0857AEB4-0x0857AEBF
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xC entries=6
	.2byte 0x01F8, 0x0000, 0x11E1, 0x0000, 0x21D2, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x0857AEC0: mail.s: MailReadBuildGraphics
	.globl gMailData_0857AEC0
gMailData_0857AEC0: @ 0x0857AEC0
	@ analyzed canonical ROM range 0x0857AEC0-0x0857AED7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x18 entries=12
	.2byte 0x0300, 0x1804, 0x0F0A, 0x0001, 0x0F00, 0x0D0F, 0x0F03, 0x00F2
	.2byte 0x00FF, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x0857AED8: mail.s: sub_08121B64
	.globl gMailData_0857AED8
gMailData_0857AED8: @ 0x0857AED8
	@ analyzed canonical ROM range 0x0857AED8-0x0857AEDB
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x00, 0x0A, 0x0B, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0857AEDC: mail.s: MailReadBuildGraphics
	.globl gMailData_0857AEDC
gMailData_0857AEDC: @ 0x0857AEDC
	@ analyzed canonical ROM range 0x0857AEDC-0x0857AEE3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x8 bytes=8
	.byte 0xCD, 0x6A, 0xA5, 0x51, 0xFC, 0x45, 0xD4, 0x38
	@ pret/pokeemerald-jp direct xref for 0x0857AEE4: mail.s: MailReadBuildGraphics
	.globl gMailData_0857AEE4
gMailData_0857AEE4: @ 0x0857AEE4
	@ analyzed canonical ROM range 0x0857AEE4-0x0857AFDF
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AEE4 size=0x4 source=v54_multi_pointer
	.4byte gMailPalette_Orange
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AEE8 size=0x4 source=v54_multi_pointer
	.4byte gMailTiles_Orange
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AEEC size=0x4 source=v54_multi_pointer
	.4byte gMailTilemap_Orange
	@ ANALYSIS: MAIL_GRAPHICS_STYLE_FIELDS size=0x8 addr=0x0857AEF0 parent=gMailData_0857AEE4 offset=0xC unused=0x2C0 textColor=0x294A textShadow=0x6739
	@ ANALYSIS: SOURCE_RANGE addr=0x0857AEF0 size=0x8
	.4byte 0x2C0 @ unused
	.2byte 0x294A, 0x6739 @ textColor, textShadow
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AEF8 size=0x4 source=v54_multi_pointer
	.4byte gMailPalette_Harbor
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AEFC size=0x4 source=v54_multi_pointer
	.4byte gMailTiles_Harbor
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF00 size=0x4 source=v54_multi_pointer
	.4byte gMailTilemap_Harbor
	@ ANALYSIS: MAIL_GRAPHICS_STYLE_FIELDS size=0x8 addr=0x0857AF04 parent=gMailData_0857AEE4 offset=0x20 unused=0x2E0 textColor=0x7FFF textShadow=0x4631
	@ ANALYSIS: SOURCE_RANGE addr=0x0857AF04 size=0x8
	.4byte 0x2E0 @ unused
	.2byte 0x7FFF, 0x4631 @ textColor, textShadow
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF0C size=0x4 source=v54_multi_pointer
	.4byte gMailPalette_Glitter
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF10 size=0x4 source=v54_multi_pointer
	.4byte gMailTiles_Glitter
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF14 size=0x4 source=v54_multi_pointer
	.4byte gMailTilemap_Glitter
	@ ANALYSIS: MAIL_GRAPHICS_STYLE_FIELDS size=0x8 addr=0x0857AF18 parent=gMailData_0857AEE4 offset=0x34 unused=0x400 textColor=0x294A textShadow=0x6739
	@ ANALYSIS: SOURCE_RANGE addr=0x0857AF18 size=0x8
	.4byte 0x400 @ unused
	.2byte 0x294A, 0x6739 @ textColor, textShadow
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF20 size=0x4 source=v54_multi_pointer
	.4byte gMailPalette_Mech
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF24 size=0x4 source=v54_multi_pointer
	.4byte gMailTiles_Mech
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF28 size=0x4 source=v54_multi_pointer
	.4byte gMailTilemap_Mech
	@ ANALYSIS: MAIL_GRAPHICS_STYLE_FIELDS size=0x8 addr=0x0857AF2C parent=gMailData_0857AEE4 offset=0x48 unused=0x1E0 textColor=0x7FFF textShadow=0x4631
	@ ANALYSIS: SOURCE_RANGE addr=0x0857AF2C size=0x8
	.4byte 0x1E0 @ unused
	.2byte 0x7FFF, 0x4631 @ textColor, textShadow
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF34 size=0x4 source=v54_multi_pointer
	.4byte gMailPalette_Wood
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF38 size=0x4 source=v54_multi_pointer
	.4byte gMailTiles_Wood
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF3C size=0x4 source=v54_multi_pointer
	.4byte gMailTilemap_Wood
	@ ANALYSIS: MAIL_GRAPHICS_STYLE_FIELDS size=0x8 addr=0x0857AF40 parent=gMailData_0857AEE4 offset=0x5C unused=0x2E0 textColor=0x7FFF textShadow=0x4631
	@ ANALYSIS: SOURCE_RANGE addr=0x0857AF40 size=0x8
	.4byte 0x2E0 @ unused
	.2byte 0x7FFF, 0x4631 @ textColor, textShadow
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF48 size=0x4 source=v54_multi_pointer
	.4byte gMailPalette_Wave
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF4C size=0x4 source=v54_multi_pointer
	.4byte gMailTiles_Wave
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF50 size=0x4 source=v54_multi_pointer
	.4byte gMailTilemap_Wave
	@ ANALYSIS: MAIL_GRAPHICS_STYLE_FIELDS size=0x8 addr=0x0857AF54 parent=gMailData_0857AEE4 offset=0x70 unused=0x300 textColor=0x294A textShadow=0x6739
	@ ANALYSIS: SOURCE_RANGE addr=0x0857AF54 size=0x8
	.4byte 0x300 @ unused
	.2byte 0x294A, 0x6739 @ textColor, textShadow
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF5C size=0x4 source=v54_multi_pointer
	.4byte gMailPalette_Bead
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF60 size=0x4 source=v54_multi_pointer
	.4byte gMailTiles_Bead
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF64 size=0x4 source=v54_multi_pointer
	.4byte gMailTilemap_Bead
	@ ANALYSIS: MAIL_GRAPHICS_STYLE_FIELDS size=0x8 addr=0x0857AF68 parent=gMailData_0857AEE4 offset=0x84 unused=0x140 textColor=0x7FFF textShadow=0x4631
	@ ANALYSIS: SOURCE_RANGE addr=0x0857AF68 size=0x8
	.4byte 0x140 @ unused
	.2byte 0x7FFF, 0x4631 @ textColor, textShadow
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF70 size=0x4 source=v54_multi_pointer
	.4byte gMailPalette_Shadow
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF74 size=0x4 source=v54_multi_pointer
	.4byte gMailTiles_Shadow
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF78 size=0x4 source=v54_multi_pointer
	.4byte gMailTilemap_Shadow
	@ ANALYSIS: MAIL_GRAPHICS_STYLE_FIELDS size=0x8 addr=0x0857AF7C parent=gMailData_0857AEE4 offset=0x98 unused=0x300 textColor=0x7FFF textShadow=0x4631
	@ ANALYSIS: SOURCE_RANGE addr=0x0857AF7C size=0x8
	.4byte 0x300 @ unused
	.2byte 0x7FFF, 0x4631 @ textColor, textShadow
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF84 size=0x4 source=v54_multi_pointer
	.4byte gMailPalette_Tropic
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF88 size=0x4 source=v54_multi_pointer
	.4byte gMailTiles_Tropic
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF8C size=0x4 source=v54_multi_pointer
	.4byte gMailTilemap_Tropic
	@ ANALYSIS: MAIL_GRAPHICS_STYLE_FIELDS size=0x8 addr=0x0857AF90 parent=gMailData_0857AEE4 offset=0xAC unused=0x220 textColor=0x294A textShadow=0x6739
	@ ANALYSIS: SOURCE_RANGE addr=0x0857AF90 size=0x8
	.4byte 0x220 @ unused
	.2byte 0x294A, 0x6739 @ textColor, textShadow
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF98 size=0x4 source=v54_multi_pointer
	.4byte gMailPalette_Dream
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AF9C size=0x4 source=v54_multi_pointer
	.4byte gMailTiles_Dream
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AFA0 size=0x4 source=v54_multi_pointer
	.4byte gMailTilemap_Dream
	@ ANALYSIS: MAIL_GRAPHICS_STYLE_FIELDS size=0x8 addr=0x0857AFA4 parent=gMailData_0857AEE4 offset=0xC0 unused=0x340 textColor=0x294A textShadow=0x6739
	@ ANALYSIS: SOURCE_RANGE addr=0x0857AFA4 size=0x8
	.4byte 0x340 @ unused
	.2byte 0x294A, 0x6739 @ textColor, textShadow
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AFAC size=0x4 source=v54_multi_pointer
	.4byte gMailPalette_Fab
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AFB0 size=0x4 source=v54_multi_pointer
	.4byte gMailTiles_Fab
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AFB4 size=0x4 source=v54_multi_pointer
	.4byte gMailTilemap_Fab
	@ ANALYSIS: MAIL_GRAPHICS_STYLE_FIELDS size=0x8 addr=0x0857AFB8 parent=gMailData_0857AEE4 offset=0xD4 unused=0x2A0 textColor=0x294A textShadow=0x6739
	@ ANALYSIS: SOURCE_RANGE addr=0x0857AFB8 size=0x8
	.4byte 0x2A0 @ unused
	.2byte 0x294A, 0x6739 @ textColor, textShadow
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AFC0 size=0x4 source=v54_multi_pointer
	.4byte gMailPalette_Retro
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AFC4 size=0x4 source=v54_multi_pointer
	.4byte gMailTiles_Retro
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0857AFC8 size=0x4 source=v54_multi_pointer
	.4byte gMailTilemap_Retro
	@ ANALYSIS: MAIL_GRAPHICS_STYLE_FIELDS size=0x8 addr=0x0857AFCC parent=gMailData_0857AEE4 offset=0xE8 unused=0x520 textColor=0x294A textShadow=0x6739
	@ ANALYSIS: SOURCE_RANGE addr=0x0857AFCC size=0x8
	.4byte 0x520 @ unused
	.2byte 0x294A, 0x6739 @ textColor, textShadow
	@ ANALYSIS: MAIL_LINE_LAYOUT_WIDE_RECORDS size=0xC addr=0x0857AFD4 records=3 stride=0x4 recordBytes=03,10,00,00
	@ ANALYSIS: SOURCE_RANGE addr=0x0857AFD4 size=0xC
	.byte 0x03, 0x10, 0x00, 0x00 @ wide line layout 0
	.byte 0x03, 0x10, 0x00, 0x00 @ wide line layout 1
	.byte 0x03, 0x10, 0x00, 0x00 @ wide line layout 2
	@ pret/pokeemerald-jp direct xref for 0x0857AFE0: mail.s: ReadMail
	.globl gMailData_0857AFE0
gMailData_0857AFE0: @ 0x0857AFE0
	@ analyzed canonical ROM range 0x0857AFE0-0x0857B053
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x74 bytes=116
	.byte 0x03, 0x00, 0x02, 0x04, 0xD4, 0xAF, 0x57, 0x08, 0x03, 0x00, 0x02, 0x04, 0xD4, 0xAF, 0x57, 0x08
	.byte 0x03, 0x00, 0x02, 0x04, 0xD4, 0xAF, 0x57, 0x08, 0x03, 0x00, 0x02, 0x04, 0xD4, 0xAF, 0x57, 0x08
	.byte 0x03, 0x00, 0x02, 0x04, 0xD4, 0xAF, 0x57, 0x08, 0x03, 0x00, 0x02, 0x04, 0xD4, 0xAF, 0x57, 0x08
	.byte 0x03, 0x00, 0x02, 0x04, 0xD4, 0xAF, 0x57, 0x08, 0x03, 0x00, 0x02, 0x04, 0xD4, 0xAF, 0x57, 0x08
	.byte 0x03, 0x00, 0x02, 0x04, 0xD4, 0xAF, 0x57, 0x08, 0x03, 0x00, 0x02, 0x04, 0xD4, 0xAF, 0x57, 0x08
	.byte 0x03, 0x08, 0x02, 0x04, 0xD4, 0xAF, 0x57, 0x08, 0x03, 0x00, 0x02, 0x00, 0xD4, 0xAF, 0x57, 0x08
	.byte 0x02, 0x10, 0x00, 0x00, 0x02, 0x10, 0x00, 0x00, 0x02, 0x10, 0x00, 0x00, 0x02, 0x10, 0x00, 0x00
	.byte 0x01, 0x10, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0857B054: mail.s: ReadMail
	.globl gMailData_0857B054
gMailData_0857B054: @ 0x0857B054
	@ analyzed canonical ROM range 0x0857B054-0x0857B0B3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x60 bytes=96
	.byte 0x05, 0x00, 0x02, 0x00, 0x40, 0xB0, 0x57, 0x08, 0x05, 0x00, 0x02, 0x00, 0x40, 0xB0, 0x57, 0x08
	.byte 0x05, 0x80, 0x02, 0x00, 0x40, 0xB0, 0x57, 0x08, 0x05, 0x00, 0x02, 0x00, 0x40, 0xB0, 0x57, 0x08
	.byte 0x05, 0x00, 0x02, 0x00, 0x40, 0xB0, 0x57, 0x08, 0x05, 0x80, 0x02, 0x00, 0x40, 0xB0, 0x57, 0x08
	.byte 0x05, 0x80, 0x02, 0x00, 0x40, 0xB0, 0x57, 0x08, 0x05, 0x00, 0x02, 0x00, 0x40, 0xB0, 0x57, 0x08
	.byte 0x05, 0x00, 0x02, 0x00, 0x40, 0xB0, 0x57, 0x08, 0x05, 0x00, 0x02, 0x00, 0x40, 0xB0, 0x57, 0x08
	.byte 0x05, 0x08, 0x02, 0x00, 0x40, 0xB0, 0x57, 0x08, 0x05, 0x00, 0x02, 0x00, 0x40, 0xB0, 0x57, 0x08
	@ pret/pokeemerald-jp direct xref for 0x0857B0B4: mail.s: sub_08121A8C
	.globl gMailData_0857B0B4
gMailData_0857B0B4: @ 0x0857B0B4
	@ analyzed canonical ROM range 0x0857B0B4-0x0857B0E3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x30 bytes=48
	.byte 0x00, 0x26, 0x28, 0xFF, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xFF, 0xFF, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00
	.byte 0xFF, 0xFF, 0x00, 0x00, 0xC0, 0xB0, 0x57, 0x08, 0xC8, 0xB0, 0x57, 0x08, 0xD0, 0xB0, 0x57, 0x08
