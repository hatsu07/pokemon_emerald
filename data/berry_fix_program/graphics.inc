	@ Berry Fix Program screen graphics loaded by LoadBerryFixProgramGfx.
	@ Each table row is {compressed tiles, compressed tilemap, palette block}.
	.globl gBerryFixProgramScreen0Palette
gBerryFixProgramScreen0Palette: @ 0x085E29E0
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ Editable palette PNG: 2 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/berry_fix_program/gBerryFixProgramScreen0Palette.gbapal"
	.globl gBerryFixProgramScreen0Tiles
gBerryFixProgramScreen0Tiles: @ 0x085E2A20
	@ ANALYSIS: SEMANTIC_NUMERIC_GRAPHICS_ASSET
	.incbin "build/graphics/berry_fix_program/screen_0/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00
	.globl gBerryFixProgramScreen0Tilemap
gBerryFixProgramScreen0Tilemap: @ 0x085E3610
	@ ANALYSIS: SEMANTIC_NUMERIC_TILEMAP_ASSET
	.incbin "build/graphics/berry_fix_program/screen_0/tilemap_rom_exact.tilemap.lz"
	.byte 0x00, 0x00
	.globl gBerryFixProgramScreen1Palette
gBerryFixProgramScreen1Palette: @ 0x085E3930
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ Editable palette PNG: 3 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/berry_fix_program/gBerryFixProgramScreen1Palette.gbapal"
	.globl gBerryFixProgramScreen1Tiles
gBerryFixProgramScreen1Tiles: @ 0x085E3990
	@ ANALYSIS: SEMANTIC_NUMERIC_GRAPHICS_ASSET
	.incbin "build/graphics/berry_fix_program/screen_1/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00
	.globl gBerryFixProgramScreen1Tilemap
gBerryFixProgramScreen1Tilemap: @ 0x085E4494
	@ ANALYSIS: SEMANTIC_NUMERIC_TILEMAP_ASSET
	.incbin "build/graphics/berry_fix_program/screen_1/tilemap_rom_exact.tilemap.lz"
	.byte 0x00, 0x00
	.globl gBerryFixProgramScreen2Palette
gBerryFixProgramScreen2Palette: @ 0x085E4790
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ Editable palette PNG: 2 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/berry_fix_program/gBerryFixProgramScreen2Palette.gbapal"
	.globl gBerryFixProgramScreen2Tiles
gBerryFixProgramScreen2Tiles: @ 0x085E47D0
	@ ANALYSIS: SEMANTIC_NUMERIC_GRAPHICS_ASSET
	.incbin "build/graphics/berry_fix_program/screen_2/tiles_rom_exact.4bpp.lz"
	.byte 0x00
	.globl gBerryFixProgramScreen2Tilemap
gBerryFixProgramScreen2Tilemap: @ 0x085E50D8
	@ ANALYSIS: SEMANTIC_NUMERIC_TILEMAP_ASSET
	.incbin "build/graphics/berry_fix_program/screen_2/tilemap_rom_exact.tilemap.lz"
	.byte 0x00, 0x00, 0x00
	.globl gBerryFixProgramScreen3Palette
gBerryFixProgramScreen3Palette: @ 0x085E535C
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ Editable palette PNG: 2 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/berry_fix_program/gBerryFixProgramScreen3Palette.gbapal"
	.globl gBerryFixProgramScreen3Tiles
gBerryFixProgramScreen3Tiles: @ 0x085E539C
	@ ANALYSIS: SEMANTIC_NUMERIC_GRAPHICS_ASSET
	.incbin "build/graphics/berry_fix_program/screen_3/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
	.globl gBerryFixProgramScreen3Tilemap
gBerryFixProgramScreen3Tilemap: @ 0x085E5BCC
	.incbin "build/graphics/berry_fix_program/screen_3/tilemap_rom_exact.tilemap.lz"
	.globl gBerryFixProgramScreen4Palette
gBerryFixProgramScreen4Palette: @ 0x085E5E28
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ Editable palette PNG: 2 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/berry_fix_program/gBerryFixProgramScreen4Palette.gbapal"
	.globl gBerryFixProgramScreen4Tiles
gBerryFixProgramScreen4Tiles: @ 0x085E5E68
	@ ANALYSIS: SEMANTIC_NUMERIC_GRAPHICS_ASSET
	.incbin "build/graphics/berry_fix_program/screen_4/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00
	.globl gBerryFixProgramScreen4Tilemap
gBerryFixProgramScreen4Tilemap: @ 0x085E674C
	@ ANALYSIS: SEMANTIC_NUMERIC_TILEMAP_ASSET
	.incbin "build/graphics/berry_fix_program/screen_4/tilemap_rom_exact.tilemap.lz"
	.byte 0x00, 0x00, 0x00
	.globl gBerryFixProgramScreen5Palette
gBerryFixProgramScreen5Palette: @ 0x085E69A8
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ Editable palette PNG: 2 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/berry_fix_program/gBerryFixProgramScreen5Palette.gbapal"
	.globl gBerryFixProgramScreen5Tiles
gBerryFixProgramScreen5Tiles: @ 0x085E69E8
	@ ANALYSIS: SEMANTIC_NUMERIC_GRAPHICS_ASSET
	.incbin "build/graphics/berry_fix_program/screen_5/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00
	.globl gBerryFixProgramScreen5Tilemap
gBerryFixProgramScreen5Tilemap: @ 0x085E707C
	@ ANALYSIS: SEMANTIC_NUMERIC_TILEMAP_ASSET
	.incbin "build/graphics/berry_fix_program/screen_5/tilemap_rom_exact.tilemap.lz"
	.byte 0x00
	.globl gBerryFixProgramGfxTable
gBerryFixProgramGfxTable: @ 0x085E72E4
	.4byte gBerryFixProgramScreen0Tiles
	.4byte gBerryFixProgramScreen0Tilemap
	.4byte gBerryFixProgramScreen0Palette
	.4byte gBerryFixProgramScreen1Tiles
	.4byte gBerryFixProgramScreen1Tilemap
	.4byte gBerryFixProgramScreen1Palette
	.4byte gBerryFixProgramScreen2Tiles
	.4byte gBerryFixProgramScreen2Tilemap
	.4byte gBerryFixProgramScreen2Palette
	.4byte gBerryFixProgramScreen3Tiles
	.4byte gBerryFixProgramScreen3Tilemap
	.4byte gBerryFixProgramScreen3Palette
	.4byte gBerryFixProgramScreen4Tiles
	.4byte gBerryFixProgramScreen4Tilemap
	.4byte gBerryFixProgramScreen4Palette
	.4byte gBerryFixProgramScreen5Tiles
	.4byte gBerryFixProgramScreen5Tilemap
	.4byte gBerryFixProgramScreen5Palette
