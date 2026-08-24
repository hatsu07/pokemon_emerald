	@ pret/pokeemerald-jp direct xref for 0x08551868: pokemon_storage_system.s: LoadWallpaperGfx
	@ Pokémon Storage default wallpaper table.
	.globl sWallpapers
sWallpapers: @ 0x08551868
	@ WALLPAPER_FOREST index 0
	.4byte sWallpaperTiles_Forest
	.4byte sWallpaperTilemap_Forest
	.4byte sWallpaperPalettes_Forest
	@ WALLPAPER_CITY index 1
	.4byte sWallpaperTiles_City
	.4byte sWallpaperTilemap_City
	.4byte sWallpaperPalettes_City
	@ WALLPAPER_DESERT index 2
	.4byte sWallpaperTiles_Desert
	.4byte sWallpaperTilemap_Desert
	.4byte sWallpaperPalettes_Desert
	@ WALLPAPER_SAVANNA index 3
	.4byte sWallpaperTiles_Savanna
	.4byte sWallpaperTilemap_Savanna
	.4byte sWallpaperPalettes_Savanna
	@ WALLPAPER_CRAG index 4
	.4byte sWallpaperTiles_Crag
	.4byte sWallpaperTilemap_Crag
	.4byte sWallpaperPalettes_Crag
	@ WALLPAPER_VOLCANO index 5
	.4byte sWallpaperTiles_Volcano
	.4byte sWallpaperTilemap_Volcano
	.4byte sWallpaperPalettes_Volcano
	@ WALLPAPER_SNOW index 6
	.4byte sWallpaperTiles_Snow
	.4byte sWallpaperTilemap_Snow
	.4byte sWallpaperPalettes_Snow
	@ WALLPAPER_CAVE index 7
	.4byte sWallpaperTiles_Cave
	.4byte sWallpaperTilemap_Cave
	.4byte sWallpaperPalettes_Cave
	@ WALLPAPER_BEACH index 8
	.4byte sWallpaperTiles_Beach
	.4byte sWallpaperTilemap_Beach
	.4byte sWallpaperPalettes_Beach
	@ WALLPAPER_SEAFLOOR index 9
	.4byte sWallpaperTiles_Seafloor
	.4byte sWallpaperTilemap_Seafloor
	.4byte sWallpaperPalettes_Seafloor
	@ WALLPAPER_RIVER index 10
	.4byte sWallpaperTiles_River
	.4byte sWallpaperTilemap_River
	.4byte sWallpaperPalettes_River
	@ WALLPAPER_SKY index 11
	.4byte sWallpaperTiles_Sky
	.4byte sWallpaperTilemap_Sky
	.4byte sWallpaperPalettes_Sky
	@ WALLPAPER_POLKA_DOT index 12
	.4byte sWallpaperTiles_PolkaDot
	.4byte sWallpaperTilemap_PolkaDot
	.4byte sWallpaperPalettes_PolkaDot
	@ WALLPAPER_POKECENTER index 13
	.4byte sWallpaperTiles_Pokecenter
	.4byte sWallpaperTilemap_Pokecenter
	.4byte sWallpaperPalettes_Pokecenter
	@ WALLPAPER_MACHINE index 14
	.4byte sWallpaperTiles_Machine
	.4byte sWallpaperTilemap_Machine
	.4byte sWallpaperPalettes_Machine
	@ WALLPAPER_PLAIN index 15
	.4byte sWallpaperTiles_Plain
	.4byte sWallpaperTilemap_Plain
	.4byte sWallpaperPalettes_Plain
	@ Existing sArrow_Gfx begins at 0x08551928.
	@ Its symbol is already defined elsewhere in the baseline source;
	@ emit the proven 0x80 bytes here without redefining the symbol.
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD0, 0xED, 0x00, 0x00, 0xED, 0xFE
	.byte 0x00, 0xD0, 0xEE, 0xFE, 0x00, 0xED, 0xEE, 0xFE, 0xD0, 0xEE, 0xEE, 0xFE, 0xED, 0xEE, 0xEE, 0xFE
	.byte 0xED, 0xEE, 0xEE, 0xFE, 0xE0, 0xEE, 0xEE, 0xFE, 0x00, 0xEE, 0xEE, 0xFE, 0x00, 0xE0, 0xEE, 0xFE
	.byte 0x00, 0x00, 0xEE, 0xFE, 0x00, 0x00, 0xF0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDD, 0x0E, 0x00, 0x00, 0xED, 0xEE, 0x00, 0x00
	.byte 0xED, 0xEE, 0x0E, 0x00, 0xED, 0xEE, 0xEE, 0x00, 0xED, 0xEE, 0xEE, 0x0E, 0xED, 0xEE, 0xEE, 0xFE
	.byte 0xED, 0xEE, 0xEE, 0xFE, 0xED, 0xEE, 0xEE, 0x0F, 0xED, 0xEE, 0xFE, 0x00, 0xED, 0xEE, 0x0F, 0x00
	.byte 0xED, 0xFE, 0x00, 0x00, 0xFE, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

	@ Walda / Friends wallpaper assets.
	.globl sWaldaWallpaperPalettes_Zigzagoon
sWaldaWallpaperPalettes_Zigzagoon: @ 0x085519A8
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/zigzagoon/palette.gbapal"
	.if (. - sWaldaWallpaperPalettes_Zigzagoon) != 0x40
	.error "sWaldaWallpaperPalettes_Zigzagoon size mismatch"
	.endif

	.globl sWaldaWallpaperTiles_Zigzagoon
sWaldaWallpaperTiles_Zigzagoon: @ 0x085519E8
	@ Editable tiles: graphics/pokemon_storage/wallpapers/walda/zigzagoon/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/zigzagoon/tiles_rom_exact.4bpp.lz"
	.if (. - sWaldaWallpaperTiles_Zigzagoon) != 0x1F4
	.error "sWaldaWallpaperTiles_Zigzagoon slot size mismatch"
	.endif

	.globl sWaldaWallpaperTilemap_Zigzagoon
sWaldaWallpaperTilemap_Zigzagoon: @ 0x08551BDC
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/walda/zigzagoon/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/zigzagoon/tilemap_rom_exact.tilemap.lz"
	.if (. - sWaldaWallpaperTilemap_Zigzagoon) != 0x118
	.error "sWaldaWallpaperTilemap_Zigzagoon slot size mismatch"
	.endif

	.globl sWaldaWallpaperPalettes_Screen
sWaldaWallpaperPalettes_Screen: @ 0x08551CF4
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/screen/palette.gbapal"
	.if (. - sWaldaWallpaperPalettes_Screen) != 0x40
	.error "sWaldaWallpaperPalettes_Screen size mismatch"
	.endif

	.globl sWaldaWallpaperTiles_Screen
sWaldaWallpaperTiles_Screen: @ 0x08551D34
	@ Editable tiles: graphics/pokemon_storage/wallpapers/walda/screen/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/screen/tiles_rom_exact.4bpp.lz"
	.if (. - sWaldaWallpaperTiles_Screen) != 0x27C
	.error "sWaldaWallpaperTiles_Screen slot size mismatch"
	.endif

	.globl sWaldaWallpaperTilemap_Screen
sWaldaWallpaperTilemap_Screen: @ 0x08551FB0
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/walda/screen/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/screen/tilemap_rom_exact.tilemap.lz"
	.if (. - sWaldaWallpaperTilemap_Screen) != 0x12C
	.error "sWaldaWallpaperTilemap_Screen slot size mismatch"
	.endif

	.globl sWaldaWallpaperPalettes_Horizontal
