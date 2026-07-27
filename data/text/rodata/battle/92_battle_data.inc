	.globl gUnknown_85609D0
gUnknown_85609D0: @ 0x085609D0
	.incbin "baserom.gba", 0x5609d0, 0x4
	.globl gUnknown_85609D4
gUnknown_85609D4: @ 0x085609D4
	.incbin "baserom.gba", 0x5609d4, 0x4
	.globl gUnknown_85609D8
gUnknown_85609D8: @ 0x085609D8
	.incbin "baserom.gba", 0x5609d8, 0x5c
	.globl gUnknown_8560A34
gUnknown_8560A34: @ 0x08560A34
	.incbin "baserom.gba", 0x560a34, 0x18
	.globl gUnknown_8560A4C
gUnknown_8560A4C: @ 0x08560A4C
	.incbin "baserom.gba", 0x560a4c, 0x20
	.globl gUnknown_8560A6C
gUnknown_8560A6C: @ 0x08560A6C
	.incbin "baserom.gba", 0x560a6c, 0x10
	.globl gUnknown_8560A7C
gUnknown_8560A7C: @ 0x08560A7C
	.incbin "baserom.gba", 0x560a7c, 0x68
	.globl gUnknown_8560AE4
gUnknown_8560AE4: @ 0x08560AE4
	.incbin "baserom.gba", 0x560ae4, 0x30
	.globl gUnknown_8560B14
gUnknown_8560B14: @ 0x08560B14
	.incbin "baserom.gba", 0x560b14, 0x8
	.globl gUnknown_8560B1C
gUnknown_8560B1C: @ 0x08560B1C
	.incbin "baserom.gba", 0x560b1c, 0x10
	.globl gUnknown_8560B2C
gUnknown_8560B2C: @ 0x08560B2C
	.incbin "baserom.gba", 0x560b2c, 0x20
	.globl gUnknown_8560B4C
gUnknown_8560B4C: @ 0x08560B4C
	.incbin "baserom.gba", 0x560b4c, 0x18
	.globl gUnknown_8560B64
gUnknown_8560B64: @ 0x08560B64
	.incbin "baserom.gba", 0x560b64, 0x8
	.globl gUnknown_8560B6C
gUnknown_8560B6C: @ 0x08560B6C
	.incbin "baserom.gba", 0x560b6c, 0x8
	.globl gUnknown_8560B74
gUnknown_8560B74: @ 0x08560B74
	.incbin "baserom.gba", 0x560b74, 0x8
	.globl gUnknown_8560B7C
gUnknown_8560B7C: @ 0x08560B7C
	.incbin "baserom.gba", 0x560b7c, 0x18
	.globl gUnknown_8560B94
gUnknown_8560B94: @ 0x08560B94
	.incbin "baserom.gba", 0x560b94, 0x20
	.globl gUnknown_8560BB4
gUnknown_8560BB4: @ 0x08560BB4
	.incbin "baserom.gba", 0x560bb4, 0xf8
	.globl gUnknown_8560CAC
gUnknown_8560CAC: @ 0x08560CAC
	.incbin "baserom.gba", 0x560cac, 0x48
	.globl gUnknown_8560CF4
gUnknown_8560CF4: @ 0x08560CF4
	.incbin "baserom.gba", 0x560cf4, 0x80
	.globl gUnknown_8560D74
gUnknown_8560D74: @ 0x08560D74
	.incbin "baserom.gba", 0x560d74, 0xf8
	.globl gUnknown_8560E6C
gUnknown_8560E6C: @ 0x08560E6C
	.incbin "baserom.gba", 0x560e6c, 0x14
	.globl gUnknown_8560E80
gUnknown_8560E80: @ 0x08560E80
	.incbin "baserom.gba", 0x560e80, 0x18
	.globl gUnknown_8560E98
gUnknown_8560E98: @ 0x08560E98
	.incbin "baserom.gba", 0x560e98, 0x10
	.globl gUnknown_8560EA8
