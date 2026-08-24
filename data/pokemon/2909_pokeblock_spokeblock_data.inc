	@ pret/pokeemerald-jp direct xref for 0x08591FEC: pokeblock.spokeblock.s: sub_08137054; pokemon.s: sub_0806E2E4, sub_0806E30C
	.globl gPokeblockFlavorCompatibilityTable
gPokeblockFlavorCompatibilityTable: @ 0x08591FEC
	@ s8 [NUM_NATURES][FLAVOR_COUNT]: Spicy, Dry, Sweet, Bitter, Sour.
	.byte  0,  0,  0,  0,  0 @ Hardy
	.byte  1,  0,  0,  0, -1 @ Lonely
	.byte  1,  0, -1,  0,  0 @ Brave
	.byte  1, -1,  0,  0,  0 @ Adamant
	.byte  1,  0,  0, -1,  0 @ Naughty
	.byte -1,  0,  0,  0,  1 @ Bold
	.byte  0,  0,  0,  0,  0 @ Docile
	.byte  0,  0, -1,  0,  1 @ Relaxed
	.byte  0, -1,  0,  0,  1 @ Impish
	.byte  0,  0,  0, -1,  1 @ Lax
	.byte -1,  0,  1,  0,  0 @ Timid
	.byte  0,  0,  1,  0, -1 @ Hasty
	.byte  0,  0,  0,  0,  0 @ Serious
	.byte  0, -1,  1,  0,  0 @ Jolly
	.byte  0,  0,  1, -1,  0 @ Naive
	.byte -1,  1,  0,  0,  0 @ Modest
	.byte  0,  1,  0,  0, -1 @ Mild
	.byte  0,  1, -1,  0,  0 @ Quiet
	.byte  0,  0,  0,  0,  0 @ Bashful
	.byte  0,  1,  0, -1,  0 @ Rash
	.byte -1,  0,  0,  1,  0 @ Calm
	.byte  0,  0,  0,  1, -1 @ Gentle
	.byte  0,  0, -1,  1,  0 @ Sassy
	.byte  0, -1,  0,  1,  0 @ Careful
	.byte  0,  0,  0,  0,  0 @ Quirky
	.space 3, 0 @ alignment padding
	.if (. - gPokeblockFlavorCompatibilityTable) != 0x80
	.error "gPokeblockFlavorCompatibilityTable size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x0859206C: pokeblock.spokeblock.s: sub_08135C2C
	.globl gPokeblockSpokeblockData_0859206C
gPokeblockSpokeblockData_0859206C: @ 0x0859206C
	@ analyzed canonical ROM range 0x0859206C-0x08592077
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xC entries=6
	.2byte 0x11F0, 0x0000, 0x01E1, 0x0000, 0x21DE, 0x0000
	.4byte NULL
	.4byte gText_Rom_5C97C4
	.4byte gText_Rom_5C97CC
	.4byte gText_Rom_5C97D4
	.4byte gText_Rom_5C97DD
	.4byte gText_Rom_5C97E6
	.4byte gText_Rom_5C97EF
	.4byte gText_Rom_5C97F8
	.4byte gText_Rom_5C9801
	.4byte gText_Rom_5C980A
	.4byte gText_Rom_5C9813
	.4byte gText_Rom_5C981C
	.4byte gText_Rom_5C9825
	.4byte gText_Rom_5C982D
	.4byte gText_Rom_5C9835
	.4byte gText_Rom_5C93A3
	.4byte sub_08136AC0
	.4byte gText_Rom_5C93A7
	.4byte sub_08136B24
	.4byte gText_Exit
	.4byte sub_08136E58
	.4byte gText_Rom_5C93A3
	.4byte sub_08136CFC
	.4byte gText_Rom_5C93A3
	.4byte sub_08136D9C
	.4byte gText_Rom_5C9438
	.4byte sub_08136E00
	@ pret/pokeemerald-jp direct xref for 0x085920E4: pokeblock.spokeblock.s: sub_08135850
	.globl gPokeblockSpokeblockData_085920E4
gPokeblockSpokeblockData_085920E4: @ 0x085920E4
	@ analyzed canonical ROM range 0x085920E4-0x085920E6
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3 bytes=3
	.byte 0x00, 0x01, 0x02
	@ pret/pokeemerald-jp direct xref for 0x085920E7: pokeblock.spokeblock.s: sub_08135850
	.globl gPokeblockSpokeblockData_085920E7
gPokeblockSpokeblockData_085920E7: @ 0x085920E7
	@ analyzed canonical ROM range 0x085920E7-0x085920E8
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x2 bytes=2
	.byte 0x03, 0x02
	@ pret/pokeemerald-jp direct xref for 0x085920E9: pokeblock.spokeblock.s: sub_08135850
	.globl gPokeblockSpokeblockData_085920E9
gPokeblockSpokeblockData_085920E9: @ 0x085920E9
	@ analyzed canonical ROM range 0x085920E9-0x085920EA
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x2 bytes=2
	.byte 0x04, 0x02
	@ pret/pokeemerald-jp direct xref for 0x085920EB: pokeblock.spokeblock.s: sub_08135850
	.globl gPokeblockSpokeblockData_085920EB
gPokeblockSpokeblockData_085920EB: @ 0x085920EB
	@ analyzed canonical ROM range 0x085920EB-0x085920EF
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x5 bytes=5
	.byte 0x05, 0x02, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085920F0: pokeblock.spokeblock.s: sub_08136BB8
	.globl gPokeblockSpokeblockData_085920F0
