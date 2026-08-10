	@ asm/berry_blender.s:7981 Blender_PrintBlendingResults
	.globl gText_Rom_30F834
gText_Rom_30F834: @ 0x0830F834
	.string "ふん$"
	.if (. - gText_Rom_30F834) > 0x3
	.error "gText_Rom_30F834 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F834) < 0x3
	.space 0x3 - (. - gText_Rom_30F834)
	.endif
	.globl gUnknown_830F837
gUnknown_830F837: @ 0x0830F837

	@ src/berry_blender.c:288 sText_Sec (+1 aliases)
	.globl gText_Rom_30F837
gText_Rom_30F837: @ 0x0830F837
	.string "びょう$"
	.if (. - gText_Rom_30F837) > 0x4
	.error "gText_Rom_30F837 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F837) < 0x4
	.space 0x4 - (. - gText_Rom_30F837)
	.endif
	.globl gUnknown_830F83B
gUnknown_830F83B: @ 0x0830F83B

	@ src/berry_blender.c:289 sText_MaximumSpeed
	.globl gText_Rom_30F83B
gText_Rom_30F83B: @ 0x0830F83B
	.string "さいこうそくど$"
	.if (. - gText_Rom_30F83B) > 0x8
	.error "gText_Rom_30F83B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F83B) < 0x8
	.space 0x8 - (. - gText_Rom_30F83B)
	.endif
	.globl gUnknown_830F843
gUnknown_830F843: @ 0x0830F843

	@ src/berry_blender.c:290 sText_RPM
	.globl gText_Rom_30F843
gText_Rom_30F843: @ 0x0830F843
	.string "rpm$"
	.if (. - gText_Rom_30F843) > 0x4
	.error "gText_Rom_30F843 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F843) < 0x4
	.space 0x4 - (. - gText_Rom_30F843)
	.endif
	.globl gUnknown_830F847
gUnknown_830F847: @ 0x0830F847

	@ asm/berry_blender.s:7807 Blender_PrintBlendingResults
	.globl gText_Rom_30F847
gText_Rom_30F847: @ 0x0830F847
	.string ",$"
	.if (. - gText_Rom_30F847) > 0x2
	.error "gText_Rom_30F847 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F847) < 0x2
	.space 0x2 - (. - gText_Rom_30F847)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x0830F849: berry_blender.s: Blender_PrintMadePokeblockString
	.globl gBerryBlenderData_0830F849
gBerryBlenderData_0830F849:
	.globl gUnknown_830F849
gUnknown_830F849: @ 0x0830F849
	@ analyzed canonical ROM range 0x0830F849-0x0830F84C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFE, 0xFF, 0x00, 0xFF
	.globl gUnknown_830F84D
gUnknown_830F84D: @ 0x0830F84D

	@ src/berry_blender.c:309 sText_Ranking
	.globl gText_Rom_30F84D
gText_Rom_30F84D: @ 0x0830F84D
	.string "ランキング$"
	.if (. - gText_Rom_30F84D) > 0x6
	.error "gText_Rom_30F84D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F84D) < 0x6
	.space 0x6 - (. - gText_Rom_30F84D)
	.endif
	.globl gUnknown_830F853
gUnknown_830F853: @ 0x0830F853

	@ src/berry_blender.c:310 sText_TheLevelIs (+1 aliases)
	.globl gText_Rom_30F853
gText_Rom_30F853: @ 0x0830F853
	.string "レベル$"
	.if (. - gText_Rom_30F853) > 0x4
	.error "gText_Rom_30F853 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F853) < 0x4
	.space 0x4 - (. - gText_Rom_30F853)
	.endif
	.globl gUnknown_830F857
gUnknown_830F857: @ 0x0830F857

	@ src/berry_blender.c:311 sText_TheFeelIs
	.globl gText_Rom_30F857
gText_Rom_30F857: @ 0x0830F857
	.string "で なめらかさは$"
	.if (. - gText_Rom_30F857) > 0x9
	.error "gText_Rom_30F857 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F857) < 0x9
	.space 0x9 - (. - gText_Rom_30F857)
	.endif
	.globl gUnknown_830F860
gUnknown_830F860: @ 0x0830F860

	@ asm/berry_blender.s:8215 Blender_PrintMadePokeblockString
	.globl gText_Rom_30F860
