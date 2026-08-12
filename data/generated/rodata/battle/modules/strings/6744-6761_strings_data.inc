	@ src/strings.c:896 gText_RentalSwap
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5DD438
gText_Rom_5DD438: @ 0x085DD438
	.string "レンタル/こうかん$"
	.if (. - gText_Rom_5DD438) != 0xa
	.error "gText_Rom_5DD438 must retain its original byte length"
	.endif
	.globl gText_Rom_5DD43D
	.set gText_Rom_5DD43D, gText_Rom_5DD438 + 0x5

	@ src/strings.c:897 gText_Total
	.globl gText_Rom_5DD442
gText_Rom_5DD442: @ 0x085DD442
	.string "つうさん$"
	.if (. - gText_Rom_5DD442) > 0x5
	.error "gText_Rom_5DD442 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD442) < 0x5
	.space 0x5 - (. - gText_Rom_5DD442)
	.endif

	@ src/strings.c:898 gText_ClearStreak
	.globl gText_Rom_5DD447
gText_Rom_5DD447: @ 0x085DD447
	.string "{STR_VAR_1}れんぱ$"
	.if (. - gText_Rom_5DD447) > 0x6
	.error "gText_Rom_5DD447 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD447) < 0x6
	.space 0x6 - (. - gText_Rom_5DD447)
	.endif

	@ src/strings.c:899 gText_Championships
	.globl gText_Rom_5DD44D
gText_Rom_5DD44D: @ 0x085DD44D
	.string "{STR_VAR_1}かい ゆうしょう$"
	.if (. - gText_Rom_5DD44D) > 0xb
	.error "gText_Rom_5DD44D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD44D) < 0xb
	.space 0xb - (. - gText_Rom_5DD44D)
	.endif

	@ src/strings.c:900 gText_RoomsCleared
	.globl gText_Rom_5DD458
gText_Rom_5DD458: @ 0x085DD458
	.string "{STR_VAR_1}へや とっぱ$"
	.if (. - gText_Rom_5DD458) > 0x9
	.error "gText_Rom_5DD458 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD458) < 0x9
	.space 0x9 - (. - gText_Rom_5DD458)
	.endif
	.globl gUnknown_85DD461
gUnknown_85DD461: @ 0x085DD461
	@ Decoded text from ROM range: offset=0x5DD461, size=0x9
	.string "{B_COPY_VAR_1}かい　クリア$"

	@ src/strings.c:902 gText_KOsInARow
	.globl gText_Rom_5DD46A
gText_Rom_5DD46A: @ 0x085DD46A
	.string "{STR_VAR_1}にんぬき$"
	.if (. - gText_Rom_5DD46A) > 0x7
	.error "gText_Rom_5DD46A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD46A) < 0x7
	.space 0x7 - (. - gText_Rom_5DD46A)
	.endif

	@ src/strings.c:903 gText_TimesVar1
	.globl gText_Rom_5DD471
gText_Rom_5DD471: @ 0x085DD471
	.string "{STR_VAR_1}かい$"
	.if (. - gText_Rom_5DD471) > 0x5
	.error "gText_Rom_5DD471 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD471) < 0x5
	.space 0x5 - (. - gText_Rom_5DD471)
	.endif

	@ src/strings.c:904 gText_FloorsCleared
	.globl gText_Rom_5DD476
gText_Rom_5DD476: @ 0x085DD476
	.string "{STR_VAR_1}だん せいは$"
	.if (. - gText_Rom_5DD476) > 0x9
	.error "gText_Rom_5DD476 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD476) < 0x9
	.space 0x9 - (. - gText_Rom_5DD476)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085DD47F: frontier_util.s: IsFrontierBrainFemale, SetFrontierBrainEventObjGfx, SetFrontierBrainEventObjGfx_2
	.globl gFrontierUtilData_085DD47F
gFrontierUtilData_085DD47F: @ 0x085DD47F
	@ analyzed canonical ROM range 0x085DD47F-0x085DD48D
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0xF
	.byte 0x46, 0x01, 0x47, 0x00, 0x49, 0x00, 0x48, 0x01, 0x4A, 0x00, 0x4B, 0x01, 0xEA, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085DD48E: frontier_util.s: AppendIfValid, sub_081A3CF0; party_menu.s: GetBattleEntryEligibility
	.globl gUnknown_85DD48E
gUnknown_85DD48E: @ 0x085DD48E
	@ analyzed canonical ROM range 0x085DD48E-0x085DD4A3
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x16
	.2byte 0x0097, 0x0096, 0x00FA, 0x00F9, 0x00FB, 0x0194, 0x0195, 0x0196
	.2byte 0x0199, 0x019A, 0xFFFF
	@ pret/pokeemerald-jp direct xref for 0x085DD4A4: frontier_util.s: DomePrintPrevOrCurrentStreak
	.globl gFrontierUtilData_085DD4A4
gFrontierUtilData_085DD4A4: @ 0x085DD4A4
	@ analyzed canonical ROM range 0x085DD4A4-0x085DD4F4
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x51
	.byte 0x23, 0xC4, 0x5C, 0x08, 0x5C, 0xC4, 0x5C, 0x08, 0x23, 0xC4, 0x5C, 0x08, 0x64, 0xC4, 0x5C, 0x08
	.byte 0x23, 0xC4, 0x5C, 0x08, 0x6C, 0xC4, 0x5C, 0x08, 0x2A, 0xC4, 0x5C, 0x08, 0x5C, 0xC4, 0x5C, 0x08
	.byte 0x31, 0xC4, 0x5C, 0x08, 0x5C, 0xC4, 0x5C, 0x08, 0x42, 0xC4, 0x5C, 0x08, 0x7C, 0xC4, 0x5C, 0x08
	.byte 0x38, 0xC4, 0x5C, 0x08, 0x5C, 0xC4, 0x5C, 0x08, 0x4A, 0xC4, 0x5C, 0x08, 0x7C, 0xC4, 0x5C, 0x08
	.byte 0x52, 0xC4, 0x5C, 0x08, 0x7C, 0xC4, 0x5C, 0x08, 0x23, 0xC4, 0x5C, 0x08, 0x74, 0xC4, 0x5C, 0x08
	.byte 0x00
	.globl gText_Rom_5DD4F5
gText_Rom_5DD4F5: @ 0x085DD4F5
	.string "レベル50$"
	.if (. - gText_Rom_5DD4F5) > 0x6
	.error "gText_Rom_5DD4F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD4F5) < 0x6
	.space 0x6 - (. - gText_Rom_5DD4F5)
	.endif
	.space 0x1, 0x00