gPokeblockSpokeblockData_085920F0: @ 0x085920F0
	@ analyzed canonical ROM range 0x085920F0-0x0859213B
	@ semantic recovery: rodata; byte-verified against linked ROM

	@ proven function-pointer table
	.4byte sub_08136BE8
	.4byte sub_08136CC4
	.byte 0x16, 0x17, 0x18, 0x21, 0x2F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x08, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x08, 0x21, 0x59, 0x08, 0x00, 0x00, 0x00, 0x00
	.byte 0xFE, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xFE, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0xFF, 0x7F, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0859213C: pokeblock.spokeblock.s: sub_081364B0
	.globl gPokeblockSpokeblockData_0859213C
gPokeblockSpokeblockData_0859213C: @ 0x0859213C
	@ analyzed canonical ROM range 0x0859213C-0x0859213F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x14, 0x21, 0x59, 0x08
	@ pret/pokeemerald-jp direct xref for 0x08592140: pokeblock.spokeblock.s: sub_08135C88; pokeblock_feed.s: LoadMonAndSceneGfx
	.globl gPokeblockCase_SpriteSheet
gPokeblockCase_SpriteSheet: @ 0x08592140
	@ analyzed canonical ROM range 0x08592140-0x08592147
	@ struct CompressedSpriteSheet: data=0x08D9B72C, size=0x0800, tag=0x39D0.
	.byte 0x2C, 0xB7, 0xD9, 0x08, 0x00, 0x08, 0xD0, 0x39
	@ pret/pokeemerald-jp direct xref for 0x08592148: pokeblock.spokeblock.s: sub_08135C88; pokeblock_feed.s: LoadMonAndSceneGfx
	.globl gPokeblockCase_SpritePal
gPokeblockCase_SpritePal: @ 0x08592148
	@ analyzed canonical ROM range 0x08592148-0x0859214F
	@ struct CompressedSpritePalette: data=0x08D9B9EC, tag=0x39D0, ABI pad=0.
	.byte 0xEC, 0xB9, 0xD9, 0x08, 0xD0, 0x39, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x08592150: pokeblock.spokeblock.s: sub_08136484
	.globl gPokeblockSpokeblockData_08592150
gPokeblockSpokeblockData_08592150: @ 0x08592150
	@ analyzed canonical ROM range 0x08592150-0x08592167
sSpriteTemplate_08592150: @ 0x08592150
	rodata_sprite_template 0x39D0, 0x39D0, 0x08592100, 0x08592110, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x08592168: pokeblock.spokeblock.s: sub_08135DCC
	.globl gPokeblockSpokeblockData_08592168
gPokeblockSpokeblockData_08592168: @ 0x08592168
	@ analyzed canonical ROM range 0x08592168-0x0859216B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x00, 0x02, 0x03, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0859216C: pokeblock.spokeblock.s: sub_081370D8
	.globl gPokeblockSpokeblockData_0859216C
gPokeblockSpokeblockData_0859216C: @ 0x0859216C
	@ analyzed canonical ROM range 0x0859216C-0x08592193
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x28 entries=20
	.2byte 0x1401, 0x0000, 0x0000, 0x0014, 0x0002, 0x0014, 0x0000, 0x0014
	.2byte 0x0003, 0x1400, 0x0000, 0x0014, 0x0004, 0x0000, 0x0014, 0x0014
	.2byte 0x0005, 0x0000, 0x1400, 0x0014
	@ pret/pokeemerald-jp direct xref for 0x08592194: pokeblock.spokeblock.s: sub_08135D74
	.globl gPokeblockSpokeblockData_08592194
gPokeblockSpokeblockData_08592194: @ 0x08592194
	@ analyzed canonical ROM range 0x08592194-0x085921F3
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x60 entries=48
	.2byte 0x0300, 0x0801, 0x0F02, 0x001E, 0x1000, 0x0D01, 0x0F12, 0x002E
	.2byte 0x0200, 0x030D, 0x0F02, 0x0118, 0x0200, 0x030F, 0x0F02, 0x011E
	.2byte 0x0200, 0x0311, 0x0F02, 0x0124, 0x0800, 0x030D, 0x0F02, 0x012A
	.2byte 0x0800, 0x040F, 0x0F02, 0x0130, 0x0B00, 0x0211, 0x0F02, 0x0138
	.2byte 0x0801, 0x0505, 0x0F06, 0x013C, 0x0801, 0x0507, 0x0F04, 0x015A
	.2byte 0x0401, 0x160F, 0x0F04, 0x016E, 0x00FF, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085921F4: pokeblock.spokeblock.s: sub_08136BB8
	.globl gPokeblockSpokeblockData_085921F4
gPokeblockSpokeblockData_085921F4: @ 0x085921F4
	@ analyzed canonical ROM range 0x085921F4-0x085921FB
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x1501, 0x0509, 0x0F04, 0x01C6
	@ pret/pokeemerald-jp direct xref for 0x085921FC: pokeblock.spokeblock.s: sub_08135E60
	.globl gPokeblockSpokeblockData_085921FC
gPokeblockSpokeblockData_085921FC: @ 0x085921FC
	@ analyzed canonical ROM range 0x085921FC-0x08592213
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x18 entries=12
	.2byte 0x0000, 0x0000, 0x5FB5, 0x0813, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0001, 0x0000, 0x3022, 0x4140
