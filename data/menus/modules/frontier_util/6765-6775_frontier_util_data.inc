	@ asm/frontier_util.s:5500 Print1PRecord
	.globl gText_Rom_5DD50C
gText_Rom_5DD50C: @ 0x085DD50C
	.string "{0xFD}{0x03}れんしょう{EOS}"
	.if (. - gText_Rom_5DD50C) > 0x8
	.error "gText_Rom_5DD50C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD50C) < 0x8
	.space 0x8 - (. - gText_Rom_5DD50C)
	.endif

	@ asm/frontier_util.s:5500 Print1PRecord (+1 aliases)
	.globl gText_Rom_5DD514
gText_Rom_5DD514: @ 0x085DD514
	.string "{0xFD}{0x03}れんぱ{EOS}"
	.if (. - gText_Rom_5DD514) > 0x6
	.error "gText_Rom_5DD514 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD514) < 0x6
	.space 0x6 - (. - gText_Rom_5DD514)
	.endif
	.space 0x2, 0x00

	@ asm/frontier_util.s:5500 Print1PRecord (+1 aliases)
	.globl gText_Rom_5DD51C
gText_Rom_5DD51C: @ 0x085DD51C
	.string "{0xFD}{0x03}へや　とっぱ{EOS}"
	.if (. - gText_Rom_5DD51C) > 0x9
	.error "gText_Rom_5DD51C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD51C) < 0x9
	.space 0x9 - (. - gText_Rom_5DD51C)
	.endif
	.space 0x3, 0x00

	@ asm/frontier_util.s:5500 Print1PRecord (+1 aliases)
	.globl gText_Rom_5DD528
gText_Rom_5DD528: @ 0x085DD528
	.string "{0xFD}{0x03}にんぬき{EOS}"
	.if (. - gText_Rom_5DD528) > 0x7
	.error "gText_Rom_5DD528 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD528) < 0x7
	.space 0x7 - (. - gText_Rom_5DD528)
	.endif
	.space 0x1, 0x00

	@ asm/frontier_util.s:5500 Print1PRecord (+1 aliases)
	.globl gText_Rom_5DD530
gText_Rom_5DD530: @ 0x085DD530
	.string "{0xFD}{0x03}だん　せいは{EOS}"
	.if (. - gText_Rom_5DD530) > 0x9
	.error "gText_Rom_5DD530 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD530) < 0x9
	.space 0x9 - (. - gText_Rom_5DD530)
	.endif
	.space 0x3, 0x00
	.globl gMenuPointerTable_Rom_5DD53C
gMenuPointerTable_Rom_5DD53C: @ 0x085DD53C
	.4byte gText_Rom_5DD50C
	.4byte gText_Rom_5DD50C
	.4byte gText_Rom_5DD50C
	.4byte gText_Rom_5DD514
	.4byte gText_Rom_5DD50C
	.4byte gText_Rom_5DD528
	.4byte gText_Rom_5DD50C
	.4byte gText_Rom_5DD51C
	.4byte gText_Rom_5DD530
	.4byte gText_Rom_5DD50C
	@ pret/pokeemerald-jp direct xref for 0x085DD564: frontier_util.s: FactoryPrintPrevOrCurrentStreak, Print1PRecord
	.globl gFrontierUtilData_085DD564
gFrontierUtilData_085DD564: @ 0x085DD564
	@ analyzed canonical ROM range 0x085DD564-0x085DD569
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x6 bytes=6
	.byte 0xA2, 0xFF, 0xA3, 0xFF, 0xA4, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085DD56A: frontier_util.s: CopyFrontierBrainTrainerName, PrintHyphens, sub_081A48F8
	.globl gFrontierUtilData_085DD56A
gFrontierUtilData_085DD56A: @ 0x085DD56A
	@ analyzed canonical ROM range 0x085DD56A-0x085DD577
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xE entries=7
	.2byte 0x0325, 0x0326, 0x0327, 0x0328, 0x0329, 0x032A, 0x032B
	.globl gText_Rom_5DD578
gText_Rom_5DD578: @ 0x085DD578
	.string "ばヘらくヌヘらくモホらくぁホらくKヘらくちホらくZホらくっヘらくゲヘらくビホらくぱホらくiヘらくにホらく{0xF7}{0x6E}らくクヘらくブヘらく6ホらくケホらくÜヘらくひホらくたマらくソヘらく♂ヘらくMホらくヌホらくけホらくみホらくぉマらくリaスく…aスくデaスくRaスく　あああああああああああああ　あああ　あああああああああ　ああああああああああ　あああ　あ　　　　あ　あああ　あああああああああああああ　ああああ　　ああ　　　あ　ああああ　あああああ　ああ　　　ああ　あ　　　　　　　　　　　　　　　　　　あああああああああああああ　　　あ　あ　ああ　あ　ああ　　あ　　ああああ　ああ　　あああ　あ　ああ　　　ああ　あ　あ　あ　あ{EOS}"
	.if (. - gText_Rom_5DD578) != 0x137
	.error "gText_Rom_5DD578 must retain its original byte length"
	.endif