sWaldaWallpaperPalettes_Horizontal: @ 0x085520DC
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/horizontal/palette.gbapal"
	.if (. - sWaldaWallpaperPalettes_Horizontal) != 0x40
	.error "sWaldaWallpaperPalettes_Horizontal size mismatch"
	.endif

	.globl sWaldaWallpaperTiles_Horizontal
sWaldaWallpaperTiles_Horizontal: @ 0x0855211C
	@ Editable tiles: graphics/pokemon_storage/wallpapers/walda/horizontal/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/horizontal/tiles_rom_exact.4bpp.lz"
	.if (. - sWaldaWallpaperTiles_Horizontal) != 0x25C
	.error "sWaldaWallpaperTiles_Horizontal slot size mismatch"
	.endif

	.globl sWaldaWallpaperTilemap_Horizontal
sWaldaWallpaperTilemap_Horizontal: @ 0x08552378
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/walda/horizontal/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/horizontal/tilemap_rom_exact.tilemap.lz"
	.if (. - sWaldaWallpaperTilemap_Horizontal) != 0x10C
	.error "sWaldaWallpaperTilemap_Horizontal slot size mismatch"
	.endif

	.globl sWaldaWallpaperPalettes_Diagonal
sWaldaWallpaperPalettes_Diagonal: @ 0x08552484
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/diagonal/palette.gbapal"
	.if (. - sWaldaWallpaperPalettes_Diagonal) != 0x40
	.error "sWaldaWallpaperPalettes_Diagonal size mismatch"
	.endif

	.globl sWaldaWallpaperTiles_Diagonal
sWaldaWallpaperTiles_Diagonal: @ 0x085524C4
	@ Editable tiles: graphics/pokemon_storage/wallpapers/walda/diagonal/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/diagonal/tiles_rom_exact.4bpp.lz"
	.if (. - sWaldaWallpaperTiles_Diagonal) != 0x1EC
	.error "sWaldaWallpaperTiles_Diagonal slot size mismatch"
	.endif

	.globl sWaldaWallpaperTilemap_Diagonal
sWaldaWallpaperTilemap_Diagonal: @ 0x085526B0
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/walda/diagonal/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/diagonal/tilemap_rom_exact.tilemap.lz"
	.if (. - sWaldaWallpaperTilemap_Diagonal) != 0xF0
	.error "sWaldaWallpaperTilemap_Diagonal slot size mismatch"
	.endif

	.globl sWaldaWallpaperPalettes_Block
sWaldaWallpaperPalettes_Block: @ 0x085527A0
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/block/palette.gbapal"
	.if (. - sWaldaWallpaperPalettes_Block) != 0x40
	.error "sWaldaWallpaperPalettes_Block size mismatch"
	.endif

	.globl sWaldaWallpaperTiles_Block
sWaldaWallpaperTiles_Block: @ 0x085527E0
	@ Editable tiles: graphics/pokemon_storage/wallpapers/walda/block/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/block/tiles_rom_exact.4bpp.lz"
	.if (. - sWaldaWallpaperTiles_Block) != 0x1D0
	.error "sWaldaWallpaperTiles_Block slot size mismatch"
	.endif

	.globl sWaldaWallpaperTilemap_Block
sWaldaWallpaperTilemap_Block: @ 0x085529B0
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/walda/block/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/block/tilemap_rom_exact.tilemap.lz"
	.if (. - sWaldaWallpaperTilemap_Block) != 0xF8
	.error "sWaldaWallpaperTilemap_Block slot size mismatch"
	.endif

	.globl sWaldaWallpaperPalettes_Ribbon
sWaldaWallpaperPalettes_Ribbon: @ 0x08552AA8
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/ribbon/palette.gbapal"
	.if (. - sWaldaWallpaperPalettes_Ribbon) != 0x40
	.error "sWaldaWallpaperPalettes_Ribbon size mismatch"
	.endif

	.globl sWaldaWallpaperTiles_Ribbon
sWaldaWallpaperTiles_Ribbon: @ 0x08552AE8
	@ Editable tiles: graphics/pokemon_storage/wallpapers/walda/ribbon/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/ribbon/tiles_rom_exact.4bpp.lz"
	.if (. - sWaldaWallpaperTiles_Ribbon) != 0x268
	.error "sWaldaWallpaperTiles_Ribbon slot size mismatch"
	.endif

	.globl sWaldaWallpaperTilemap_Ribbon
sWaldaWallpaperTilemap_Ribbon: @ 0x08552D50
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/walda/ribbon/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/ribbon/tilemap_rom_exact.tilemap.lz"
	.if (. - sWaldaWallpaperTilemap_Ribbon) != 0x134
	.error "sWaldaWallpaperTilemap_Ribbon slot size mismatch"
	.endif

	.globl sWaldaWallpaperPalettes_Pokecenter2
sWaldaWallpaperPalettes_Pokecenter2: @ 0x08552E84
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/pokecenter2/palette.gbapal"
	.if (. - sWaldaWallpaperPalettes_Pokecenter2) != 0x40
	.error "sWaldaWallpaperPalettes_Pokecenter2 size mismatch"
	.endif

	.globl sWaldaWallpaperTiles_Pokecenter2
sWaldaWallpaperTiles_Pokecenter2: @ 0x08552EC4
	@ Editable tiles: graphics/pokemon_storage/wallpapers/walda/pokecenter2/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/pokecenter2/tiles_rom_exact.4bpp.lz"
	.if (. - sWaldaWallpaperTiles_Pokecenter2) != 0x240
	.error "sWaldaWallpaperTiles_Pokecenter2 slot size mismatch"
	.endif

	.globl sWaldaWallpaperTilemap_Pokecenter2
sWaldaWallpaperTilemap_Pokecenter2: @ 0x08553104
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/walda/pokecenter2/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/pokecenter2/tilemap_rom_exact.tilemap.lz"
	.if (. - sWaldaWallpaperTilemap_Pokecenter2) != 0x114
	.error "sWaldaWallpaperTilemap_Pokecenter2 slot size mismatch"
	.endif

	.globl sWaldaWallpaperPalettes_Frame
sWaldaWallpaperPalettes_Frame: @ 0x08553218
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/frame/palette.gbapal"
	.if (. - sWaldaWallpaperPalettes_Frame) != 0x40
	.error "sWaldaWallpaperPalettes_Frame size mismatch"
	.endif

	.globl sWaldaWallpaperTiles_Frame
sWaldaWallpaperTiles_Frame: @ 0x08553258
	@ Editable tiles: graphics/pokemon_storage/wallpapers/walda/frame/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/frame/tiles_rom_exact.4bpp.lz"
	.if (. - sWaldaWallpaperTiles_Frame) != 0x210
	.error "sWaldaWallpaperTiles_Frame slot size mismatch"
	.endif

	.globl sWaldaWallpaperTilemap_Frame
sWaldaWallpaperTilemap_Frame: @ 0x08553468
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/walda/frame/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/frame/tilemap_rom_exact.tilemap.lz"
	.if (. - sWaldaWallpaperTilemap_Frame) != 0x114
	.error "sWaldaWallpaperTilemap_Frame slot size mismatch"
	.endif

	.globl sWaldaWallpaperPalettes_Blank
