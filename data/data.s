	.section .rodata

	.include "constants/gba_constants.inc"
	.include "constants/global.inc"
	.include "constants/charmap.inc"
	.include "constants/decorations.inc"
	.include "constants/species.inc"
	.include "constants/base_stats.inc"
	.include "constants/moves.inc"
	.include "constants/item.inc"
	.include "constants/map.inc"
	.include "constants/pokemon_graphics.inc"
	.include "constants/rodata.inc"

	.include "asm/macros/base_stats.inc"
	.include "asm/macros/decoration.inc"
	.include "asm/macros/level_up_move_macro.inc"
	.include "asm/macros/pokemon_graphics.inc"
	.include "asm/macros/trainer.inc"
	.include "asm/macros/wild_encounter.inc"
	.include "asm/macros/window.inc"
	.include "asm/macros/rodata.inc"

	.include "data/rodata.inc"
