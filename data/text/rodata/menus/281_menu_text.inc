	@ src/data/script_menu.h:644 script_menu_line_644 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5DD4FC
gText_Rom_5DD4FC: @ 0x085DD4FC
	.string "オープンレベル$"
	.if (. - gText_Rom_5DD4FC) != 0x8
	.error "gText_Rom_5DD4FC must retain its original byte length"
	.endif
	.globl gText_Rom_5DD500
	.set gText_Rom_5DD500, gText_Rom_5DD4FC + 0x4
	.globl gUnknown_85DD504
gUnknown_85DD504: @ 0x085DD504
	.incbin "baserom.gba", 0x5dd504, 0x8

	@ asm/frontier_util.s:5500 Print1PRecord
	.globl gText_Rom_5DD50C
gText_Rom_5DD50C: @ 0x085DD50C
	.string "{0xFD}{0x03}れんしょう$"
	.if (. - gText_Rom_5DD50C) > 0x8
	.error "gText_Rom_5DD50C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD50C) < 0x8
	.space 0x8 - (. - gText_Rom_5DD50C)
	.endif

	@ asm/frontier_util.s:5500 Print1PRecord (+1 aliases)
	.globl gText_Rom_5DD514
gText_Rom_5DD514: @ 0x085DD514
	.string "{0xFD}{0x03}れんぱ$"
	.if (. - gText_Rom_5DD514) > 0x6
	.error "gText_Rom_5DD514 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD514) < 0x6
	.space 0x6 - (. - gText_Rom_5DD514)
	.endif
	.incbin "baserom.gba", 0x5dd51a, 0x2

	@ asm/frontier_util.s:5500 Print1PRecord (+1 aliases)
	.globl gText_Rom_5DD51C
gText_Rom_5DD51C: @ 0x085DD51C
	.string "{0xFD}{0x03}へや　とっぱ$"
	.if (. - gText_Rom_5DD51C) > 0x9
	.error "gText_Rom_5DD51C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD51C) < 0x9
	.space 0x9 - (. - gText_Rom_5DD51C)
	.endif
	.incbin "baserom.gba", 0x5dd525, 0x3

	@ asm/frontier_util.s:5500 Print1PRecord (+1 aliases)
	.globl gText_Rom_5DD528
gText_Rom_5DD528: @ 0x085DD528
	.string "{0xFD}{0x03}にんぬき$"
	.if (. - gText_Rom_5DD528) > 0x7
	.error "gText_Rom_5DD528 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD528) < 0x7
	.space 0x7 - (. - gText_Rom_5DD528)
	.endif
	.incbin "baserom.gba", 0x5dd52f, 0x1

	@ asm/frontier_util.s:5500 Print1PRecord (+1 aliases)
	.globl gText_Rom_5DD530
gText_Rom_5DD530: @ 0x085DD530
	.string "{0xFD}{0x03}だん　せいは$"
	.if (. - gText_Rom_5DD530) > 0x9
	.error "gText_Rom_5DD530 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD530) < 0x9
	.space 0x9 - (. - gText_Rom_5DD530)
	.endif
	.incbin "baserom.gba", 0x5dd539, 0x3
	.globl gUnknown_85DD53C
gUnknown_85DD53C: @ 0x085DD53C
	.incbin "baserom.gba", 0x5dd53c, 0x28
	.globl gUnknown_85DD564
gUnknown_85DD564: @ 0x085DD564
	.incbin "baserom.gba", 0x5dd564, 0x6
	.globl gUnknown_85DD56A
