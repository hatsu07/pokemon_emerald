	@ src/data/easy_chat/easy_chat_group_battle.h:244 easy_chat_group_battle_line_244 (+3 aliases)
	.globl gText_Rom_5DD434
gText_Rom_5DD434: @ 0x085DD434
	.string "バトル{EOS}"
	.if (. - gText_Rom_5DD434) > 0x4
	.error "gText_Rom_5DD434 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD434) < 0x4
	.space 0x4 - (. - gText_Rom_5DD434)
	.endif
	.globl gText_RentalSwap

	@ src/strings.c:896 gText_RentalSwap
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_RentalSwap
gText_RentalSwap: @ 0x085DD438
	.string "レンタル/こうかん{EOS}"
	.if (. - gText_RentalSwap) != 0xa
	.error "gText_RentalSwap must retain its original byte length"
	.endif
	.globl gText_Rom_5DD43D
	.set gText_Rom_5DD43D, gText_RentalSwap + 0x5

	@ src/strings.c:897 gText_Total
	.globl gText_Total
gText_Total: @ 0x085DD442
	.string "つうさん{EOS}"
	.if (. - gText_Total) > 0x5
	.error "gText_Total may not grow beyond its original slot"
	.endif
	.if (. - gText_Total) < 0x5
	.space 0x5 - (. - gText_Total)
	.endif

	@ src/strings.c:898 gText_ClearStreak
	.globl gText_ClearStreak
gText_ClearStreak: @ 0x085DD447
	.string "{STR_VAR_1}れんぱ{EOS}"
	.if (. - gText_ClearStreak) > 0x6
	.error "gText_ClearStreak may not grow beyond its original slot"
	.endif
	.if (. - gText_ClearStreak) < 0x6
	.space 0x6 - (. - gText_ClearStreak)
	.endif

	@ src/strings.c:899 gText_Championships
	.globl gText_Championships
gText_Championships: @ 0x085DD44D
	.string "{STR_VAR_1}かい ゆうしょう{EOS}"
	.if (. - gText_Championships) > 0xb
	.error "gText_Championships may not grow beyond its original slot"
	.endif
	.if (. - gText_Championships) < 0xb
	.space 0xb - (. - gText_Championships)
	.endif

	@ src/strings.c:900 gText_RoomsCleared
	.globl gText_RoomsCleared
gText_RoomsCleared: @ 0x085DD458
	.string "{STR_VAR_1}へや とっぱ{EOS}"
	.if (. - gText_RoomsCleared) > 0x9
	.error "gText_RoomsCleared may not grow beyond its original slot"
	.endif
	.if (. - gText_RoomsCleared) < 0x9
	.space 0x9 - (. - gText_RoomsCleared)
	.endif
	.globl gText_Rom_5DD461
gText_Rom_5DD461: @ 0x085DD461
	@ Decoded text from ROM range: offset=0x5DD461, size=0x9
	.string "{B_COPY_VAR_1}かい　クリア{EOS}"

	@ src/strings.c:902 gText_KOsInARow
	.globl gText_KOsInARow
gText_KOsInARow: @ 0x085DD46A
	.string "{STR_VAR_1}にんぬき{EOS}"
	.if (. - gText_KOsInARow) > 0x7
	.error "gText_KOsInARow may not grow beyond its original slot"
	.endif
	.if (. - gText_KOsInARow) < 0x7
	.space 0x7 - (. - gText_KOsInARow)
	.endif

	@ src/strings.c:903 gText_TimesVar1
	.globl gText_TimesVar1
gText_TimesVar1: @ 0x085DD471
	.string "{STR_VAR_1}かい{EOS}"
	.if (. - gText_TimesVar1) > 0x5
	.error "gText_TimesVar1 may not grow beyond its original slot"
	.endif
	.if (. - gText_TimesVar1) < 0x5
	.space 0x5 - (. - gText_TimesVar1)
	.endif

	@ src/strings.c:904 gText_FloorsCleared
	.globl gText_FloorsCleared
gText_FloorsCleared: @ 0x085DD476
	.string "{STR_VAR_1}だん せいは{EOS}"
	.if (. - gText_FloorsCleared) > 0x9
	.error "gText_FloorsCleared may not grow beyond its original slot"
	.endif
	.if (. - gText_FloorsCleared) < 0x9
	.space 0x9 - (. - gText_FloorsCleared)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085DD47F: frontier_util.s: IsFrontierBrainFemale, SetFrontierBrainEventObjGfx, SetFrontierBrainEventObjGfx_2
	.globl gFrontierUtilData_085DD47F