sWaldaWallpaperPalettes_Blank: @ 0x0855357C
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/blank/palette.gbapal"
	.if (. - sWaldaWallpaperPalettes_Blank) != 0x40
	.error "sWaldaWallpaperPalettes_Blank size mismatch"
	.endif

	.globl sWaldaWallpaperTiles_Blank
sWaldaWallpaperTiles_Blank: @ 0x085535BC
	@ Editable tiles: graphics/pokemon_storage/wallpapers/walda/blank/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/blank/tiles_rom_exact.4bpp.lz"
	.if (. - sWaldaWallpaperTiles_Blank) != 0x1AC
	.error "sWaldaWallpaperTiles_Blank slot size mismatch"
	.endif

	.globl sWaldaWallpaperTilemap_Blank
sWaldaWallpaperTilemap_Blank: @ 0x08553768
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/walda/blank/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/blank/tilemap_rom_exact.tilemap.lz"
	.if (. - sWaldaWallpaperTilemap_Blank) != 0xDC
	.error "sWaldaWallpaperTilemap_Blank slot size mismatch"
	.endif

	.globl sWaldaWallpaperPalettes_Circles
sWaldaWallpaperPalettes_Circles: @ 0x08553844
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/circles/palette.gbapal"
	.if (. - sWaldaWallpaperPalettes_Circles) != 0x40
	.error "sWaldaWallpaperPalettes_Circles size mismatch"
	.endif

	.globl sWaldaWallpaperTiles_Circles
sWaldaWallpaperTiles_Circles: @ 0x08553884
	@ Editable tiles: graphics/pokemon_storage/wallpapers/walda/circles/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/circles/tiles_rom_exact.4bpp.lz"
	.if (. - sWaldaWallpaperTiles_Circles) != 0x254
	.error "sWaldaWallpaperTiles_Circles slot size mismatch"
	.endif

	.globl sWaldaWallpaperTilemap_Circles
sWaldaWallpaperTilemap_Circles: @ 0x08553AD8
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/walda/circles/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/circles/tilemap_rom_exact.tilemap.lz"
	.if (. - sWaldaWallpaperTilemap_Circles) != 0xFC
	.error "sWaldaWallpaperTilemap_Circles slot size mismatch"
	.endif

	.globl sWaldaWallpaperPalettes_Azumarill
sWaldaWallpaperPalettes_Azumarill: @ 0x08553BD4
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/azumarill/palette.gbapal"
	.if (. - sWaldaWallpaperPalettes_Azumarill) != 0x40
	.error "sWaldaWallpaperPalettes_Azumarill size mismatch"
	.endif

	.globl sWaldaWallpaperTiles_Azumarill
sWaldaWallpaperTiles_Azumarill: @ 0x08553C14
	@ Editable tiles: graphics/pokemon_storage/wallpapers/walda/azumarill/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/azumarill/tiles_rom_exact.4bpp.lz"
	.if (. - sWaldaWallpaperTiles_Azumarill) != 0x1EC
	.error "sWaldaWallpaperTiles_Azumarill slot size mismatch"
	.endif

	.globl sWaldaWallpaperTilemap_Azumarill
sWaldaWallpaperTilemap_Azumarill: @ 0x08553E00
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/walda/azumarill/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/azumarill/tilemap_rom_exact.tilemap.lz"
	.if (. - sWaldaWallpaperTilemap_Azumarill) != 0xF8
	.error "sWaldaWallpaperTilemap_Azumarill slot size mismatch"
	.endif

	.globl sWaldaWallpaperPalettes_Pikachu
sWaldaWallpaperPalettes_Pikachu: @ 0x08553EF8
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/pikachu/palette.gbapal"
	.if (. - sWaldaWallpaperPalettes_Pikachu) != 0x40
	.error "sWaldaWallpaperPalettes_Pikachu size mismatch"
	.endif

	.globl sWaldaWallpaperTiles_Pikachu
sWaldaWallpaperTiles_Pikachu: @ 0x08553F38
	@ Editable tiles: graphics/pokemon_storage/wallpapers/walda/pikachu/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/pikachu/tiles_rom_exact.4bpp.lz"
	.if (. - sWaldaWallpaperTiles_Pikachu) != 0x234
	.error "sWaldaWallpaperTiles_Pikachu slot size mismatch"
	.endif

	.globl sWaldaWallpaperTilemap_Pikachu
sWaldaWallpaperTilemap_Pikachu: @ 0x0855416C
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/walda/pikachu/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/pikachu/tilemap_rom_exact.tilemap.lz"
	.if (. - sWaldaWallpaperTilemap_Pikachu) != 0x128
	.error "sWaldaWallpaperTilemap_Pikachu slot size mismatch"
	.endif

	.globl sWaldaWallpaperPalettes_Legendary
sWaldaWallpaperPalettes_Legendary: @ 0x08554294
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/legendary/palette.gbapal"
	.if (. - sWaldaWallpaperPalettes_Legendary) != 0x40
	.error "sWaldaWallpaperPalettes_Legendary size mismatch"
	.endif

	.globl sWaldaWallpaperTiles_Legendary
sWaldaWallpaperTiles_Legendary: @ 0x085542D4
	@ Editable tiles: graphics/pokemon_storage/wallpapers/walda/legendary/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/legendary/tiles_rom_exact.4bpp.lz"
	.if (. - sWaldaWallpaperTiles_Legendary) != 0x2E0
	.error "sWaldaWallpaperTiles_Legendary slot size mismatch"
	.endif

	.globl sWaldaWallpaperTilemap_Legendary
sWaldaWallpaperTilemap_Legendary: @ 0x085545B4
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/walda/legendary/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/legendary/tilemap_rom_exact.tilemap.lz"
	.if (. - sWaldaWallpaperTilemap_Legendary) != 0x144
	.error "sWaldaWallpaperTilemap_Legendary slot size mismatch"
	.endif

	.globl sWaldaWallpaperPalettes_Dusclops
sWaldaWallpaperPalettes_Dusclops: @ 0x085546F8
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/dusclops/palette.gbapal"
	.if (. - sWaldaWallpaperPalettes_Dusclops) != 0x40
	.error "sWaldaWallpaperPalettes_Dusclops size mismatch"
	.endif

	.globl sWaldaWallpaperTiles_Dusclops
sWaldaWallpaperTiles_Dusclops: @ 0x08554738
	@ Editable tiles: graphics/pokemon_storage/wallpapers/walda/dusclops/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/dusclops/tiles_rom_exact.4bpp.lz"
	.if (. - sWaldaWallpaperTiles_Dusclops) != 0x24C
	.error "sWaldaWallpaperTiles_Dusclops slot size mismatch"
	.endif

	.globl sWaldaWallpaperTilemap_Dusclops
sWaldaWallpaperTilemap_Dusclops: @ 0x08554984
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/walda/dusclops/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/dusclops/tilemap_rom_exact.tilemap.lz"
	.if (. - sWaldaWallpaperTilemap_Dusclops) != 0xF8
	.error "sWaldaWallpaperTilemap_Dusclops slot size mismatch"
	.endif

	.globl sWaldaWallpaperPalettes_Ludicolo
sWaldaWallpaperPalettes_Ludicolo: @ 0x08554A7C
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/ludicolo/palette.gbapal"
	.if (. - sWaldaWallpaperPalettes_Ludicolo) != 0x40
	.error "sWaldaWallpaperPalettes_Ludicolo size mismatch"
	.endif

	.globl sWaldaWallpaperTiles_Ludicolo