gUnknown_85DD56A: @ 0x085DD56A
	.incbin "baserom.gba", 0x5dd56a, 0xe

	@ asm/frontier_util.s:6932 CopyFrontierBrainText
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_5DD578
gText_Rom_5DD578: @ 0x085DD578
	.string "ばヘらくヌヘらくモホらくぁホらくKヘらくちホらくZホらくっヘらくゲヘらくビホらくぱホらくiヘらくにホらく{0xF7}{0x6E}らくクヘらくブヘらく6ホらくケホらくÜヘらくひホらくたマらくソヘらく♂ヘらくMホらくヌホらくけホらくみホらくぉマらくリaスく…aスくデaスくRaスく　あああああああああああああ　あああ　あああああああああ　ああああああああああ　あああ　あ　　　　あ　あああ　あああああああああああああ　ああああ　　ああ　　　あ　ああああ　あああああ　ああ　　　ああ　あ　　　　　　　　　　　　　　　　　　あああああああああああああ　　　あ　あ　ああ　あ　ああ　　あ　　ああああ　ああ　　あああ　あ　ああ　　　ああ　あ　あ　あ　あ$"
	.if (. - gText_Rom_5DD578) != 0x137
	.error "gText_Rom_5DD578 must retain its original byte length"
	.endif
	.globl gUnknown_85DD5E8
	.set gUnknown_85DD5E8, gText_Rom_5DD578 + 0x70
	.globl gUnknown_85DD5F0
	.set gUnknown_85DD5F0, gText_Rom_5DD578 + 0x78
	.globl gUnknown_85DD5F8
	.set gUnknown_85DD5F8, gText_Rom_5DD578 + 0x80
	.globl gText_Rom_5DD594
	.set gText_Rom_5DD594, gText_Rom_5DD578 + 0x1c
	.globl gText_Rom_5DD5B0
	.set gText_Rom_5DD5B0, gText_Rom_5DD578 + 0x38
	.globl gText_Rom_5DD5CC
	.set gText_Rom_5DD5CC, gText_Rom_5DD578 + 0x54
	.incbin "baserom.gba", 0x5dd6af, 0xe5
	.globl gUnknown_85DD794
gUnknown_85DD794: @ 0x085DD794
	.incbin "baserom.gba", 0x5dd794, 0x18
	.globl gUnknown_85DD7AC
gUnknown_85DD7AC: @ 0x085DD7AC
	.incbin "baserom.gba", 0x5dd7ac, 0x10
	.globl gUnknown_85DD7BC
gUnknown_85DD7BC: @ 0x085DD7BC
	.incbin "baserom.gba", 0x5dd7bc, 0x1c
	.globl gUnknown_85DD7D8
gUnknown_85DD7D8: @ 0x085DD7D8
	.incbin "baserom.gba", 0x5dd7d8, 0xc
	.globl gUnknown_85DD7E4
gUnknown_85DD7E4: @ 0x085DD7E4
	.incbin "baserom.gba", 0x5dd7e4, 0x14
	.globl gUnknown_85DD7F8
gUnknown_85DD7F8: @ 0x085DD7F8
	.incbin "baserom.gba", 0x5dd7f8, 0x144
	.globl gUnknown_85DD93C
gUnknown_85DD93C: @ 0x085DD93C
	.incbin "baserom.gba", 0x5dd93c, 0x1c
	.globl gUnknown_85DD958
gUnknown_85DD958: @ 0x085DD958
	.incbin "baserom.gba", 0x5dd958, 0x44
	.globl gUnknown_85DD99C
gUnknown_85DD99C: @ 0x085DD99C
	.incbin "baserom.gba", 0x5dd99c, 0x10
	.globl gUnknown_85DD9AC
gUnknown_85DD9AC: @ 0x085DD9AC
	.incbin "baserom.gba", 0x5dd9ac, 0x10
	.globl gUnknown_85DD9BC
gUnknown_85DD9BC: @ 0x085DD9BC
	.incbin "baserom.gba", 0x5dd9bc, 0x10

	.globl gUnknown_85DD9CC
gUnknown_85DD9CC: @ 0x085DD9CC
	.incbin "baserom.gba", 0x5dd9cc, 0x40

	.include "data/battle_frontier/battle_pike_wild_mons.inc"

	.globl gUnknown_85DDB4C
gUnknown_85DDB4C: @ 0x085DDB4C
	.incbin "baserom.gba", 0x5ddb4c, 0x8
	.globl gUnknown_85DDB54
gUnknown_85DDB54: @ 0x085DDB54
	.incbin "baserom.gba", 0x5ddb54, 0xc8
	.globl gUnknown_85DDC1C
gUnknown_85DDC1C: @ 0x085DDC1C
	.incbin "baserom.gba", 0x5ddc1c, 0x31

	@ src/data/abilities.h:214 abilities_line_214 (+1 aliases)
	.globl gText_Rom_5DDC4D
gText_Rom_5DDC4D: @ 0x085DDC4D
	.string "ほうし$"
	.if (. - gText_Rom_5DDC4D) > 0x4
	.error "gText_Rom_5DDC4D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DDC4D) < 0x4
	.space 0x4 - (. - gText_Rom_5DDC4D)
	.endif
	.incbin "baserom.gba", 0x5ddc51, 0x1c3
	.globl gUnknown_85DDE14
gUnknown_85DDE14: @ 0x085DDE14
	.incbin "baserom.gba", 0x5dde14, 0x1c
	.globl gUnknown_85DDE30
gUnknown_85DDE30: @ 0x085DDE30
	.incbin "baserom.gba", 0x5dde30, 0x74
	.globl gUnknown_85DDEA4
