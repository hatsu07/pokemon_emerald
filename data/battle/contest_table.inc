	@ pret/pokeemerald-jp direct xref for 0x085609D0: contest.s: sub_080DBA20, sub_080DBBB0
	.globl gContestData_085609D0
gContestData_085609D0: @ 0x085609D0
	@ analyzed canonical ROM range 0x085609D0-0x085609D3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x24, 0x4C, 0x74, 0x9C
	@ pret/pokeemerald-jp direct xref for 0x085609D4: contest.s: sub_080DBC54, sub_080DD76C
	.globl gContestData_085609D4
gContestData_085609D4: @ 0x085609D4
	@ analyzed canonical ROM range 0x085609D4-0x085609D7
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x24, 0x4C, 0x74, 0x9C
	@ pret/pokeemerald-jp direct xref for 0x085609D8: contest.s: sub_080DBA20
	.globl gContestData_085609D8
gContestData_085609D8: @ 0x085609D8
	@ analyzed canonical ROM range 0x085609D8-0x08560A33
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x5C entries=46
	.2byte 0x9594, 0x08C1, 0x0020, 0x4E20, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0100, 0x0100, 0x0000, 0x0000, 0x7FFF, 0x0000, 0x0000, 0x0000
	.2byte 0x0100, 0x0100, 0x0000, 0x0000, 0xFFF6, 0xFFF6, 0x14EC, 0x0000
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000, 0x0038, 0x0038, 0x0000, 0x0000
	.2byte 0x000A, 0x000A, 0x1414, 0x0000, 0x7FFF, 0x0000, 0x0000, 0x0000
	.2byte 0x09E8, 0x0856, 0x09F8, 0x0856, 0x0A10, 0x0856
	@ pret/pokeemerald-jp direct xref for 0x08560A34: contest.s: sub_080DBA20
	.globl gContestData_08560A34
gContestData_08560A34: @ 0x08560A34
	@ analyzed canonical ROM range 0x08560A34-0x08560A4B
sSpriteTemplate_08560A34: @ 0x08560A34
	rodata_sprite_template 0x4E20, 0xABE0, 0x085609E0, gDummySpriteAnimTable, 0, 0x08560A28, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x08560A4C: contest.s: sub_080DBC54

	.globl sSpriteSheet_NextTurn
sSpriteSheet_NextTurn: @ 0x08560A4C
	@ struct CompressedSpriteSheet[4]; loaded by sub_080DBC54 with an 8-byte stride.
	@ JP graphics size is 0x00A0 per record; keep JP-local ROM bytes.
	rodata_compressed_sprite_sheet gLz77Asset_08D8E920, 0x00A0, 0x4E22
	rodata_compressed_sprite_sheet gLz77Asset_08D8E920, 0x00A0, 0x4E23
	rodata_compressed_sprite_sheet gLz77Asset_08D8E920, 0x00A0, 0x4E24
	rodata_compressed_sprite_sheet gLz77Asset_08D8E920, 0x00A0, 0x4E25
	@ pret/pokeemerald-jp direct xref for 0x08560A6C: contest.s: sub_080DBC54
	.globl gContestData_08560A6C
gContestData_08560A6C: @ 0x08560A6C
	@ analyzed canonical ROM range 0x08560A6C-0x08560A7B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x10 bytes=16
	.byte 0x58, 0xEC, 0xD8, 0x08, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x08560A7C: contest.s: sub_080DBC54
	.globl gContestData_08560A7C
gContestData_08560A7C: @ 0x08560A7C
	@ analyzed canonical ROM range 0x08560A7C-0x08560AE3
	@ pointer/nullable table
	.4byte 0x4E224E22 @ +0x0
	.4byte gContestData_08560A6C + 0x8 @ +0x4
	.4byte gDummySpriteAnimTable @ +0x8
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x10
	.4byte SpriteCallbackDummy @ +0x14
	.4byte 0x4E224E23 @ +0x18
	.4byte gContestData_08560A6C + 0x8 @ +0x1C
	.4byte gDummySpriteAnimTable @ +0x20
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x28
	.4byte SpriteCallbackDummy @ +0x2C
	.4byte 0x4E224E24 @ +0x30
	.4byte gContestData_08560A6C + 0x8 @ +0x34
	.4byte gDummySpriteAnimTable @ +0x38
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x40
	.4byte SpriteCallbackDummy @ +0x44
	.4byte 0x4E224E25 @ +0x48
	.4byte gContestData_08560A6C + 0x8 @ +0x4C
	.4byte gDummySpriteAnimTable @ +0x50
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x58
	.4byte SpriteCallbackDummy @ +0x5C
	.4byte 0x0005FCEC @ +0x60
	.4byte 0x0040FC0C @ +0x64
	@ pret/pokeemerald-jp direct xref for 0x08560AE4: contest.s: sub_080DBC54
	.globl gContestData_08560AE4