gText_Rom_30F860: @ 0x0830F860
	.string "だ$"
	.if (. - gText_Rom_30F860) > 0x2
	.error "gText_Rom_30F860 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F860) < 0x2
	.space 0x2 - (. - gText_Rom_30F860)
	.endif
	.space 0x2, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0830F864: berry_blender.s: sub_0807F500, sub_0807FF90
	.globl gBerryBlenderData_0830F864
gBerryBlenderData_0830F864:
	.globl gUnknown_830F864
gUnknown_830F864: @ 0x0830F864
	@ analyzed canonical ROM range 0x0830F864-0x0830F86F
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x01FC, 0x0000, 0x10C9, 0x0000, 0x0A82, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x0830F870: berry_blender.s: InitBerryBlenderWindows
	.globl gBerryBlenderData_0830F870
gBerryBlenderData_0830F870:
	.globl gUnknown_830F870
gUnknown_830F870: @ 0x0830F870
	@ analyzed canonical ROM range 0x0830F870-0x0830F8A7
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0100, 0x0706, 0x0E02, 0x0028, 0x1600, 0x0706, 0x0E02, 0x0036
	.2byte 0x0100, 0x070C, 0x0E02, 0x0044, 0x1600, 0x070C, 0x0E02, 0x0052
	.2byte 0x0400, 0x160F, 0x0E04, 0x0060, 0x0500, 0x1503, 0x0E0E, 0x0060
	.2byte 0x00FF, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x0830F8A8: berry_blender.s: CB2_HandleBlenderEndGame
	.globl gBerryBlenderData_0830F8A8
gBerryBlenderData_0830F8A8:
	.globl gUnknown_830F8A8
gUnknown_830F8A8: @ 0x0830F8A8
	@ analyzed canonical ROM range 0x0830F8A8-0x0830F8AF
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x1500, 0x0509, 0x0E04, 0x00B8
	@ pret/pokeemerald-jp direct xref for 0x0830F8B0: berry_blender.s: sub_08080CA4
	.globl gBerryBlenderData_0830F8B0
gBerryBlenderData_0830F8B0:
	.globl gUnknown_830F8B0
gUnknown_830F8B0: @ 0x0830F8B0
	@ analyzed canonical ROM range 0x0830F8B0-0x0830F8B7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x01, 0x01, 0x01
	@ pret/pokeemerald-jp direct xref for 0x0830F8B8: berry_blender.s: sub_0807F500, sub_0807FA20, sub_080802F0, sub_08080CA4
	.globl gBerryBlenderData_0830F8B8
gBerryBlenderData_0830F8B8:
	.globl gUnknown_830F8B8
gUnknown_830F8B8: @ 0x0830F8B8
	@ analyzed canonical ROM range 0x0830F8B8-0x0830F8BF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x48, 0x20, 0xA8, 0x20, 0x48, 0x80, 0xA8, 0x80
	@ pret/pokeemerald-jp direct xref for 0x0830F8C0: berry_blender.s: sub_0807FA20, sub_08080154, sub_080802F0
	.globl gBerryBlenderData_0830F8C0
gBerryBlenderData_0830F8C0:
	.globl gUnknown_830F8C0
gUnknown_830F8C0: @ 0x0830F8C0
	@ analyzed canonical ROM range 0x0830F8C0-0x0830F8CB
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x00FF, 0xFF01, 0x00FF, 0x0201, 0x0100, 0x0302
	@ pret/pokeemerald-jp direct xref for 0x0830F8CC: berry_blender.s: sub_0807FA20, sub_080802F0
	.globl gBerryBlenderData_0830F8CC
gBerryBlenderData_0830F8CC:
	.globl gUnknown_830F8CC
gUnknown_830F8CC: @ 0x0830F8CC
	@ analyzed canonical ROM range 0x0830F8CC-0x0830F8D3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x00, 0x00, 0x00, 0xC0, 0x00, 0x40, 0x00, 0x80
	@ pret/pokeemerald-jp direct xref for 0x0830F8D4: berry_blender.s: sub_0807FA20, sub_080802F0
	.globl gBerryBlenderData_0830F8D4
gBerryBlenderData_0830F8D4:
	.globl gUnknown_830F8D4
gUnknown_830F8D4: @ 0x0830F8D4
	@ analyzed canonical ROM range 0x0830F8D4-0x0830F8D6
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x01, 0x01, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0830F8D7: berry_blender.s: sub_0808002C, sub_080809EC, sub_08080B14
	.globl gBerryBlenderData_0830F8D7