gUnknown_85DDEA4: @ 0x085DDEA4
	.incbin "baserom.gba", 0x5ddea4, 0x9
	.globl gUnknown_85DDEAD
gUnknown_85DDEAD: @ 0x085DDEAD
	.incbin "baserom.gba", 0x5ddead, 0x13
	.globl gUnknown_85DDEC0
gUnknown_85DDEC0: @ 0x085DDEC0
	.incbin "baserom.gba", 0x5ddec0, 0x8
	.globl gUnknown_85DDEC8
gUnknown_85DDEC8: @ 0x085DDEC8
	.incbin "baserom.gba", 0x5ddec8, 0x8
	.globl gUnknown_85DDED0
gUnknown_85DDED0: @ 0x085DDED0
	.incbin "baserom.gba", 0x5dded0, 0x4
	.globl gUnknown_85DDED4
gUnknown_85DDED4: @ 0x085DDED4
	.incbin "baserom.gba", 0x5dded4, 0x4
	.globl gUnknown_85DDED8
gUnknown_85DDED8: @ 0x085DDED8
	.incbin "baserom.gba", 0x5dded8, 0x4
	.globl gUnknown_85DDEDC
gUnknown_85DDEDC: @ 0x085DDEDC
	.incbin "baserom.gba", 0x5ddedc, 0x4
	.globl gUnknown_85DDEE0
gUnknown_85DDEE0: @ 0x085DDEE0
	.incbin "baserom.gba", 0x5ddee0, 0x2
	.globl gUnknown_85DDEE2
gUnknown_85DDEE2: @ 0x085DDEE2
	.incbin "baserom.gba", 0x5ddee2, 0x2
	.globl gUnknown_85DDEE4
gUnknown_85DDEE4: @ 0x085DDEE4
	.incbin "baserom.gba", 0x5ddee4, 0x2

	.incbin "baserom.gba", 0x5ddee6, 0x2

	.include "data/battle_frontier/battle_pyramid_level_50_wild_mons.inc"

	.include "data/battle_frontier/battle_pyramid_open_level_wild_mons.inc"

	.globl gUnknown_85DEE88
gUnknown_85DEE88: @ 0x085DEE88
	.incbin "baserom.gba", 0x5dee88, 0x5
	.globl gUnknown_85DEE8D
gUnknown_85DEE8D: @ 0x085DEE8D
	.incbin "baserom.gba", 0x5dee8d, 0xfb
	.globl gUnknown_85DEF88
gUnknown_85DEF88: @ 0x085DEF88
	.incbin "baserom.gba", 0x5def88, 0x44
	.globl gUnknown_85DEFCC
gUnknown_85DEFCC: @ 0x085DEFCC
	.incbin "baserom.gba", 0x5defcc, 0x8
	.globl gUnknown_85DEFD4
gUnknown_85DEFD4: @ 0x085DEFD4
	.incbin "baserom.gba", 0x5defd4, 0x190
	.globl gUnknown_85DF164
gUnknown_85DF164: @ 0x085DF164
	.incbin "baserom.gba", 0x5df164, 0x190
	.globl gUnknown_85DF2F4
gUnknown_85DF2F4: @ 0x085DF2F4
	.incbin "baserom.gba", 0x5df2f4, 0x7e
	.globl gUnknown_85DF372
gUnknown_85DF372: @ 0x085DF372
	.incbin "baserom.gba", 0x5df372, 0xa
	.globl gUnknown_85DF37C
gUnknown_85DF37C: @ 0x085DF37C
	.incbin "baserom.gba", 0x5df37c, 0xd8
	.globl gUnknown_85DF454
gUnknown_85DF454: @ 0x085DF454
	.incbin "baserom.gba", 0x5df454, 0x2a4
	.globl gUnknown_85DF6F8
gUnknown_85DF6F8: @ 0x085DF6F8
	.incbin "baserom.gba", 0x5df6f8, 0x18
	.globl gUnknown_85DF710
gUnknown_85DF710: @ 0x085DF710
	.incbin "baserom.gba", 0x5df710, 0x8
	.globl gUnknown_85DF718
gUnknown_85DF718: @ 0x085DF718
	.incbin "baserom.gba", 0x5df718, 0x48
	.globl gUnknown_85DF760
gUnknown_85DF760: @ 0x085DF760
	.incbin "baserom.gba", 0x5df760, 0xc
	.globl gUnknown_85DF76C
gUnknown_85DF76C: @ 0x085DF76C
	.incbin "baserom.gba", 0x5df76c, 0x12
	.globl gUnknown_85DF77E