gContestData_08560AE4: @ 0x08560AE4
	@ analyzed canonical ROM range 0x08560AE4-0x08560B13
	@ pointer/nullable table
	.4byte 0x00000002 @ +0x0
	.4byte gContestData_08560A7C + 0x60 @ +0x4
	.4byte gMoveLz77Data_Rom_C192AC @ +0x8
	.4byte 0xABE10180 @ +0xC
	.4byte 0x40000000 @ +0x10
	.4byte 0 @ +0x14
	.4byte 0xABE0ABE1 @ +0x18
	.4byte gContestData_08560AE4 + 0x10 @ +0x1C
	.4byte gDummySpriteAnimTable @ +0x20
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x28
	.4byte SpriteCallbackDummy @ +0x2C
	@ pret/pokeemerald-jp direct xref for 0x08560B14: contest.s: CreateApplauseMeterSprite
	.globl gContestData_08560B14
gContestData_08560B14: @ 0x08560B14
	@ analyzed canonical ROM range 0x08560B14-0x08560B1B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_POINTER_FIELD addr=0x08560B14 size=0x4 source=v53_repeated_layout_exact_elf_symbol
	.4byte gLz77Asset_08D8EAAC
	@ ANALYSIS: COMPRESSED_SPRITE_SHEET_META size=0x4 addr=0x08560B18 parent=gContestData_08560B14 sheetSize=0x400 tag=0xABE2
	@ ANALYSIS: SOURCE_RANGE addr=0x08560B18 size=0x4
	.2byte 0x400, 0xABE2 @ size, tag
	@ pret/pokeemerald-jp direct xref for 0x08560B1C: contest.s: CreateApplauseMeterSprite
	.globl gContestData_08560B1C
gContestData_08560B1C: @ 0x08560B1C
	@ analyzed canonical ROM range 0x08560B1C-0x08560B2B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x10 bytes=16
	.byte 0x58, 0xEC, 0xD8, 0x08, 0xE2, 0xAB, 0x00, 0x00, 0x00, 0x40, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x08560B2C: contest.s: CreateApplauseMeterSprite
	.globl gContestData_08560B2C
gContestData_08560B2C: @ 0x08560B2C
	@ analyzed canonical ROM range 0x08560B2C-0x08560B4B
	@ pointer/nullable table
	.4byte 0xABE2ABE2 @ +0x0
	.4byte gContestData_08560B1C + 0x8 @ +0x4
	.4byte gDummySpriteAnimTable @ +0x8
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x10
	.4byte SpriteCallbackDummy @ +0x14
	.4byte 0xC0000000 @ +0x18
	.4byte 0x00002C00 @ +0x1C
	@ pret/pokeemerald-jp direct xref for 0x08560B4C: contest.s: sub_080DA828
	.globl gContestData_08560B4C
gContestData_08560B4C: @ 0x08560B4C
	@ analyzed canonical ROM range 0x08560B4C-0x08560B63
sSpriteTemplate_08560B4C: @ 0x08560B4C
	rodata_sprite_template 0x4E21, 0x4E21, 0x08560B44, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x08560B64: contest.s: sub_080DA828
	.globl gContestData_08560B64
gContestData_08560B64: @ 0x08560B64
	@ analyzed canonical ROM range 0x08560B64-0x08560B6B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_POINTER_FIELD addr=0x08560B64 size=0x4 source=v53_repeated_layout_exact_elf_symbol
	.4byte gContestJudgeGfx
	@ ANALYSIS: COMPRESSED_SPRITE_SHEET_META size=0x4 addr=0x08560B68 parent=gContestData_08560B64 sheetSize=0x800 tag=0x4E21
	@ ANALYSIS: SOURCE_RANGE addr=0x08560B68 size=0x4
	.2byte 0x800, 0x4E21 @ size, tag
	@ pret/pokeemerald-jp direct xref for 0x08560B6C: contest.s: sub_080DA884
	.globl gContestData_08560B6C
