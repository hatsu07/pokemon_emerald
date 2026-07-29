	@ src/pokemon_storage_system.c:8078 pokemon_storage_system_line_8078 (+5 aliases)
	.globl gText_Rom_2FC0FA
gText_Rom_2FC0FA: @ 0x082FC0FA
	.string "やめる$"
	.if (. - gText_Rom_2FC0FA) > 0x4
	.error "gText_Rom_2FC0FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2FC0FA) < 0x4
	.space 0x4 - (. - gText_Rom_2FC0FA)
	.endif
	.globl gUnknown_82FC0FE
gUnknown_82FC0FE: @ 0x082FC0FE
	.incbin "baserom.gba", 0x2fc0fe, 0x8de
	.globl gUnknown_82FC9DC
gUnknown_82FC9DC: @ 0x082FC9DC
	.incbin "baserom.gba", 0x2fc9dc, 0x8
	.globl gUnknown_82FC9E4
gUnknown_82FC9E4: @ 0x082FC9E4
	.incbin "baserom.gba", 0x2fc9e4, 0x8
	.globl gUnknown_82FC9EC
gUnknown_82FC9EC: @ 0x082FC9EC
	.incbin "baserom.gba", 0x2fc9ec, 0x8
	.globl gUnknown_82FC9F4
gUnknown_82FC9F4: @ 0x082FC9F4
	.incbin "baserom.gba", 0x2fc9f4, 0x50
	.globl gUnknown_82FCA44
gUnknown_82FCA44: @ 0x082FCA44
	.incbin "baserom.gba", 0x2fca44, 0x18
	.globl gUnknown_82FCA5C
gUnknown_82FCA5C: @ 0x082FCA5C
	.incbin "baserom.gba", 0x2fca5c, 0x8
	.globl gUnknown_82FCA64
gUnknown_82FCA64: @ 0x082FCA64
	.incbin "baserom.gba", 0x2fca64, 0x10
	.globl gUnknown_82FCA74
gUnknown_82FCA74: @ 0x082FCA74
	.incbin "baserom.gba", 0x2fca74, 0x8
	.globl gUnknown_82FCA7C
gUnknown_82FCA7C: @ 0x082FCA7C
	.incbin "baserom.gba", 0x2fca7c, 0x4c
	.globl gUnknown_82FCAC8
gUnknown_82FCAC8: @ 0x082FCAC8
	.incbin "baserom.gba", 0x2fcac8, 0x8
	.globl gUnknown_82FCAD0
gUnknown_82FCAD0: @ 0x082FCAD0
	.incbin "baserom.gba", 0x2fcad0, 0x8
	.globl gUnknown_82FCAD8
gUnknown_82FCAD8: @ 0x082FCAD8
	.incbin "baserom.gba", 0x2fcad8, 0x8
	.globl gUnknown_82FCAE0
gUnknown_82FCAE0: @ 0x082FCAE0
	.incbin "baserom.gba", 0x2fcae0, 0x8
	.globl gUnknown_82FCAE8
gUnknown_82FCAE8: @ 0x082FCAE8
	.incbin "baserom.gba", 0x2fcae8, 0x8
	.globl gUnknown_82FCAF0
gUnknown_82FCAF0: @ 0x082FCAF0
	.incbin "baserom.gba", 0x2fcaf0, 0x8
	.globl gUnknown_82FCAF8
gUnknown_82FCAF8: @ 0x082FCAF8
	.incbin "baserom.gba", 0x2fcaf8, 0x8
	.globl gUnknown_82FCB00
gUnknown_82FCB00: @ 0x082FCB00
	.incbin "baserom.gba", 0x2fcb00, 0x20
	.globl gUnknown_82FCB20
gUnknown_82FCB20: @ 0x082FCB20
	.incbin "baserom.gba", 0x2fcb20, 0x18
	.globl gUnknown_82FCB38
gUnknown_82FCB38: @ 0x082FCB38
	.incbin "baserom.gba", 0x2fcb38, 0x30
	.globl gUnknown_82FCB68
gUnknown_82FCB68: @ 0x082FCB68
	.incbin "baserom.gba", 0x2fcb68, 0x30
	.globl gUnknown_82FCB98
gUnknown_82FCB98: @ 0x082FCB98
	.incbin "baserom.gba", 0x2fcb98, 0x20
	.globl gUnknown_82FCBB8
gUnknown_82FCBB8: @ 0x082FCBB8
	.incbin "baserom.gba", 0x2fcbb8, 0xcc
	.globl gUnknown_82FCC84
gUnknown_82FCC84: @ 0x082FCC84
	.incbin "baserom.gba", 0x2fcc84, 0x38
	.globl gUnknown_82FCCBC
gUnknown_82FCCBC: @ 0x082FCCBC
	.incbin "baserom.gba", 0x2fccbc, 0x8
	.globl gUnknown_82FCCC4