gBerryBlenderData_0830F8D7:
	.globl gUnknown_830F8D7
gUnknown_830F8D7: @ 0x0830F8D7
	@ analyzed canonical ROM range 0x0830F8D7-0x0830F8DB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x20, 0xE0, 0x60, 0xA0, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0830F8DC: berry_blender.s: sub_080802F0
	.globl gBerryBlenderData_0830F8DC
gBerryBlenderData_0830F8DC:
	.globl gUnknown_830F8DC
gUnknown_830F8DC: @ 0x0830F8DC
	@ analyzed canonical ROM range 0x0830F8DC-0x0830F9AF
	@ semantic recovery: rodata; byte-verified against linked ROM
FunctionPointerTable_JP_0830F8DC: @ 0x0830F8DC
	@ proven function-pointer table
	.4byte sub_080808C0
	.4byte sub_080809EC
	.4byte sub_08080B14
	.byte 0x00, 0x00, 0x00, 0x80, 0x00, 0x04, 0x00, 0x00, 0x10, 0x00, 0xC5, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x10, 0x00, 0x85, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x10, 0x00, 0x45, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x10, 0x00, 0x05, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x30, 0x00, 0xC2, 0x00, 0x20, 0x00, 0xC5, 0x00
	.byte 0x30, 0x00, 0xC3, 0x00, 0x10, 0x00, 0xC5, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x30, 0x00, 0x82, 0x00
	.byte 0x20, 0x00, 0x85, 0x00, 0x30, 0x00, 0x83, 0x00, 0x10, 0x00, 0x85, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x30, 0x00, 0x42, 0x00, 0x20, 0x00, 0x45, 0x00, 0x30, 0x00, 0x43, 0x00, 0x10, 0x00, 0x45, 0x00
	.byte 0xFF, 0xFF, 0x00, 0x00, 0x30, 0x00, 0x02, 0x00, 0x20, 0x00, 0x05, 0x00, 0x30, 0x00, 0x03, 0x00
	.byte 0x10, 0x00, 0x05, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xC5, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x00, 0x00, 0x85, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x45, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x00, 0x00, 0x05, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xF0, 0xF8, 0x30, 0x08, 0xF8, 0xF8, 0x30, 0x08
	.byte 0x00, 0xF9, 0x30, 0x08, 0x08, 0xF9, 0x30, 0x08, 0x10, 0xF9, 0x30, 0x08, 0x24, 0xF9, 0x30, 0x08
	.byte 0x38, 0xF9, 0x30, 0x08, 0x4C, 0xF9, 0x30, 0x08, 0x60, 0xF9, 0x30, 0x08, 0x68, 0xF9, 0x30, 0x08
	.byte 0x70, 0xF9, 0x30, 0x08, 0x78, 0xF9, 0x30, 0x08
	@ pret/pokeemerald-jp direct xref for 0x0830F9B0: berry_blender.s: LoadBerryBlenderGfx
	.globl gBerryBlenderData_0830F9B0
gBerryBlenderData_0830F9B0:
	.globl gUnknown_830F9B0
gUnknown_830F9B0: @ 0x0830F9B0
	@ analyzed canonical ROM range 0x0830F9B0-0x0830F9B7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xB4, 0xEB, 0x30, 0x08, 0x00, 0x08, 0xD1, 0xB5
	@ pret/pokeemerald-jp direct xref for 0x0830F9B8: berry_blender.s: LoadBerryBlenderGfx
	.globl gBerryBlenderData_0830F9B8
gBerryBlenderData_0830F9B8:
	.globl gUnknown_830F9B8
gUnknown_830F9B8: @ 0x0830F9B8
	@ analyzed canonical ROM range 0x0830F9B8-0x0830F9BF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x74, 0xD9, 0x30, 0x08, 0xD2, 0xB5, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0830F9C0: berry_blender.s: LoadBerryBlenderGfx
	.globl gBerryBlenderData_0830F9C0
gBerryBlenderData_0830F9C0:
	.globl gUnknown_830F9C0
gUnknown_830F9C0: @ 0x0830F9C0
	@ analyzed canonical ROM range 0x0830F9C0-0x0830F9C7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x94, 0xD9, 0x30, 0x08, 0x18, 0x30, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0830F9C8: berry_blender.s: sub_0807F500, sub_0807FA20, sub_080802F0
	.globl gBerryBlenderData_0830F9C8
gBerryBlenderData_0830F9C8:
	.globl gUnknown_830F9C8