sWaldaWallpaperTiles_Ludicolo: @ 0x08554ABC
	@ Editable tiles: graphics/pokemon_storage/wallpapers/walda/ludicolo/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/ludicolo/tiles_rom_exact.4bpp.lz"
	.if (. - sWaldaWallpaperTiles_Ludicolo) != 0x2C0
	.error "sWaldaWallpaperTiles_Ludicolo slot size mismatch"
	.endif

	.globl sWaldaWallpaperTilemap_Ludicolo
sWaldaWallpaperTilemap_Ludicolo: @ 0x08554D7C
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/walda/ludicolo/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/ludicolo/tilemap_rom_exact.tilemap.lz"
	.if (. - sWaldaWallpaperTilemap_Ludicolo) != 0x120
	.error "sWaldaWallpaperTilemap_Ludicolo slot size mismatch"
	.endif

	.globl sWaldaWallpaperPalettes_Whiscash
sWaldaWallpaperPalettes_Whiscash: @ 0x08554E9C
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/whiscash/palette.gbapal"
	.if (. - sWaldaWallpaperPalettes_Whiscash) != 0x40
	.error "sWaldaWallpaperPalettes_Whiscash size mismatch"
	.endif

	.globl sWaldaWallpaperTiles_Whiscash
sWaldaWallpaperTiles_Whiscash: @ 0x08554EDC
	@ Editable tiles: graphics/pokemon_storage/wallpapers/walda/whiscash/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/whiscash/tiles_rom_exact.4bpp.lz"
	.if (. - sWaldaWallpaperTiles_Whiscash) != 0x248
	.error "sWaldaWallpaperTiles_Whiscash slot size mismatch"
	.endif

	.globl sWaldaWallpaperTilemap_Whiscash
sWaldaWallpaperTilemap_Whiscash: @ 0x08555124
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/walda/whiscash/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/walda/whiscash/tilemap_rom_exact.tilemap.lz"
	.if (. - sWaldaWallpaperTilemap_Whiscash) != 0x12C
	.error "sWaldaWallpaperTilemap_Whiscash slot size mismatch"
	.endif

sWallpaperIcon_Aqua: @ 0x08555250
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/aqua_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_Aqua) != 0x44
	.error "sWallpaperIcon_Aqua exact LZ77 size mismatch"
	.endif
sWallpaperIcon_Heart: @ 0x08555294
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/heart_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_Heart) != 0x3C
	.error "sWallpaperIcon_Heart exact LZ77 size mismatch"
	.endif
sWallpaperIcon_FiveStar: @ 0x085552D0
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/five_star_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_FiveStar) != 0x40
	.error "sWallpaperIcon_FiveStar exact LZ77 size mismatch"
	.endif
sWallpaperIcon_Brick: @ 0x08555310
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/brick_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_Brick) != 0x28
	.error "sWallpaperIcon_Brick exact LZ77 size mismatch"
	.endif
sWallpaperIcon_FourStar: @ 0x08555338
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/four_star_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_FourStar) != 0x3C
	.error "sWallpaperIcon_FourStar exact LZ77 size mismatch"
	.endif
sWallpaperIcon_Asterisk: @ 0x08555374
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/asterisk_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_Asterisk) != 0x50
	.error "sWallpaperIcon_Asterisk exact LZ77 size mismatch"
	.endif
sWallpaperIcon_Dot: @ 0x085553C4
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/dot_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_Dot) != 0x30
	.error "sWallpaperIcon_Dot exact LZ77 size mismatch"
	.endif
	.globl gWallpaperIcon_Cross
gWallpaperIcon_Cross: @ 0x085553F4
	@ Editable 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/cross_rom_exact.4bpp.lz"
	.if (. - gWallpaperIcon_Cross) != 0x44
	.error "gWallpaperIcon_Cross exact LZ77 size mismatch"
	.endif
sWallpaperIcon_LineCircle: @ 0x08555438
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/line_circle_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_LineCircle) != 0x2C
	.error "sWallpaperIcon_LineCircle exact LZ77 size mismatch"
	.endif
sWallpaperIcon_PokeBall: @ 0x08555464
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/pokeball_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_PokeBall) != 0x4C
	.error "sWallpaperIcon_PokeBall exact LZ77 size mismatch"
	.endif
sWallpaperIcon_Maze: @ 0x085554B0
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/maze_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_Maze) != 0x44
	.error "sWallpaperIcon_Maze exact LZ77 size mismatch"
	.endif
sWallpaperIcon_Footprint: @ 0x085554F4
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/footprint_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_Footprint) != 0x48
	.error "sWallpaperIcon_Footprint exact LZ77 size mismatch"
	.endif
sWallpaperIcon_BigAsterisk: @ 0x0855553C
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/big_asterisk_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_BigAsterisk) != 0x44
	.error "sWallpaperIcon_BigAsterisk exact LZ77 size mismatch"
	.endif
sWallpaperIcon_Circle: @ 0x08555580
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/circle_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_Circle) != 0x40
	.error "sWallpaperIcon_Circle exact LZ77 size mismatch"
	.endif
sWallpaperIcon_Koffing: @ 0x085555C0
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/koffing_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_Koffing) != 0x50
	.error "sWallpaperIcon_Koffing exact LZ77 size mismatch"
	.endif
sWallpaperIcon_Ribbon: @ 0x08555610
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/ribbon_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_Ribbon) != 0x68
	.error "sWallpaperIcon_Ribbon exact LZ77 size mismatch"
	.endif
	.globl gWallpaperIcon_Bolt
gWallpaperIcon_Bolt: @ 0x08555678
	@ Editable 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/bolt_rom_exact.4bpp.lz"
	.if (. - gWallpaperIcon_Bolt) != 0x40
	.error "gWallpaperIcon_Bolt exact LZ77 size mismatch"
	.endif
sWallpaperIcon_FourCircles: @ 0x085556B8
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/four_circles_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_FourCircles) != 0x30
	.error "sWallpaperIcon_FourCircles exact LZ77 size mismatch"
	.endif
sWallpaperIcon_Lotad: @ 0x085556E8
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/lotad_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_Lotad) != 0x44
	.error "sWallpaperIcon_Lotad exact LZ77 size mismatch"
	.endif
sWallpaperIcon_Crystal: @ 0x0855572C
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/crystal_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_Crystal) != 0x48
	.error "sWallpaperIcon_Crystal exact LZ77 size mismatch"
	.endif
sWallpaperIcon_Pichu: @ 0x08555774
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/pichu_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_Pichu) != 0x38
	.error "sWallpaperIcon_Pichu exact LZ77 size mismatch"
	.endif
sWallpaperIcon_Diglett: @ 0x085557AC
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/diglett_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_Diglett) != 0x50
	.error "sWallpaperIcon_Diglett exact LZ77 size mismatch"
	.endif
sWallpaperIcon_Luvdisc: @ 0x085557FC
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/luvdisc_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_Luvdisc) != 0x44
	.error "sWallpaperIcon_Luvdisc exact LZ77 size mismatch"
	.endif
sWallpaperIcon_StarInCircle: @ 0x08555840
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/star_in_circle_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_StarInCircle) != 0x44
	.error "sWallpaperIcon_StarInCircle exact LZ77 size mismatch"
	.endif
sWallpaperIcon_Spinda: @ 0x08555884
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/spinda_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_Spinda) != 0x54
	.error "sWallpaperIcon_Spinda exact LZ77 size mismatch"
	.endif