gUnknown_85DF77E: @ 0x085DF77E
	.incbin "baserom.gba", 0x5df77e, 0x40
	.globl gUnknown_85DF7BE
gUnknown_85DF7BE: @ 0x085DF7BE
	.incbin "baserom.gba", 0x5df7be, 0xa
	.globl gUnknown_85DF7C8
gUnknown_85DF7C8: @ 0x085DF7C8
	.incbin "baserom.gba", 0x5df7c8, 0xc
	.globl gUnknown_85DF7D4
gUnknown_85DF7D4: @ 0x085DF7D4
	.incbin "baserom.gba", 0x5df7d4, 0x18
	.globl gUnknown_85DF7EC
gUnknown_85DF7EC: @ 0x085DF7EC
	.incbin "baserom.gba", 0x5df7ec, 0x78
	.globl gUnknown_85DF864
gUnknown_85DF864: @ 0x085DF864
	.incbin "baserom.gba", 0x5df864, 0x4
	.globl gUnknown_85DF868
gUnknown_85DF868: @ 0x085DF868
	.incbin "baserom.gba", 0x5df868, 0x4
	.globl gUnknown_85DF86C
gUnknown_85DF86C: @ 0x085DF86C
	.incbin "baserom.gba", 0x5df86c, 0x4
	.globl gUnknown_85DF870
gUnknown_85DF870: @ 0x085DF870
	.incbin "baserom.gba", 0x5df870, 0x4
	.globl gUnknown_85DF874
gUnknown_85DF874: @ 0x085DF874
	.incbin "baserom.gba", 0x5df874, 0x6
	.globl gUnknown_85DF87A
gUnknown_85DF87A: @ 0x085DF87A
	.incbin "baserom.gba", 0x5df87a, 0x2
	.globl gUnknown_85DF87C
gUnknown_85DF87C: @ 0x085DF87C
	.incbin "baserom.gba", 0x5df87c, 0x2
	.globl gUnknown_85DF87E
gUnknown_85DF87E: @ 0x085DF87E
	.incbin "baserom.gba", 0x5df87e, 0x1
	.globl gUnknown_85DF87F
gUnknown_85DF87F: @ 0x085DF87F
	.incbin "baserom.gba", 0x5df87f, 0x4
	.globl gUnknown_85DF883
gUnknown_85DF883: @ 0x085DF883
	.incbin "baserom.gba", 0x5df883, 0x2
	.globl gUnknown_85DF885
gUnknown_85DF885: @ 0x085DF885
	.incbin "baserom.gba", 0x5df885, 0x2
	.globl gUnknown_85DF887
gUnknown_85DF887: @ 0x085DF887
	.incbin "baserom.gba", 0x5df887, 0x5
	.globl gUnknown_85DF88C
gUnknown_85DF88C: @ 0x085DF88C
	.incbin "baserom.gba", 0x5df88c, 0x30
	.globl gUnknown_85DF8BC
gUnknown_85DF8BC: @ 0x085DF8BC
	.incbin "baserom.gba", 0x5df8bc, 0x8
	.globl gUnknown_85DF8C4
gUnknown_85DF8C4: @ 0x085DF8C4
	.incbin "baserom.gba", 0x5df8c4, 0x8
	.globl gUnknown_85DF8CC
gUnknown_85DF8CC: @ 0x085DF8CC
	.incbin "baserom.gba", 0x5df8cc, 0x10
	.globl gUnknown_85DF8DC
gUnknown_85DF8DC: @ 0x085DF8DC
	.incbin "baserom.gba", 0x5df8dc, 0xc0
	.globl gUnknown_85DF99C
gUnknown_85DF99C: @ 0x085DF99C
	.incbin "baserom.gba", 0x5df99c, 0x80
	.globl gUnknown_85DFA1C
gUnknown_85DFA1C: @ 0x085DFA1C
	.incbin "baserom.gba", 0x5dfa1c, 0x10
	.globl gUnknown_85DFA2C
gUnknown_85DFA2C: @ 0x085DFA2C
	.incbin "baserom.gba", 0x5dfa2c, 0x38
	.globl gUnknown_85DFA64
gUnknown_85DFA64: @ 0x085DFA64
	.incbin "baserom.gba", 0x5dfa64, 0x50
	.globl gUnknown_85DFAB4
gUnknown_85DFAB4: @ 0x085DFAB4
	.incbin "baserom.gba", 0x5dfab4, 0x48
	.globl gUnknown_85DFAFC
gUnknown_85DFAFC: @ 0x085DFAFC
	.incbin "baserom.gba", 0x5dfafc, 0x18
	.globl gUnknown_85DFB14