gUnknown_830F9C8: @ 0x0830F9C8
	@ analyzed canonical ROM range 0x0830F9C8-0x0830FA27
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0xB5D1, 0x3018, 0xF8E8, 0x0830, 0xF980, 0x0830, 0x0000, 0x0000
	.2byte 0xF310, 0x082B, 0x2E15, 0x0808, 0x0000, 0x4000, 0x0000, 0x0000
	.2byte 0x0000, 0x0014, 0xFFFF, 0x0000, 0x0004, 0x0054, 0xFFFF, 0x0000
	.2byte 0x0008, 0x0004, 0x000C, 0x0004, 0x0008, 0x0004, 0x000C, 0x0004
	.2byte 0x0008, 0x0004, 0xFFFF, 0x0000, 0x0008, 0x0004, 0xFFFF, 0x0000
	.2byte 0xF9E8, 0x0830, 0xF9F0, 0x0830, 0xF9F8, 0x0830, 0xFA10, 0x0830
	@ pret/pokeemerald-jp direct xref for 0x0830FA28: berry_blender.s: LoadBerryBlenderGfx
	.globl gBerryBlenderData_0830FA28
gBerryBlenderData_0830FA28:
	.globl gUnknown_830FA28
gUnknown_830FA28: @ 0x0830FA28
	@ analyzed canonical ROM range 0x0830FA28-0x0830FA2F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xB4, 0xDB, 0x30, 0x08, 0x00, 0x02, 0xF8, 0xBE
	@ pret/pokeemerald-jp direct xref for 0x0830FA30: berry_blender.s: Blender_PrintBlendingRanking, sub_08080CA4
	.globl gBerryBlenderData_0830FA30
gBerryBlenderData_0830FA30:
	.globl gUnknown_830FA30
gUnknown_830FA30: @ 0x0830FA30
	@ analyzed canonical ROM range 0x0830FA30-0x0830FAC7
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0xBEF8, 0xB5D2, 0xF9E0, 0x0830, 0xFA18, 0x0830, 0x0000, 0x0000
	.2byte 0xF310, 0x082B, 0x2985, 0x0808, 0x0000, 0x0000, 0x0400, 0x0000
	.2byte 0x0000, 0x0003, 0x0001, 0x0004, 0x0003, 0x0005, 0x0001, 0x0004
	.2byte 0x0000, 0x0003, 0xFFFF, 0x0000, 0x0000, 0x0003, 0x0002, 0x0004
	.2byte 0x0004, 0x0005, 0x0002, 0x0004, 0x0000, 0x0003, 0xFFFF, 0x0000
	.2byte 0x0000, 0x0002, 0x0001, 0x0002, 0x0002, 0x0002, 0x0004, 0x0004
	.2byte 0x0003, 0x0003, 0x0002, 0x0002, 0x0001, 0x0002, 0x0000, 0x0002
	.2byte 0xFFFF, 0x0000, 0x0005, 0x00C5, 0xFFFF, 0x0000, 0x0006, 0x00C5
	.2byte 0xFFFF, 0x0000, 0xFA50, 0x0830, 0xFA68, 0x0830, 0xFA80, 0x0830
	.2byte 0xFAA4, 0x0830, 0xFAAC, 0x0830
	@ pret/pokeemerald-jp direct xref for 0x0830FAC8: berry_blender.s: LoadBerryBlenderGfx
	.globl gBerryBlenderData_0830FAC8
gBerryBlenderData_0830FAC8:
	.globl gUnknown_830FAC8
gUnknown_830FAC8: @ 0x0830FAC8
	@ analyzed canonical ROM range 0x0830FAC8-0x0830FACF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xB4, 0xDD, 0x30, 0x08, 0xE0, 0x00, 0xA0, 0x5B
	@ pret/pokeemerald-jp direct xref for 0x0830FAD0: berry_blender.s: sub_080828A0
	.globl gBerryBlenderData_0830FAD0
gBerryBlenderData_0830FAD0:
	.globl gUnknown_830FAD0
