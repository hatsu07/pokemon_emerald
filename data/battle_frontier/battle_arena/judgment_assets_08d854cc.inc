	.globl gBattleArenaJudgmentSymbolsGfx
gBattleArenaJudgmentSymbolsGfx: @ 0x08D854CC
	.incbin "build/graphics/battle_frontier/arena_judgment_symbols.4bpp.lz"
	.if (. - gBattleArenaJudgmentSymbolsGfx) != 0x100
	.error "gBattleArenaJudgmentSymbolsGfx exact slot size mismatch"
	.endif

@ gBattleArenaJudgmentSymbolsPalette: LZ stream=0x17, slot=0x18, raw=0x20.
	.globl gBattleArenaJudgmentSymbolsPalette
gBattleArenaJudgmentSymbolsPalette: @ 0x08D855CC
	.incbin "build/graphics/battle_frontier/arena_judgment_symbols.gbapal.lz"
	.if (. - gBattleArenaJudgmentSymbolsPalette) != 0x18
	.error "gBattleArenaJudgmentSymbolsPalette exact slot size mismatch"
	.endif

@ gBattleWindowTextPalette: LZ stream=0x1F, slot=0x20, raw=0x20.