sWallpaperIcon_Latis: @ 0x085558D8
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/latis_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_Latis) != 0x44
	.error "sWallpaperIcon_Latis exact LZ77 size mismatch"
	.endif
	.globl gWallpaperIcon_Plusle
gWallpaperIcon_Plusle: @ 0x0855591C
	@ Editable 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/plusle_rom_exact.4bpp.lz"
	.if (. - gWallpaperIcon_Plusle) != 0x44
	.error "gWallpaperIcon_Plusle exact LZ77 size mismatch"
	.endif
sWallpaperIcon_Minun: @ 0x08555960
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/minun_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_Minun) != 0x48
	.error "sWallpaperIcon_Minun exact LZ77 size mismatch"
	.endif
sWallpaperIcon_Togepi: @ 0x085559A8
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/togepi_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_Togepi) != 0x5C
	.error "sWallpaperIcon_Togepi exact LZ77 size mismatch"
	.endif
sWallpaperIcon_Magma: @ 0x08555A04
	@ Editable canonical 16x16 indexed PNG; exact original LZ77 token plan.
	.incbin "build/graphics/pokemon_storage/wallpapers/icons/magma_rom_exact.4bpp.lz"
	.if (. - sWallpaperIcon_Magma) != 0x3C
	.error "sWallpaperIcon_Magma exact LZ77 size mismatch"
	.endif
	@ Walda / Friends wallpaper pattern table.
	.globl sWaldaWallpapers
sWaldaWallpapers: @ 0x08555A40
	@ pattern 0: Zigzagoon
	.4byte sWaldaWallpaperTiles_Zigzagoon
	.4byte sWaldaWallpaperTilemap_Zigzagoon
	.4byte sWaldaWallpaperPalettes_Zigzagoon
	@ pattern 1: Screen
	.4byte sWaldaWallpaperTiles_Screen
	.4byte sWaldaWallpaperTilemap_Screen
	.4byte sWaldaWallpaperPalettes_Screen
	@ pattern 2: Horizontal
	.4byte sWaldaWallpaperTiles_Horizontal
	.4byte sWaldaWallpaperTilemap_Horizontal
	.4byte sWaldaWallpaperPalettes_Horizontal
	@ pattern 3: Diagonal
	.4byte sWaldaWallpaperTiles_Diagonal
	.4byte sWaldaWallpaperTilemap_Diagonal
	.4byte sWaldaWallpaperPalettes_Diagonal
	@ pattern 4: Block
	.4byte sWaldaWallpaperTiles_Block
	.4byte sWaldaWallpaperTilemap_Block
	.4byte sWaldaWallpaperPalettes_Block
	@ pattern 5: Ribbon
	.4byte sWaldaWallpaperTiles_Ribbon
	.4byte sWaldaWallpaperTilemap_Ribbon
	.4byte sWaldaWallpaperPalettes_Ribbon
	@ pattern 6: Pokecenter2
	.4byte sWaldaWallpaperTiles_Pokecenter2
	.4byte sWaldaWallpaperTilemap_Pokecenter2
	.4byte sWaldaWallpaperPalettes_Pokecenter2
	@ pattern 7: Frame
	.4byte sWaldaWallpaperTiles_Frame
	.4byte sWaldaWallpaperTilemap_Frame
	.4byte sWaldaWallpaperPalettes_Frame
	@ pattern 8: Blank
	.4byte sWaldaWallpaperTiles_Blank
	.4byte sWaldaWallpaperTilemap_Blank
	.4byte sWaldaWallpaperPalettes_Blank
	@ pattern 9: Circles
	.4byte sWaldaWallpaperTiles_Circles
	.4byte sWaldaWallpaperTilemap_Circles
	.4byte sWaldaWallpaperPalettes_Circles
	@ pattern 10: Azumarill
	.4byte sWaldaWallpaperTiles_Azumarill
	.4byte sWaldaWallpaperTilemap_Azumarill
	.4byte sWaldaWallpaperPalettes_Azumarill
	@ pattern 11: Pikachu
	.4byte sWaldaWallpaperTiles_Pikachu
	.4byte sWaldaWallpaperTilemap_Pikachu
	.4byte sWaldaWallpaperPalettes_Pikachu
	@ pattern 12: Legendary
	.4byte sWaldaWallpaperTiles_Legendary
	.4byte sWaldaWallpaperTilemap_Legendary
	.4byte sWaldaWallpaperPalettes_Legendary
	@ pattern 13: Dusclops
	.4byte sWaldaWallpaperTiles_Dusclops
	.4byte sWaldaWallpaperTilemap_Dusclops
	.4byte sWaldaWallpaperPalettes_Dusclops
	@ pattern 14: Ludicolo
	.4byte sWaldaWallpaperTiles_Ludicolo
	.4byte sWaldaWallpaperTilemap_Ludicolo
	.4byte sWaldaWallpaperPalettes_Ludicolo
	@ pattern 15: Whiscash
	.4byte sWaldaWallpaperTiles_Whiscash
	.4byte sWaldaWallpaperTilemap_Whiscash
	.4byte sWaldaWallpaperPalettes_Whiscash

	.globl sWaldaWallpaperIcons
sWaldaWallpaperIcons: @ 0x08555B00
	@ 30 compressed wallpaper icon graphics selected by GetWaldaWallpaperIconId
	.4byte sWallpaperIcon_Aqua @ 0x08555250
	.4byte sWallpaperIcon_Heart @ 0x08555294
	.4byte sWallpaperIcon_FiveStar @ 0x085552D0
	.4byte sWallpaperIcon_Brick @ 0x08555310
	.4byte sWallpaperIcon_FourStar @ 0x08555338
	.4byte sWallpaperIcon_Asterisk @ 0x08555374
	.4byte sWallpaperIcon_Dot @ 0x085553C4
	.4byte gWallpaperIcon_Cross @ 0x085553F4
	.4byte sWallpaperIcon_LineCircle @ 0x08555438
	.4byte sWallpaperIcon_PokeBall @ 0x08555464
	.4byte sWallpaperIcon_Maze @ 0x085554B0
	.4byte sWallpaperIcon_Footprint @ 0x085554F4
	.4byte sWallpaperIcon_BigAsterisk @ 0x0855553C
	.4byte sWallpaperIcon_Circle @ 0x08555580
	.4byte sWallpaperIcon_Koffing @ 0x085555C0
	.4byte sWallpaperIcon_Ribbon @ 0x08555610
	.4byte gWallpaperIcon_Bolt @ 0x08555678
	.4byte sWallpaperIcon_FourCircles @ 0x085556B8
	.4byte sWallpaperIcon_Lotad @ 0x085556E8
	.4byte sWallpaperIcon_Crystal @ 0x0855572C
	.4byte sWallpaperIcon_Pichu @ 0x08555774
	.4byte sWallpaperIcon_Diglett @ 0x085557AC
	.4byte sWallpaperIcon_Luvdisc @ 0x085557FC
	.4byte sWallpaperIcon_StarInCircle @ 0x08555840
	.4byte sWallpaperIcon_Spinda @ 0x08555884
	.4byte sWallpaperIcon_Latis @ 0x085558D8
	.4byte gWallpaperIcon_Plusle @ 0x0855591C
	.4byte sWallpaperIcon_Minun @ 0x08555960
	.4byte sWallpaperIcon_Togepi @ 0x085559A8
	.4byte sWallpaperIcon_Magma @ 0x08555A04