gUnknown_85DFB14: @ 0x085DFB14
	.incbin "baserom.gba", 0x5dfb14, 0x4
	.globl gUnknown_85DFB18
gUnknown_85DFB18: @ 0x085DFB18
	.incbin "baserom.gba", 0x5dfb18, 0x4
	.globl gUnknown_85DFB1C
gUnknown_85DFB1C: @ 0x085DFB1C
	.incbin "baserom.gba", 0x5dfb1c, 0x4
	.globl gUnknown_85DFB20
gUnknown_85DFB20: @ 0x085DFB20
	.incbin "baserom.gba", 0x5dfb20, 0x4
	.globl gUnknown_85DFB24
gUnknown_85DFB24: @ 0x085DFB24
	.incbin "baserom.gba", 0x5dfb24, 0x4
	.globl gUnknown_85DFB28
gUnknown_85DFB28: @ 0x085DFB28
	.incbin "baserom.gba", 0x5dfb28, 0x4
	.globl gUnknown_85DFB2C
gUnknown_85DFB2C: @ 0x085DFB2C
	.incbin "baserom.gba", 0x5dfb2c, 0x4
	.globl gUnknown_85DFB30
gUnknown_85DFB30: @ 0x085DFB30
	.incbin "baserom.gba", 0x5dfb30, 0x18
	.globl gUnknown_85DFB48
gUnknown_85DFB48: @ 0x085DFB48
	.incbin "baserom.gba", 0x5dfb48, 0x18
	.globl gUnknown_85DFB60
gUnknown_85DFB60: @ 0x085DFB60
	.incbin "baserom.gba", 0x5dfb60, 0x20
	.globl gUnknown_85DFB80
gUnknown_85DFB80: @ 0x085DFB80
	.incbin "baserom.gba", 0x5dfb80, 0x70
	.globl gUnknown_85DFBF0
gUnknown_85DFBF0: @ 0x085DFBF0
	.incbin "baserom.gba", 0x5dfbf0, 0x40
	.globl gUnknown_85DFC30
gUnknown_85DFC30: @ 0x085DFC30
	.incbin "baserom.gba", 0x5dfc30, 0x44
	.globl gUnknown_85DFC74
gUnknown_85DFC74: @ 0x085DFC74
	.incbin "baserom.gba", 0x5dfc74, 0x4e
	.globl gUnknown_85DFCC2
gUnknown_85DFCC2: @ 0x085DFCC2
	.incbin "baserom.gba", 0x5dfcc2, 0x4
	.globl gUnknown_85DFCC6
gUnknown_85DFCC6: @ 0x085DFCC6
	.incbin "baserom.gba", 0x5dfcc6, 0x2
	.globl gUnknown_85DFCC8
gUnknown_85DFCC8: @ 0x085DFCC8
	.incbin "baserom.gba", 0x5dfcc8, 0xbe4
	.globl gUnknown_85E08AC
gUnknown_85E08AC: @ 0x085E08AC
	.incbin "baserom.gba", 0x5e08ac, 0x18

	.include "data/pokemon/tutor_learnsets.inc"

	.globl gUnknown_85E0F70
gUnknown_85E0F70: @ 0x085E0F70
	.incbin "baserom.gba", 0x5e0f70, 0x2c
	.globl gUnknown_85E0F9C
gUnknown_85E0F9C: @ 0x085E0F9C
	.incbin "baserom.gba", 0x5e0f9c, 0x20
	.globl gUnknown_85E0FBC
gUnknown_85E0FBC: @ 0x085E0FBC
	.incbin "baserom.gba", 0x5e0fbc, 0xc0
	.globl gUnknown_85E107C
gUnknown_85E107C: @ 0x085E107C
	.incbin "baserom.gba", 0x5e107c, 0x1c
	.globl gUnknown_85E1098
gUnknown_85E1098: @ 0x085E1098
	.incbin "baserom.gba", 0x5e1098, 0x1c
	.globl gUnknown_85E10B4
gUnknown_85E10B4: @ 0x085E10B4
	.incbin "baserom.gba", 0x5e10b4, 0x14
	.globl gUnknown_85E10C8
gUnknown_85E10C8: @ 0x085E10C8
	.incbin "baserom.gba", 0x5e10c8, 0x40
	.globl gUnknown_85E1108
gUnknown_85E1108: @ 0x085E1108
	.incbin "baserom.gba", 0x5e1108, 0x40
	.globl gUnknown_85E1148
gUnknown_85E1148: @ 0x085E1148
	.incbin "baserom.gba", 0x5e1148, 0x40
	.globl gUnknown_85E1188
