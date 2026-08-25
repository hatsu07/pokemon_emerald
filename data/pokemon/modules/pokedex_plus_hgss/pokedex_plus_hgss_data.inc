	@ pret/pokeemerald-jp direct xref for 0x085C976F: battle_pyramid_bag.s: PyramidBag_CopyItemName; item_menu.s: GetItemName
	.globl gText_NumberItem_TMBerry
gText_NumberItem_TMBerry: @ 0x085C976F
	@ JP numbered TM/Berry item-name placeholder template.
	.byte 0xF9, 0x08
	.if (. - gText_NumberItem_TMBerry) != 0x2
	.error "gText_NumberItem_TMBerry size mismatch"
	.endif
	@ src/pokedex_plus_hgss.c:146 sText_Stats_EvStr1Str2
	.globl sText_Stats_EvStr1Str2_Copy_Rom_5C9771
sText_Stats_EvStr1Str2_Copy_Rom_5C9771: @ 0x085C9771
	.string "{STR_VAR_1}{STR_VAR_2}{EOS}"
	.if (. - sText_Stats_EvStr1Str2_Copy_Rom_5C9771) > 0x5
	.error "sText_Stats_EvStr1Str2_Copy_Rom_5C9771 may not grow beyond its original slot"
	.endif
	.if (. - sText_Stats_EvStr1Str2_Copy_Rom_5C9771) < 0x5
	.space 0x5 - (. - sText_Stats_EvStr1Str2_Copy_Rom_5C9771)
	.endif
	.globl gPokedexRecord_Rom_5C9776
gPokedexRecord_Rom_5C9776: @ 0x085C9776
	.space 0x2, 0x00

	@ src/pokedex_plus_hgss.c:146 sText_Stats_EvStr1Str2
	.globl sText_Stats_EvStr1Str2_Copy_Rom_5C9778
sText_Stats_EvStr1Str2_Copy_Rom_5C9778: @ 0x085C9778
	.string "{STR_VAR_1}{STR_VAR_2}{EOS}"
	.if (. - sText_Stats_EvStr1Str2_Copy_Rom_5C9778) > 0x5
	.error "sText_Stats_EvStr1Str2_Copy_Rom_5C9778 may not grow beyond its original slot"
	.endif
	.if (. - sText_Stats_EvStr1Str2_Copy_Rom_5C9778) < 0x5
	.space 0x5 - (. - sText_Stats_EvStr1Str2_Copy_Rom_5C9778)
	.endif
