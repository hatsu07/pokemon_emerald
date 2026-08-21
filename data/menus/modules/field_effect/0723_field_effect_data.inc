	@ pret/pokeemerald-jp direct xref for 0x0852E728: wild_encounter.s: CheckFeebas, GetRoute119WaterTileNum
	.globl gRoute119FeebasWaterTileSections
gRoute119FeebasWaterTileSections: @ 0x0852E728
	route119_feebas_water_tile_section 0, 45, 0
	route119_feebas_water_tile_section 46, 91, 131
	route119_feebas_water_tile_section 92, 139, 298
	@ 0x0852E73A-0x08535AFB belongs to field_effect rodata.
	@ Exact asset identity was proven against pret/pokeemerald source assets.
	.balign 4, 0

sNewGameBirch_Gfx: @ 0x0852E73C
	.incbin "build/graphics/birch_speech/birch.4bpp"

sUnusedBirchBeauty: @ 0x0852EF3C
	@ Upstream intentionally uses only the first 822 tiles.
	.incbin "build/graphics/birch_speech/unused_beauty.4bpp"

sNewGameBirch_Pal: @ 0x085355FC
	.incbin "build/graphics/birch_speech/birch.gbapal"

sPokeballGlow_Gfx: @ 0x0853561C
	.incbin "build/graphics/field_effects/pics/pokeball_glow.4bpp"

sPokeballGlow_Pal: @ 0x0853563C
	.incbin "build/graphics/field_effects/palettes/pokeball_glow.gbapal"

sPokecenterMonitor0_Gfx: @ 0x0853565C
	.incbin "build/graphics/field_effects/pics/pokecenter_monitor/0.4bpp"

sPokecenterMonitor1_Gfx: @ 0x0853571C
	.incbin "build/graphics/field_effects/pics/pokecenter_monitor/1.4bpp"

sHofMonitorBig_Gfx: @ 0x085357DC
	.incbin "build/graphics/field_effects/pics/hof_monitor_big.4bpp"

sHofMonitorSmall_Gfx: @ 0x085359DC
	.incbin "build/graphics/field_effects/pics/hof_monitor_small.4bpp"

sHofMonitor_Pal: @ 0x08535ADC
	.incbin "build/graphics/field_effects/palettes/hof_monitor.gbapal"