gUnknown_82FCCC4: @ 0x082FCCC4
	.incbin "baserom.gba", 0x2fccc4, 0x68
	.globl gUnknown_82FCD2C
gUnknown_82FCD2C: @ 0x082FCD2C
	.incbin "baserom.gba", 0x2fcd2c, 0x8
	.globl gUnknown_82FCD34
gUnknown_82FCD34: @ 0x082FCD34
	.incbin "baserom.gba", 0x2fcd34, 0x8
	.globl gUnknown_82FCD3C
gUnknown_82FCD3C: @ 0x082FCD3C
	.incbin "baserom.gba", 0x2fcd3c, 0x8
	.globl gUnknown_82FCD44
gUnknown_82FCD44: @ 0x082FCD44
	.incbin "baserom.gba", 0x2fcd44, 0x18
	.globl gUnknown_82FCD5C
gUnknown_82FCD5C: @ 0x082FCD5C
	.incbin "baserom.gba", 0x2fcd5c, 0x30
	.globl gUnknown_82FCD8C
gUnknown_82FCD8C: @ 0x082FCD8C
	.incbin "baserom.gba", 0x2fcd8c, 0x30
	.globl gUnknown_82FCDBC
gUnknown_82FCDBC: @ 0x082FCDBC
	.incbin "baserom.gba", 0x2fcdbc, 0x1e
	.globl gUnknown_82FCDDA
gUnknown_82FCDDA: @ 0x082FCDDA
	.incbin "baserom.gba", 0x2fcdda, 0x14
	.globl gUnknown_82FCDEE
gUnknown_82FCDEE: @ 0x082FCDEE
	.incbin "baserom.gba", 0x2fcdee, 0x14
	.globl gUnknown_82FCE02
gUnknown_82FCE02: @ 0x082FCE02
	.incbin "baserom.gba", 0x2fce02, 0xa
	.globl gBallSpriteSheets
gBallSpriteSheets: @ 0x082FCE0C
	.incbin "baserom.gba", 0x2fce0c, 0x60
	.globl gBallSpritePalettes
gBallSpritePalettes: @ 0x082FCE6C
	.incbin "baserom.gba", 0x2fce6c, 0x128
	.globl gUnknown_82FCF94
gUnknown_82FCF94: @ 0x082FCF94
	.incbin "baserom.gba", 0x2fcf94, 0x138
	.globl gUnknown_82FD0CC
gUnknown_82FD0CC: @ 0x082FD0CC
	.incbin "baserom.gba", 0x2fd0cc, 0x80
	.globl gUnknown_82FD14C
gUnknown_82FD14C: @ 0x082FD14C
	.incbin "baserom.gba", 0x2fd14c, 0x1280
	.globl gUnknown_82FE3CC
gUnknown_82FE3CC: @ 0x082FE3CC
	.incbin "baserom.gba", 0x2fe3cc, 0x800
	.globl gUnknown_82FEBCC
gUnknown_82FEBCC: @ 0x082FEBCC
	.incbin "baserom.gba", 0x2febcc, 0x1fe
	.globl gUnknown_82FEDCA
gUnknown_82FEDCA: @ 0x082FEDCA
	.incbin "baserom.gba", 0x2fedca, 0x1fe
	.globl gUnknown_82FEFC8
gUnknown_82FEFC8: @ 0x082FEFC8
	.incbin "baserom.gba", 0x2fefc8, 0x800
	.globl gUnknown_82FF7C8
gUnknown_82FF7C8: @ 0x082FF7C8
	.incbin "baserom.gba", 0x2ff7c8, 0x800
	.globl gUnknown_82FFFC8
gUnknown_82FFFC8: @ 0x082FFFC8
	.incbin "baserom.gba", 0x2fffc8, 0x86c
	.globl gUnknown_8300834
gUnknown_8300834: @ 0x08300834
	.incbin "baserom.gba", 0x300834, 0x8
	.globl gUnknown_830083C
gUnknown_830083C: @ 0x0830083C
	.incbin "baserom.gba", 0x30083c, 0x50
	.globl gUnknown_830088C
gUnknown_830088C: @ 0x0830088C
	.incbin "baserom.gba", 0x30088c, 0x18
	.globl gUnknown_83008A4
gUnknown_83008A4: @ 0x083008A4
	.incbin "baserom.gba", 0x3008a4, 0x38
	.globl gUnknown_83008DC
gUnknown_83008DC: @ 0x083008DC
	.incbin "baserom.gba", 0x3008dc, 0x8
	.globl gUnknown_83008E4
gUnknown_83008E4: @ 0x083008E4
	.incbin "baserom.gba", 0x3008e4, 0x138
	.globl gUnknown_8300A1C
gUnknown_8300A1C: @ 0x08300A1C
	.incbin "baserom.gba", 0x300a1c, 0x1a
	.globl gUnknown_8300A36
gUnknown_8300A36: @ 0x08300A36
	.incbin "baserom.gba", 0x300a36, 0x18
	.globl gUnknown_8300A4E
