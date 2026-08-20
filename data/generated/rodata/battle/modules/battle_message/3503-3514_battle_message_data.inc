	@ src/battle_message.c:456 battle_message_line_456
	.globl gText_Rom_5AB336
gText_Rom_5AB336: @ 0x085AB336
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nたいりょくを かいふくした!{EOS}"
	.if (. - gText_Rom_5AB336) > 0x17
	.error "gText_Rom_5AB336 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB336) < 0x17
	.space 0x17 - (. - gText_Rom_5AB336)
	.endif
	@ analyzed canonical ROM range 0x085AB34D-0x085AB381
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x13, 0x1A, 0x00, 0xFD, 0x16, 0x44, 0xFE, 0xFD, 0x00, 0x19, 0x00, 0x2C, 0x3C, 0x9F, 0x52
	.byte 0x7E, 0x64, 0x2D, 0x00, 0x06, 0x02, 0x1C, 0x08, 0x0C, 0x10, 0xAB, 0xFF, 0xFD, 0x13, 0x1A, 0x00
	.byte 0xFD, 0x16, 0x44, 0xFE, 0x5D, 0x63, 0xAE, 0x60, 0x5D, 0x2D, 0x00, 0x23, 0x14, 0x16, 0x00, 0x23
	.byte 0x45, 0x0C, 0x10, 0xAB, 0xFF
	.globl gText_Rom_5AB382
gText_Rom_5AB382: @ 0x085AB382
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nすこし かいふく{EOS}"
	.if (. - gText_Rom_5AB382) != 0x11
	.error "gText_Rom_5AB382 must retain its original byte length"
	.endif
	.globl gText_Rom_5AB38E
	.set gText_Rom_5AB38E, gText_Rom_5AB382 + 0xc

	@ src/battle_message.c:460 battle_message_line_460
	.globl gText_Rom_5AB393
gText_Rom_5AB393: @ 0x085AB393
	.string "{B_LAST_ITEM}の こうかで\n{B_CURRENT_MOVE}しか だすことができない!\p{EOS}"
	.if (. - gText_Rom_5AB393) > 0x1a
	.error "gText_Rom_5AB393 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB393) < 0x1a
	.space 0x1a - (. - gText_Rom_5AB393)
	.endif

	@ src/battle_message.c:461 battle_message_line_461
	.globl gText_Rom_5AB3AD
gText_Rom_5AB3AD: @ 0x085AB3AD
	.string "{B_DEF_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nもちこたえた!{EOS}"
	.if (. - gText_Rom_5AB3AD) > 0x10
	.error "gText_Rom_5AB3AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB3AD) < 0x10
	.space 0x10 - (. - gText_Rom_5AB3AD)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085AB3BD: battle_main.s: BattleTurnPassed, TryDoEventsBeforeFirstTurn
	.globl gBattleMainData_085AB3BD
gBattleMainData_085AB3BD:
	.globl gBattleMainData_085AB3BD
	@ analyzed canonical ROM range 0x085AB3BD-0x085AB3DB
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x1F bytes=31
	.byte 0x00, 0xFF, 0x0A, 0x0A, 0x44, 0x00, 0x9A, 0xAE, 0x79, 0x2D, 0x00, 0x15, 0x3A, 0x29, 0x2E, 0x41
	.byte 0x18, 0xFE, 0x4A, 0x08, 0xB0, 0xB0, 0x00, 0x24, 0x50, 0x13, 0x20, 0x29, 0x26, 0xAB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085AB3DC: battle_message.s: BufferStringBattle, ExpandBattleTextBuffPlaceholders; evolution_scene.s: Task_EvolutionScene, Task_TradeEvolutionScene
	.globl gBattlePointerTable_Rom_5AB3DC