gContestData_08560B6C: @ 0x08560B6C
	@ analyzed canonical ROM range 0x08560B6C-0x08560B73
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_POINTER_FIELD addr=0x08560B6C size=0x4 source=v53_repeated_layout_exact_elf_symbol
	.4byte gContestJudgeSymbolsGfx
	@ ANALYSIS: COMPRESSED_SPRITE_SHEET_META size=0x4 addr=0x08560B70 parent=gContestData_08560B6C sheetSize=0x380 tag=0xABE0
	@ ANALYSIS: SOURCE_RANGE addr=0x08560B70 size=0x4
	.2byte 0x380, 0xABE0 @ size, tag
	@ pret/pokeemerald-jp direct xref for 0x08560B74: contest.s: sub_080DA884
	.globl gContestData_08560B74
gContestData_08560B74: @ 0x08560B74
	@ analyzed canonical ROM range 0x08560B74-0x08560B7B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_POINTER_FIELD addr=0x08560B74 size=0x4 source=v53_repeated_layout_exact_elf_symbol
	.4byte gContestJudgeSymbolsPal
	@ ANALYSIS: COMPRESSED_SPRITE_PALETTE_META size=0x4 addr=0x08560B78 parent=gContestData_08560B74 tag=0xABE0 padding=0
	@ ANALYSIS: SOURCE_RANGE addr=0x08560B78 size=0x4
	.2byte 0xABE0, 0 @ tag, padding
	@ pret/pokeemerald-jp direct xref for 0x08560B7C: contest.s: sub_080DA884
	.globl gContestData_08560B7C
gContestData_08560B7C: @ 0x08560B7C
	@ analyzed canonical ROM range 0x08560B7C-0x08560B93
sSpriteTemplate_08560B7C: @ 0x08560B7C
	rodata_sprite_template 0xABE0, 0xABE0, gOamData_AffineOff_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x08560B94: contest.s: sub_080D7058
	.globl gContestData_08560B94
gContestData_08560B94: @ 0x08560B94
	@ analyzed canonical ROM range 0x08560B94-0x08560BB3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x20 bytes=32
	.byte 0x00, 0x00, 0x29, 0x25, 0x1F, 0x00, 0xE0, 0x03, 0x00, 0x7C, 0xFF, 0x03, 0xE0, 0x7F, 0x1F, 0x7C
	.byte 0x5A, 0x67, 0x00, 0x00, 0x00, 0x00, 0x9C, 0x77, 0xFF, 0x7F, 0x33, 0x7F, 0xEF, 0x72, 0xFF, 0x7F
	.globl gContestMoveEffectDescriptionTable