sUnusedColor: @ 0x08555B78
	.2byte 0x23BA @ RGB(26, 29, 8)
	.2byte 0x0000 @ alignment padding
	@ pret/pokeemerald-jp direct xref for 0x08555B7C: pokemon_storage_system.s: sub_080CC8A8
	.globl sSpriteSheet_Arrow
sSpriteSheet_Arrow: @ 0x08555B7C
	@ Semantic alias for the 0x80-byte arrow graphics.
	@ Bound to the existing source-backed owner; no numeric ROM pointer is emitted.
	.globl sArrow_Gfx
	.set sArrow_Gfx, sWallpapers + 0xC0
	@ Pokémon Storage box-title / scroll-arrow support data.
	.set STORAGE_GFXTAG_BOX_TITLE, 3
	.set STORAGE_GFXTAG_ARROW, 6
	.set STORAGE_PALTAG_BOX_TITLE, 0xDAC9
	.set STORAGE_PALTAG_MISC_2, 0xDACA

	.macro storage_sprite_sheet data, size, tag
		.4byte \data
		.2byte \size, \tag
	.endm

	.macro storage_anim_frame tile, duration
		.2byte \tile, \duration
	.endm

	.macro storage_anim_end
		.2byte 0xFFFF, 0
	.endm

	@ struct SpriteSheet
	storage_sprite_sheet sArrow_Gfx, 0x80, STORAGE_GFXTAG_ARROW

sOamData_BoxTitle: @ 0x08555B84
	@ struct OamData: 32x16, priority 2
	.2byte 0x4000, 0x8000, 0x0800, 0x0000

sAnim_BoxTitle_Left: @ 0x08555B8C
	storage_anim_frame 0, 5
	storage_anim_end
sAnim_BoxTitle_Right: @ 0x08555B94
	storage_anim_frame 8, 5
	storage_anim_end
sAnims_BoxTitle: @ 0x08555B9C
	.4byte sAnim_BoxTitle_Left
	.4byte sAnim_BoxTitle_Right
	.if (. - sSpriteSheet_Arrow) != 0x28
	.error "sSpriteSheet_Arrow block size mismatch"
	.endif
	.globl sSpriteTemplate_BoxTitle
sSpriteTemplate_BoxTitle: @ 0x08555BA4
	@ struct SpriteTemplate
	.2byte STORAGE_GFXTAG_BOX_TITLE, STORAGE_PALTAG_BOX_TITLE
	.4byte sOamData_BoxTitle
	.4byte sAnims_BoxTitle
	.4byte 0
	.4byte gDummySpriteAffineAnimTable
	.4byte SpriteCallbackDummy + 1

sOamData_Arrow: @ 0x08555BBC
	@ struct OamData: 8x16, priority 2
	.2byte 0x8000, 0x0000, 0x0800, 0x0000

sAnim_Arrow_Left: @ 0x08555BC4
	storage_anim_frame 0, 5
	storage_anim_end
sAnim_Arrow_Right: @ 0x08555BCC
	storage_anim_frame 2, 5
	storage_anim_end
sAnims_Arrow: @ 0x08555BD4
	.4byte sAnim_Arrow_Left
	.4byte sAnim_Arrow_Right
	.if (. - sSpriteTemplate_BoxTitle) != 0x38
	.error "sSpriteTemplate_BoxTitle block size mismatch"
	.endif
	.globl sSpriteTemplate_Arrow
sSpriteTemplate_Arrow: @ 0x08555BDC
	@ struct SpriteTemplate
	.2byte STORAGE_GFXTAG_ARROW, STORAGE_PALTAG_MISC_2
	.4byte sOamData_Arrow
	.4byte sAnims_Arrow
	.4byte 0
	.4byte gDummySpriteAffineAnimTable
	.4byte SpriteCB_Arrow + 1
	.if (. - sSpriteTemplate_Arrow) != 0x18
	.error "sSpriteTemplate_Arrow size mismatch"
	.endif

sHandCursor_Pal: @ 0x08555BF4
	.incbin "build/graphics/pokemon_storage/hand_cursor.gbapal"
	.if (. - sHandCursor_Pal) != 0x20
	.error "sHandCursor_Pal size mismatch"
	.endif

sHandCursor_Gfx: @ 0x08555C14
	.incbin "build/graphics/pokemon_storage/hand_cursor.4bpp"
	.if (. - sHandCursor_Gfx) != 0x800
	.error "sHandCursor_Gfx size mismatch"
	.endif

sHandCursorShadow_Gfx: @ 0x08556414
	.incbin "build/graphics/pokemon_storage/hand_cursor_shadow.4bpp"
	.if (. - sHandCursorShadow_Gfx) != 0x80
	.error "sHandCursorShadow_Gfx size mismatch"
	.endif

	.if (. - sSpriteTemplate_Arrow) != 0x8B8
	.error "storage arrow template + cursor assets size mismatch"
	.endif
	.4byte MonPlaceChange_Move
	.4byte MonPlaceChange_Place
	.4byte MonPlaceChange_Shift
	@ pret/pokeemerald-jp direct xref for 0x085564A0: pokemon_storage_system.s: sub_080CDBCC
	@ Moves that must remain available before a Pokémon may be released.
	@ Canonical struct: {s8 mapGroup, s8 mapNum, u16 move}.
	.set STORAGE_RELEASE_ANY_MAP_GROUP, 0x22
	.set STORAGE_RELEASE_LEAGUE_MAP_GROUP, 0x10
	.set STORAGE_RELEASE_LEAGUE_1F_MAP_NUM, 0x0A
	.set STORAGE_RELEASE_LEAGUE_2F_MAP_NUM, 0x0E
	.set STORAGE_MOVE_SURF, 0x0039
	.set STORAGE_MOVE_STRENGTH, 0x0046
	.set STORAGE_MOVE_ROCK_SMASH, 0x00F9
	.set STORAGE_MOVE_DIVE, 0x0123

	.macro storage_release_move_entry map_group, map_num, move
		.byte \map_group, \map_num
		.2byte \move
	.endm

	.globl sPokemonStorageRestrictedReleaseMoves
sPokemonStorageRestrictedReleaseMoves: @ 0x085564A0
	storage_release_move_entry STORAGE_RELEASE_ANY_MAP_GROUP, 0, STORAGE_MOVE_SURF
	storage_release_move_entry STORAGE_RELEASE_ANY_MAP_GROUP, 0, STORAGE_MOVE_DIVE
	storage_release_move_entry STORAGE_RELEASE_LEAGUE_MAP_GROUP, STORAGE_RELEASE_LEAGUE_1F_MAP_NUM, STORAGE_MOVE_STRENGTH
	storage_release_move_entry STORAGE_RELEASE_LEAGUE_MAP_GROUP, STORAGE_RELEASE_LEAGUE_1F_MAP_NUM, STORAGE_MOVE_ROCK_SMASH
	storage_release_move_entry STORAGE_RELEASE_LEAGUE_MAP_GROUP, STORAGE_RELEASE_LEAGUE_2F_MAP_NUM, STORAGE_MOVE_STRENGTH
	storage_release_move_entry STORAGE_RELEASE_LEAGUE_MAP_GROUP, STORAGE_RELEASE_LEAGUE_2F_MAP_NUM, STORAGE_MOVE_ROCK_SMASH
	.if (. - sPokemonStorageRestrictedReleaseMoves) != 0x18
	.error "sPokemonStorageRestrictedReleaseMoves size mismatch"
	.endif
	.purgem storage_release_move_entry

	@ HandleInput dispatch table: {function pointer, s8 cursor area, 3-byte pad}.
	.set STORAGE_CURSOR_AREA_IN_BOX, 0
	.set STORAGE_CURSOR_AREA_IN_PARTY, 1
	.set STORAGE_CURSOR_AREA_BOX_TITLE, 2
	.set STORAGE_CURSOR_AREA_BUTTONS, 3

	.macro storage_input_func_entry func, area
		.4byte \func
		.byte \area, 0, 0, 0
	.endm

	.globl sPokemonStorageInputFuncs