gBattlePointerTable_Rom_5AB3DC: @ 0x085AB3DC
	@ analyzed canonical ROM range 0x085AB3DC-0x085AB99F
	@ pointer/nullable table
	@ ANALYSIS: POINTER_TABLE entries=4 size=0x10
	.4byte 0x085A9628
	.4byte 0x085A962B
	.4byte 0x085A9649
	.4byte 0x085A965E
	.4byte gText_Rom_5A966F @ +0x10
	.4byte gText_Rom_5A9688 @ +0x14
	.4byte gText_Rom_5A96A8 @ +0x18
	.4byte gText_Rom_5A96C3 @ +0x1C
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085A96DE @ +0x20
	.4byte gText_Rom_5A96FC @ +0x24
	@ ANALYSIS: POINTER_TABLE entries=8 size=0x20
	.4byte 0x085AAD14
	.4byte 0x085A9723
	.4byte 0x085A9737
	.4byte 0x085AA8C4
	.4byte 0x085A974B
	.4byte 0x085A9788
	.4byte 0x085A979C
	.4byte 0x085A97A7
	.4byte gText_Rom_5A97B2 @ +0x48
	.4byte gText_Rom_5A97CB @ +0x4C
	@ ANALYSIS: POINTER_TABLE entries=2 size=0x8
	.4byte 0x085A97E7
	.4byte 0x085A97FE
	.4byte gText_Rom_5A9824 @ +0x58
	.4byte gText_Rom_5A982F @ +0x5C
	@ ANALYSIS: POINTER_TABLE entries=9 size=0x24
	.4byte 0x085A983D
	.4byte 0x085A9853
	.4byte 0x085A9862
	.4byte 0x085A9871
	.4byte 0x085A9882
	.4byte 0x085A988E
	.4byte 0x085A98A2
	.4byte 0x085A98B7
	.4byte 0x085A98C9
	.4byte gText_Rom_5A98D7 @ +0x84
	@ ANALYSIS: POINTER_TABLE entries=2 size=0x8
	.4byte 0x085A98EA
	.4byte 0x085A98F7
	.4byte gText_Rom_5A990C @ +0x90
	.4byte gText_Rom_5A9935 @ +0x94
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085A9944 @ +0x98
	.4byte gText_Rom_5A995B @ +0x9C
	@ ANALYSIS: POINTER_TABLE entries=3 size=0xC
	.4byte 0x085A9970
	.4byte 0x085A997E
	.4byte 0x085A998C
	.4byte gText_Rom_5A999E @ +0xAC
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085A99B4 @ +0xB0
	.4byte gText_Rom_5A99D2 @ +0xB4
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085A99E6 @ +0xB8
	.4byte gText_Rom_5A99F5 @ +0xBC
	@ ANALYSIS: POINTER_TABLE entries=5 size=0x14
	.4byte 0x085A9A03
	.4byte 0x085A9A10
	.4byte 0x085A9A21
	.4byte 0x085A9A32
	.4byte 0x085A9A45
	.4byte gText_Rom_5A9A58 @ +0xD4
	.4byte gText_Rom_5A9A66 @ +0xD8
	.4byte gText_Rom_5A9A75 @ +0xDC
	.4byte gText_Rom_5A9A81 @ +0xE0
	@ ANALYSIS: POINTER_TABLE entries=2 size=0x8
	.4byte 0x085A9A93
	.4byte 0x085A9AA2
	.4byte gText_Rom_5A9AB1 @ +0xEC
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085A9AC7 @ +0xF0
	.4byte gText_Rom_5A9AD4 @ +0xF4
	.4byte gText_Rom_5A9AE4 @ +0xF8
	.4byte gText_Rom_5A9AF6 @ +0xFC
	.4byte gText_Rom_5A9B09 @ +0x100
	@ ANALYSIS: POINTER_TABLE entries=6 size=0x18
	.4byte 0x085A9B1F
	.4byte 0x085A9B4D
	.4byte 0x085A9B81
	.4byte 0x085A9B94
	.4byte 0x085A9BAA
	.4byte 0x085A9BC5
	.4byte gText_Rom_5A9BD2 @ +0x11C
	.4byte gText_Rom_5A9BE8 @ +0x120
	.4byte gText_Rom_5A9BFE @ +0x124
	.4byte gText_Rom_5A9C11 @ +0x128
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085A9C20 @ +0x12C
	.4byte gText_Rom_5A9C33 @ +0x130
	@ ANALYSIS: POINTER_TABLE entries=5 size=0x14
	.4byte 0x085A9C45
	.4byte 0x085A9C7A
	.4byte 0x085A9C8B
	.4byte 0x085A9CB2
	.4byte 0x085A9CC2
	.4byte gText_Rom_5A9CD5 @ +0x148
	.4byte gText_Rom_5A9CE9 @ +0x14C
	.4byte gText_Rom_5A9CFB @ +0x150
	.4byte gPokemonData_085A9D15 @ +0x154
	.4byte gText_Rom_5A9D26 @ +0x158
	.4byte gPokemonData_085A9D39 @ +0x15C
	.4byte gText_Rom_5A9D46 @ +0x160
	.4byte gText_Rom_5A9D5B @ +0x164
	.4byte gText_Rom_5A9D70 @ +0x168
	.4byte gText_Rom_5A9D80 @ +0x16C
	.4byte gText_Rom_5A9D9F @ +0x170
	.4byte gText_Rom_5A9DAE @ +0x174
	.4byte gText_Rom_5A9DBE @ +0x178
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085A9DD4 @ +0x17C
	.4byte gText_Rom_5A9DE4 @ +0x180
	@ ANALYSIS: POINTER_TABLE entries=3 size=0xC
	.4byte 0x085A9DF1
	.4byte 0x085A9E09
	.4byte 0x085A9E1C
	.4byte gText_Rom_5A9E28 @ +0x190
	.4byte gText_Rom_5A9E34 @ +0x194
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085A9E41 @ +0x198
	.4byte gText_Rom_5A9E56 @ +0x19C
	@ ANALYSIS: POINTER_TABLE entries=8 size=0x20
	.4byte 0x085A9E64
	.4byte 0x085A9E7C
	.4byte 0x085A9E92
	.4byte 0x085A9EA8
	.4byte 0x085A9EB7
	.4byte 0x085A9EC3
	.4byte 0x085A9ED2
	.4byte 0x085A9EE5
	.4byte gText_Rom_5A9EF4 @ +0x1C0
	.4byte gText_Rom_5A9F04 @ +0x1C4
	.4byte gText_Rom_5A9F14 @ +0x1C8
	.4byte gText_Rom_5A9F24 @ +0x1CC
	@ ANALYSIS: POINTER_TABLE entries=2 size=0x8
	.4byte 0x085A9F3C
	.4byte 0x085A9F57
	.4byte gText_Rom_5A9F6C @ +0x1D8
	.4byte gText_Rom_5A9F83 @ +0x1DC
	.4byte gText_Rom_5A9F9B @ +0x1E0
	@ ANALYSIS: POINTER_TABLE entries=2 size=0x8
	.4byte 0x085AA531
	.4byte 0x085A9FAB
	.4byte gText_Rom_5A9FBB @ +0x1EC
	@ ANALYSIS: POINTER_TABLE entries=2 size=0x8
	.4byte 0x085A9FCB
	.4byte 0x085A9FE0
	.4byte gText_Rom_5A9FF3 @ +0x1F8
	.4byte gText_Rom_5AA003 @ +0x1FC
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AA01B @ +0x200
	.4byte gText_Rom_5AA02D @ +0x204
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AA03D @ +0x208
	.4byte gText_Rom_5AA052 @ +0x20C
	.4byte gText_Rom_5AA061 @ +0x210
	.4byte gText_Rom_5AA071 @ +0x214
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AA083 @ +0x218
	.4byte gText_Rom_5AA0A6 @ +0x21C
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AA0B3 @ +0x220
	.4byte gText_Rom_5AA0C9 @ +0x224
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AA0DE @ +0x228
	.4byte gText_Rom_5AA0F4 @ +0x22C
	.4byte gText_Rom_5AA10B @ +0x230
	.4byte gText_Rom_5AA120 @ +0x234
	.4byte gText_Rom_5AA130 @ +0x238
	.4byte gText_Rom_5AA13C @ +0x23C
	@ ANALYSIS: POINTER_TABLE entries=2 size=0x8
	.4byte 0x085AA15A
	.4byte 0x085AA171
	.4byte gText_Rom_5AA187 @ +0x248
	.4byte gText_Rom_5AA19C @ +0x24C
	.4byte gText_Rom_5AA1AE @ +0x250
	.4byte gText_Rom_5AA1C0 @ +0x254
	.4byte gText_Rom_5AA1D5 @ +0x258
	.4byte gText_Rom_5AA1FB @ +0x25C
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AA205 @ +0x260
	.4byte gText_Rom_5AA219 @ +0x264
	.4byte gText_Rom_5AA22A @ +0x268
	.4byte gText_Rom_5AA23C @ +0x26C
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AA51A @ +0x270
	.4byte gText_Rom_5AA251 @ +0x274
	@ ANALYSIS: POINTER_TABLE entries=2 size=0x8
	.4byte 0x085AA547
	.4byte 0x085AA263
	.4byte gText_Rom_5AA27A @ +0x280
	@ ANALYSIS: POINTER_TABLE entries=2 size=0x8
	.4byte 0x085AA56E
	.4byte 0x085AA28F
	.4byte gText_Rom_5AA2AB @ +0x28C
	@ ANALYSIS: POINTER_TABLE entries=2 size=0x8
	.4byte 0x085AA301
	.4byte 0x085AA314
	.4byte gText_Rom_5AA323 @ +0x298
	.4byte gText_Rom_5AA334 @ +0x29C
	.4byte gText_Rom_5AA340 @ +0x2A0
	.4byte gText_Rom_5AA355 @ +0x2A4
	.4byte gText_Rom_5AA367 @ +0x2A8
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AA37A @ +0x2AC
	.4byte gText_Rom_5AA38F @ +0x2B0
	.4byte gText_Rom_5AA3A6 @ +0x2B4
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AA587 @ +0x2B8
	.4byte gText_Rom_5AA3BB @ +0x2BC
	.4byte gText_Rom_5AA3D6 @ +0x2C0
	.4byte gText_Rom_5AA3F4 @ +0x2C4
	@ ANALYSIS: POINTER_TABLE entries=3 size=0xC
	.4byte 0x085AA403
	.4byte 0x085AA41D
	.4byte 0x085AA434
	.4byte gText_Rom_5AA59C @ +0x2D4
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AA5B0 @ +0x2D8
	.4byte gText_Rom_5AA5C4 @ +0x2DC
	@ ANALYSIS: POINTER_TABLE entries=10 size=0x28
	.4byte 0x085AA5D4
	.4byte 0x085AA5EA
	.4byte 0x085AA611
	.4byte 0x085AA625
	.4byte 0x085AA634
	.4byte 0x085AA648
	.4byte 0x085AA65A
	.4byte 0x085AA66B
	.4byte 0x085AA684
	.4byte 0x085AA695
	.4byte gText_Rom_5AA6B0 @ +0x308
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AA6C6 @ +0x30C
	.4byte gText_Rom_5AA6D9 @ +0x310
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AA871 @ +0x314
	.4byte gText_Rom_5AA877 @ +0x318
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AA87D @ +0x31C
	.4byte gText_Rom_5AA883 @ +0x320
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AA889 @ +0x324
	.4byte gPokemonData_085AA894 @ +0x328
	@ ANALYSIS: POINTER_TABLE entries=2 size=0x8
	.4byte 0x085AA8AE
	.4byte 0x085AA8B9
	.4byte gText_Rom_5AA8EE @ +0x334
	.4byte gText_Rom_5AA8FB @ +0x338
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AA906 @ +0x33C
	.4byte gText_Rom_5AA92B @ +0x340
	.4byte gText_Rom_5AA954 @ +0x344
	.4byte gText_Rom_5AA964 @ +0x348
	.4byte gText_Rom_5AA970 @ +0x34C
	.4byte gText_Rom_5AA9B2 @ +0x350
	.4byte gText_Rom_5AAA58 @ +0x354
	.4byte gText_Rom_5AAA7D @ +0x358
	.4byte gText_Rom_5AAA8B @ +0x35C
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AAA9F @ +0x360
	.4byte gText_Rom_5AAAAC @ +0x364
	.4byte gText_Rom_5AAABD @ +0x368
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AAAD3 @ +0x36C
	.4byte gText_Rom_5AAAEA @ +0x370
	.4byte gText_Rom_5AAAF6 @ +0x374
	.4byte gText_Rom_5AAB01 @ +0x378
	.4byte gText_Rom_5AAB0E @ +0x37C
	.4byte gText_Rom_5AAB1D @ +0x380
	.4byte gText_Rom_5AAB28 @ +0x384
	.4byte gText_Rom_5AAB37 @ +0x388
	.4byte gText_Rom_5AAB44 @ +0x38C
	.4byte gText_Rom_5AAB52 @ +0x390
	.4byte gText_Rom_5AAB5F @ +0x394
	.4byte gText_Rom_5AAB68 @ +0x398
	.4byte gText_Rom_5AAB75 @ +0x39C
	.4byte gText_Rom_5AAB82 @ +0x3A0
	.4byte gText_Rom_5AAB90 @ +0x3A4
	@ ANALYSIS: POINTER_TABLE entries=3 size=0xC
	.4byte 0x085AAB9C
	.4byte 0x085AABAE
	.4byte 0x085AABC0
	.4byte gText_Rom_5AABCF @ +0x3B4
	.4byte gText_Rom_5AABE5 @ +0x3B8
	.4byte gText_Rom_5AABF6 @ +0x3BC
	.4byte gText_Rom_5AAC14 @ +0x3C0
	.4byte gText_Rom_5AAC29 @ +0x3C4
	.4byte gText_Rom_5AAC38 @ +0x3C8
	.4byte gText_Rom_5AAC53 @ +0x3CC
	.4byte gText_Rom_5AAC65 @ +0x3D0
	@ ANALYSIS: POINTER_TABLE entries=2 size=0x8
	.4byte 0x085AB0E4
	.4byte 0x085AB0F3
	.4byte gText_Rom_5AB115 @ +0x3DC
	.4byte gText_Rom_5AB128 @ +0x3E0
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AB13B @ +0x3E4
	.4byte gText_Rom_5AB153 @ +0x3E8
	.4byte gText_Rom_5AB166 @ +0x3EC
	.4byte gText_Rom_5AB17F @ +0x3F0
	.4byte gText_Rom_5AB192 @ +0x3F4
	.4byte gText_Rom_5AB1AA @ +0x3F8
	@ ANALYSIS: POINTER_TABLE entries=5 size=0x14
	.4byte 0x085AB1C2
	.4byte 0x085AB1DB
	.4byte 0x085AB1F6
	.4byte 0x085AB20F
	.4byte 0x085AB22F
	.4byte gText_Rom_5AB251 @ +0x410
	.4byte gText_Rom_5AB25B @ +0x414
	.4byte gText_Rom_5A980F @ +0x418
	.4byte gText_Rom_5AAC7C @ +0x41C
	.4byte gText_Rom_5AAC93 @ +0x420
	.4byte gText_Rom_5AACA3 @ +0x424
	.4byte gText_Rom_5AACB2 @ +0x428
	.4byte gText_Rom_5AACBE @ +0x42C
	.4byte gText_Rom_5AACCE @ +0x430
	.4byte gText_Rom_5AACDC @ +0x434
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AACE9 @ +0x438
	.4byte gText_Rom_5AAD38 @ +0x43C
	.4byte gText_Rom_5AAD47 @ +0x440
	.4byte gText_Rom_5AAD5A @ +0x444
	.4byte gText_Rom_5AAD71 @ +0x448
	.4byte gText_Rom_5AAD8B @ +0x44C
	.4byte gText_Rom_5AADA4 @ +0x450
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AADBA @ +0x454
	.4byte gText_Rom_5AADCD @ +0x458
	.4byte gText_Rom_5AB290 @ +0x45C
	.4byte gText_Rom_5AB2A2 @ +0x460
	.4byte gText_Rom_5AB2B4 @ +0x464
	.4byte gText_Rom_5AB2C7 @ +0x468
	.4byte gText_Rom_5AB2DF @ +0x46C
	.4byte gText_Rom_5AB2F2 @ +0x470
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AB306 @ +0x474
	.4byte gText_Rom_5AB336 @ +0x478
	@ ANALYSIS: POINTER_TABLE entries=2 size=0x8
	.4byte 0x085AB34D
	.4byte 0x085AB369
	.4byte gText_Rom_5AB382 @ +0x484
	.4byte gText_Rom_5AB393 @ +0x488
	.4byte gText_Rom_5AB3AD @ +0x48C
	.4byte gBattleMainData_085AB3BD @ +0x490
	@ ANALYSIS: POINTER_TABLE entries=7 size=0x1C
	.4byte 0x085AA6ED
	.4byte 0x085AA6FD
	.4byte 0x085AA721
	.4byte 0x085AA732
	.4byte 0x085AA75B
	.4byte 0x085AA76E
	.4byte 0x085AA785
	.4byte gText_Rom_5AA797 @ +0x4B0
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AA7AE @ +0x4B4
	.4byte gText_Rom_5AA7BC @ +0x4B8
	.4byte gText_Rom_5AA448 @ +0x4BC
	.4byte gText_Rom_5AA45A @ +0x4C0
	.4byte gText_Rom_5A9C5C @ +0x4C4
	.4byte gText_Rom_5A9C6F @ +0x4C8
	.4byte gText_Rom_5AA933 @ +0x4CC
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AA46C @ +0x4D0
	.4byte gBattleMessageData_085AAD22 @ +0x4D4
	.4byte gText_Rom_5AA47C @ +0x4D8
	@ ANALYSIS: POINTER_TABLE entries=3 size=0xC
	.4byte 0x085AA48E
	.4byte 0x085AA4A9
	.4byte 0x085AA89F
	.4byte gText_Rom_5AA4B5 @ +0x4E8
	@ ANALYSIS: POINTER_TABLE entries=4 size=0x10
	.4byte 0x085AA5FA
	.4byte 0x085A9CA0
	.4byte 0x085A963E
	.4byte 0x085A9641
	.4byte gText_Rom_5AA746 @ +0x4FC
	@ ANALYSIS: POINTER_TABLE entries=3 size=0xC
	.4byte 0x085A975F
	.4byte 0x085AB3BF
	.4byte 0x085AA7CC
	.4byte gText_Rom_5AA1E8 @ +0x50C
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AA4CC @ +0x510
	.4byte gText_Rom_5A9711 @ +0x514
	@ ANALYSIS: POINTER_TABLE entries=2 size=0x8
	.4byte 0x085AA980
	.4byte 0x085AA99C
	.4byte gText_Rom_5AA4EC @ +0x520
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AA7F9 @ +0x524
	.4byte gText_Rom_5AB31D @ +0x528
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AB103 @ +0x52C
	.4byte gText_Rom_5AB26A @ +0x530
	@ ANALYSIS: POINTER_TABLE entries=2 size=0x8
	.4byte 0x085A977A
	.4byte 0x085AA811
	.4byte gText_Rom_5AA826 @ +0x53C
	@ ANALYSIS: POINTER_TABLE entries=6 size=0x18
	.4byte 0x085A9922
	.4byte 0x085AA8D9
	.4byte 0x085AA70F
	.4byte 0x085A9D8E
	.4byte 0x085A9B65
	.4byte 0x085A9B34
	.4byte gText_Rom_5AA501 @ +0x558
	@ ANALYSIS: POINTER_TABLE entries=6 size=0x18
	.4byte 0x085AA835
	.4byte 0x085AA84B
	.4byte 0x085A9818
	.4byte 0x085AA2C1
	.4byte 0x085AA2D1
	.4byte 0x085AA2E1
	.4byte gText_Rom_5AA50B @ +0x574
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085AA85D @ +0x578
	.4byte gBattleMessageData_085ABE2F @ +0x57C
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085ABE4D @ +0x580
	.4byte gText_Rom_5ABE50 @ +0x584
	@ ANALYSIS: U32_TABLE size=0x4 entries=1
	.4byte 0x085ABE6C @ +0x588
	.4byte gText_Rom_5ABE7F @ +0x58C
	.4byte gText_Rom_5ABE93 @ +0x590
	.4byte gText_Rom_5ABEA5 @ +0x594
	.4byte gText_Rom_5ABFE2 @ +0x598
	.4byte gText_Rom_5ABFFA @ +0x59C
	@ ANALYSIS: POINTER_TABLE entries=3 size=0xC
	.4byte 0x085AC012
	.4byte 0x085AC070
	.4byte 0x085AC087
	.4byte gText_Rom_243E08 @ +0x5AC
	.4byte gText_Rom_243E2A @ +0x5B0
	.4byte gText_Rom_243E4C @ +0x5B4
	.4byte gText_Rom_243E80 @ +0x5B8
	@ ANALYSIS: POINTER_TABLE entries=2 size=0x8
	.4byte 0x085AC098
	.4byte 0x085AC09B
	@ pret/pokeemerald-jp direct xref for 0x085AB9A0: battle_script_commands.s: atk0F_resultmessage
	.globl gBattleScriptCommandsData_085AB9A0