gUnknown_85E1188: @ 0x085E1188
	.incbin "baserom.gba", 0x5e1188, 0x38
	.globl gUnknown_85E11C0
gUnknown_85E11C0: @ 0x085E11C0
	.incbin "baserom.gba", 0x5e11c0, 0x8
	.globl gUnknown_85E11C8
gUnknown_85E11C8: @ 0x085E11C8
	.incbin "baserom.gba", 0x5e11c8, 0x8
	.globl gUnknown_85E11D0
gUnknown_85E11D0: @ 0x085E11D0
	.incbin "baserom.gba", 0x5e11d0, 0x8
	.globl gUnknown_85E11D8
gUnknown_85E11D8: @ 0x085E11D8
	.incbin "baserom.gba", 0x5e11d8, 0x8
	.globl gUnknown_85E11E0
gUnknown_85E11E0: @ 0x085E11E0
	.incbin "baserom.gba", 0x5e11e0, 0x8
	.globl gUnknown_85E11E8
gUnknown_85E11E8: @ 0x085E11E8
	.incbin "baserom.gba", 0x5e11e8, 0x8
	.globl gUnknown_85E11F0
gUnknown_85E11F0: @ 0x085E11F0
	.incbin "baserom.gba", 0x5e11f0, 0x8
	.globl gUnknown_85E11F8
gUnknown_85E11F8: @ 0x085E11F8
	.incbin "baserom.gba", 0x5e11f8, 0x8
	.globl gUnknown_85E1200
gUnknown_85E1200: @ 0x085E1200
	.incbin "baserom.gba", 0x5e1200, 0x8
	.globl gUnknown_85E1208
gUnknown_85E1208: @ 0x085E1208
	.incbin "baserom.gba", 0x5e1208, 0x8
	.globl gUnknown_85E1210
gUnknown_85E1210: @ 0x085E1210
	.incbin "baserom.gba", 0x5e1210, 0x8
	.globl gUnknown_85E1218
gUnknown_85E1218: @ 0x085E1218
	.incbin "baserom.gba", 0x5e1218, 0x8
	.globl gUnknown_85E1220
gUnknown_85E1220: @ 0x085E1220
	.incbin "baserom.gba", 0x5e1220, 0x8
	.globl gUnknown_85E1228
gUnknown_85E1228: @ 0x085E1228
	.incbin "baserom.gba", 0x5e1228, 0x18
	.globl gUnknown_85E1240
gUnknown_85E1240: @ 0x085E1240
	.incbin "baserom.gba", 0x5e1240, 0x46
	.globl gUnknown_85E1286
gUnknown_85E1286: @ 0x085E1286
	.incbin "baserom.gba", 0x5e1286, 0x46
	.globl gUnknown_85E12CC
gUnknown_85E12CC: @ 0x085E12CC
	.incbin "baserom.gba", 0x5e12cc, 0x36
	.globl gUnknown_85E1302
gUnknown_85E1302: @ 0x085E1302
	.incbin "baserom.gba", 0x5e1302, 0x36
	.globl gUnknown_85E1338
gUnknown_85E1338: @ 0x085E1338
	.incbin "baserom.gba", 0x5e1338, 0x36
	.globl gUnknown_85E136E
gUnknown_85E136E: @ 0x085E136E
	.incbin "baserom.gba", 0x5e136e, 0x2
	.globl gUnknown_85E1370
gUnknown_85E1370: @ 0x085E1370
	.incbin "baserom.gba", 0x5e1370, 0x2
	.globl gUnknown_85E1372
gUnknown_85E1372: @ 0x085E1372
	.incbin "baserom.gba", 0x5e1372, 0x3
	.globl gUnknown_85E1375
gUnknown_85E1375: @ 0x085E1375
	.incbin "baserom.gba", 0x5e1375, 0x3
	.globl gUnknown_85E1378
gUnknown_85E1378: @ 0x085E1378
	.incbin "baserom.gba", 0x5e1378, 0x3
	.globl gUnknown_85E137B
gUnknown_85E137B: @ 0x085E137B
	.incbin "baserom.gba", 0x5e137b, 0x2
	.globl gUnknown_85E137D
gUnknown_85E137D: @ 0x085E137D
	.incbin "baserom.gba", 0x5e137d, 0x2
	.globl gUnknown_85E137F
gUnknown_85E137F: @ 0x085E137F
	.incbin "baserom.gba", 0x5e137f, 0x2
	.globl gUnknown_85E1381
