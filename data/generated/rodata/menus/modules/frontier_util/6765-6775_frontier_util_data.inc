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
	.space 0x2, 0x00

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
	.space 0x3, 0x00

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
	.space 0x1, 0x00

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
	.space 0x3, 0x00
	.globl gUnknown_85DD53C
gUnknown_85DD53C: @ 0x085DD53C
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
	.globl gUnknown_85DD564
gUnknown_85DD564: @ 0x085DD564
	@ Replaced baserom.gba range: offset=0x5DD564, size=0x6
	.byte 0xA2, 0xFF, 0xA3, 0xFF, 0xA4, 0xFF
	.globl gUnknown_85DD56A
gUnknown_85DD56A: @ 0x085DD56A
	@ Replaced baserom.gba range: offset=0x5DD56A, size=0xE
	.byte 0x25, 0x03, 0x26, 0x03, 0x27, 0x03, 0x28, 0x03, 0x29, 0x03, 0x2A, 0x03, 0x2B, 0x03

	@ asm/frontier_util.s:6932 CopyFrontierBrainText
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_5DD578
gText_Rom_5DD578: @ 0x085DD578
	.string "ばヘらくヌヘらくモホらくぁホらくKヘらくちホらくZホらくっヘらくゲヘらくビホらくぱホらくiヘらくにホらく{0xF7}{0x6E}らくクヘらくブヘらく6ホらくケホらくÜヘらくひホらくたマらくソヘらく♂ヘらくMホらくヌホらくけホらくみホらくぉマらくリaスく…aスくデaスくRaスく　あああああああああああああ　あああ　あああああああああ　ああああああああああ　あああ　あ　　　　あ　あああ　あああああああああああああ　ああああ　　ああ　　　あ　ああああ　あああああ　ああ　　　ああ　あ　　　　　　　　　　　　　　　　　　あああああああああああああ　　　あ　あ　ああ　あ　ああ　　あ　　ああああ　ああ　　あああ　あ　ああ　　　ああ　あ　あ　あ　あ$"
	.if (. - gText_Rom_5DD578) != 0x137
	.error "gText_Rom_5DD578 must retain its original byte length"
	.endif