gUnknown_830FAD0: @ 0x0830FAD0
	@ analyzed canonical ROM range 0x0830FAD0-0x0830FB13
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xA0, 0x5B, 0xD2, 0xB5, 0x48, 0xFA, 0x30, 0x08, 0xB4, 0xFA, 0x30, 0x08, 0x00, 0x00, 0x00, 0x00
	.byte 0x10, 0xF3, 0x2B, 0x08, 0x41, 0x71, 0x00, 0x08, 0x00, 0x00, 0x00, 0x80, 0x00, 0x04, 0x00, 0x00
	.byte 0x20, 0x00, 0x1E, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x10, 0x00, 0x1E, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x00, 0x00, 0x1E, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xF0, 0xFA, 0x30, 0x08, 0xF8, 0xFA, 0x30, 0x08
	.byte 0x00, 0xFB, 0x30, 0x08
	@ pret/pokeemerald-jp direct xref for 0x0830FB14: berry_blender.s: LoadBerryBlenderGfx
	.globl gBerryBlenderData_0830FB14
gBerryBlenderData_0830FB14:
	.globl gUnknown_830FB14
gUnknown_830FB14: @ 0x0830FB14
	@ analyzed canonical ROM range 0x0830FB14-0x0830FB1B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xB4, 0xDF, 0x30, 0x08, 0x00, 0x06, 0x39, 0x30
	@ pret/pokeemerald-jp direct xref for 0x0830FB1C: berry_blender.s: sub_0807FA20, sub_080802F0
	.globl gBerryBlenderData_0830FB1C
gBerryBlenderData_0830FB1C:
	.globl gUnknown_830FB1C
gUnknown_830FB1C: @ 0x0830FB1C
	@ analyzed canonical ROM range 0x0830FB1C-0x0830FB47
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x39, 0x30, 0xD2, 0xB5, 0xE8, 0xFA, 0x30, 0x08, 0x08, 0xFB, 0x30, 0x08, 0x00, 0x00, 0x00, 0x00
	.byte 0x10, 0xF3, 0x2B, 0x08, 0x2D, 0x2A, 0x08, 0x08, 0x00, 0x40, 0x00, 0xC0, 0x00, 0x04, 0x00, 0x00
	.byte 0x00, 0x00, 0x1E, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x3C, 0xFB, 0x30, 0x08
	@ pret/pokeemerald-jp direct xref for 0x0830FB48: berry_blender.s: LoadBerryBlenderGfx
	.globl gBerryBlenderData_0830FB48
gBerryBlenderData_0830FB48:
	.globl gUnknown_830FB48
gUnknown_830FB48: @ 0x0830FB48
	@ analyzed canonical ROM range 0x0830FB48-0x0830FB4F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xB4, 0xE5, 0x30, 0x08, 0x00, 0x04, 0x3A, 0x30
	@ pret/pokeemerald-jp direct xref for 0x0830FB50: berry_blender.s: sub_08082A2C
	.globl gBerryBlenderData_0830FB50
gBerryBlenderData_0830FB50:
	.globl gUnknown_830FB50
gUnknown_830FB50: @ 0x0830FB50
	@ analyzed canonical ROM range 0x0830FB50-0x0830FB67
sSpriteTemplate_0830FB50: @ 0x0830FB50
	rodata_sprite_template 0x303A, 0xB5D2, 0x0830FB34, 0x0830FB44, 0, gDummySpriteAffineAnimTable, sub_08082ADC
	@ pret/pokeemerald-jp direct xref for 0x0830FB68: berry_blender.s: sub_0807F7C8
	.globl gBerryBlenderData_0830FB68
gBerryBlenderData_0830FB68:
	.globl gUnknown_830FB68
gUnknown_830FB68: @ 0x0830FB68
	@ analyzed canonical ROM range 0x0830FB68-0x0830FB8F
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0xFFF6, 0x0014, 0x000A, 0x0002, 0x0001, 0x00FA, 0x0014, 0x000A
	.2byte 0xFFFE, 0x0001, 0xFFF6, 0x008C, 0x000A, 0x0002, 0xFFFF, 0x00FA
	.2byte 0x008C, 0x000A, 0xFFFE, 0xFFFF
	@ pret/pokeemerald-jp direct xref for 0x0830FB90: berry_blender.s: Blender_SetOpponentsBerryData
	.globl gBerryBlenderData_0830FB90
gBerryBlenderData_0830FB90:
	.globl gUnknown_830FB90
gUnknown_830FB90: @ 0x0830FB90
	@ analyzed canonical ROM range 0x0830FB90-0x0830FBAD
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0304, 0x0002, 0x0304, 0x0001, 0x0204, 0x0001, 0x0203, 0x0001
	.2byte 0x0302, 0x0301, 0x0204, 0x0004, 0x0003, 0x0401, 0x0201
	@ pret/pokeemerald-jp direct xref for 0x0830FBAE: berry_blender.s: Blender_SetOpponentsBerryData
	.globl gBerryBlenderData_0830FBAE