gUnknown_8560EA8: @ 0x08560EA8
	.incbin "baserom.gba", 0x560ea8, 0x80
	.globl gUnknown_8560F28
gUnknown_8560F28: @ 0x08560F28
	.incbin "baserom.gba", 0x560f28, 0x76

	@ src/data/trainers.h:33929 trainers_line_33929
	.globl gText_Rom_560F9E
gText_Rom_560F9E: @ 0x08560F9E
	.string "ヨシノリ$"
	.if (. - gText_Rom_560F9E) > 0x5
	.error "gText_Rom_560F9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_560F9E) < 0x5
	.space 0x5 - (. - gText_Rom_560F9E)
	.endif
	.incbin "baserom.gba", 0x560fa3, 0x85
	.globl gUnknown_8561028
gUnknown_8561028: @ 0x08561028
	.incbin "baserom.gba", 0x561028, 0x1c4

	@ src/data/easy_chat/easy_chat_group_people.h:304 easy_chat_group_people_line_304 (+1 aliases)
	.globl gText_Rom_5611EC
gText_Rom_5611EC: @ 0x085611EC
	.string "ちゃん$"
	.if (. - gText_Rom_5611EC) > 0x4
	.error "gText_Rom_5611EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5611EC) < 0x4
	.space 0x4 - (. - gText_Rom_5611EC)
	.endif
	.incbin "baserom.gba", 0x5611f0, 0x3c

	@ src/data/trainers.h:16146 trainers_line_16146
	.globl gText_Rom_56122C
gText_Rom_56122C: @ 0x0856122C
	.string "タロウ$"
	.if (. - gText_Rom_56122C) > 0x4
	.error "gText_Rom_56122C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_56122C) < 0x4
	.space 0x4 - (. - gText_Rom_56122C)
	.endif
	.incbin "baserom.gba", 0x561230, 0xbc

	@ src/data/easy_chat/easy_chat_group_people.h:304 easy_chat_group_people_line_304 (+1 aliases)
	.globl gText_Rom_5612EC
gText_Rom_5612EC: @ 0x085612EC
	.string "ちゃん$"
	.if (. - gText_Rom_5612EC) > 0x4
	.error "gText_Rom_5612EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5612EC) < 0x4
	.space 0x4 - (. - gText_Rom_5612EC)
	.endif
	.incbin "baserom.gba", 0x5612f0, 0x13c

	@ src/data/easy_chat/easy_chat_group_people.h:304 easy_chat_group_people_line_304 (+1 aliases)
	.globl gText_Rom_56142C
gText_Rom_56142C: @ 0x0856142C
	.string "ちゃん$"
	.if (. - gText_Rom_56142C) > 0x4
	.error "gText_Rom_56142C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_56142C) < 0x4
	.space 0x4 - (. - gText_Rom_56142C)
	.endif
	.incbin "baserom.gba", 0x561430, 0x3b

	@ src/data/trainers.h:9234 trainers_line_9234 (+4 aliases)
	.globl gText_Rom_56146B
gText_Rom_56146B: @ 0x0856146B
	.string "ジョー$"
	.if (. - gText_Rom_56146B) > 0x4
	.error "gText_Rom_56146B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_56146B) < 0x4
	.space 0x4 - (. - gText_Rom_56146B)
	.endif
	.incbin "baserom.gba", 0x56146f, 0x148

	@ src/data/trainers.h:24407 trainers_line_24407 (+4 aliases)
	.globl gText_Rom_5615B7
gText_Rom_5615B7: @ 0x085615B7
	.string "ジロウ$"
	.if (. - gText_Rom_5615B7) > 0x4
	.error "gText_Rom_5615B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5615B7) < 0x4
	.space 0x4 - (. - gText_Rom_5615B7)
	.endif
	.incbin "baserom.gba", 0x5615bb, 0x171

	@ src/data/easy_chat/easy_chat_group_people.h:304 easy_chat_group_people_line_304 (+1 aliases)
	.globl gText_Rom_56172C