gContestMoveEffectDescriptionTable: @ 0x08560BB4
	.4byte gContestMoveEffectDescription_HighlyAppealing
	.4byte gContestMoveEffectDescription_UserMoreEasilyStartled
	.4byte gContestMoveEffectDescription_GreatAppealButNoMoreMoves
	.4byte gContestMoveEffectDescription_RepetitionNotBoring
	.4byte gContestMoveEffectDescription_AvoidStartleOnce
	.4byte gContestMoveEffectDescription_AvoidStartle
	.4byte gContestMoveEffectDescription_AvoidStartleSlightly
	.4byte gContestMoveEffectDescription_UserLessEasilyStartled
	.4byte gContestMoveEffectDescription_StartleFrontMon
	.4byte gContestMoveEffectDescription_SlightlyStartlePrevMons
	.4byte gContestMoveEffectDescription_StartlePrevMon
	.4byte gContestMoveEffectDescription_StartlePrevMons
	.4byte gContestMoveEffectDescription_BadlyStartleFrontMon
	.4byte gContestMoveEffectDescription_BadlyStartlePrevMons
	.4byte gContestMoveEffectDescription_StartlePrevMon2
	.4byte gContestMoveEffectDescription_StartlePrevMons2
	.4byte gContestMoveEffectDescription_ShiftJudgeAttention
	.4byte gContestMoveEffectDescription_StartleMonWithJudgesAttention
	.4byte gContestMoveEffectDescription_JamsOthersButMissOneTurn
	.4byte gContestMoveEffectDescription_StartleMonsSameTypeAppeal
	.4byte gContestMoveEffectDescription_StartleMonsCoolAppeal
	.4byte gContestMoveEffectDescription_StartleMonsBeautyAppeal
	.4byte gContestMoveEffectDescription_StartleMonsCuteAppeal
	.4byte gContestMoveEffectDescription_StartleMonsSmartAppeal
	.4byte gContestMoveEffectDescription_StartleMonsToughAppeal
	.4byte gContestMoveEffectDescription_MakeFollowingMonNervous
	.4byte gContestMoveEffectDescription_MakeFollowingMonsNervous
	.4byte gContestMoveEffectDescription_WorsenConditionOfPrevMons
	.4byte gContestMoveEffectDescription_BadlyStartlesMonsInGoodCondition
	.4byte gContestMoveEffectDescription_BetterIfFirst
	.4byte gContestMoveEffectDescription_BetterIfLast
	.4byte gContestMoveEffectDescription_AppealAsGoodAsPrevOnes
	.4byte gContestMoveEffectDescription_AppealAsGoodAsPrevOne
	.4byte gContestMoveEffectDescription_BetterWhenLater
	.4byte gContestMoveEffectDescription_QualityDependsOnTiming
	.4byte gContestMoveEffectDescription_BetterIfSameType
	.4byte gContestMoveEffectDescription_BetterIfDiffType
	.4byte gContestMoveEffectDescription_AffectedByPrevAppeal
	.4byte gContestMoveEffectDescription_ImproveConditionPreventNervousness
	.4byte gContestMoveEffectDescription_BetterWithGoodCondition
	.4byte gContestMoveEffectDescription_NextAppealEarlier
	.4byte gContestMoveEffectDescription_NextAppealLater
	.4byte gContestMoveEffectDescription_MakeScramblingTurnOrderEasier
	.4byte gContestMoveEffectDescription_ScrambleNextTurnOrder
	.4byte gContestMoveEffectDescription_ExciteAudienceInAnyContest
	.4byte gContestMoveEffectDescription_BadlyStartleMonsWithGoodAppeals
	.4byte gContestMoveEffectDescription_BetterWhenAudienceExcited
	.4byte gContestMoveEffectDescription_DontExciteAudience
	.4byte gText_Rom_24B2B0
	.4byte gText_Rom_24B2B0
	.4byte gText_Rom_24B2B5
	.4byte gText_Rom_24B2B9
	.4byte gText_Rom_24B2BF
	.4byte gText_Rom_24B2C7
	.4byte gText_Rom_24B2CD
	.4byte gText_Rom_24B2D3
	.4byte gText_Rom_24B2DA
	.4byte gText_Rom_24B2E1
	.4byte gText_Rom_24B2E7
	.4byte gText_Rom_24B2EB
	.4byte gText_Rom_24B2EF
	.4byte gText_Rom_24B2F5
	.globl gContestCategoryNameTable
gContestCategoryNameTable: @ 0x08560CAC
	.4byte gContestCategoryName_Cool
	.4byte gContestCategoryName_Beauty
	.4byte gContestCategoryName_Cute
	.4byte gContestCategoryName_Smart
	.4byte gContestCategoryName_Tough
	.4byte gText_Rom_24B38B
	.4byte gText_Rom_24B399
	.4byte gText_Rom_24B3A9
	.4byte gText_Rom_24B3BA
	.4byte gText_Rom_24B3BA
	.4byte gText_Rom_24B3C9
	.4byte gText_Rom_24B3DD
	.4byte gText_Rom_24B3F7
	.4byte gText_Rom_24B40B
	.4byte gText_Rom_24B41B
	.4byte gText_Rom_24B436
	.4byte gText_Rom_24B44F
	.4byte gText_Rom_24B45C
	@ pret/pokeemerald-jp direct xref for 0x08560CF4: contest.s: sub_080D9BBC
	.globl gContestData_08560CF4
gContestData_08560CF4: @ 0x08560CF4
	@ confirmed contiguous ROM pointer table: 32 entries from this address