gUnknown_8300A4E: @ 0x08300A4E
	.incbin "baserom.gba", 0x300a4e, 0x3c
	.globl gUnknown_8300A8A
gUnknown_8300A8A: @ 0x08300A8A
	.incbin "baserom.gba", 0x300a8a, 0xb
	.globl gUnknown_8300A95
gUnknown_8300A95: @ 0x08300A95
	.incbin "baserom.gba", 0x300a95, 0x2
	.globl gUnknown_8300A97
gUnknown_8300A97: @ 0x08300A97
	.incbin "baserom.gba", 0x300a97, 0x2
	.globl gUnknown_8300A99
gUnknown_8300A99: @ 0x08300A99
	.incbin "baserom.gba", 0x300a99, 0x2
	.globl gUnknown_8300A9B
gUnknown_8300A9B: @ 0x08300A9B
	.incbin "baserom.gba", 0x300a9b, 0x3
	.globl gUnknown_8300A9E
gUnknown_8300A9E: @ 0x08300A9E
	.incbin "baserom.gba", 0x300a9e, 0x2
	.globl gUnknown_8300AA0
gUnknown_8300AA0: @ 0x08300AA0

	@ asm/trade.s:5088 sub_0807946C
	.globl gText_Rom_300AA0
gText_Rom_300AA0: @ 0x08300AA0
	.string "/$"
	.if (. - gText_Rom_300AA0) > 0x2
	.error "gText_Rom_300AA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AA0) < 0x2
	.space 0x2 - (. - gText_Rom_300AA0)
	.endif
	.globl gUnknown_8300AA2
gUnknown_8300AA2: @ 0x08300AA2

	@ asm/trade.s:5098 sub_0807946C
	.globl gText_Rom_300AA2
gText_Rom_300AA2: @ 0x08300AA2
	.string "Lv$"
	.if (. - gText_Rom_300AA2) > 0x3
	.error "gText_Rom_300AA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AA2) < 0x3
	.space 0x3 - (. - gText_Rom_300AA2)
	.endif
	.globl gUnknown_8300AA5
gUnknown_8300AA5: @ 0x08300AA5

	@ src/data/easy_chat/easy_chat_group_voices.h:52 easy_chat_group_voices_line_52 (+3 aliases)
	.globl gText_Rom_300AA5
gText_Rom_300AA5: @ 0x08300AA5
	.string "ーーー$"
	.if (. - gText_Rom_300AA5) > 0x4
	.error "gText_Rom_300AA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AA5) < 0x4
	.space 0x4 - (. - gText_Rom_300AA5)
	.endif
	.globl gUnknown_8300AA9
gUnknown_8300AA9: @ 0x08300AA9

	@ asm/trade.s:5229 sub_08079564
	.globl gText_Rom_300AA9
gText_Rom_300AA9: @ 0x08300AA9
	.string "？？？？$"
	.if (. - gText_Rom_300AA9) > 0x5
	.error "gText_Rom_300AA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AA9) < 0x5
	.space 0x5 - (. - gText_Rom_300AA9)
	.endif
	.globl gUnknown_8300AAE
gUnknown_8300AAE: @ 0x08300AAE

	@ asm/trade.s:2612 sub_08078120
	.globl gText_Rom_300AAE
gText_Rom_300AAE: @ 0x08300AAE
	.string "と　$"
	.if (. - gText_Rom_300AAE) > 0x3
	.error "gText_Rom_300AAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AAE) < 0x3
	.space 0x3 - (. - gText_Rom_300AAE)
	.endif
	.globl gUnknown_8300AB1
gUnknown_8300AB1: @ 0x08300AB1

	@ asm/trade.s:2618 sub_08078120
	.globl gText_Rom_300AB1
gText_Rom_300AB1: @ 0x08300AB1
	.string "を　こうかんしますか？$"
	.if (. - gText_Rom_300AB1) > 0xc
	.error "gText_Rom_300AB1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AB1) < 0xc
	.space 0xc - (. - gText_Rom_300AB1)
	.endif

	@ src/pokemon_storage_system.c:8078 pokemon_storage_system_line_8078 (+5 aliases)
	.globl gText_Rom_300ABD
gText_Rom_300ABD: @ 0x08300ABD
	.string "やめる$"
	.if (. - gText_Rom_300ABD) > 0x4
	.error "gText_Rom_300ABD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300ABD) < 0x4
	.space 0x4 - (. - gText_Rom_300ABD)
	.endif

	@ src/strings.c:305 gText_ChoosePokemon
	.globl gText_Rom_300AC1
gText_Rom_300AC1: @ 0x08300AC1
	.string "ポケモンを えらんで ください$"
	.if (. - gText_Rom_300AC1) > 0x10
	.error "gText_Rom_300AC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AC1) < 0x10
	.space 0x10 - (. - gText_Rom_300AC1)
	.endif

