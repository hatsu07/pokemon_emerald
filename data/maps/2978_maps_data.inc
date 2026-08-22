	@ pret/pokeemerald-jp direct xref for 0x0859DC98: battle_transition.s: Phase2_Kyogre_Func3
	@ Priority B: Kyogre transition tilemap.
	.globl gBattleTransitionKyogre_Tilemap
gBattleTransitionKyogre_Tilemap: @ 0x0859DC98
	.incbin "build/graphics/priority_b/battle_transitions/kyogre.bin.lz"
	.if (. - gBattleTransitionKyogre_Tilemap) != 0x334
	.error "Kyogre transition tilemap exact slot size mismatch"
	.endif
	@ Priority B: Groudon transition tileset.
	.globl gBattleTransitionGroudon_Gfx
gBattleTransitionGroudon_Gfx: @ 0x0859DFCC
	.incbin "build/graphics/priority_b/battle_transitions/groudon.4bpp.lz"
	.if (. - gBattleTransitionGroudon_Gfx) != 0x56C
	.error "Groudon transition gfx exact slot size mismatch"
	.endif
	@ Priority B: Groudon transition tilemap.
	.globl gBattleTransitionGroudon_Tilemap
gBattleTransitionGroudon_Tilemap: @ 0x0859E538
	.incbin "build/graphics/priority_b/battle_transitions/groudon.bin.lz"
	.if (. - gBattleTransitionGroudon_Tilemap) != 0x318
	.error "Groudon transition tilemap exact slot size mismatch"
	.endif
	.globl gBattleTransitionData_0859E850
gBattleTransitionData_0859E850: @ 0x0859E850
	@ analyzed canonical ROM range 0x0859E850-0x0859E98F
gBattleTransitionKyogreIntroPaletteFrames: @ 0x0859E850
	@ ANALYSIS: SEMANTIC_NUMERIC_BATTLE_TRANSITION_PALETTE
	@ 10 16-color BGR555 palette frames loaded to palette slot 0xF0 by Phase2_Kyogre_Func4
	@ Editable palette PNG: 10 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/battle_transitions/gBattleTransitionKyogreIntroPaletteFrames.gbapal"
	@ pret/pokeemerald-jp direct xref for 0x0859E990: battle_transition.s: Phase2_Kyogre_Func5
	.globl gBattleTransitionData_0859E990
gBattleTransitionData_0859E990: @ 0x0859E990
	@ analyzed canonical ROM range 0x0859E990-0x0859EB4F
gBattleTransitionKyogreFadePaletteFrames: @ 0x0859E990
	@ ANALYSIS: SEMANTIC_NUMERIC_BATTLE_TRANSITION_PALETTE
	@ 14 16-color BGR555 palette frames loaded to palette slot 0xF0 by Phase2_Kyogre_Func5
	@ Editable palette PNG: 14 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/battle_transitions/gBattleTransitionKyogreFadePaletteFrames.gbapal"
	@ pret/pokeemerald-jp direct xref for 0x0859EB50: battle_transition.s: Phase2_Groudon_Func4
	.globl gBattleTransitionData_0859EB50
gBattleTransitionData_0859EB50: @ 0x0859EB50
	@ analyzed canonical ROM range 0x0859EB50-0x0859ED4F
gBattleTransitionGroudonIntroPaletteFrames: @ 0x0859EB50
	@ ANALYSIS: SEMANTIC_NUMERIC_BATTLE_TRANSITION_PALETTE
	@ 16-color BGR555 palette frames loaded to palette slot 0xF0 by Phase2_Groudon_Func4
	@ Editable palette PNG: 16 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/battle_transitions/gBattleTransitionGroudonIntroPaletteFrames.gbapal"
	@ pret/pokeemerald-jp direct xref for 0x0859ED50: battle_transition.s: Phase2_Groudon_Func5
	.globl gBattleTransitionData_0859ED50
gBattleTransitionData_0859ED50: @ 0x0859ED50
	@ analyzed canonical ROM range 0x0859ED50-0x0859EF4F
gBattleTransitionGroudonFadePaletteFrames: @ 0x0859ED50
	@ ANALYSIS: SEMANTIC_NUMERIC_BATTLE_TRANSITION_PALETTE
	@ 16-color BGR555 palette frames loaded to palette slot 0xF0 by Phase2_Groudon_Func5
	@ Editable palette PNG: 16 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/battle_transitions/gBattleTransitionGroudonFadePaletteFrames.gbapal"
	@ pret/pokeemerald-jp direct xref for 0x0859EF50: battle_transition.s: Phase2_Rayquaza_Func5, Phase2_Rayquaza_Func9
	.globl gBattleTransitionData_0859EF50
gBattleTransitionData_0859EF50: @ 0x0859EF50
	@ analyzed canonical ROM range 0x0859EF50-0x0859EFEF
gBattleTransitionRayquazaPaletteFrames: @ 0x0859EF50
	@ ANALYSIS: SEMANTIC_NUMERIC_BATTLE_TRANSITION_PALETTE
	@ first 5 16-color BGR555 palette frames; Phase2_Rayquaza_Func5 continues at frame 5 below
	@ Editable palette PNG: 5 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/battle_transitions/gBattleTransitionRayquazaPaletteFrames.gbapal"
	@ pret/pokeemerald-jp direct xref for 0x0859EFF0: battle_transition.s: Phase2_Rayquaza_Func3
	.globl gBattleTransitionData_0859EFF0
gBattleTransitionData_0859EFF0: @ 0x0859EFF0
	@ analyzed canonical ROM range 0x0859EFF0-0x0859F14F
gBattleTransitionRayquazaPaletteFrames_Frame5: @ 0x0859EFF0
	@ ANALYSIS: SEMANTIC_NUMERIC_BATTLE_TRANSITION_PALETTE
	@ remaining 11 16-color BGR555 palette frames; direct initial load target for Phase2_Rayquaza_Func3
	@ Editable palette PNG: 11 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/battle_transitions/gBattleTransitionRayquazaPaletteFrames_Frame5.gbapal"