gFrontierUtilData_085DD47F: @ 0x085DD47F
	@ analyzed canonical ROM range 0x085DD47F-0x085DD48D
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0xF bytes=15
	.byte 0x46, 0x01, 0x47, 0x00, 0x49, 0x00, 0x48, 0x01, 0x4A, 0x00, 0x4B, 0x01, 0xEA, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085DD48E: frontier_util.s: AppendIfValid, sub_081A3CF0; party_menu.s: GetBattleEntryEligibility
	.globl gFrontierBannedSpecies
gFrontierBannedSpecies: @ 0x085DD48E
	@ analyzed canonical ROM range 0x085DD48E-0x085DD4A3
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x16 entries=11
	.2byte 0x0097, 0x0096, 0x00FA, 0x00F9, 0x00FB, 0x0194, 0x0195, 0x0196
	.2byte 0x0199, 0x019A, 0xFFFF
	@ pret/pokeemerald-jp direct xref for 0x085DD4A4: frontier_util.s: DomePrintPrevOrCurrentStreak
	.globl gFrontierUtilData_085DD4A4
gFrontierUtilData_085DD4A4: @ 0x085DD4A4
	@ analyzed canonical ROM range 0x085DD4A4-0x085DD4F4
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085DD4A4 size=0x4 source=v54_multi_pointer
	.4byte gText_Rom_5CC423
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085DD4A8 size=0x4 source=v54_multi_pointer
	.4byte gText_FacilitySingle
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085DD4AC size=0x4 source=v54_multi_pointer
	.4byte gText_Rom_5CC423
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085DD4B0 size=0x4 source=v54_multi_pointer
	.4byte gText_FacilityDouble
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085DD4B4 size=0x4 source=v54_multi_pointer
	.4byte gText_Rom_5CC423
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085DD4B8 size=0x4 source=v54_multi_pointer
	.4byte gText_FacilityMulti
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085DD4BC size=0x4 source=v54_multi_pointer
	.4byte gText_Rom_5CC42A
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085DD4C0 size=0x4 source=v54_multi_pointer
	.4byte gText_FacilitySingle
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085DD4C4 size=0x4 source=v54_multi_pointer
	.4byte gText_Rom_5CC431
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085DD4C8 size=0x4 source=v54_multi_pointer
	.4byte gText_FacilitySingle
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085DD4CC size=0x4 source=v54_multi_pointer
	.4byte gText_Rom_5CC442
	@ ANALYSIS: ROM_POINTER_FIELD size=0x4 addr=0x085DD4D0 parent=gFrontierUtilData_085DD4A4 offset=0x2C value=0x085CC47C
	@ ANALYSIS: SOURCE_RANGE addr=0x085DD4D0 size=0x4
	.byte 0x7C, 0xC4, 0x5C, 0x08
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085DD4D4 size=0x4 source=v54_multi_pointer
	.4byte gText_Rom_5CC438
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085DD4D8 size=0x4 source=v54_multi_pointer
	.4byte gText_FacilitySingle
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085DD4DC size=0x4 source=v54_multi_pointer
	.4byte gText_Rom_5CC44A
	@ ANALYSIS: ROM_POINTER_FIELD size=0x4 addr=0x085DD4E0 parent=gFrontierUtilData_085DD4A4 offset=0x3C value=0x085CC47C
	@ ANALYSIS: SOURCE_RANGE addr=0x085DD4E0 size=0x4
	.byte 0x7C, 0xC4, 0x5C, 0x08
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085DD4E4 size=0x4 source=v54_multi_pointer
	.4byte gText_Rom_5CC452
	@ ANALYSIS: ROM_POINTER_FIELD size=0x4 addr=0x085DD4E8 parent=gFrontierUtilData_085DD4A4 offset=0x44 value=0x085CC47C
	@ ANALYSIS: SOURCE_RANGE addr=0x085DD4E8 size=0x4
	.byte 0x7C, 0xC4, 0x5C, 0x08
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085DD4EC size=0x4 source=v54_multi_pointer
	.4byte gText_Rom_5CC423
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085DD4F0 size=0x4 source=v54_multi_pointer
	.4byte gText_FacilityLink
	@ ANALYSIS: ZERO_BYTES size=0x1 addr=0x085DD4F4 parent=gFrontierUtilData_085DD4A4 offset=0x50
	@ ANALYSIS: SOURCE_RANGE addr=0x085DD4F4 size=0x1
	.byte 0x00
	.globl gText_Rom_5DD4F5
gText_Rom_5DD4F5: @ 0x085DD4F5
	.string "レベル50{EOS}"
	.if (. - gText_Rom_5DD4F5) > 0x6
	.error "gText_Rom_5DD4F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD4F5) < 0x6
	.space 0x6 - (. - gText_Rom_5DD4F5)
	.endif
	.space 0x1, 0x00
