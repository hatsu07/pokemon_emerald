	.globl gText_Rom_5DC13C

	@ asm/battle_factory_screen.s:8862 sub_0819E7FC
	.globl gText_Rom_5DC13C
gText_Rom_5DC13C: @ 0x085DC13C
	.string "　　　　{EOS}"
	.if (. - gText_Rom_5DC13C) > 0x5
	.error "gText_Rom_5DC13C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC13C) < 0x5
	.space 0x5 - (. - gText_Rom_5DC13C)
	.endif
	.globl gText_SamePkmnInPartyAlready

	@ src/strings.c:1019 gText_SamePkmnInPartyAlready
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_SamePkmnInPartyAlready
gText_SamePkmnInPartyAlready: @ 0x085DC141
	.string "てもちに おなじ ポケモンが います!{EOS}"
	.if (. - gText_SamePkmnInPartyAlready) != 0x14
	.error "gText_SamePkmnInPartyAlready must retain its original byte length"
	.endif
	.globl gText_Rom_5DC146
	.set gText_Rom_5DC146, gText_SamePkmnInPartyAlready + 0x5
	.space 0x3, 0x00
	.4byte sub_0819F000
	.4byte sub_0819EFB8
	.4byte sub_0819F020
	@ pret/pokeemerald-jp direct xref for 0x085DC164: battle_factory_screen.s: CB2_InitSwapScreen
	.globl gBattleFactoryScreenData_085DC164
gBattleFactoryScreenData_085DC164: @ 0x085DC164
	@ analyzed canonical ROM range 0x085DC164-0x085DC173
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x10 entries=8
	.2byte 0x1180, 0x0000, 0x3195, 0x0000, 0x01AA, 0x0000, 0x21BB, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085DC174: battle_factory_screen.s: CB2_InitSwapScreen
	.globl gBattleFactoryScreenData_085DC174
gBattleFactoryScreenData_085DC174: @ 0x085DC174
	@ analyzed canonical ROM range 0x085DC174-0x085DC1C3
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x50 entries=40
	.2byte 0x0100, 0x0D02, 0x0F02, 0x0001, 0x1802, 0x0802, 0x0E02, 0x001B
	.2byte 0x0000, 0x140F, 0x0F03, 0x002B, 0x1600, 0x080E, 0x0F06, 0x0067
	.2byte 0x1700, 0x030E, 0x0F04, 0x0097, 0x1602, 0x080F, 0x0E05, 0x0067
	.2byte 0x0A02, 0x0402, 0x0E02, 0x00A3, 0x1800, 0x0802, 0x0F02, 0x00AB
	.2byte 0x1400, 0x0900, 0x0F02, 0x00BB, 0x00FF, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085DC1C4: battle_factory_screen.s: CB2_InitSwapScreen, Swap_PrintMonSpecies2, Swap_PrintMonSpecies3, sub_0819D270
	.globl gBattleFactoryScreenData_085DC1C4
gBattleFactoryScreenData_085DC1C4: @ 0x085DC1C4
	@ analyzed canonical ROM range 0x085DC1C4-0x085DC1CD
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xA entries=5
	.2byte 0x0000, 0x0000, 0x7FFF, 0x0000, 0x001F
	@ pret/pokeemerald-jp direct xref for 0x085DC1CE: battle_factory_screen.s: Swap_PrintActionStrings, Swap_PrintActionStrings2, Swap_PrintMenuOptions, Swap_PrintOneActionString, Swap_PrintYesNoOptions
	.globl gBattleFactoryScreenData_085DC1CE
gBattleFactoryScreenData_085DC1CE: @ 0x085DC1CE
	@ analyzed canonical ROM range 0x085DC1CE-0x085DC1D0
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3 bytes=3
	.byte 0x00, 0x02, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085DC1D1: battle_factory_screen.s: Swap_PrintActionString, Swap_PrintMonSpecies, Swap_PrintMonSpecies2, Swap_PrintMonSpecies3
	.globl gBattleFactoryScreenData_085DC1D1
gBattleFactoryScreenData_085DC1D1: @ 0x085DC1D1
	@ analyzed canonical ROM range 0x085DC1D1-0x085DC1D3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3 bytes=3
	.byte 0x00, 0x04, 0x00
	@ Resolved pointer table; original ROM range 0x5DC1D4..0x5DC1F3.
	.4byte TYPE_FIGHT
	.4byte Swap_ActionMon
	.4byte TYPE_FIGHT
	.4byte Swap_ActionMon
	.4byte TYPE_FIGHT
	.4byte Swap_ActionMon
	.4byte TYPE_POISON
	.4byte Swap_ActionCancel
	@ Resolved pointer table; original ROM range 0x5DC1F4..0x5DC21B.
	.4byte TYPE_FIGHT
	.4byte Swap_ActionMon
	.4byte TYPE_FIGHT
	.4byte Swap_ActionMon
	.4byte TYPE_FIGHT
	.4byte Swap_ActionMon
	.4byte TYPE_FLYING
	.4byte Swap_ActionPkmnForSwap
	.4byte TYPE_POISON
	.4byte Swap_ActionCancel
	.globl gText_Rom_5DC21C