gBerryBlenderData_0830FBAE:
	.globl gUnknown_830FBAE
gUnknown_830FBAE: @ 0x0830FBAE
	@ analyzed canonical ROM range 0x0830FBAE-0x0830FBB2
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x1E, 0x1F, 0x20, 0x21, 0x22
	@ pret/pokeemerald-jp direct xref for 0x0830FBB3: berry_blender.s: sub_08080D8C
	.globl gBerryBlenderData_0830FBB3
gBerryBlenderData_0830FBB3:
	.globl gUnknown_830FBB3
gUnknown_830FBB3: @ 0x0830FBB3
	@ analyzed canonical ROM range 0x0830FBB3-0x0830FBB7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x01, 0x01, 0x02, 0x03, 0x04
	@ pret/pokeemerald-jp direct xref for 0x0830FBB8: berry_blender.s: Blender_CalculatePokeblock
	.globl gBerryBlenderData_0830FBB8
gBerryBlenderData_0830FBB8:
	.globl gUnknown_830FBB8
gUnknown_830FBB8: @ 0x0830FBB8
	@ analyzed canonical ROM range 0x0830FBB8-0x0830FBC7
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x161C, 0x1A13, 0x0E19, 0x0B0D, 0x1507, 0x0A0B, 0x0F03, 0xFF08
	.globl gUnknown_830FBC8
gUnknown_830FBC8: @ 0x0830FBC8

	@ src/berry_blender.c:314 sText_SavingDontTurnOff2
	.globl gText_Rom_30FBC8
gText_Rom_30FBC8: @ 0x0830FBC8
	.string "ポケモンレポートに かきこんでいます    \nでんげんを きらないで ください      $"
	.if (. - gText_Rom_30FBC8) > 0x2e
	.error "gText_Rom_30FBC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FBC8) < 0x2e
	.space 0x2e - (. - gText_Rom_30FBC8)
	.endif

	@ src/berry_blender.c:917 sJPText_GoodTvReady
	.globl gText_Rom_30FBF6
gText_Rom_30FBF6: @ 0x0830FBF6
	.string "\nいいTVができました $"
	.if (. - gText_Rom_30FBF6) > 0xd
	.error "gText_Rom_30FBF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FBF6) < 0xd
	.space 0xd - (. - gText_Rom_30FBF6)
	.endif

	@ src/berry_blender.c:918 sJPText_BadTvReady
	.globl gText_Rom_30FC03
gText_Rom_30FC03: @ 0x0830FC03
	.string "\nダメTVができました $"
	.if (. - gText_Rom_30FC03) > 0xd
	.error "gText_Rom_30FC03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC03) < 0xd
	.space 0xd - (. - gText_Rom_30FC03)
	.endif

	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_30FC10
gText_Rom_30FC10: @ 0x0830FC10
	.string "からい$"
	.if (. - gText_Rom_30FC10) > 0x4
	.error "gText_Rom_30FC10 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC10) < 0x4
	.space 0x4 - (. - gText_Rom_30FC10)
	.endif
	.space 0x1, 0x00

	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_30FC15
gText_Rom_30FC15: @ 0x0830FC15
	.string "しぶい$"
	.if (. - gText_Rom_30FC15) > 0x4
	.error "gText_Rom_30FC15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC15) < 0x4
	.space 0x4 - (. - gText_Rom_30FC15)
	.endif
	.space 0x1, 0x00

	@ src/berry_blender.c:919 berry_blender_line_919 (+3 aliases)
	.globl gText_Rom_30FC1A
gText_Rom_30FC1A: @ 0x0830FC1A
	.string "あまい$"
	.if (. - gText_Rom_30FC1A) > 0x4
	.error "gText_Rom_30FC1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC1A) < 0x4
	.space 0x4 - (. - gText_Rom_30FC1A)
	.endif
	.space 0x1, 0x00

	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_30FC1F
gText_Rom_30FC1F: @ 0x0830FC1F
	.string "にがい$"
	.if (. - gText_Rom_30FC1F) > 0x4
	.error "gText_Rom_30FC1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC1F) < 0x4
	.space 0x4 - (. - gText_Rom_30FC1F)
	.endif
	.space 0x1, 0x00