gBattleScriptCommandsData_085AB9A0: @ 0x085AB9A0
	@ analyzed canonical ROM range 0x085AB9A0-0x085ABAED
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x14E entries=167
	.2byte 0x0017, 0x0018, 0x0159, 0x001A, 0x014C, 0x00E2, 0x00E3, 0x0021
	.2byte 0x0112, 0x0165, 0x00E8, 0x00E9, 0x00E5, 0x00ED, 0x00F0, 0x00F3
	.2byte 0x00EE, 0x00F4, 0x0066, 0x0067, 0x00EF, 0x00F5, 0x00EA, 0x00EB
	.2byte 0x00EC, 0x0065, 0x0098, 0x00E5, 0x00E5, 0x004E, 0x0160, 0x004D
	.2byte 0x0161, 0x004F, 0x0068, 0x0069, 0x001B, 0x006A, 0x0139, 0x0052
	.2byte 0x0053, 0x0070, 0x0071, 0x0073, 0x0074, 0x006C, 0x006E, 0x00F7
	.2byte 0x004C, 0x0075, 0x0076, 0x0077, 0x00D5, 0x00D6, 0x003D, 0x0130
	.2byte 0x0145, 0x0146, 0x00D7, 0x00D8, 0x003E, 0x0130, 0x0054, 0x0055
	.2byte 0x0056, 0x0057, 0x0058, 0x0059, 0x013D, 0x013E, 0x005A, 0x005C
	.2byte 0x005B, 0x005D, 0x005B, 0x0148, 0x0061, 0x00E5, 0x0063, 0x00E5
	.2byte 0x007D, 0x00E5, 0x007E, 0x00FB, 0x0028, 0x0029, 0x0037, 0x0038
	.2byte 0x0023, 0x0024, 0x002E, 0x002F, 0x0031, 0x0032, 0x0035, 0x0036
	.2byte 0x0017, 0x007C, 0x0045, 0x0136, 0x002D, 0x0139, 0x013B, 0x013C
	.2byte 0x00FD, 0x00FD, 0x00FD, 0x00FD, 0x0142, 0x00A1, 0x014F, 0x0107
	.2byte 0x0108, 0x0109, 0x010A, 0x0110, 0x0110, 0x0110, 0x0110, 0x0110
	.2byte 0x0110, 0x0110, 0x0110, 0x0111, 0x0110, 0x0110, 0x0110, 0x00F1
	.2byte 0x0110, 0x0110, 0x0110, 0x0116, 0x0117, 0x0118, 0x0119, 0x016D
	.2byte 0x011B, 0x011C, 0x011E, 0x011F, 0x0120, 0x0128, 0x0123, 0x0126
	.2byte 0x0125, 0x0124, 0x0127, 0x0129, 0x0156, 0x0131, 0x0163, 0x016A
	.2byte 0x00C7, 0x0163, 0x016A, 0x00C9, 0x0163, 0x016A, 0x0166, 0x0167
	.2byte 0x0168, 0x00CB, 0x0137, 0x0177, 0x0178, 0x0179, 0x017A
	@ pret/pokeemerald-jp direct xref for 0x085ABAEE: battle_script_commands.s: SetMoveEffect
	.globl gBattleScriptCommandsData_085ABAEE