sPokemonStorageInputFuncs: @ 0x085564B8
	storage_input_func_entry HandleInput_InBox, STORAGE_CURSOR_AREA_IN_BOX
	storage_input_func_entry HandleInput_InParty, STORAGE_CURSOR_AREA_IN_PARTY
	storage_input_func_entry HandleInput_OnBox, STORAGE_CURSOR_AREA_BOX_TITLE
	storage_input_func_entry HandleInput_OnButtons, STORAGE_CURSOR_AREA_BUTTONS
	.space 0x8, 0 @ terminator: {NULL, 0}
	.if (. - sPokemonStorageInputFuncs) != 0x28
	.error "sPokemonStorageInputFuncs size mismatch"
	.endif
	.if (. - sPokemonStorageRestrictedReleaseMoves) != 0x40
	.error "restricted-release + input table size mismatch"
	.endif
	.purgem storage_input_func_entry

	@ pret/pokeemerald-jp direct xref for 0x085564E0: pokemon_storage_system.s: sub_080CF490
	@ Hand cursor and shadow graphics registrations.
	.set STORAGE_GFXTAG_CURSOR, 0
	.set STORAGE_GFXTAG_CURSOR_SHADOW, 1
	.macro storage_cursor_sheet gfx, size, tag
		.4byte \gfx
		.2byte \size, \tag
	.endm

	.globl sPokemonStorageCursorSpriteSheets
sPokemonStorageCursorSpriteSheets: @ 0x085564E0
	storage_cursor_sheet sHandCursor_Gfx, 0x0800, STORAGE_GFXTAG_CURSOR
	storage_cursor_sheet sHandCursorShadow_Gfx, 0x0080, STORAGE_GFXTAG_CURSOR_SHADOW
	.space 0x8, 0 @ SpriteSheet terminator
	.if (. - sPokemonStorageCursorSpriteSheets) != 0x18
	.error "sPokemonStorageCursorSpriteSheets size mismatch"
	.endif
	.purgem storage_cursor_sheet

	@ Cursor palette array. 0xDAC7 is the existing cursor palette tag.
	.globl sPokemonStorageCursorSpritePalettes
sPokemonStorageCursorSpritePalettes: @ 0x085564F8
	.4byte sHandCursor_Pal
	.2byte 0xDAC7, 0
	.space 0x8, 0 @ SpritePalette terminator

sPokemonStorageOamData_Cursor: @ 0x08556508
	@ 32x32, priority 1.
	.2byte 0x0000, 0x8000, 0x0400, 0x0000

sPokemonStorageOamData_CursorShadow: @ 0x08556510
	@ 16x16, priority 1.
	.2byte 0x0000, 0x4000, 0x0400, 0x0000

	.macro storage_cursor_anim_frame frame, duration
		.2byte \frame, \duration
	.endm
	.macro storage_cursor_anim_end
		.2byte 0xFFFF, 0
	.endm
	.macro storage_cursor_anim_jump target
		.2byte 0xFFFE, \target
	.endm

sPokemonStorageAnim_Cursor_Bouncing: @ 0x08556518
	storage_cursor_anim_frame 0, 30
	storage_cursor_anim_frame 16, 30
	storage_cursor_anim_jump 0

sPokemonStorageAnim_Cursor_Still: @ 0x08556524
	storage_cursor_anim_frame 0, 5
	storage_cursor_anim_end

sPokemonStorageAnim_Cursor_Open: @ 0x0855652C
	storage_cursor_anim_frame 32, 5
	storage_cursor_anim_end

sPokemonStorageAnim_Cursor_Fist: @ 0x08556534
	storage_cursor_anim_frame 48, 5
	storage_cursor_anim_end

sPokemonStorageAnims_Cursor: @ 0x0855653C
	.4byte sPokemonStorageAnim_Cursor_Bouncing
	.4byte sPokemonStorageAnim_Cursor_Still
	.4byte sPokemonStorageAnim_Cursor_Open
	.4byte sPokemonStorageAnim_Cursor_Fist
	.if (. - sPokemonStorageCursorSpritePalettes) != 0x54
	.error "cursor palette/OAM/anim region size mismatch"
	.endif

	.purgem storage_cursor_anim_frame
	.purgem storage_cursor_anim_end
	.purgem storage_cursor_anim_jump
	.globl sPokemonStorageSpriteTemplate_Cursor
sPokemonStorageSpriteTemplate_Cursor: @ 0x0855654C
	rodata_sprite_template 0x0000, 0xDACA, sPokemonStorageOamData_Cursor, sPokemonStorageAnims_Cursor, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy

	.globl sPokemonStorageSpriteTemplate_CursorShadow
sPokemonStorageSpriteTemplate_CursorShadow: @ 0x08556564
	rodata_sprite_template 0x0001, 0xDACA, sPokemonStorageOamData_CursorShadow, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_080CF470

	@ pret/pokeemerald-jp direct xref for 0x0855657C: pokemon_storage_system.s: SetMenuText
	.globl sPokemonStorageMenuTexts
sPokemonStorageMenuTexts: @ 0x0855657C
	@ const u8 *const Pokémon Storage menu text table.
	@ Indices follow the MENU_* enum used by SetMenuText.
	.4byte gText_Rom_5CB35D + 0x14 @ MENU_CANCEL
	.4byte gText_Rom_5CB35D + 0x1B @ MENU_STORE
	.4byte gText_Rom_5CB35D + 0x22 @ MENU_WITHDRAW
	.4byte gText_Rom_5CB35D + 0x30 @ MENU_MOVE
	.4byte gText_Rom_5CB35D + 0x29 @ MENU_SHIFT
	.4byte gText_Rom_5CB35D + 0x37 @ MENU_PLACE
	.4byte gText_Rom_5CB39B @ MENU_SUMMARY
	.4byte gText_Rom_5CB39B + 0x7 @ MENU_RELEASE
	.4byte gText_Rom_5CB39B + 0xE @ MENU_MARK
	.4byte gText_Rom_5CB3B7 @ MENU_JUMP
	.4byte gText_Rom_5CB3B7 + 0x5 @ MENU_WALLPAPER
	.4byte gText_Rom_5CB39B + 0x15 @ MENU_NAME
	.4byte gText_Rom_5CB3C3 @ MENU_TAKE
	.4byte gText_Rom_5CB3C8 @ MENU_GIVE
	.4byte gText_Rom_5CB3C8 @ MENU_GIVE_2
	.4byte gText_Rom_5CB3CD @ MENU_SWITCH
	.4byte gText_Rom_5CB3D3 @ MENU_BAG
	.4byte gText_Info2 @ MENU_INFO
	.4byte gText_Rom_5CB3DD @ MENU_SCENERY_1
	.4byte gText_Rom_5CB3E3 @ MENU_SCENERY_2
	.4byte gText_Rom_5CB3E9 @ MENU_SCENERY_3
	.4byte gText_Rom_5CB3EF @ MENU_ETCETERA
	.4byte gEasyChatWord_Adore_Copy_Pokemon @ MENU_FRIENDS
	.4byte gEasyChatWord_Adore_Copy_Pokemon + 0x5 @ MENU_FOREST
	.4byte gText_Rom_5CB3FD @ MENU_CITY
	.4byte gText_Rom_5CB401 @ MENU_DESERT
	.4byte gText_Rom_5CB405 @ MENU_SAVANNA
	.4byte gText_Rom_5CB40A @ MENU_CRAG
	.4byte gText_Rom_5CB40F @ MENU_VOLCANO
	.4byte gText_Rom_5CB413 @ MENU_SNOW
	.4byte gText_Rom_5CB418 @ MENU_CAVE
	.4byte gText_Rom_5CB41D @ MENU_BEACH
	.4byte gText_Rom_5CB421 @ MENU_SEAFLOOR
	.4byte gText_Rom_5CB426 @ MENU_RIVER
	.4byte gText_Rom_5CB426 + 0x3 @ MENU_SKY
	.4byte gText_Rom_5CB42C @ MENU_POLKADOT
	.4byte gText_Rom_5CB431 @ MENU_POKECENTER
	.4byte gText_Rom_5CB436 @ MENU_MACHINE
	.4byte gText_Rom_5CB43A @ MENU_SIMPLE
	.if (. - sPokemonStorageMenuTexts) != 0x9C
	.error "Pokémon Storage menu text table size mismatch"
	.endif
	.globl sPokemonStorageWindowTemplate_MultiMove