sPointerTable_08560CF4:
	@ analyzed canonical ROM range 0x08560CF4-0x08560D73
	@ pointer/nullable table
	.4byte gText_Rom_24B470 @ +0x0
	.4byte gText_Rom_24B484 @ +0x4
	.4byte gText_Rom_24B498 @ +0x8
	.4byte gText_Rom_24B4A9 @ +0xC
	.4byte gText_Rom_24B4B9 @ +0x10
	.4byte gText_Rom_24B4CB @ +0x14
	.4byte gText_Rom_24B4F8 @ +0x18
	.4byte gText_Rom_24B512 @ +0x1C
	.4byte EventText_JP_0824B4F7 @ +0x20
	.4byte EventText_JP_0824B529 @ +0x24
	.4byte EventText_JP_0824B53D @ +0x28
	.4byte EventText_JP_0824B555 @ +0x2C
	.4byte EventText_JP_0824B56E @ +0x30
	.4byte EventText_JP_0824B580 @ +0x34
	.4byte EventText_JP_0824B597 @ +0x38
	.4byte EventText_JP_0824B5A8 @ +0x3C
	.4byte EventText_JP_0824B5BA @ +0x40
	.4byte EventText_JP_0824B5D3 @ +0x44
	.4byte EventText_JP_0824B5ED @ +0x48
	.4byte EventText_JP_0824B607 @ +0x4C
	.4byte EventText_JP_0824B625 @ +0x50
	.4byte EventText_JP_0824B641 @ +0x54
	.4byte EventText_JP_0824B65E @ +0x58
	.4byte EventText_JP_0824B674 @ +0x5C
	.4byte EventText_JP_0824B693 @ +0x60
	.4byte EventText_JP_0824B6AF @ +0x64
	.4byte EventText_JP_0824B6C8 @ +0x68
	.4byte EventText_JP_0824B4F7 @ +0x6C
	.4byte EventText_JP_0824B4F7 @ +0x70
	.4byte EventText_JP_0824B4F7 @ +0x74
	.4byte EventText_JP_0824B6D9 @ +0x78
	.4byte EventText_JP_0824B6F3 @ +0x7C
	.global gContestTextPointerTable
gContestTextPointerTable:
	.4byte gContestTextPointerTable_Entry00
	.4byte gContestTextPointerTable_Entry01
	.4byte gContestTextPointerTable_Entry02
	.4byte gContestTextPointerTable_Entry03
	.4byte gContestTextPointerTable_Entry04
	.4byte gContestTextPointerTable_Entry05
	.4byte gContestTextPointerTable_Entry06
	.4byte gContestTextPointerTable_Entry07
	.4byte gContestTextPointerTable_Entry08
	.4byte gContestTextPointerTable_Entry09
	.4byte gContestTextPointerTable_Entry10
	.4byte gContestTextPointerTable_Entry11
	.4byte gContestTextPointerTable_Entry12
	.4byte gContestTextPointerTable_Entry13
	.4byte gContestTextPointerTable_Entry14
	.4byte gContestTextPointerTable_Entry15
	.4byte gContestTextPointerTable_Entry16
	.4byte gContestTextPointerTable_Entry17
	.4byte gContestTextPointerTable_Entry18
	.4byte gContestTextPointerTable_Entry19
	.4byte gContestTextPointerTable_Entry20
	.4byte gContestTextPointerTable_Entry21
	.4byte gContestTextPointerTable_Entry22
	.4byte gContestTextPointerTable_Entry23
	.4byte gContestTextPointerTable_Entry24
	.4byte gContestTextPointerTable_Entry25
	.4byte gContestTextPointerTable_Entry26
	.4byte gContestTextPointerTable_Entry27
	.4byte gContestTextPointerTable_Entry28
	.4byte gContestTextPointerTable_Entry29
	.4byte gContestTextPointerTable_Entry30
	.4byte gContestTextPointerTable_Entry31
	.4byte gContestTextPointerTable_Entry32
	.4byte gContestTextPointerTable_Entry33
	.4byte gContestTextPointerTable_Entry34
	.4byte gContestTextPointerTable_Entry35
	.4byte gContestTextPointerTable_Entry36
	.4byte gContestTextPointerTable_Entry37
	.4byte gContestTextPointerTable_Entry38
	.4byte gContestTextPointerTable_Entry39
	.4byte gContestTextPointerTable_Entry40
	.4byte gContestTextPointerTable_Entry41
	.4byte gContestTextPointerTable_Entry42
	.4byte gContestTextPointerTable_Entry43
	.4byte gContestTextPointerTable_Entry44
	.4byte gContestTextPointerTable_Entry45
	.4byte gContestTextPointerTable_Entry46
	.4byte gContestTextPointerTable_Entry47
	.4byte gContestTextPointerTable_Entry48
	.4byte gContestTextPointerTable_Entry49
	.4byte gContestTextPointerTable_Entry50
	.4byte gContestTextPointerTable_Entry51
	.4byte gContestTextPointerTable_Entry52
	.4byte gContestTextPointerTable_Entry53
	.4byte gContestTextPointerTable_Entry54
	.4byte gContestTextPointerTable_Entry55
	.4byte gContestTextPointerTable_Entry56
	.4byte gContestTextPointerTable_Entry57
	.4byte gContestTextPointerTable_Entry58
	.4byte gContestTextPointerTable_Entry59
	.4byte gContestTextPointerTable_Entry60
	.4byte gContestTextPointerTable_Entry61
	.4byte gContestTextPointerTable_Entry62
	.4byte gContestTextPointerTable_Entry63
	.4byte gContestTextPointerTable_Entry64
	.4byte gContestTextPointerTable_Entry65
	.4byte gContestTextPointerTable_Entry66
	.4byte gText_Rom_24C10D
	.4byte gText_Rom_24C116
	.4byte gText_Rom_24C11F
	.4byte gText_Rom_24C127
	.4byte gText_Rom_24C12F
	.4byte gText_Rom_24C138
	@ pret/pokeemerald-jp direct xref for 0x08560E98: contest.s: InitContestInfoBgs
	.globl gContestData_08560E98