gText_Rom_56172C: @ 0x0856172C
	.string "ちゃん$"
	.if (. - gText_Rom_56172C) > 0x4
	.error "gText_Rom_56172C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_56172C) < 0x4
	.space 0x4 - (. - gText_Rom_56172C)
	.endif
	.incbin "baserom.gba", 0x561730, 0x1bc

	@ src/data/easy_chat/easy_chat_group_people.h:304 easy_chat_group_people_line_304 (+1 aliases)
	.globl gText_Rom_5618EC
gText_Rom_5618EC: @ 0x085618EC
	.string "ちゃん$"
	.if (. - gText_Rom_5618EC) > 0x4
	.error "gText_Rom_5618EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5618EC) < 0x4
	.space 0x4 - (. - gText_Rom_5618EC)
	.endif
	.incbin "baserom.gba", 0x5618f0, 0x2ba

	@ src/data/easy_chat/easy_chat_group_adjectives.h:160 easy_chat_group_adjectives_line_160
	.globl gText_Rom_561BAA
gText_Rom_561BAA: @ 0x08561BAA
	.string "ブルブル$"
	.if (. - gText_Rom_561BAA) > 0x5
	.error "gText_Rom_561BAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_561BAA) < 0x5
	.space 0x5 - (. - gText_Rom_561BAA)
	.endif
	.incbin "baserom.gba", 0x561baf, 0x108

	@ src/data/trainers.h:16146 trainers_line_16146
	.globl gText_Rom_561CB7
gText_Rom_561CB7: @ 0x08561CB7
	.string "タロウ$"
	.if (. - gText_Rom_561CB7) > 0x4
	.error "gText_Rom_561CB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_561CB7) < 0x4
	.space 0x4 - (. - gText_Rom_561CB7)
	.endif
	.incbin "baserom.gba", 0x561cbb, 0x3f1

	@ src/data/easy_chat/easy_chat_group_people.h:304 easy_chat_group_people_line_304 (+1 aliases)
	.globl gText_Rom_5620AC
gText_Rom_5620AC: @ 0x085620AC
	.string "ちゃん$"
	.if (. - gText_Rom_5620AC) > 0x4
	.error "gText_Rom_5620AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5620AC) < 0x4
	.space 0x4 - (. - gText_Rom_5620AC)
	.endif
	.incbin "baserom.gba", 0x5620b0, 0x4bb

	@ src/data/trainers.h:16146 trainers_line_16146
	.globl gText_Rom_56256B
gText_Rom_56256B: @ 0x0856256B
	.string "タロウ$"
	.if (. - gText_Rom_56256B) > 0x4
	.error "gText_Rom_56256B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_56256B) < 0x4
	.space 0x4 - (. - gText_Rom_56256B)
	.endif
	.incbin "baserom.gba", 0x56256f, 0x246

	@ src/data/trainers.h:36047 trainers_line_36047
	.globl gText_Rom_5627B5
gText_Rom_5627B5: @ 0x085627B5
	.string "ユウゴ$"
	.if (. - gText_Rom_5627B5) > 0x4
	.error "gText_Rom_5627B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5627B5) < 0x4
	.space 0x4 - (. - gText_Rom_5627B5)
	.endif
	.incbin "baserom.gba", 0x5627b9, 0x6f
	.globl gUnknown_8562828
gUnknown_8562828: @ 0x08562828
	.incbin "baserom.gba", 0x562828, 0x60
	.globl gUnknown_8562888
gUnknown_8562888: @ 0x08562888
	.incbin "baserom.gba", 0x562888, 0x20
	.globl gUnknown_85628A8
gUnknown_85628A8: @ 0x085628A8
	.incbin "baserom.gba", 0x5628a8, 0x68
	.globl gUnknown_8562910