gUnknown_85E1381: @ 0x085E1381
	.incbin "baserom.gba", 0x5e1381, 0x2
	.globl gUnknown_85E1383
gUnknown_85E1383: @ 0x085E1383
	.incbin "baserom.gba", 0x5e1383, 0x2
	.globl gUnknown_85E1385
gUnknown_85E1385: @ 0x085E1385
	.incbin "baserom.gba", 0x5e1385, 0x3
	.globl gUnknown_85E1388
gUnknown_85E1388: @ 0x085E1388
	.incbin "baserom.gba", 0x5e1388, 0x3
	.globl gUnknown_85E138B
gUnknown_85E138B: @ 0x085E138B
	.incbin "baserom.gba", 0x5e138b, 0x3
	.globl gUnknown_85E138E
gUnknown_85E138E: @ 0x085E138E
	.incbin "baserom.gba", 0x5e138e, 0x3
	.globl gUnknown_85E1391
gUnknown_85E1391: @ 0x085E1391
	.incbin "baserom.gba", 0x5e1391, 0x3
	.globl gUnknown_85E1394
gUnknown_85E1394: @ 0x085E1394
	.incbin "baserom.gba", 0x5e1394, 0x3
	.globl gUnknown_85E1397
gUnknown_85E1397: @ 0x085E1397
	.incbin "baserom.gba", 0x5e1397, 0x3
	.globl gUnknown_85E139A
gUnknown_85E139A: @ 0x085E139A
	.incbin "baserom.gba", 0x5e139a, 0x3
	.globl gUnknown_85E139D
gUnknown_85E139D: @ 0x085E139D
	.incbin "baserom.gba", 0x5e139d, 0x3
	.globl gUnknown_85E13A0
gUnknown_85E13A0: @ 0x085E13A0
	.incbin "baserom.gba", 0x5e13a0, 0x3
	.globl gUnknown_85E13A3
gUnknown_85E13A3: @ 0x085E13A3
	.incbin "baserom.gba", 0x5e13a3, 0x3
	.globl gUnknown_85E13A6
gUnknown_85E13A6: @ 0x085E13A6
	.incbin "baserom.gba", 0x5e13a6, 0x3
	.globl gUnknown_85E13A9
gUnknown_85E13A9: @ 0x085E13A9
	.incbin "baserom.gba", 0x5e13a9, 0x3
	.globl gUnknown_85E13AC
gUnknown_85E13AC: @ 0x085E13AC
	.incbin "baserom.gba", 0x5e13ac, 0x6c
	.globl gUnknown_85E1418
gUnknown_85E1418: @ 0x085E1418
	.incbin "baserom.gba", 0x5e1418, 0xa8
	.globl gUnknown_85E14C0
gUnknown_85E14C0: @ 0x085E14C0
	.incbin "baserom.gba", 0x5e14c0, 0x130
	.globl gUnknown_85E15F0
gUnknown_85E15F0: @ 0x085E15F0
	.incbin "baserom.gba", 0x5e15f0, 0x38
	.globl gUnknown_85E1628
gUnknown_85E1628: @ 0x085E1628
	.incbin "baserom.gba", 0x5e1628, 0xe
	.globl gUnknown_85E1636
gUnknown_85E1636: @ 0x085E1636
	.incbin "baserom.gba", 0x5e1636, 0x1e
	.globl gUnknown_85E1654
gUnknown_85E1654: @ 0x085E1654
	.incbin "baserom.gba", 0x5e1654, 0x70
	.globl gUnknown_85E16C4
gUnknown_85E16C4: @ 0x085E16C4
	.incbin "baserom.gba", 0x5e16c4, 0xa4
	.globl gUnknown_85E1768
gUnknown_85E1768: @ 0x085E1768
	.incbin "baserom.gba", 0x5e1768, 0x8
	.globl gUnknown_85E1770
gUnknown_85E1770: @ 0x085E1770
	.incbin "baserom.gba", 0x5e1770, 0x8
	.globl gUnknown_85E1778
gUnknown_85E1778: @ 0x085E1778
	.incbin "baserom.gba", 0x5e1778, 0x38
	.globl gUnknown_85E17B0
gUnknown_85E17B0: @ 0x085E17B0
	.incbin "baserom.gba", 0x5e17b0, 0x8
	.globl gUnknown_85E17B8
gUnknown_85E17B8: @ 0x085E17B8
	.incbin "baserom.gba", 0x5e17b8, 0x8
	.globl gUnknown_85E17C0
gUnknown_85E17C0: @ 0x085E17C0
	.incbin "baserom.gba", 0x5e17c0, 0x68
	.globl gUnknown_85E1828