gBattleScriptCommandsData_085ABAEE: @ 0x085ABAEE
	@ analyzed canonical ROM range 0x085ABAEE-0x085ABAFB
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xE entries=7
	.2byte 0x0014, 0x0023, 0x0053, 0x0080, 0x00FA, 0x0148, 0xFFFF

	@ src/battle_message.c:1453 gText_PkmnIsEvolving
	.globl gText_Rom_5ABAFC
gText_Rom_5ABAFC: @ 0x085ABAFC
	.string "……おや！？\n{STR_VAR_1}の　ようすが……！{EOS}"
	.if (. - gText_Rom_5ABAFC) > 0x13
	.error "gText_Rom_5ABAFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABAFC) < 0x13
	.space 0x13 - (. - gText_Rom_5ABAFC)
	.endif

	@ src/battle_message.c:1454 gText_CongratsPkmnEvolved
	.globl gText_Rom_5ABB0F
gText_Rom_5ABB0F: @ 0x085ABB0F
	.string "おめでとう！ {STR_VAR_1}は\n{STR_VAR_2}に しんかした！{WAIT_SE}\p{EOS}"
	.if (. - gText_Rom_5ABB0F) > 0x19
	.error "gText_Rom_5ABB0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABB0F) < 0x19
	.space 0x19 - (. - gText_Rom_5ABB0F)
	.endif