gUnknown_8562910: @ 0x08562910
	.incbin "baserom.gba", 0x562910, 0x60
	.globl gUnknown_8562970
gUnknown_8562970: @ 0x08562970
	.incbin "baserom.gba", 0x562970, 0x1c
	.globl gUnknown_856298C
gUnknown_856298C: @ 0x0856298C
	.incbin "baserom.gba", 0x56298c, 0x8
	.globl gUnknown_8562994
gUnknown_8562994: @ 0x08562994
	.incbin "baserom.gba", 0x562994, 0x18
	.globl gUnknown_85629AC
gUnknown_85629AC: @ 0x085629AC
	.incbin "baserom.gba", 0x5629ac, 0x10
	.globl gUnknown_85629BC
gUnknown_85629BC: @ 0x085629BC
	.incbin "baserom.gba", 0x5629bc, 0x8
	.globl gUnknown_85629C4
gUnknown_85629C4: @ 0x085629C4
	.incbin "baserom.gba", 0x5629c4, 0x8
	.globl gUnknown_85629CC
gUnknown_85629CC: @ 0x085629CC
	.incbin "baserom.gba", 0x5629cc, 0x18
	.globl gUnknown_85629E4
gUnknown_85629E4: @ 0x085629E4
	.incbin "baserom.gba", 0x5629e4, 0x10
	.globl gUnknown_85629F4
gUnknown_85629F4: @ 0x085629F4
	.incbin "baserom.gba", 0x5629f4, 0x38
	.globl gUnknown_8562A2C
gUnknown_8562A2C: @ 0x08562A2C
	.incbin "baserom.gba", 0x562a2c, 0x8
	.globl gUnknown_8562A34
gUnknown_8562A34: @ 0x08562A34
	.incbin "baserom.gba", 0x562a34, 0xa
	.globl gUnknown_8562A3E
gUnknown_8562A3E: @ 0x08562A3E
	.incbin "baserom.gba", 0x562a3e, 0x6
	.globl gUnknown_8562A44
gUnknown_8562A44: @ 0x08562A44
	.incbin "baserom.gba", 0x562a44, 0x6
	.globl gUnknown_8562A4A
gUnknown_8562A4A: @ 0x08562A4A
	.incbin "baserom.gba", 0x562a4a, 0x6
	.globl gUnknown_8562A50
gUnknown_8562A50: @ 0x08562A50
	.incbin "baserom.gba", 0x562a50, 0x6
	.globl gUnknown_8562A56
gUnknown_8562A56: @ 0x08562A56
	.incbin "baserom.gba", 0x562a56, 0x6
	.globl gUnknown_8562A5C
gUnknown_8562A5C: @ 0x08562A5C
	.incbin "baserom.gba", 0x562a5c, 0x6
	.globl gUnknown_8562A62
gUnknown_8562A62: @ 0x08562A62
	.incbin "baserom.gba", 0x562a62, 0x37d

	@ src/data/easy_chat/easy_chat_group_feelings.h:59 gEasyChatWord_Rare (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_562DDF
gText_Rom_562DDF: @ 0x08562DDF
	.string "めずらしい$"
	.if (. - gText_Rom_562DDF) != 0x6
	.error "gText_Rom_562DDF must retain its original byte length"
	.endif
	.globl gText_Rom_562DE1
	.set gText_Rom_562DE1, gText_Rom_562DDF + 0x2
	.incbin "baserom.gba", 0x562de5, 0x10a

	@ src/data/easy_chat/easy_chat_group_feelings.h:59 gEasyChatWord_Rare (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_562EEF
gText_Rom_562EEF: @ 0x08562EEF
	.string "めずらしい$"
	.if (. - gText_Rom_562EEF) != 0x6
	.error "gText_Rom_562EEF must retain its original byte length"
	.endif
	.globl gText_Rom_562EF1
	.set gText_Rom_562EF1, gText_Rom_562EEF + 0x2
	.incbin "baserom.gba", 0x562ef5, 0x1b5