gUnknown_85E1828: @ 0x085E1828
	.incbin "baserom.gba", 0x5e1828, 0x8
	.globl gUnknown_85E1830
gUnknown_85E1830: @ 0x085E1830
	.incbin "baserom.gba", 0x5e1830, 0x80
	.globl gUnknown_85E18B0
gUnknown_85E18B0: @ 0x085E18B0
	.incbin "baserom.gba", 0x5e18b0, 0x8
	.globl gUnknown_85E18B8
gUnknown_85E18B8: @ 0x085E18B8
	.incbin "baserom.gba", 0x5e18b8, 0x8
	.globl gUnknown_85E18C0
gUnknown_85E18C0: @ 0x085E18C0
	.incbin "baserom.gba", 0x5e18c0, 0x18
	.globl gUnknown_85E18D8
gUnknown_85E18D8: @ 0x085E18D8
	.incbin "baserom.gba", 0x5e18d8, 0x20
	.globl gUnknown_85E18F8
gUnknown_85E18F8: @ 0x085E18F8
	.incbin "baserom.gba", 0x5e18f8, 0x74
	.globl gUnknown_85E196C
gUnknown_85E196C: @ 0x085E196C
	.incbin "baserom.gba", 0x5e196c, 0x20
	.globl gUnknown_85E198C
gUnknown_85E198C: @ 0x085E198C
	.incbin "baserom.gba", 0x5e198c, 0x4
	.globl gUnknown_85E1990
gUnknown_85E1990: @ 0x085E1990
	.incbin "baserom.gba", 0x5e1990, 0x1c
	.globl gUnknown_85E19AC
gUnknown_85E19AC: @ 0x085E19AC
	.incbin "baserom.gba", 0x5e19ac, 0x4
	.globl gUnknown_85E19B0
gUnknown_85E19B0: @ 0x085E19B0
	.incbin "baserom.gba", 0x5e19b0, 0x28
	.globl gUnknown_85E19D8
gUnknown_85E19D8: @ 0x085E19D8
	.incbin "baserom.gba", 0x5e19d8, 0x4
	.globl gUnknown_85E19DC
gUnknown_85E19DC: @ 0x085E19DC
	.incbin "baserom.gba", 0x5e19dc, 0x4
	.globl gUnknown_85E19E0
gUnknown_85E19E0: @ 0x085E19E0
	.incbin "baserom.gba", 0x5e19e0, 0x5904
	.globl gUnknown_85E72E4
gUnknown_85E72E4: @ 0x085E72E4
	.incbin "baserom.gba", 0x5e72e4, 0x48
	.globl gUnknown_85E732C
gUnknown_85E732C: @ 0x085E732C
	.incbin "baserom.gba", 0x5e732c, 0x104
	.globl gUnknown_85E7430
gUnknown_85E7430: @ 0x085E7430
	.incbin "baserom.gba", 0x5e7430, 0x920
	.globl gUnknown_85E7D50
gUnknown_85E7D50: @ 0x085E7D50
	.incbin "baserom.gba", 0x5e7d50, 0xb0
	.globl gUnknown_85E7E00
gUnknown_85E7E00: @ 0x085E7E00
	.incbin "baserom.gba", 0x5e7e00, 0x120
	.globl gUnknown_85E7F20
gUnknown_85E7F20: @ 0x085E7F20
	.incbin "baserom.gba", 0x5e7f20, 0x30
	.globl gUnknown_85E7F50
gUnknown_85E7F50: @ 0x085E7F50
	.incbin "baserom.gba", 0x5e7f50, 0x10
	.globl gUnknown_85E7F60
gUnknown_85E7F60: @ 0x085E7F60
	.incbin "baserom.gba", 0x5e7f60, 0x5c
	.globl gUnknown_85E7FBC
gUnknown_85E7FBC: @ 0x085E7FBC
	.incbin "baserom.gba", 0x5e7fbc, 0x18
	.globl gUnknown_85E7FD4
gUnknown_85E7FD4: @ 0x085E7FD4
	.incbin "baserom.gba", 0x5e7fd4, 0x1c
	.globl gUnknown_85E7FF0
gUnknown_85E7FF0: @ 0x085E7FF0
	.incbin "baserom.gba", 0x5e7ff0, 0xc
	.globl gUnknown_85E7FFC
gUnknown_85E7FFC: @ 0x085E7FFC
	.incbin "baserom.gba", 0x5e7ffc, 0x20
	.globl gUnknown_85E801C
gUnknown_85E801C: @ 0x085E801C
	.incbin "baserom.gba", 0x5e801c, 0x2f