gContestData_08560E98: @ 0x08560E98
	@ analyzed canonical ROM range 0x08560E98-0x08560EA7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x10 entries=8
	.2byte 0x0580, 0x0000, 0x15E9, 0x0000, 0x05C2, 0x0000, 0x31A3, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x08560EA8: contest.s: InitContestWindows
	.globl gContestData_08560EA8
gContestData_08560EA8: @ 0x08560EA8
	@ analyzed canonical ROM range 0x08560EA8-0x08560F27
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x80 entries=64
	.2byte 0x1300, 0x0500, 0x0F02, 0x0200, 0x1300, 0x0505, 0x0F02, 0x0214
	.2byte 0x1300, 0x050A, 0x0F02, 0x0228, 0x1300, 0x050F, 0x0F02, 0x023C
	.2byte 0x1800, 0x0600, 0x0F02, 0x0250, 0x1800, 0x0605, 0x0F02, 0x0266
	.2byte 0x1800, 0x060A, 0x0F02, 0x027C, 0x1800, 0x060F, 0x0F02, 0x0292
	.2byte 0x0100, 0x110F, 0x0F04, 0x02A8, 0x0200, 0x071F, 0x0F02, 0x02EC
	.2byte 0x0200, 0x0721, 0x0F02, 0x02FA, 0x0200, 0x0723, 0x0F02, 0x0308
	.2byte 0x0200, 0x0725, 0x0F02, 0x0316, 0x1000, 0x011F, 0x0F02, 0x0324
	.2byte 0x0B00, 0x1223, 0x0F04, 0x0326, 0x00FF, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x08560F28: contest.s: ClearContestWinnerPicsInContestHall
	.globl gContestData_08560F28
gContestData_08560F28: @ 0x08560F28
	@ analyzed canonical ROM range 0x08560F28-0x08560F9D
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x76 bytes=118
	.byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x51, 0x01, 0x02, 0x98, 0x78, 0x78, 0x51, 0x7E
	.byte 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x5C, 0x6B, 0x5A, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x71, 0x01, 0x00, 0x78, 0xA0, 0x58, 0xFF, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x77, 0x7E, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xB2, 0x00, 0x01, 0x63, 0x80, 0x55, 0xFF, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x75, 0x53, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x61, 0x01, 0x04, 0x65, 0x65, 0xFF, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