sPokemonStorageWindowTemplate_MultiMove: @ 0x08556618
	@ struct WindowTemplate sWindowTemplate_MultiMove
	@ bg=0 left=10 top=3 width=20 height=18 palette=9 baseBlock=0xA
	.byte 0, 10, 3, 20, 18, 9
	.2byte 0x000A
	.if (. - sPokemonStorageWindowTemplate_MultiMove) != 0x8
	.error "MultiMove WindowTemplate size mismatch"
	.endif
	.globl sPokemonStorageItemInfoFrame_Gfx
sPokemonStorageItemInfoFrame_Gfx: @ 0x08556620
	@ Move Items: frame gfx + ItemIcon OAM / affine animation data.
	@ Editable 16x16 indexed source: graphics/pokemon_storage/item_info_frame.png
	.incbin "build/graphics/pokemon_storage/item_info_frame.4bpp"
	.if (. - sPokemonStorageItemInfoFrame_Gfx) != 0x80
	.error "sPokemonStorageItemInfoFrame_Gfx size mismatch"
	.endif

sPokemonStorageOamData_ItemIcon: @ sPokemonStorageOamData_ItemIcon
	@ struct OamData: affine 32x32 sprite, priority 1.
	.2byte 0x0100, 0x8000, 0x0400, 0x0000

	.macro storage_item_affine_frame xscale, yscale, rotation, duration
		.2byte \xscale, \yscale
		.byte \rotation, \duration
		.2byte 0 @ ABI padding: union AffineAnimCmd is 8 bytes
	.endm
	.macro storage_item_affine_end
		.2byte 0x7FFF, 0, 0, 0
	.endm

sPokemonStorageAffineAnim_ItemIcon_Small: @ 0x085566A8
	storage_item_affine_frame 128, 128, 0, 0
	storage_item_affine_end

sPokemonStorageAffineAnim_ItemIcon_Appear: @ 0x085566B8
	storage_item_affine_frame 88, 88, 0, 0
	storage_item_affine_frame 5, 5, 0, 8
	storage_item_affine_end

sPokemonStorageAffineAnim_ItemIcon_Disappear: @ 0x085566D0
	storage_item_affine_frame 128, 128, 0, 0
	storage_item_affine_frame -5, -5, 0, 8
	storage_item_affine_end

sPokemonStorageAffineAnim_ItemIcon_PickUp: @ 0x085566E8
	storage_item_affine_frame 128, 128, 0, 0
	storage_item_affine_frame 10, 10, 0, 12
	storage_item_affine_frame 256, 256, 0, 0
	storage_item_affine_end

sPokemonStorageAffineAnim_ItemIcon_PutDown: @ 0x08556708
	storage_item_affine_frame 256, 256, 0, 0
	storage_item_affine_frame -10, -10, 0, 12
	storage_item_affine_frame 128, 128, 0, 0
	storage_item_affine_end

sPokemonStorageAffineAnim_ItemIcon_PutAway: @ 0x08556728
	storage_item_affine_frame 256, 256, 0, 0
	storage_item_affine_frame -5, -5, 0, 16
	storage_item_affine_end

sPokemonStorageAffineAnim_ItemIcon_Large: @ 0x08556740
	storage_item_affine_frame 256, 256, 0, 0
	storage_item_affine_end

sPokemonStorageAffineAnims_ItemIcon: @ sPokemonStorageAffineAnims_ItemIcon
	.4byte sPokemonStorageAffineAnim_ItemIcon_Small
	.4byte sPokemonStorageAffineAnim_ItemIcon_Appear
	.4byte sPokemonStorageAffineAnim_ItemIcon_Disappear
	.4byte sPokemonStorageAffineAnim_ItemIcon_PickUp
	.4byte sPokemonStorageAffineAnim_ItemIcon_PutDown
	.4byte sPokemonStorageAffineAnim_ItemIcon_PutAway
	.4byte sPokemonStorageAffineAnim_ItemIcon_Large

	.if (. - sPokemonStorageItemInfoFrame_Gfx) != 0x14C
	.error "Move Items item-icon data cluster size mismatch"
	.endif
	.globl sPokemonStorageSpriteTemplate_ItemIcon
sPokemonStorageSpriteTemplate_ItemIcon: @ 0x0855676C
	@ struct SpriteTemplate sSpriteTemplate_ItemIcon
	.2byte 7, 0xDACB @ GFXTAG_ITEM_ICON_0, PALTAG_ITEM_ICON_0 (JP tags)
	.4byte sPokemonStorageOamData_ItemIcon
	.4byte gDummySpriteAnimTable
	.4byte 0 @ images = NULL
	.4byte sPokemonStorageAffineAnims_ItemIcon
	.4byte SpriteCallbackDummy
	.if (. - sPokemonStorageSpriteTemplate_ItemIcon) != 0x18
	.error "ItemIcon SpriteTemplate size mismatch"
	.endif
	@ Background dimensions indexed by [BG_TYPE][screenSize].
	@ Canonical struct: {u16 width, u16 height}.
	.macro storage_tilemap_dimension_entry width, height
		.2byte \width, \height
	.endm

	.globl sPokemonStorageTilemapDimensions
sPokemonStorageTilemapDimensions: @ 0x08556784
	@ BG_TYPE_NORMAL
	storage_tilemap_dimension_entry 256, 256
	storage_tilemap_dimension_entry 512, 256
	storage_tilemap_dimension_entry 256, 512
	storage_tilemap_dimension_entry 512, 512
	@ BG_TYPE_AFFINE
	storage_tilemap_dimension_entry 128, 128
	storage_tilemap_dimension_entry 256, 256
	storage_tilemap_dimension_entry 512, 512
	storage_tilemap_dimension_entry 1024, 1024
	.if (. - sPokemonStorageTilemapDimensions) != 0x20
	.error "sPokemonStorageTilemapDimensions size mismatch"
	.endif
	.purgem storage_tilemap_dimension_entry
