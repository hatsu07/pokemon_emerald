	@ src/match_call.c:1204 sText_PokenavCallEllipsis
	.globl gText_Rom_5D79EE
gText_Rom_5D79EE: @ 0x085D79EE
	.string "…………\p$"
	.if (. - gText_Rom_5D79EE) > 0x6
	.error "gText_Rom_5D79EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D79EE) < 0x6
	.space 0x6 - (. - gText_Rom_5D79EE)
	.endif
	.globl gUnknown_85D79F4
gUnknown_85D79F4: @ 0x085D79F4
	.incbin "baserom.gba", 0x5d79f4, 0x20
	.globl gUnknown_85D7A14
gUnknown_85D7A14: @ 0x085D7A14
	.incbin "baserom.gba", 0x5d7a14, 0x8
	.globl gUnknown_85D7A1C
gUnknown_85D7A1C: @ 0x085D7A1C
	.incbin "baserom.gba", 0x5d7a1c, 0xc
	.globl gUnknown_85D7A28
gUnknown_85D7A28: @ 0x085D7A28
	.incbin "baserom.gba", 0x5d7a28, 0x2c
	.globl gUnknown_85D7A54
gUnknown_85D7A54: @ 0x085D7A54
	.incbin "baserom.gba", 0x5d7a54, 0x30
	.globl gUnknown_85D7A84
gUnknown_85D7A84: @ 0x085D7A84
	.incbin "baserom.gba", 0x5d7a84, 0x1c
	.globl gUnknown_85D7AA0
gUnknown_85D7AA0: @ 0x085D7AA0
	.incbin "baserom.gba", 0x5d7aa0, 0x10
	.globl gUnknown_85D7AB0
gUnknown_85D7AB0: @ 0x085D7AB0
	.incbin "baserom.gba", 0x5d7ab0, 0x54
	.globl gUnknown_85D7B04
gUnknown_85D7B04: @ 0x085D7B04
	.incbin "baserom.gba", 0x5d7b04, 0x20
	.globl gUnknown_85D7B24
gUnknown_85D7B24: @ 0x085D7B24
	.incbin "baserom.gba", 0x5d7b24, 0x4
	.globl gUnknown_85D7B28
gUnknown_85D7B28: @ 0x085D7B28
	.incbin "baserom.gba", 0x5d7b28, 0x10
	.globl gUnknown_85D7B38
gUnknown_85D7B38: @ 0x085D7B38
	.incbin "baserom.gba", 0x5d7b38, 0x8
	.globl gUnknown_85D7B40
gUnknown_85D7B40: @ 0x085D7B40

	@ src/strings.c:918 gText_YesNo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5D7B40
gText_Rom_5D7B40: @ 0x085D7B40
	.string "はい\nいいえ$"
	.if (. - gText_Rom_5D7B40) != 0x7
	.error "gText_Rom_5D7B40 must retain its original byte length"
	.endif
	.globl gText_Rom_5D7B43
	.set gText_Rom_5D7B43, gText_Rom_5D7B40 + 0x3
	.incbin "baserom.gba", 0x5d7b47, 0x1
	.globl gUnknown_85D7B48
gUnknown_85D7B48: @ 0x085D7B48
	.incbin "baserom.gba", 0x5d7b48, 0x20
	.globl gUnknown_85D7B68
gUnknown_85D7B68: @ 0x085D7B68
	.incbin "baserom.gba", 0x5d7b68, 0x4
	.globl gUnknown_85D7B6C
gUnknown_85D7B6C: @ 0x085D7B6C
	.incbin "baserom.gba", 0x5d7b6c, 0x4
	.globl gUnknown_85D7B70
gUnknown_85D7B70: @ 0x085D7B70
	.incbin "baserom.gba", 0x5d7b70, 0x68
	.globl gUnknown_85D7BD8
gUnknown_85D7BD8: @ 0x085D7BD8
	.incbin "baserom.gba", 0x5d7bd8, 0x20
	.globl gUnknown_85D7BF8
gUnknown_85D7BF8: @ 0x085D7BF8
	.incbin "baserom.gba", 0x5d7bf8, 0x20
	.globl gUnknown_85D7C18
gUnknown_85D7C18: @ 0x085D7C18
	.incbin "baserom.gba", 0x5d7c18, 0x20
	.globl gUnknown_85D7C38
gUnknown_85D7C38: @ 0x085D7C38
	.incbin "baserom.gba", 0x5d7c38, 0x508

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_5D8140
gText_Rom_5D8140: @ 0x085D8140
	.string "ラララ$"
	.if (. - gText_Rom_5D8140) > 0x4
	.error "gText_Rom_5D8140 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D8140) < 0x4
	.space 0x4 - (. - gText_Rom_5D8140)
	.endif
	.incbin "baserom.gba", 0x5d8144, 0x8

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_5D814C
gText_Rom_5D814C: @ 0x085D814C
	.string "ラララ$"
	.if (. - gText_Rom_5D814C) > 0x4
	.error "gText_Rom_5D814C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D814C) < 0x4
	.space 0x4 - (. - gText_Rom_5D814C)
	.endif
	.incbin "baserom.gba", 0x5d8150, 0x1ae8
	.globl gUnknown_85D9C38
gUnknown_85D9C38: @ 0x085D9C38
	.incbin "baserom.gba", 0x5d9c38, 0x1100
	.globl gUnknown_85DAD38
gUnknown_85DAD38: @ 0x085DAD38
	.incbin "baserom.gba", 0x5dad38, 0x440
	.globl gUnknown_85DB178
gUnknown_85DB178: @ 0x085DB178
	.incbin "baserom.gba", 0x5db178, 0x800
	.globl gUnknown_85DB978
gUnknown_85DB978: @ 0x085DB978
	.incbin "baserom.gba", 0x5db978, 0x100
	.globl gUnknown_85DBA78
gUnknown_85DBA78: @ 0x085DBA78
	.incbin "baserom.gba", 0x5dba78, 0x60
	.globl gUnknown_85DBAD8
gUnknown_85DBAD8: @ 0x085DBAD8
	.incbin "baserom.gba", 0x5dbad8, 0x40
	.globl gUnknown_85DBB18
gUnknown_85DBB18: @ 0x085DBB18
	.incbin "baserom.gba", 0x5dbb18, 0x20
	.globl gUnknown_85DBB38
gUnknown_85DBB38: @ 0x085DBB38
	.incbin "baserom.gba", 0x5dbb38, 0x28
	.globl gUnknown_85DBB60
gUnknown_85DBB60: @ 0x085DBB60
	.incbin "baserom.gba", 0x5dbb60, 0x10
	.globl gUnknown_85DBB70
gUnknown_85DBB70: @ 0x085DBB70
	.incbin "baserom.gba", 0x5dbb70, 0x28
	.globl gUnknown_85DBB98
gUnknown_85DBB98: @ 0x085DBB98

	@ src/strings.c:992 gText_RentalPkmn2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5DBB98
gText_Rom_5DBB98: @ 0x085DBB98
	.string "ポケモンレンタル$"
	.if (. - gText_Rom_5DBB98) != 0x9
	.error "gText_Rom_5DBB98 must retain its original byte length"
	.endif
	.globl gText_Rom_5DBB9C
	.set gText_Rom_5DBB9C, gText_Rom_5DBB98 + 0x4
	.globl gUnknown_85DBBA1
gUnknown_85DBBA1: @ 0x085DBBA1

	@ src/strings.c:993 gText_SelectFirstPkmn
	.globl gText_Rom_5DBBA1
gText_Rom_5DBBA1: @ 0x085DBBA1
	.string "1ばんめのポケモンを えらんでください$"
	.if (. - gText_Rom_5DBBA1) > 0x14
	.error "gText_Rom_5DBBA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBA1) < 0x14
	.space 0x14 - (. - gText_Rom_5DBBA1)
	.endif
	.globl gUnknown_85DBBB5
gUnknown_85DBBB5: @ 0x085DBBB5

	@ src/strings.c:994 gText_SelectSecondPkmn
	.globl gText_Rom_5DBBB5
gText_Rom_5DBBB5: @ 0x085DBBB5
	.string "2ばんめのポケモンを えらんでください$"
	.if (. - gText_Rom_5DBBB5) > 0x14
	.error "gText_Rom_5DBBB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBB5) < 0x14
	.space 0x14 - (. - gText_Rom_5DBBB5)
	.endif
	.globl gUnknown_85DBBC9
gUnknown_85DBBC9: @ 0x085DBBC9

	@ src/strings.c:995 gText_SelectThirdPkmn
	.globl gText_Rom_5DBBC9
gText_Rom_5DBBC9: @ 0x085DBBC9
	.string "3ばんめのポケモンを えらんでください$"
	.if (. - gText_Rom_5DBBC9) > 0x14
	.error "gText_Rom_5DBBC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBC9) < 0x14
	.space 0x14 - (. - gText_Rom_5DBBC9)
	.endif
	.globl gUnknown_85DBBDD
gUnknown_85DBBDD: @ 0x085DBBDD

	@ src/strings.c:996 gText_Rent
	.globl gText_Rom_5DBBDD
gText_Rom_5DBBDD: @ 0x085DBBDD
	.string "レンタルする$"
	.if (. - gText_Rom_5DBBDD) > 0x7
	.error "gText_Rom_5DBBDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBDD) < 0x7
	.space 0x7 - (. - gText_Rom_5DBBDD)
	.endif
	.globl gUnknown_85DBBE4
gUnknown_85DBBE4: @ 0x085DBBE4

	@ src/data/party_menu.h:796 party_menu_line_796 (+2 aliases)
	.globl gText_Rom_5DBBE4
gText_Rom_5DBBE4: @ 0x085DBBE4
	.string "つよさをみる$"
	.if (. - gText_Rom_5DBBE4) > 0x7
	.error "gText_Rom_5DBBE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBE4) < 0x7
	.space 0x7 - (. - gText_Rom_5DBBE4)
	.endif
	.globl gUnknown_85DBBEB
gUnknown_85DBBEB: @ 0x085DBBEB

	@ src/strings.c:998 gText_Others2 (+1 aliases)
	.globl gText_Rom_5DBBEB
gText_Rom_5DBBEB: @ 0x085DBBEB
	.string "べつのにする$"
	.if (. - gText_Rom_5DBBEB) > 0x7
	.error "gText_Rom_5DBBEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBEB) < 0x7
	.space 0x7 - (. - gText_Rom_5DBBEB)
	.endif
	.globl gUnknown_85DBBF2
gUnknown_85DBBF2: @ 0x085DBBF2

	@ src/data/party_menu.h:810 party_menu_line_810 (+1 aliases)
	.globl gText_Rom_5DBBF2
gText_Rom_5DBBF2: @ 0x085DBBF2
	.string "はずす$"
	.if (. - gText_Rom_5DBBF2) > 0x4
	.error "gText_Rom_5DBBF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBF2) < 0x4
	.space 0x4 - (. - gText_Rom_5DBBF2)
	.endif
	.globl gUnknown_85DBBF6
gUnknown_85DBBF6: @ 0x085DBBF6

	@ src/strings.c:1000 gText_TheseThreePkmnOkay
	.globl gText_Rom_5DBBF6
gText_Rom_5DBBF6: @ 0x085DBBF6
	.string "いじょうの 3ひきで よろしいですか?$"
	.if (. - gText_Rom_5DBBF6) > 0x14
	.error "gText_Rom_5DBBF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBF6) < 0x14
	.space 0x14 - (. - gText_Rom_5DBBF6)
	.endif
	.globl gUnknown_85DBC0A
gUnknown_85DBC0A: @ 0x085DBC0A
	.incbin "baserom.gba", 0x5dbc0a, 0x3
	.globl gUnknown_85DBC0D
gUnknown_85DBC0D: @ 0x085DBC0D

	@ src/data/script_menu.h:637 script_menu_line_637 (+3 aliases)
	.globl gText_Rom_5DBC0D
gText_Rom_5DBC0D: @ 0x085DBC0D
	.string "いいえ$"
	.if (. - gText_Rom_5DBC0D) > 0x4
	.error "gText_Rom_5DBC0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBC0D) < 0x4
	.space 0x4 - (. - gText_Rom_5DBC0D)
	.endif
	.globl gUnknown_85DBC11
gUnknown_85DBC11: @ 0x085DBC11

	@ src/strings.c:1003 gText_CantSelectSamePkmn
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5DBC11
gText_Rom_5DBC11: @ 0x085DBC11
	.string "おなじポケモンは えらべません$"
	.if (. - gText_Rom_5DBC11) != 0x10
	.error "gText_Rom_5DBC11 must retain its original byte length"
	.endif
	.globl gText_Rom_5DBC1D
	.set gText_Rom_5DBC1D, gText_Rom_5DBC11 + 0xc
	.incbin "baserom.gba", 0x5dbc21, 0x3
	.globl gUnknown_85DBC24
gUnknown_85DBC24: @ 0x085DBC24
	.incbin "baserom.gba", 0x5dbc24, 0xc
	.globl gUnknown_85DBC30
gUnknown_85DBC30: @ 0x085DBC30
	.incbin "baserom.gba", 0x5dbc30, 0xc
	.globl gUnknown_85DBC3C
gUnknown_85DBC3C: @ 0x085DBC3C
	.incbin "baserom.gba", 0x5dbc3c, 0x38
	.globl gUnknown_85DBC74
gUnknown_85DBC74: @ 0x085DBC74
	.incbin "baserom.gba", 0x5dbc74, 0xa
	.globl gUnknown_85DBC7E
gUnknown_85DBC7E: @ 0x085DBC7E
	.incbin "baserom.gba", 0x5dbc7e, 0x3
	.globl gUnknown_85DBC81
gUnknown_85DBC81: @ 0x085DBC81
	.incbin "baserom.gba", 0x5dbc81, 0x15f
	.globl gUnknown_85DBDE0
gUnknown_85DBDE0: @ 0x085DBDE0
	.incbin "baserom.gba", 0x5dbde0, 0x18
	.globl gUnknown_85DBDF8
gUnknown_85DBDF8: @ 0x085DBDF8
	.incbin "baserom.gba", 0x5dbdf8, 0x18
	.globl gUnknown_85DBE10
gUnknown_85DBE10: @ 0x085DBE10
	.incbin "baserom.gba", 0x5dbe10, 0x18
	.globl gUnknown_85DBE28
gUnknown_85DBE28: @ 0x085DBE28
	.incbin "baserom.gba", 0x5dbe28, 0x18
	.globl gUnknown_85DBE40
gUnknown_85DBE40: @ 0x085DBE40
	.incbin "baserom.gba", 0x5dbe40, 0x18
	.globl gUnknown_85DBE58
gUnknown_85DBE58: @ 0x085DBE58
	.incbin "baserom.gba", 0x5dbe58, 0x50
	.globl gUnknown_85DBEA8
gUnknown_85DBEA8: @ 0x085DBEA8
	.incbin "baserom.gba", 0x5dbea8, 0x10
	.globl gUnknown_85DBEB8
gUnknown_85DBEB8: @ 0x085DBEB8
	.incbin "baserom.gba", 0x5dbeb8, 0x184
	.globl gUnknown_85DC03C
gUnknown_85DC03C: @ 0x085DC03C
	.incbin "baserom.gba", 0x5dc03c, 0x18
	.globl gUnknown_85DC054
gUnknown_85DC054: @ 0x085DC054
	.incbin "baserom.gba", 0x5dc054, 0x18
	.globl gUnknown_85DC06C
gUnknown_85DC06C: @ 0x085DC06C
	.incbin "baserom.gba", 0x5dc06c, 0x18
	.globl gUnknown_85DC084
gUnknown_85DC084: @ 0x085DC084
	.incbin "baserom.gba", 0x5dc084, 0x18
	.globl gUnknown_85DC09C
gUnknown_85DC09C: @ 0x085DC09C
	.incbin "baserom.gba", 0x5dc09c, 0x18
	.globl gUnknown_85DC0B4
gUnknown_85DC0B4: @ 0x085DC0B4

	@ src/strings.c:1004 gText_PkmnSwap
	.globl gText_Rom_5DC0B4
gText_Rom_5DC0B4: @ 0x085DC0B4
	.string "ポケモンこうかん     $"
	.if (. - gText_Rom_5DC0B4) > 0xe
	.error "gText_Rom_5DC0B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC0B4) < 0xe
	.space 0xe - (. - gText_Rom_5DC0B4)
	.endif
	.globl gUnknown_85DC0C2
gUnknown_85DC0C2: @ 0x085DC0C2

	@ src/strings.c:1005 gText_SelectPkmnToSwap
	.globl gText_Rom_5DC0C2
gText_Rom_5DC0C2: @ 0x085DC0C2
	.string "てばなすポケモンを えらんでください$"
	.if (. - gText_Rom_5DC0C2) > 0x13
	.error "gText_Rom_5DC0C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC0C2) < 0x13
	.space 0x13 - (. - gText_Rom_5DC0C2)
	.endif
	.globl gUnknown_85DC0D5
gUnknown_85DC0D5: @ 0x085DC0D5

	@ src/strings.c:1006 gText_SelectPkmnToAccept
	.globl gText_Rom_5DC0D5
gText_Rom_5DC0D5: @ 0x085DC0D5
	.string "うけとるポケモンを えらんでください$"
	.if (. - gText_Rom_5DC0D5) > 0x13
	.error "gText_Rom_5DC0D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC0D5) < 0x13
	.space 0x13 - (. - gText_Rom_5DC0D5)
	.endif
	.globl gUnknown_85DC0E8
gUnknown_85DC0E8: @ 0x085DC0E8

	@ src/strings.c:1007 gText_Swap (+1 aliases)
	.globl gText_Rom_5DC0E8
gText_Rom_5DC0E8: @ 0x085DC0E8
	.string "てばなす$"
	.if (. - gText_Rom_5DC0E8) > 0x5
	.error "gText_Rom_5DC0E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC0E8) < 0x5
	.space 0x5 - (. - gText_Rom_5DC0E8)
	.endif
	.globl gUnknown_85DC0ED
gUnknown_85DC0ED: @ 0x085DC0ED

	@ src/data/party_menu.h:796 party_menu_line_796 (+2 aliases)
	.globl gText_Rom_5DC0ED
gText_Rom_5DC0ED: @ 0x085DC0ED
	.string "つよさをみる$"
	.if (. - gText_Rom_5DC0ED) > 0x7
	.error "gText_Rom_5DC0ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC0ED) < 0x7
	.space 0x7 - (. - gText_Rom_5DC0ED)
	.endif
	.globl gUnknown_85DC0F4
gUnknown_85DC0F4: @ 0x085DC0F4

	@ src/strings.c:998 gText_Others2 (+1 aliases)
	.globl gText_Rom_5DC0F4
gText_Rom_5DC0F4: @ 0x085DC0F4
	.string "べつのにする$"
	.if (. - gText_Rom_5DC0F4) > 0x7
	.error "gText_Rom_5DC0F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC0F4) < 0x7
	.space 0x7 - (. - gText_Rom_5DC0F4)
	.endif
	.globl gUnknown_85DC0FB
gUnknown_85DC0FB: @ 0x085DC0FB

	@ src/strings.c:1010 gText_QuitSwapping
	.globl gText_Rom_5DC0FB
gText_Rom_5DC0FB: @ 0x085DC0FB
	.string "こうかんを ちゅうし しますか?$"
	.if (. - gText_Rom_5DC0FB) > 0x11
	.error "gText_Rom_5DC0FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC0FB) < 0x11
	.space 0x11 - (. - gText_Rom_5DC0FB)
	.endif
	.globl gUnknown_85DC10C
gUnknown_85DC10C: @ 0x085DC10C
	.incbin "baserom.gba", 0x5dc10c, 0x3
	.globl gUnknown_85DC10F
gUnknown_85DC10F: @ 0x085DC10F

	@ src/data/script_menu.h:637 script_menu_line_637 (+3 aliases)
	.globl gText_Rom_5DC10F
gText_Rom_5DC10F: @ 0x085DC10F
	.string "いいえ$"
	.if (. - gText_Rom_5DC10F) > 0x4
	.error "gText_Rom_5DC10F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC10F) < 0x4
	.space 0x4 - (. - gText_Rom_5DC10F)
	.endif
	.globl gUnknown_85DC113
gUnknown_85DC113: @ 0x085DC113

	@ src/strings.c:1013 gText_PkmnForSwap
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5DC113
gText_Rom_5DC113: @ 0x085DC113
	.string "てばなすポケモン$"
	.if (. - gText_Rom_5DC113) != 0x9
	.error "gText_Rom_5DC113 must retain its original byte length"
	.endif
	.globl gText_Rom_5DC117
	.set gText_Rom_5DC117, gText_Rom_5DC113 + 0x4
	.globl gUnknown_85DC11C
gUnknown_85DC11C: @ 0x085DC11C

	@ src/strings.c:1014 gText_Cancel3
	.globl gText_Rom_5DC11C
gText_Rom_5DC11C: @ 0x085DC11C
	.string "ちゅうし$"
	.if (. - gText_Rom_5DC11C) > 0x5
	.error "gText_Rom_5DC11C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC11C) < 0x5
	.space 0x5 - (. - gText_Rom_5DC11C)
	.endif
	.globl gUnknown_85DC121
gUnknown_85DC121: @ 0x085DC121

	@ src/strings.c:1007 gText_Swap (+1 aliases)
	.globl gText_Rom_5DC121
gText_Rom_5DC121: @ 0x085DC121
	.string "てばなす$"
	.if (. - gText_Rom_5DC121) > 0x5
	.error "gText_Rom_5DC121 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC121) < 0x5
	.space 0x5 - (. - gText_Rom_5DC121)
	.endif
	.globl gUnknown_85DC126
gUnknown_85DC126: @ 0x085DC126

	@ src/strings.c:1016 gText_Accept (+1 aliases)
	.globl gText_Rom_5DC126
gText_Rom_5DC126: @ 0x085DC126
	.string "うけとる$"
	.if (. - gText_Rom_5DC126) > 0x5
	.error "gText_Rom_5DC126 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC126) < 0x5
	.space 0x5 - (. - gText_Rom_5DC126)
	.endif
	.globl gUnknown_85DC12B
gUnknown_85DC12B: @ 0x085DC12B

	@ src/strings.c:1017 gText_AcceptThisPkmn
	.globl gText_Rom_5DC12B
gText_Rom_5DC12B: @ 0x085DC12B
	.string "このポケモンを うけとりますか?$"
	.if (. - gText_Rom_5DC12B) > 0x11
	.error "gText_Rom_5DC12B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC12B) < 0x11
	.space 0x11 - (. - gText_Rom_5DC12B)
	.endif
	.globl gUnknown_85DC13C
gUnknown_85DC13C: @ 0x085DC13C

	@ asm/battle_factory_screen.s:8862 sub_0819E7FC
	.globl gText_Rom_5DC13C
gText_Rom_5DC13C: @ 0x085DC13C
	.string "　　　　$"
	.if (. - gText_Rom_5DC13C) > 0x5
	.error "gText_Rom_5DC13C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC13C) < 0x5
	.space 0x5 - (. - gText_Rom_5DC13C)
	.endif
	.globl gUnknown_85DC141
gUnknown_85DC141: @ 0x085DC141

	@ src/strings.c:1019 gText_SamePkmnInPartyAlready
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5DC141
gText_Rom_5DC141: @ 0x085DC141
	.string "てもちに おなじ ポケモンが います!$"
	.if (. - gText_Rom_5DC141) != 0x14
	.error "gText_Rom_5DC141 must retain its original byte length"
	.endif
	.globl gText_Rom_5DC146
	.set gText_Rom_5DC146, gText_Rom_5DC141 + 0x5
	.incbin "baserom.gba", 0x5dc155, 0x3
	.globl gUnknown_85DC158
gUnknown_85DC158: @ 0x085DC158
	.incbin "baserom.gba", 0x5dc158, 0xc
	.globl gUnknown_85DC164
gUnknown_85DC164: @ 0x085DC164
	.incbin "baserom.gba", 0x5dc164, 0x10
	.globl gUnknown_85DC174
gUnknown_85DC174: @ 0x085DC174
	.incbin "baserom.gba", 0x5dc174, 0x50
	.globl gUnknown_85DC1C4
gUnknown_85DC1C4: @ 0x085DC1C4
	.incbin "baserom.gba", 0x5dc1c4, 0xa
	.globl gUnknown_85DC1CE
gUnknown_85DC1CE: @ 0x085DC1CE
	.incbin "baserom.gba", 0x5dc1ce, 0x3
	.globl gUnknown_85DC1D1
gUnknown_85DC1D1: @ 0x085DC1D1
	.incbin "baserom.gba", 0x5dc1d1, 0x3
	.globl gUnknown_85DC1D4
gUnknown_85DC1D4: @ 0x085DC1D4
	.incbin "baserom.gba", 0x5dc1d4, 0x20
	.globl gUnknown_85DC1F4
gUnknown_85DC1F4: @ 0x085DC1F4
	.incbin "baserom.gba", 0x5dc1f4, 0x28
	.globl gUnknown_85DC21C
gUnknown_85DC21C: @ 0x085DC21C

	@ src/data/battle_frontier/apprentice.h:300 apprentice_line_300
	.globl gText_Rom_5DC21C
gText_Rom_5DC21C: @ 0x085DC21C
	.string "サダヒロ$"
	.if (. - gText_Rom_5DC21C) > 0x5
	.error "gText_Rom_5DC21C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC21C) < 0x5
	.space 0x5 - (. - gText_Rom_5DC21C)
	.endif
	.incbin "baserom.gba", 0x5dc221, 0x7
	.globl gUnknown_85DC228
gUnknown_85DC228: @ 0x085DC228
	.incbin "baserom.gba", 0x5dc228, 0x16
	.globl gUnknown_85DC23E
gUnknown_85DC23E: @ 0x085DC23E
	.incbin "baserom.gba", 0x5dc23e, 0xe

	@ src/data/battle_frontier/apprentice.h:308 apprentice_line_308
	.globl gText_Rom_5DC24C
gText_Rom_5DC24C: @ 0x085DC24C
	.string "ヒロオ$"
	.if (. - gText_Rom_5DC24C) > 0x4
	.error "gText_Rom_5DC24C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC24C) < 0x4
	.space 0x4 - (. - gText_Rom_5DC24C)
	.endif
	.incbin "baserom.gba", 0x5dc250, 0x2c

	@ src/data/battle_frontier/apprentice.h:316 apprentice_line_316
	.globl gText_Rom_5DC27C
gText_Rom_5DC27C: @ 0x085DC27C
	.string "ケイジ$"
	.if (. - gText_Rom_5DC27C) > 0x4
	.error "gText_Rom_5DC27C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC27C) < 0x4
	.space 0x4 - (. - gText_Rom_5DC27C)
	.endif
	.incbin "baserom.gba", 0x5dc280, 0x5c

	@ src/data/battle_frontier/apprentice.h:332 apprentice_line_332
	.globl gText_Rom_5DC2DC
gText_Rom_5DC2DC: @ 0x085DC2DC
	.string "ヨウカ$"
	.if (. - gText_Rom_5DC2DC) > 0x4
	.error "gText_Rom_5DC2DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC2DC) < 0x4
	.space 0x4 - (. - gText_Rom_5DC2DC)
	.endif
	.incbin "baserom.gba", 0x5dc2e0, 0x2c

	@ src/data/battle_frontier/apprentice.h:340 apprentice_line_340
	.globl gText_Rom_5DC30C
gText_Rom_5DC30C: @ 0x085DC30C
	.string "ヤスシ$"
	.if (. - gText_Rom_5DC30C) > 0x4
	.error "gText_Rom_5DC30C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC30C) < 0x4
	.space 0x4 - (. - gText_Rom_5DC30C)
	.endif
	.incbin "baserom.gba", 0x5dc310, 0x2c

	@ src/data/battle_frontier/apprentice.h:348 apprentice_line_348
	.globl gText_Rom_5DC33C
gText_Rom_5DC33C: @ 0x085DC33C
	.string "ミサオ$"
	.if (. - gText_Rom_5DC33C) > 0x4
	.error "gText_Rom_5DC33C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC33C) < 0x4
	.space 0x4 - (. - gText_Rom_5DC33C)
	.endif
	.incbin "baserom.gba", 0x5dc340, 0x2c

	@ src/data/battle_frontier/apprentice.h:356 apprentice_line_356
	.globl gText_Rom_5DC36C
gText_Rom_5DC36C: @ 0x085DC36C
	.string "カズサ$"
	.if (. - gText_Rom_5DC36C) > 0x4
	.error "gText_Rom_5DC36C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC36C) < 0x4
	.space 0x4 - (. - gText_Rom_5DC36C)
	.endif
	.incbin "baserom.gba", 0x5dc370, 0x2c

	@ src/data/battle_frontier/apprentice.h:364 apprentice_line_364
	.globl gText_Rom_5DC39C
gText_Rom_5DC39C: @ 0x085DC39C
	.string "スミレ$"
	.if (. - gText_Rom_5DC39C) > 0x4
	.error "gText_Rom_5DC39C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC39C) < 0x4
	.space 0x4 - (. - gText_Rom_5DC39C)
	.endif
	.incbin "baserom.gba", 0x5dc3a0, 0x2c

	@ src/data/battle_frontier/apprentice.h:372 apprentice_line_372
	.globl gText_Rom_5DC3CC
gText_Rom_5DC3CC: @ 0x085DC3CC
	.string "アキノリ$"
	.if (. - gText_Rom_5DC3CC) > 0x5
	.error "gText_Rom_5DC3CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC3CC) < 0x5
	.space 0x5 - (. - gText_Rom_5DC3CC)
	.endif
	.incbin "baserom.gba", 0x5dc3d1, 0x2b

	@ src/data/battle_frontier/apprentice.h:380 apprentice_line_380
	.globl gText_Rom_5DC3FC
gText_Rom_5DC3FC: @ 0x085DC3FC
	.string "トウゾウ$"
	.if (. - gText_Rom_5DC3FC) > 0x5
	.error "gText_Rom_5DC3FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC3FC) < 0x5
	.space 0x5 - (. - gText_Rom_5DC3FC)
	.endif
	.incbin "baserom.gba", 0x5dc401, 0x2b

	@ src/data/battle_frontier/apprentice.h:388 apprentice_line_388
	.globl gText_Rom_5DC42C
gText_Rom_5DC42C: @ 0x085DC42C
	.string "セイヤ$"
	.if (. - gText_Rom_5DC42C) > 0x4
	.error "gText_Rom_5DC42C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC42C) < 0x4
	.space 0x4 - (. - gText_Rom_5DC42C)
	.endif
	.incbin "baserom.gba", 0x5dc430, 0x2c

	@ src/data/battle_frontier/apprentice.h:396 apprentice_line_396
	.globl gText_Rom_5DC45C
gText_Rom_5DC45C: @ 0x085DC45C
	.string "リュウジ$"
	.if (. - gText_Rom_5DC45C) > 0x5
	.error "gText_Rom_5DC45C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC45C) < 0x5
	.space 0x5 - (. - gText_Rom_5DC45C)
	.endif
	.incbin "baserom.gba", 0x5dc461, 0x2b

	@ src/data/battle_frontier/apprentice.h:404 apprentice_line_404
	.globl gText_Rom_5DC48C
gText_Rom_5DC48C: @ 0x085DC48C
	.string "カツアキ$"
	.if (. - gText_Rom_5DC48C) > 0x5
	.error "gText_Rom_5DC48C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC48C) < 0x5
	.space 0x5 - (. - gText_Rom_5DC48C)
	.endif
	.incbin "baserom.gba", 0x5dc491, 0x2b

	@ src/data/battle_frontier/apprentice.h:412 apprentice_line_412
	.globl gText_Rom_5DC4BC
gText_Rom_5DC4BC: @ 0x085DC4BC
	.string "トシミツ$"
	.if (. - gText_Rom_5DC4BC) > 0x5
	.error "gText_Rom_5DC4BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC4BC) < 0x5
	.space 0x5 - (. - gText_Rom_5DC4BC)
	.endif
	.incbin "baserom.gba", 0x5dc4c1, 0x2b

	@ src/data/battle_frontier/apprentice.h:420 apprentice_line_420
	.globl gText_Rom_5DC4EC
gText_Rom_5DC4EC: @ 0x085DC4EC
	.string "ローウェン$"
	.if (. - gText_Rom_5DC4EC) > 0x6
	.error "gText_Rom_5DC4EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC4EC) < 0x6
	.space 0x6 - (. - gText_Rom_5DC4EC)
	.endif
	.incbin "baserom.gba", 0x5dc4f2, 0x2a
	.globl gUnknown_85DC51C
gUnknown_85DC51C: @ 0x085DC51C
	.incbin "baserom.gba", 0x5dc51c, 0x100
	.globl gUnknown_85DC61C
gUnknown_85DC61C: @ 0x085DC61C
	.incbin "baserom.gba", 0x5dc61c, 0x80
	.globl gUnknown_85DC69C
gUnknown_85DC69C: @ 0x085DC69C
	.incbin "baserom.gba", 0x5dc69c, 0x140
	.globl gUnknown_85DC7DC
gUnknown_85DC7DC: @ 0x085DC7DC
	.incbin "baserom.gba", 0x5dc7dc, 0x80
	.globl gUnknown_85DC85C
gUnknown_85DC85C: @ 0x085DC85C
	.incbin "baserom.gba", 0x5dc85c, 0x80
	.globl gUnknown_85DC8DC
gUnknown_85DC8DC: @ 0x085DC8DC
	.incbin "baserom.gba", 0x5dc8dc, 0x80
	.globl gUnknown_85DC95C
gUnknown_85DC95C: @ 0x085DC95C
	.incbin "baserom.gba", 0x5dc95c, 0x40
	.globl gUnknown_85DC99C
gUnknown_85DC99C: @ 0x085DC99C
	.incbin "baserom.gba", 0x5dc99c, 0x163
	.globl gUnknown_85DCAFF
gUnknown_85DCAFF: @ 0x085DCAFF
	.incbin "baserom.gba", 0x5dcaff, 0xd
	.globl gUnknown_85DCB0C
gUnknown_85DCB0C: @ 0x085DCB0C
	.incbin "baserom.gba", 0x5dcb0c, 0x68
	.globl gUnknown_85DCB74
gUnknown_85DCB74: @ 0x085DCB74
	.incbin "baserom.gba", 0x5dcb74, 0x8
	.globl gUnknown_85DCB7C
gUnknown_85DCB7C: @ 0x085DCB7C
	.incbin "baserom.gba", 0x5dcb7c, 0x1c
	.globl gUnknown_85DCB98
gUnknown_85DCB98: @ 0x085DCB98
	.incbin "baserom.gba", 0x5dcb98, 0xc
	.globl gUnknown_85DCBA4
gUnknown_85DCBA4: @ 0x085DCBA4
	.incbin "baserom.gba", 0x5dcba4, 0x33c
	.globl gUnknown_85DCEE0
gUnknown_85DCEE0: @ 0x085DCEE0
	.incbin "baserom.gba", 0x5dcee0, 0x348
	.globl gUnknown_85DD228
gUnknown_85DD228: @ 0x085DD228
	.incbin "baserom.gba", 0x5dd228, 0x1c
	.globl gUnknown_85DD244
gUnknown_85DD244: @ 0x085DD244
	.incbin "baserom.gba", 0x5dd244, 0x5c
	.globl gUnknown_85DD2A0
gUnknown_85DD2A0: @ 0x085DD2A0
	.incbin "baserom.gba", 0x5dd2a0, 0x8
	.globl gUnknown_85DD2A8
gUnknown_85DD2A8: @ 0x085DD2A8
	.incbin "baserom.gba", 0x5dd2a8, 0x8
	.globl gUnknown_85DD2B0
gUnknown_85DD2B0: @ 0x085DD2B0
	.incbin "baserom.gba", 0x5dd2b0, 0x8
	.globl gUnknown_85DD2B8
gUnknown_85DD2B8: @ 0x085DD2B8
	.incbin "baserom.gba", 0x5dd2b8, 0x8
	.globl gUnknown_85DD2C0
gUnknown_85DD2C0: @ 0x085DD2C0
	.incbin "baserom.gba", 0x5dd2c0, 0x8
	.globl gUnknown_85DD2C8
gUnknown_85DD2C8: @ 0x085DD2C8
	.incbin "baserom.gba", 0x5dd2c8, 0x8
	.globl gUnknown_85DD2D0
gUnknown_85DD2D0: @ 0x085DD2D0
	.incbin "baserom.gba", 0x5dd2d0, 0x8
	.globl gUnknown_85DD2D8
gUnknown_85DD2D8: @ 0x085DD2D8
	.incbin "baserom.gba", 0x5dd2d8, 0x8
	.globl gUnknown_85DD2E0
gUnknown_85DD2E0: @ 0x085DD2E0
	.incbin "baserom.gba", 0x5dd2e0, 0x8
	.globl gUnknown_85DD2E8
gUnknown_85DD2E8: @ 0x085DD2E8

	@ src/data/easy_chat/easy_chat_group_voices.h:52 easy_chat_group_voices_line_52 (+3 aliases)
	.globl gText_Rom_5DD2E8
gText_Rom_5DD2E8: @ 0x085DD2E8
	.string "ーーー$"
	.if (. - gText_Rom_5DD2E8) > 0x4
	.error "gText_Rom_5DD2E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD2E8) < 0x4
	.space 0x4 - (. - gText_Rom_5DD2E8)
	.endif
	.globl gUnknown_85DD2EC
gUnknown_85DD2EC: @ 0x085DD2EC

	@ asm/frontier_util.s:847 ShowTowerResultsWindow
	.globl gText_Rom_5DD2EC
gText_Rom_5DD2EC: @ 0x085DD2EC
	.string "　{0xFD}{0x01}　の　シングル　バトルルーム　せいせき$"
	.if (. - gText_Rom_5DD2EC) > 0x17
	.error "gText_Rom_5DD2EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD2EC) < 0x17
	.space 0x17 - (. - gText_Rom_5DD2EC)
	.endif
	.globl gUnknown_85DD303
gUnknown_85DD303: @ 0x085DD303

	@ asm/frontier_util.s:859 ShowTowerResultsWindow
	.globl gText_Rom_5DD303
gText_Rom_5DD303: @ 0x085DD303
	.string "　　{0xFD}{0x01}　の　ダブル　バトルルーム　せいせき$"
	.if (. - gText_Rom_5DD303) > 0x17
	.error "gText_Rom_5DD303 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD303) < 0x17
	.space 0x17 - (. - gText_Rom_5DD303)
	.endif
	.globl gUnknown_85DD31A
gUnknown_85DD31A: @ 0x085DD31A

	@ asm/frontier_util.s:869 ShowTowerResultsWindow
	.globl gText_Rom_5DD31A
gText_Rom_5DD31A: @ 0x085DD31A
	.string "　　{0xFD}{0x01}　の　マルチ　バトルルーム　せいせき$"
	.if (. - gText_Rom_5DD31A) > 0x17
	.error "gText_Rom_5DD31A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD31A) < 0x17
	.space 0x17 - (. - gText_Rom_5DD31A)
	.endif
	.globl gUnknown_85DD331
gUnknown_85DD331: @ 0x085DD331

	@ asm/frontier_util.s:877 ShowTowerResultsWindow
	.globl gText_Rom_5DD331
gText_Rom_5DD331: @ 0x085DD331
	.string "{0xFD}{0x01}　の　つうしんマルチ　バトルルーム　せいせき$"
	.if (. - gText_Rom_5DD331) > 0x19
	.error "gText_Rom_5DD331 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD331) < 0x19
	.space 0x19 - (. - gText_Rom_5DD331)
	.endif
	.globl gUnknown_85DD34A
gUnknown_85DD34A: @ 0x085DD34A

	@ asm/frontier_util.s:1165 ShowDomeResultsWindow
	.globl gText_Rom_5DD34A
gText_Rom_5DD34A: @ 0x085DD34A
	.string "{0xFD}{0x01}　の　シングル　バトルトーナメント　せいせき$"
	.if (. - gText_Rom_5DD34A) > 0x19
	.error "gText_Rom_5DD34A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD34A) < 0x19
	.space 0x19 - (. - gText_Rom_5DD34A)
	.endif
	.globl gUnknown_85DD363
gUnknown_85DD363: @ 0x085DD363

	@ asm/frontier_util.s:1175 ShowDomeResultsWindow
	.globl gText_Rom_5DD363
gText_Rom_5DD363: @ 0x085DD363
	.string "{0xFD}{0x01}　の　ダブル　バトルトーナメント　せいせき$"
	.if (. - gText_Rom_5DD363) > 0x18
	.error "gText_Rom_5DD363 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD363) < 0x18
	.space 0x18 - (. - gText_Rom_5DD363)
	.endif
	.globl gUnknown_85DD37B
gUnknown_85DD37B: @ 0x085DD37B

	@ asm/frontier_util.s:1539 ShowPalaceResultsWindow
	.globl gText_Rom_5DD37B
gText_Rom_5DD37B: @ 0x085DD37B
	.string "{0xFD}{0x01}　の　シングル　バトルホール　せいせき$"
	.if (. - gText_Rom_5DD37B) > 0x16
	.error "gText_Rom_5DD37B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD37B) < 0x16
	.space 0x16 - (. - gText_Rom_5DD37B)
	.endif
	.globl gUnknown_85DD391
gUnknown_85DD391: @ 0x085DD391

	@ asm/frontier_util.s:1549 ShowPalaceResultsWindow
	.globl gText_Rom_5DD391
gText_Rom_5DD391: @ 0x085DD391
	.string "{0xFD}{0x01}　の　ダブル　バトルホール　せいせき$"
	.if (. - gText_Rom_5DD391) > 0x15
	.error "gText_Rom_5DD391 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD391) < 0x15
	.space 0x15 - (. - gText_Rom_5DD391)
	.endif
	.globl gUnknown_85DD3A6
gUnknown_85DD3A6: @ 0x085DD3A6

	@ asm/frontier_util.s:1808 ShowPikeResultsWindow
	.globl gText_Rom_5DD3A6
gText_Rom_5DD3A6: @ 0x085DD3A6
	.string "{0xFD}{0x01}　の　バトルゲーム　せいせき$"
	.if (. - gText_Rom_5DD3A6) > 0x11
	.error "gText_Rom_5DD3A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD3A6) < 0x11
	.space 0x11 - (. - gText_Rom_5DD3A6)
	.endif
	.globl gUnknown_85DD3B7
gUnknown_85DD3B7: @ 0x085DD3B7

	@ asm/frontier_util.s:2156 ShowArenaResultsWindow
	.globl gText_Rom_5DD3B7
gText_Rom_5DD3B7: @ 0x085DD3B7
	.string "{0xFD}{0x01}　の　かちぬきチームバトル　せいせき$"
	.if (. - gText_Rom_5DD3B7) > 0x15
	.error "gText_Rom_5DD3B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD3B7) < 0x15
	.space 0x15 - (. - gText_Rom_5DD3B7)
	.endif
	.globl gUnknown_85DD3CC
gUnknown_85DD3CC: @ 0x085DD3CC

	@ asm/frontier_util.s:2525 ShowFactoryResultsWindow
	.globl gText_Rom_5DD3CC
gText_Rom_5DD3CC: @ 0x085DD3CC
	.string "{0xFD}{0x01}　の　バトルトレード　シングル　せいせき$"
	.if (. - gText_Rom_5DD3CC) > 0x17
	.error "gText_Rom_5DD3CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD3CC) < 0x17
	.space 0x17 - (. - gText_Rom_5DD3CC)
	.endif
	.globl gUnknown_85DD3E3
gUnknown_85DD3E3: @ 0x085DD3E3

	@ asm/frontier_util.s:2535 ShowFactoryResultsWindow
	.globl gText_Rom_5DD3E3
gText_Rom_5DD3E3: @ 0x085DD3E3
	.string "{0xFD}{0x01}　の　バトルトレード　ダブル　せいせき$"
	.if (. - gText_Rom_5DD3E3) > 0x16
	.error "gText_Rom_5DD3E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD3E3) < 0x16
	.space 0x16 - (. - gText_Rom_5DD3E3)
	.endif
	.globl gUnknown_85DD3F9
gUnknown_85DD3F9: @ 0x085DD3F9

	@ asm/frontier_util.s:2826 ShowPyramidResultsWindow
	.globl gText_Rom_5DD3F9
gText_Rom_5DD3F9: @ 0x085DD3F9
	.string "{0xFD}{0x01}　の　バトルアドベンチャー　せいせき$"
	.if (. - gText_Rom_5DD3F9) > 0x15
	.error "gText_Rom_5DD3F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD3F9) < 0x15
	.space 0x15 - (. - gText_Rom_5DD3F9)
	.endif
	.globl gUnknown_85DD40E
gUnknown_85DD40E: @ 0x085DD40E

	@ src/strings.c:890 gText_Lv502 (+1 aliases)
	.globl gText_Rom_5DD40E
gText_Rom_5DD40E: @ 0x085DD40E
	.string "レベル 50$"
	.if (. - gText_Rom_5DD40E) > 0x7
	.error "gText_Rom_5DD40E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD40E) < 0x7
	.space 0x7 - (. - gText_Rom_5DD40E)
	.endif
	.globl gUnknown_85DD415
gUnknown_85DD415: @ 0x085DD415

	@ src/data/script_menu.h:644 script_menu_line_644 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5DD415
gText_Rom_5DD415: @ 0x085DD415
	.string "オープンレベル$"
	.if (. - gText_Rom_5DD415) != 0x8
	.error "gText_Rom_5DD415 must retain its original byte length"
	.endif
	.globl gText_Rom_5DD419
	.set gText_Rom_5DD419, gText_Rom_5DD415 + 0x4
	.globl gUnknown_85DD41D
gUnknown_85DD41D: @ 0x085DD41D

	@ src/strings.c:892 gText_WinStreak
	.globl gText_Rom_5DD41D
gText_Rom_5DD41D: @ 0x085DD41D
	.string "{STR_VAR_1}れんしょう$"
	.if (. - gText_Rom_5DD41D) > 0x8
	.error "gText_Rom_5DD41D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD41D) < 0x8
	.space 0x8 - (. - gText_Rom_5DD41D)
	.endif
	.globl gUnknown_85DD425
gUnknown_85DD425: @ 0x085DD425

	@ src/strings.c:893 gText_Current
	.globl gText_Rom_5DD425
gText_Rom_5DD425: @ 0x085DD425
	.string "げんざい$"
	.if (. - gText_Rom_5DD425) > 0x5
	.error "gText_Rom_5DD425 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD425) < 0x5
	.space 0x5 - (. - gText_Rom_5DD425)
	.endif
	.globl gUnknown_85DD42A
gUnknown_85DD42A: @ 0x085DD42A

	@ src/data/easy_chat/easy_chat_group_conditions.h:172 easy_chat_group_conditions_line_172 (+1 aliases)
	.globl gText_Rom_5DD42A
gText_Rom_5DD42A: @ 0x085DD42A
	.string "さいこう$"
	.if (. - gText_Rom_5DD42A) > 0x5
	.error "gText_Rom_5DD42A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD42A) < 0x5
	.space 0x5 - (. - gText_Rom_5DD42A)
	.endif
	.globl gUnknown_85DD42F
gUnknown_85DD42F: @ 0x085DD42F

	@ src/strings.c:895 gText_Prev
	.globl gText_Rom_5DD42F
gText_Rom_5DD42F: @ 0x085DD42F
	.string "ぜんかい$"
	.if (. - gText_Rom_5DD42F) > 0x5
	.error "gText_Rom_5DD42F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD42F) < 0x5
	.space 0x5 - (. - gText_Rom_5DD42F)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:244 easy_chat_group_battle_line_244 (+3 aliases)
	.globl gText_Rom_5DD434
gText_Rom_5DD434: @ 0x085DD434
	.string "バトル$"
	.if (. - gText_Rom_5DD434) > 0x4
	.error "gText_Rom_5DD434 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD434) < 0x4
	.space 0x4 - (. - gText_Rom_5DD434)
	.endif
	.globl gUnknown_85DD438
gUnknown_85DD438: @ 0x085DD438

	@ src/strings.c:896 gText_RentalSwap
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5DD438
gText_Rom_5DD438: @ 0x085DD438
	.string "レンタル/こうかん$"
	.if (. - gText_Rom_5DD438) != 0xa
	.error "gText_Rom_5DD438 must retain its original byte length"
	.endif
	.globl gText_Rom_5DD43D
	.set gText_Rom_5DD43D, gText_Rom_5DD438 + 0x5
	.globl gUnknown_85DD442
gUnknown_85DD442: @ 0x085DD442

	@ src/strings.c:897 gText_Total
	.globl gText_Rom_5DD442
gText_Rom_5DD442: @ 0x085DD442
	.string "つうさん$"
	.if (. - gText_Rom_5DD442) > 0x5
	.error "gText_Rom_5DD442 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD442) < 0x5
	.space 0x5 - (. - gText_Rom_5DD442)
	.endif
	.globl gUnknown_85DD447
gUnknown_85DD447: @ 0x085DD447

	@ src/strings.c:898 gText_ClearStreak
	.globl gText_Rom_5DD447
gText_Rom_5DD447: @ 0x085DD447
	.string "{STR_VAR_1}れんぱ$"
	.if (. - gText_Rom_5DD447) > 0x6
	.error "gText_Rom_5DD447 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD447) < 0x6
	.space 0x6 - (. - gText_Rom_5DD447)
	.endif
	.globl gUnknown_85DD44D
gUnknown_85DD44D: @ 0x085DD44D

	@ src/strings.c:899 gText_Championships
	.globl gText_Rom_5DD44D
gText_Rom_5DD44D: @ 0x085DD44D
	.string "{STR_VAR_1}かい ゆうしょう$"
	.if (. - gText_Rom_5DD44D) > 0xb
	.error "gText_Rom_5DD44D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD44D) < 0xb
	.space 0xb - (. - gText_Rom_5DD44D)
	.endif
	.globl gUnknown_85DD458
gUnknown_85DD458: @ 0x085DD458

	@ src/strings.c:900 gText_RoomsCleared
	.globl gText_Rom_5DD458
gText_Rom_5DD458: @ 0x085DD458
	.string "{STR_VAR_1}へや とっぱ$"
	.if (. - gText_Rom_5DD458) > 0x9
	.error "gText_Rom_5DD458 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD458) < 0x9
	.space 0x9 - (. - gText_Rom_5DD458)
	.endif
	.globl gUnknown_85DD461
gUnknown_85DD461: @ 0x085DD461
	.incbin "baserom.gba", 0x5dd461, 0x9
	.globl gUnknown_85DD46A
gUnknown_85DD46A: @ 0x085DD46A

	@ src/strings.c:902 gText_KOsInARow
	.globl gText_Rom_5DD46A
gText_Rom_5DD46A: @ 0x085DD46A
	.string "{STR_VAR_1}にんぬき$"
	.if (. - gText_Rom_5DD46A) > 0x7
	.error "gText_Rom_5DD46A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD46A) < 0x7
	.space 0x7 - (. - gText_Rom_5DD46A)
	.endif
	.globl gUnknown_85DD471
gUnknown_85DD471: @ 0x085DD471

	@ src/strings.c:903 gText_TimesVar1
	.globl gText_Rom_5DD471
gText_Rom_5DD471: @ 0x085DD471
	.string "{STR_VAR_1}かい$"
	.if (. - gText_Rom_5DD471) > 0x5
	.error "gText_Rom_5DD471 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD471) < 0x5
	.space 0x5 - (. - gText_Rom_5DD471)
	.endif
	.globl gUnknown_85DD476
gUnknown_85DD476: @ 0x085DD476

	@ src/strings.c:904 gText_FloorsCleared
	.globl gText_Rom_5DD476
gText_Rom_5DD476: @ 0x085DD476
	.string "{STR_VAR_1}だん せいは$"
	.if (. - gText_Rom_5DD476) > 0x9
	.error "gText_Rom_5DD476 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD476) < 0x9
	.space 0x9 - (. - gText_Rom_5DD476)
	.endif
	.globl gUnknown_85DD47F
gUnknown_85DD47F: @ 0x085DD47F
	.incbin "baserom.gba", 0x5dd47f, 0xf
	.globl gUnknown_85DD48E
gUnknown_85DD48E: @ 0x085DD48E
	.incbin "baserom.gba", 0x5dd48e, 0x16
	.globl gUnknown_85DD4A4
gUnknown_85DD4A4: @ 0x085DD4A4
	.incbin "baserom.gba", 0x5dd4a4, 0x51

	@ src/strings.c:468 gText_Lv50
	.globl gText_Rom_5DD4F5
gText_Rom_5DD4F5: @ 0x085DD4F5
	.string "レベル50$"
	.if (. - gText_Rom_5DD4F5) > 0x6
	.error "gText_Rom_5DD4F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD4F5) < 0x6
	.space 0x6 - (. - gText_Rom_5DD4F5)
	.endif
	.incbin "baserom.gba", 0x5dd4fb, 0x1

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
	.incbin "baserom.gba", 0x5dd9cc, 0x180
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
	.globl gUnknown_85DDEE6
gUnknown_85DDEE6: @ 0x085DDEE6
	.incbin "baserom.gba", 0x5ddee6, 0x782
	.globl gUnknown_85DE668
gUnknown_85DE668: @ 0x085DE668
	.incbin "baserom.gba", 0x5de668, 0x7d0
	.globl gUnknown_85DEE38
gUnknown_85DEE38: @ 0x085DEE38
	.incbin "baserom.gba", 0x5dee38, 0x50
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
	.globl gUnknown_85E08C4
gUnknown_85E08C4: @ 0x085E08C4
	.incbin "baserom.gba", 0x5e08c4, 0x3c
	.globl gUnknown_85E0900
gUnknown_85E0900: @ 0x085E0900
	.incbin "baserom.gba", 0x5e0900, 0x670
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

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E804B
gText_Rom_5E804B: @ 0x085E804B
	.string "こうげき$"
	.if (. - gText_Rom_5E804B) > 0x5
	.error "gText_Rom_5E804B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E804B) < 0x5
	.space 0x5 - (. - gText_Rom_5E804B)
	.endif
	.incbin "baserom.gba", 0x5e8050, 0x6d

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E80BD
gText_Rom_5E80BD: @ 0x085E80BD
	.string "こうげき$"
	.if (. - gText_Rom_5E80BD) > 0x5
	.error "gText_Rom_5E80BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E80BD) < 0x5
	.space 0x5 - (. - gText_Rom_5E80BD)
	.endif
	.incbin "baserom.gba", 0x5e80c2, 0x36

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E80F8
gText_Rom_5E80F8: @ 0x085E80F8
	.string "こうげき$"
	.if (. - gText_Rom_5E80F8) > 0x5
	.error "gText_Rom_5E80F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E80F8) < 0x5
	.space 0x5 - (. - gText_Rom_5E80F8)
	.endif
	.incbin "baserom.gba", 0x5e80fd, 0x33

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E8130
gText_Rom_5E8130: @ 0x085E8130
	.string "こうげき$"
	.if (. - gText_Rom_5E8130) > 0x5
	.error "gText_Rom_5E8130 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8130) < 0x5
	.space 0x5 - (. - gText_Rom_5E8130)
	.endif
	.incbin "baserom.gba", 0x5e8135, 0x36

	@ src/data/script_menu.h:13 script_menu_line_13
	.globl gText_Rom_5E816B
gText_Rom_5E816B: @ 0x085E816B
	.string "はいる$"
	.if (. - gText_Rom_5E816B) > 0x4
	.error "gText_Rom_5E816B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E816B) < 0x4
	.space 0x4 - (. - gText_Rom_5E816B)
	.endif
	.incbin "baserom.gba", 0x5e816f, 0xd3

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E8242
gText_Rom_5E8242: @ 0x085E8242
	.string "こうげき$"
	.if (. - gText_Rom_5E8242) > 0x5
	.error "gText_Rom_5E8242 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8242) < 0x5
	.space 0x5 - (. - gText_Rom_5E8242)
	.endif
	.incbin "baserom.gba", 0x5e8247, 0x33

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E827A
gText_Rom_5E827A: @ 0x085E827A
	.string "こうげき$"
	.if (. - gText_Rom_5E827A) > 0x5
	.error "gText_Rom_5E827A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E827A) < 0x5
	.space 0x5 - (. - gText_Rom_5E827A)
	.endif
	.incbin "baserom.gba", 0x5e827f, 0x74

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E82F3
gText_Rom_5E82F3: @ 0x085E82F3
	.string "こうげき$"
	.if (. - gText_Rom_5E82F3) > 0x5
	.error "gText_Rom_5E82F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E82F3) < 0x5
	.space 0x5 - (. - gText_Rom_5E82F3)
	.endif
	.incbin "baserom.gba", 0x5e82f8, 0x2e

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5E8326
gText_Rom_5E8326: @ 0x085E8326
	.string "あげる$"
	.if (. - gText_Rom_5E8326) > 0x4
	.error "gText_Rom_5E8326 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8326) < 0x4
	.space 0x4 - (. - gText_Rom_5E8326)
	.endif
	.incbin "baserom.gba", 0x5e832a, 0x37

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E8361
gText_Rom_5E8361: @ 0x085E8361
	.string "こうげき$"
	.if (. - gText_Rom_5E8361) > 0x5
	.error "gText_Rom_5E8361 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8361) < 0x5
	.space 0x5 - (. - gText_Rom_5E8361)
	.endif
	.incbin "baserom.gba", 0x5e8366, 0x32

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E8398
gText_Rom_5E8398: @ 0x085E8398
	.string "こうげき$"
	.if (. - gText_Rom_5E8398) > 0x5
	.error "gText_Rom_5E8398 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8398) < 0x5
	.space 0x5 - (. - gText_Rom_5E8398)
	.endif
	.incbin "baserom.gba", 0x5e839d, 0x6d

	@ src/strings.c:1046 gText_Exit3 (+1 aliases)
	.globl gText_Rom_5E840A
gText_Rom_5E840A: @ 0x085E840A
	.string "おわる$"
	.if (. - gText_Rom_5E840A) > 0x4
	.error "gText_Rom_5E840A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E840A) < 0x4
	.space 0x4 - (. - gText_Rom_5E840A)
	.endif
	.incbin "baserom.gba", 0x5e840e, 0x33

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E8441
gText_Rom_5E8441: @ 0x085E8441
	.string "こうげき$"
	.if (. - gText_Rom_5E8441) > 0x5
	.error "gText_Rom_5E8441 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8441) < 0x5
	.space 0x5 - (. - gText_Rom_5E8441)
	.endif
	.incbin "baserom.gba", 0x5e8446, 0x36

	@ src/data/moves_info.h:504 moves_info_line_504
	.globl gText_Rom_5E847C
gText_Rom_5E847C: @ 0x085E847C
	.string "しめつける$"
	.if (. - gText_Rom_5E847C) > 0x6
	.error "gText_Rom_5E847C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E847C) < 0x6
	.space 0x6 - (. - gText_Rom_5E847C)
	.endif
	.incbin "baserom.gba", 0x5e8482, 0x2b

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E84AD
gText_Rom_5E84AD: @ 0x085E84AD
	.string "こうげき$"
	.if (. - gText_Rom_5E84AD) > 0x5
	.error "gText_Rom_5E84AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E84AD) < 0x5
	.space 0x5 - (. - gText_Rom_5E84AD)
	.endif
	.incbin "baserom.gba", 0x5e84b2, 0x36

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E84E8
gText_Rom_5E84E8: @ 0x085E84E8
	.string "こうげき$"
	.if (. - gText_Rom_5E84E8) > 0x5
	.error "gText_Rom_5E84E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E84E8) < 0x5
	.space 0x5 - (. - gText_Rom_5E84E8)
	.endif
	.incbin "baserom.gba", 0x5e84ed, 0x6a

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E8557
gText_Rom_5E8557: @ 0x085E8557
	.string "こうげき$"
	.if (. - gText_Rom_5E8557) > 0x5
	.error "gText_Rom_5E8557 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8557) < 0x5
	.space 0x5 - (. - gText_Rom_5E8557)
	.endif
	.incbin "baserom.gba", 0x5e855c, 0x36

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E8592
gText_Rom_5E8592: @ 0x085E8592
	.string "こうげき$"
	.if (. - gText_Rom_5E8592) > 0x5
	.error "gText_Rom_5E8592 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8592) < 0x5
	.space 0x5 - (. - gText_Rom_5E8592)
	.endif
	.incbin "baserom.gba", 0x5e8597, 0x10b

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E86A2
gText_Rom_5E86A2: @ 0x085E86A2
	.string "こうげき$"
	.if (. - gText_Rom_5E86A2) > 0x5
	.error "gText_Rom_5E86A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E86A2) < 0x5
	.space 0x5 - (. - gText_Rom_5E86A2)
	.endif
	.incbin "baserom.gba", 0x5e86a7, 0x38

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E86DF
gText_Rom_5E86DF: @ 0x085E86DF
	.string "こうげき$"
	.if (. - gText_Rom_5E86DF) > 0x5
	.error "gText_Rom_5E86DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E86DF) < 0x5
	.space 0x5 - (. - gText_Rom_5E86DF)
	.endif
	.incbin "baserom.gba", 0x5e86e4, 0x6a

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E874E
gText_Rom_5E874E: @ 0x085E874E
	.string "こうげき$"
	.if (. - gText_Rom_5E874E) > 0x5
	.error "gText_Rom_5E874E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E874E) < 0x5
	.space 0x5 - (. - gText_Rom_5E874E)
	.endif
	.incbin "baserom.gba", 0x5e8753, 0x70

	@ src/data/moves_info.h:504 moves_info_line_504
	.globl gText_Rom_5E87C3
gText_Rom_5E87C3: @ 0x085E87C3
	.string "しめつける$"
	.if (. - gText_Rom_5E87C3) > 0x6
	.error "gText_Rom_5E87C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E87C3) < 0x6
	.space 0x6 - (. - gText_Rom_5E87C3)
	.endif
	.incbin "baserom.gba", 0x5e87c9, 0x6c

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5E8835
gText_Rom_5E8835: @ 0x085E8835
	.string "しまう$"
	.if (. - gText_Rom_5E8835) > 0x4
	.error "gText_Rom_5E8835 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8835) < 0x4
	.space 0x4 - (. - gText_Rom_5E8835)
	.endif
	.incbin "baserom.gba", 0x5e8839, 0xd8

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E8911
gText_Rom_5E8911: @ 0x085E8911
	.string "こうげき$"
	.if (. - gText_Rom_5E8911) > 0x5
	.error "gText_Rom_5E8911 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8911) < 0x5
	.space 0x5 - (. - gText_Rom_5E8911)
	.endif
	.incbin "baserom.gba", 0x5e8916, 0x35

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E894B
gText_Rom_5E894B: @ 0x085E894B
	.string "こうげき$"
	.if (. - gText_Rom_5E894B) > 0x5
	.error "gText_Rom_5E894B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E894B) < 0x5
	.space 0x5 - (. - gText_Rom_5E894B)
	.endif
	.incbin "baserom.gba", 0x5e8950, 0xda

	@ src/strings.c:1046 gText_Exit3 (+1 aliases)
	.globl gText_Rom_5E8A2A
gText_Rom_5E8A2A: @ 0x085E8A2A
	.string "おわる$"
	.if (. - gText_Rom_5E8A2A) > 0x4
	.error "gText_Rom_5E8A2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8A2A) < 0x4
	.space 0x4 - (. - gText_Rom_5E8A2A)
	.endif
	.incbin "baserom.gba", 0x5e8a2e, 0x1e5

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E8C13
gText_Rom_5E8C13: @ 0x085E8C13
	.string "こうげき$"
	.if (. - gText_Rom_5E8C13) > 0x5
	.error "gText_Rom_5E8C13 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8C13) < 0x5
	.space 0x5 - (. - gText_Rom_5E8C13)
	.endif
	.incbin "baserom.gba", 0x5e8c18, 0x3f

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E8C57
gText_Rom_5E8C57: @ 0x085E8C57
	.string "こうげき$"
	.if (. - gText_Rom_5E8C57) > 0x5
	.error "gText_Rom_5E8C57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8C57) < 0x5
	.space 0x5 - (. - gText_Rom_5E8C57)
	.endif
	.incbin "baserom.gba", 0x5e8c5c, 0x33

	@ src/data/moves_info.h:530 moves_info_line_530
	.globl gText_Rom_5E8C8F
gText_Rom_5E8C8F: @ 0x085E8C8F
	.string "たたきつける$"
	.if (. - gText_Rom_5E8C8F) > 0x7
	.error "gText_Rom_5E8C8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8C8F) < 0x7
	.space 0x7 - (. - gText_Rom_5E8C8F)
	.endif
	.incbin "baserom.gba", 0x5e8c96, 0x14e

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5E8DE4
gText_Rom_5E8DE4: @ 0x085E8DE4
	.string "しまう$"
	.if (. - gText_Rom_5E8DE4) > 0x4
	.error "gText_Rom_5E8DE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8DE4) < 0x4
	.space 0x4 - (. - gText_Rom_5E8DE4)
	.endif
	.incbin "baserom.gba", 0x5e8de8, 0x2a

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E8E12
gText_Rom_5E8E12: @ 0x085E8E12
	.string "こうげき$"
	.if (. - gText_Rom_5E8E12) > 0x5
	.error "gText_Rom_5E8E12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8E12) < 0x5
	.space 0x5 - (. - gText_Rom_5E8E12)
	.endif
	.incbin "baserom.gba", 0x5e8e17, 0x14b

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E8F62
gText_Rom_5E8F62: @ 0x085E8F62
	.string "こうげき$"
	.if (. - gText_Rom_5E8F62) > 0x5
	.error "gText_Rom_5E8F62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8F62) < 0x5
	.space 0x5 - (. - gText_Rom_5E8F62)
	.endif
	.incbin "baserom.gba", 0x5e8f67, 0xab

	@ src/data/moves_info.h:1741 moves_info_line_1741
	.globl gText_Rom_5E9012
gText_Rom_5E9012: @ 0x085E9012
	.string "すいとる$"
	.if (. - gText_Rom_5E9012) > 0x5
	.error "gText_Rom_5E9012 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E9012) < 0x5
	.space 0x5 - (. - gText_Rom_5E9012)
	.endif
	.incbin "baserom.gba", 0x5e9017, 0x2e

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5E9045
gText_Rom_5E9045: @ 0x085E9045
	.string "あげる$"
	.if (. - gText_Rom_5E9045) > 0x4
	.error "gText_Rom_5E9045 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E9045) < 0x4
	.space 0x4 - (. - gText_Rom_5E9045)
	.endif
	.incbin "baserom.gba", 0x5e9049, 0x72

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E90BB
gText_Rom_5E90BB: @ 0x085E90BB
	.string "こうげき$"
	.if (. - gText_Rom_5E90BB) > 0x5
	.error "gText_Rom_5E90BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E90BB) < 0x5
	.space 0x5 - (. - gText_Rom_5E90BB)
	.endif
	.incbin "baserom.gba", 0x5e90c0, 0x63

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5E9123
gText_Rom_5E9123: @ 0x085E9123
	.string "しまう$"
	.if (. - gText_Rom_5E9123) > 0x4
	.error "gText_Rom_5E9123 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E9123) < 0x4
	.space 0x4 - (. - gText_Rom_5E9123)
	.endif
	.incbin "baserom.gba", 0x5e9127, 0x35

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5E915C
gText_Rom_5E915C: @ 0x085E915C
	.string "しまう$"
	.if (. - gText_Rom_5E915C) > 0x4
	.error "gText_Rom_5E915C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E915C) < 0x4
	.space 0x4 - (. - gText_Rom_5E915C)
	.endif
	.incbin "baserom.gba", 0x5e9160, 0x3d

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5E919D
gText_Rom_5E919D: @ 0x085E919D
	.string "しまう$"
	.if (. - gText_Rom_5E919D) > 0x4
	.error "gText_Rom_5E919D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E919D) < 0x4
	.space 0x4 - (. - gText_Rom_5E919D)
	.endif
	.incbin "baserom.gba", 0x5e91a1, 0x142

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5E92E3
gText_Rom_5E92E3: @ 0x085E92E3
	.string "しまう$"
	.if (. - gText_Rom_5E92E3) > 0x4
	.error "gText_Rom_5E92E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E92E3) < 0x4
	.space 0x4 - (. - gText_Rom_5E92E3)
	.endif
	.incbin "baserom.gba", 0x5e92e7, 0x68

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E934F
gText_Rom_5E934F: @ 0x085E934F
	.string "こうげき$"
	.if (. - gText_Rom_5E934F) > 0x5
	.error "gText_Rom_5E934F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E934F) < 0x5
	.space 0x5 - (. - gText_Rom_5E934F)
	.endif
	.incbin "baserom.gba", 0x5e9354, 0xac

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E9400
gText_Rom_5E9400: @ 0x085E9400
	.string "こうげき$"
	.if (. - gText_Rom_5E9400) > 0x5
	.error "gText_Rom_5E9400 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E9400) < 0x5
	.space 0x5 - (. - gText_Rom_5E9400)
	.endif
	.incbin "baserom.gba", 0x5e9405, 0x114

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5E9519
gText_Rom_5E9519: @ 0x085E9519
	.string "あげる$"
	.if (. - gText_Rom_5E9519) > 0x4
	.error "gText_Rom_5E9519 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E9519) < 0x4
	.space 0x4 - (. - gText_Rom_5E9519)
	.endif
	.incbin "baserom.gba", 0x5e951d, 0x34

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5E9551
gText_Rom_5E9551: @ 0x085E9551
	.string "あげる$"
	.if (. - gText_Rom_5E9551) > 0x4
	.error "gText_Rom_5E9551 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E9551) < 0x4
	.space 0x4 - (. - gText_Rom_5E9551)
	.endif
	.incbin "baserom.gba", 0x5e9555, 0x17d

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5E96D2
gText_Rom_5E96D2: @ 0x085E96D2
	.string "あげる$"
	.if (. - gText_Rom_5E96D2) > 0x4
	.error "gText_Rom_5E96D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E96D2) < 0x4
	.space 0x4 - (. - gText_Rom_5E96D2)
	.endif
	.incbin "baserom.gba", 0x5e96d6, 0x6f

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5E9745
gText_Rom_5E9745: @ 0x085E9745
	.string "あげる$"
	.if (. - gText_Rom_5E9745) > 0x4
	.error "gText_Rom_5E9745 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E9745) < 0x4
	.space 0x4 - (. - gText_Rom_5E9745)
	.endif
	.incbin "baserom.gba", 0x5e9749, 0x33

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5E977C
gText_Rom_5E977C: @ 0x085E977C
	.string "あげる$"
	.if (. - gText_Rom_5E977C) > 0x4
	.error "gText_Rom_5E977C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E977C) < 0x4
	.space 0x4 - (. - gText_Rom_5E977C)
	.endif
	.incbin "baserom.gba", 0x5e9780, 0x6d

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5E97ED
gText_Rom_5E97ED: @ 0x085E97ED
	.string "しまう$"
	.if (. - gText_Rom_5E97ED) > 0x4
	.error "gText_Rom_5E97ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E97ED) < 0x4
	.space 0x4 - (. - gText_Rom_5E97ED)
	.endif
	.incbin "baserom.gba", 0x5e97f1, 0x2f

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5E9820
gText_Rom_5E9820: @ 0x085E9820
	.string "あげる$"
	.if (. - gText_Rom_5E9820) > 0x4
	.error "gText_Rom_5E9820 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E9820) < 0x4
	.space 0x4 - (. - gText_Rom_5E9820)
	.endif
	.incbin "baserom.gba", 0x5e9824, 0x3b

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5E985F
gText_Rom_5E985F: @ 0x085E985F
	.string "あげる$"
	.if (. - gText_Rom_5E985F) > 0x4
	.error "gText_Rom_5E985F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E985F) < 0x4
	.space 0x4 - (. - gText_Rom_5E985F)
	.endif
	.incbin "baserom.gba", 0x5e9863, 0x33

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5E9896
gText_Rom_5E9896: @ 0x085E9896
	.string "あげる$"
	.if (. - gText_Rom_5E9896) > 0x4
	.error "gText_Rom_5E9896 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E9896) < 0x4
	.space 0x4 - (. - gText_Rom_5E9896)
	.endif
	.incbin "baserom.gba", 0x5e989a, 0x182

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E9A1C
gText_Rom_5E9A1C: @ 0x085E9A1C
	.string "こうげき$"
	.if (. - gText_Rom_5E9A1C) > 0x5
	.error "gText_Rom_5E9A1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E9A1C) < 0x5
	.space 0x5 - (. - gText_Rom_5E9A1C)
	.endif
	.incbin "baserom.gba", 0x5e9a21, 0x69

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E9A8A
gText_Rom_5E9A8A: @ 0x085E9A8A
	.string "こうげき$"
	.if (. - gText_Rom_5E9A8A) > 0x5
	.error "gText_Rom_5E9A8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E9A8A) < 0x5
	.space 0x5 - (. - gText_Rom_5E9A8A)
	.endif
	.incbin "baserom.gba", 0x5e9a8f, 0x186

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5E9C15
gText_Rom_5E9C15: @ 0x085E9C15
	.string "しまう$"
	.if (. - gText_Rom_5E9C15) > 0x4
	.error "gText_Rom_5E9C15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E9C15) < 0x4
	.space 0x4 - (. - gText_Rom_5E9C15)
	.endif
	.incbin "baserom.gba", 0x5e9c19, 0x71

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E9C8A
gText_Rom_5E9C8A: @ 0x085E9C8A
	.string "こうげき$"
	.if (. - gText_Rom_5E9C8A) > 0x5
	.error "gText_Rom_5E9C8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E9C8A) < 0x5
	.space 0x5 - (. - gText_Rom_5E9C8A)
	.endif
	.incbin "baserom.gba", 0x5e9c8f, 0x34

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E9CC3
gText_Rom_5E9CC3: @ 0x085E9CC3
	.string "こうげき$"
	.if (. - gText_Rom_5E9CC3) > 0x5
	.error "gText_Rom_5E9CC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E9CC3) < 0x5
	.space 0x5 - (. - gText_Rom_5E9CC3)
	.endif
	.incbin "baserom.gba", 0x5e9cc8, 0x69

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5E9D31
gText_Rom_5E9D31: @ 0x085E9D31
	.string "あげる$"
	.if (. - gText_Rom_5E9D31) > 0x4
	.error "gText_Rom_5E9D31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E9D31) < 0x4
	.space 0x4 - (. - gText_Rom_5E9D31)
	.endif
	.incbin "baserom.gba", 0x5e9d35, 0xde

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5E9E13
gText_Rom_5E9E13: @ 0x085E9E13
	.string "しまう$"
	.if (. - gText_Rom_5E9E13) > 0x4
	.error "gText_Rom_5E9E13 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E9E13) < 0x4
	.space 0x4 - (. - gText_Rom_5E9E13)
	.endif
	.incbin "baserom.gba", 0x5e9e17, 0xa2

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E9EB9
gText_Rom_5E9EB9: @ 0x085E9EB9
	.string "こうげき$"
	.if (. - gText_Rom_5E9EB9) > 0x5
	.error "gText_Rom_5E9EB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E9EB9) < 0x5
	.space 0x5 - (. - gText_Rom_5E9EB9)
	.endif
	.incbin "baserom.gba", 0x5e9ebe, 0x69

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5E9F27
gText_Rom_5E9F27: @ 0x085E9F27
	.string "しまう$"
	.if (. - gText_Rom_5E9F27) > 0x4
	.error "gText_Rom_5E9F27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E9F27) < 0x4
	.space 0x4 - (. - gText_Rom_5E9F27)
	.endif
	.incbin "baserom.gba", 0x5e9f2b, 0x37

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E9F62
gText_Rom_5E9F62: @ 0x085E9F62
	.string "こうげき$"
	.if (. - gText_Rom_5E9F62) > 0x5
	.error "gText_Rom_5E9F62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E9F62) < 0x5
	.space 0x5 - (. - gText_Rom_5E9F62)
	.endif
	.incbin "baserom.gba", 0x5e9f67, 0x1ba

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5EA121
gText_Rom_5EA121: @ 0x085EA121
	.string "あげる$"
	.if (. - gText_Rom_5EA121) > 0x4
	.error "gText_Rom_5EA121 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EA121) < 0x4
	.space 0x4 - (. - gText_Rom_5EA121)
	.endif
	.incbin "baserom.gba", 0x5ea125, 0xa6

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5EA1CB
gText_Rom_5EA1CB: @ 0x085EA1CB
	.string "こうげき$"
	.if (. - gText_Rom_5EA1CB) > 0x5
	.error "gText_Rom_5EA1CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EA1CB) < 0x5
	.space 0x5 - (. - gText_Rom_5EA1CB)
	.endif
	.incbin "baserom.gba", 0x5ea1d0, 0x31

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5EA201
gText_Rom_5EA201: @ 0x085EA201
	.string "こうげき$"
	.if (. - gText_Rom_5EA201) > 0x5
	.error "gText_Rom_5EA201 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EA201) < 0x5
	.space 0x5 - (. - gText_Rom_5EA201)
	.endif
	.incbin "baserom.gba", 0x5ea206, 0xd7

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5EA2DD
gText_Rom_5EA2DD: @ 0x085EA2DD
	.string "あげる$"
	.if (. - gText_Rom_5EA2DD) > 0x4
	.error "gText_Rom_5EA2DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EA2DD) < 0x4
	.space 0x4 - (. - gText_Rom_5EA2DD)
	.endif
	.incbin "baserom.gba", 0x5ea2e1, 0x3a

	@ src/data/easy_chat/easy_chat_group_actions.h:118 easy_chat_group_actions_line_118
	.globl gText_Rom_5EA31B
gText_Rom_5EA31B: @ 0x085EA31B
	.string "かえる$"
	.if (. - gText_Rom_5EA31B) > 0x4
	.error "gText_Rom_5EA31B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EA31B) < 0x4
	.space 0x4 - (. - gText_Rom_5EA31B)
	.endif
	.incbin "baserom.gba", 0x5ea31f, 0x1f4

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5EA513
gText_Rom_5EA513: @ 0x085EA513
	.string "しまう$"
	.if (. - gText_Rom_5EA513) > 0x4
	.error "gText_Rom_5EA513 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EA513) < 0x4
	.space 0x4 - (. - gText_Rom_5EA513)
	.endif
	.incbin "baserom.gba", 0x5ea517, 0xda

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5EA5F1
gText_Rom_5EA5F1: @ 0x085EA5F1
	.string "こうげき$"
	.if (. - gText_Rom_5EA5F1) > 0x5
	.error "gText_Rom_5EA5F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EA5F1) < 0x5
	.space 0x5 - (. - gText_Rom_5EA5F1)
	.endif
	.incbin "baserom.gba", 0x5ea5f6, 0x31

	@ src/data/easy_chat/easy_chat_group_conditions.h:250 easy_chat_group_conditions_line_250
	.globl gText_Rom_5EA627
gText_Rom_5EA627: @ 0x085EA627
	.string "ちがう$"
	.if (. - gText_Rom_5EA627) > 0x4
	.error "gText_Rom_5EA627 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EA627) < 0x4
	.space 0x4 - (. - gText_Rom_5EA627)
	.endif
	.incbin "baserom.gba", 0x5ea62b, 0x6b

	@ src/data/easy_chat/easy_chat_group_actions.h:118 easy_chat_group_actions_line_118
	.globl gText_Rom_5EA696
gText_Rom_5EA696: @ 0x085EA696
	.string "かえる$"
	.if (. - gText_Rom_5EA696) > 0x4
	.error "gText_Rom_5EA696 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EA696) < 0x4
	.space 0x4 - (. - gText_Rom_5EA696)
	.endif
	.incbin "baserom.gba", 0x5ea69a, 0xe3

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5EA77D
gText_Rom_5EA77D: @ 0x085EA77D
	.string "しまう$"
	.if (. - gText_Rom_5EA77D) > 0x4
	.error "gText_Rom_5EA77D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EA77D) < 0x4
	.space 0x4 - (. - gText_Rom_5EA77D)
	.endif
	.incbin "baserom.gba", 0x5ea781, 0x149

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5EA8CA
gText_Rom_5EA8CA: @ 0x085EA8CA
	.string "しまう$"
	.if (. - gText_Rom_5EA8CA) > 0x4
	.error "gText_Rom_5EA8CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EA8CA) < 0x4
	.space 0x4 - (. - gText_Rom_5EA8CA)
	.endif
	.incbin "baserom.gba", 0x5ea8ce, 0x34

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5EA902
gText_Rom_5EA902: @ 0x085EA902
	.string "あげる$"
	.if (. - gText_Rom_5EA902) > 0x4
	.error "gText_Rom_5EA902 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EA902) < 0x4
	.space 0x4 - (. - gText_Rom_5EA902)
	.endif
	.incbin "baserom.gba", 0x5ea906, 0x1bb

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5EAAC1
gText_Rom_5EAAC1: @ 0x085EAAC1
	.string "しまう$"
	.if (. - gText_Rom_5EAAC1) > 0x4
	.error "gText_Rom_5EAAC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EAAC1) < 0x4
	.space 0x4 - (. - gText_Rom_5EAAC1)
	.endif
	.incbin "baserom.gba", 0x5eaac5, 0x118

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5EABDD
gText_Rom_5EABDD: @ 0x085EABDD
	.string "しまう$"
	.if (. - gText_Rom_5EABDD) > 0x4
	.error "gText_Rom_5EABDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EABDD) < 0x4
	.space 0x4 - (. - gText_Rom_5EABDD)
	.endif
	.incbin "baserom.gba", 0x5eabe1, 0x145

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5EAD26
gText_Rom_5EAD26: @ 0x085EAD26
	.string "こうげき$"
	.if (. - gText_Rom_5EAD26) > 0x5
	.error "gText_Rom_5EAD26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EAD26) < 0x5
	.space 0x5 - (. - gText_Rom_5EAD26)
	.endif
	.incbin "baserom.gba", 0x5ead2b, 0x3a

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5EAD65
gText_Rom_5EAD65: @ 0x085EAD65
	.string "しまう$"
	.if (. - gText_Rom_5EAD65) > 0x4
	.error "gText_Rom_5EAD65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EAD65) < 0x4
	.space 0x4 - (. - gText_Rom_5EAD65)
	.endif
	.incbin "baserom.gba", 0x5ead69, 0x114

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5EAE7D
gText_Rom_5EAE7D: @ 0x085EAE7D
	.string "しまう$"
	.if (. - gText_Rom_5EAE7D) > 0x4
	.error "gText_Rom_5EAE7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EAE7D) < 0x4
	.space 0x4 - (. - gText_Rom_5EAE7D)
	.endif
	.incbin "baserom.gba", 0x5eae81, 0xd9

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5EAF5A
gText_Rom_5EAF5A: @ 0x085EAF5A
	.string "こうげき$"
	.if (. - gText_Rom_5EAF5A) > 0x5
	.error "gText_Rom_5EAF5A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EAF5A) < 0x5
	.space 0x5 - (. - gText_Rom_5EAF5A)
	.endif
	.incbin "baserom.gba", 0x5eaf5f, 0x68

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5EAFC7
gText_Rom_5EAFC7: @ 0x085EAFC7
	.string "こうげき$"
	.if (. - gText_Rom_5EAFC7) > 0x5
	.error "gText_Rom_5EAFC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EAFC7) < 0x5
	.space 0x5 - (. - gText_Rom_5EAFC7)
	.endif
	.incbin "baserom.gba", 0x5eafcc, 0x149

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5EB115
gText_Rom_5EB115: @ 0x085EB115
	.string "こうげき$"
	.if (. - gText_Rom_5EB115) > 0x5
	.error "gText_Rom_5EB115 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EB115) < 0x5
	.space 0x5 - (. - gText_Rom_5EB115)
	.endif
	.incbin "baserom.gba", 0x5eb11a, 0x30

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5EB14A
gText_Rom_5EB14A: @ 0x085EB14A
	.string "こうげき$"
	.if (. - gText_Rom_5EB14A) > 0x5
	.error "gText_Rom_5EB14A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EB14A) < 0x5
	.space 0x5 - (. - gText_Rom_5EB14A)
	.endif
	.incbin "baserom.gba", 0x5eb14f, 0xda

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5EB229
gText_Rom_5EB229: @ 0x085EB229
	.string "こうげき$"
	.if (. - gText_Rom_5EB229) > 0x5
	.error "gText_Rom_5EB229 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EB229) < 0x5
	.space 0x5 - (. - gText_Rom_5EB229)
	.endif
	.incbin "baserom.gba", 0x5eb22e, 0x229

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5EB457
gText_Rom_5EB457: @ 0x085EB457
	.string "こうげき$"
	.if (. - gText_Rom_5EB457) > 0x5
	.error "gText_Rom_5EB457 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EB457) < 0x5
	.space 0x5 - (. - gText_Rom_5EB457)
	.endif
	.incbin "baserom.gba", 0x5eb45c, 0x340

	@ src/data/moves_info.h:6328 moves_info_line_6328
	.globl gText_Rom_5EB79C
gText_Rom_5EB79C: @ 0x085EB79C
	.string "たくわえる$"
	.if (. - gText_Rom_5EB79C) > 0x6
	.error "gText_Rom_5EB79C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EB79C) < 0x6
	.space 0x6 - (. - gText_Rom_5EB79C)
	.endif
	.incbin "baserom.gba", 0x5eb7a2, 0x155

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5EB8F7
gText_Rom_5EB8F7: @ 0x085EB8F7
	.string "しまう$"
	.if (. - gText_Rom_5EB8F7) > 0x4
	.error "gText_Rom_5EB8F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EB8F7) < 0x4
	.space 0x4 - (. - gText_Rom_5EB8F7)
	.endif
	.incbin "baserom.gba", 0x5eb8fb, 0x1c1

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5EBABC
gText_Rom_5EBABC: @ 0x085EBABC
	.string "あげる$"
	.if (. - gText_Rom_5EBABC) > 0x4
	.error "gText_Rom_5EBABC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EBABC) < 0x4
	.space 0x4 - (. - gText_Rom_5EBABC)
	.endif
	.incbin "baserom.gba", 0x5ebac0, 0x9b

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5EBB5B
gText_Rom_5EBB5B: @ 0x085EBB5B
	.string "しまう$"
	.if (. - gText_Rom_5EBB5B) > 0x4
	.error "gText_Rom_5EBB5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EBB5B) < 0x4
	.space 0x4 - (. - gText_Rom_5EBB5B)
	.endif
	.incbin "baserom.gba", 0x5ebb5f, 0x153

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5EBCB2
gText_Rom_5EBCB2: @ 0x085EBCB2
	.string "しまう$"
	.if (. - gText_Rom_5EBCB2) > 0x4
	.error "gText_Rom_5EBCB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EBCB2) < 0x4
	.space 0x4 - (. - gText_Rom_5EBCB2)
	.endif
	.incbin "baserom.gba", 0x5ebcb6, 0x35

	@ src/data/easy_chat/easy_chat_group_actions.h:280 easy_chat_group_actions_line_280
	.globl gText_Rom_5EBCEB
gText_Rom_5EBCEB: @ 0x085EBCEB
	.string "できる$"
	.if (. - gText_Rom_5EBCEB) > 0x4
	.error "gText_Rom_5EBCEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EBCEB) < 0x4
	.space 0x4 - (. - gText_Rom_5EBCEB)
	.endif
	.incbin "baserom.gba", 0x5ebcef, 0x17b

	@ src/data/easy_chat/easy_chat_group_actions.h:280 easy_chat_group_actions_line_280
	.globl gText_Rom_5EBE6A
gText_Rom_5EBE6A: @ 0x085EBE6A
	.string "できる$"
	.if (. - gText_Rom_5EBE6A) > 0x4
	.error "gText_Rom_5EBE6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EBE6A) < 0x4
	.space 0x4 - (. - gText_Rom_5EBE6A)
	.endif
	.incbin "baserom.gba", 0x5ebe6e, 0x6b

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5EBED9
gText_Rom_5EBED9: @ 0x085EBED9
	.string "しまう$"
	.if (. - gText_Rom_5EBED9) > 0x4
	.error "gText_Rom_5EBED9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EBED9) < 0x4
	.space 0x4 - (. - gText_Rom_5EBED9)
	.endif
	.incbin "baserom.gba", 0x5ebedd, 0x76

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5EBF53
gText_Rom_5EBF53: @ 0x085EBF53
	.string "しまう$"
	.if (. - gText_Rom_5EBF53) > 0x4
	.error "gText_Rom_5EBF53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EBF53) < 0x4
	.space 0x4 - (. - gText_Rom_5EBF53)
	.endif
	.incbin "baserom.gba", 0x5ebf57, 0x34

	@ src/data/easy_chat/easy_chat_group_conditions.h:250 easy_chat_group_conditions_line_250
	.globl gText_Rom_5EBF8B
gText_Rom_5EBF8B: @ 0x085EBF8B
	.string "ちがう$"
	.if (. - gText_Rom_5EBF8B) > 0x4
	.error "gText_Rom_5EBF8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EBF8B) < 0x4
	.space 0x4 - (. - gText_Rom_5EBF8B)
	.endif
	.incbin "baserom.gba", 0x5ebf8f, 0x30

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5EBFBF
gText_Rom_5EBFBF: @ 0x085EBFBF
	.string "こうげき$"
	.if (. - gText_Rom_5EBFBF) > 0x5
	.error "gText_Rom_5EBFBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EBFBF) < 0x5
	.space 0x5 - (. - gText_Rom_5EBFBF)
	.endif
	.incbin "baserom.gba", 0x5ebfc4, 0x2d

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5EBFF1
gText_Rom_5EBFF1: @ 0x085EBFF1
	.string "こうげき$"
	.if (. - gText_Rom_5EBFF1) > 0x5
	.error "gText_Rom_5EBFF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EBFF1) < 0x5
	.space 0x5 - (. - gText_Rom_5EBFF1)
	.endif
	.incbin "baserom.gba", 0x5ebff6, 0x6d

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5EC063
gText_Rom_5EC063: @ 0x085EC063
	.string "あげる$"
	.if (. - gText_Rom_5EC063) > 0x4
	.error "gText_Rom_5EC063 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EC063) < 0x4
	.space 0x4 - (. - gText_Rom_5EC063)
	.endif
	.incbin "baserom.gba", 0x5ec067, 0x2dd

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5EC344
gText_Rom_5EC344: @ 0x085EC344
	.string "しまう$"
	.if (. - gText_Rom_5EC344) > 0x4
	.error "gText_Rom_5EC344 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EC344) < 0x4
	.space 0x4 - (. - gText_Rom_5EC344)
	.endif
	.incbin "baserom.gba", 0x5ec348, 0x34

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5EC37C
gText_Rom_5EC37C: @ 0x085EC37C
	.string "しまう$"
	.if (. - gText_Rom_5EC37C) > 0x4
	.error "gText_Rom_5EC37C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EC37C) < 0x4
	.space 0x4 - (. - gText_Rom_5EC37C)
	.endif
	.incbin "baserom.gba", 0x5ec380, 0x184

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5EC504
gText_Rom_5EC504: @ 0x085EC504
	.string "しまう$"
	.if (. - gText_Rom_5EC504) > 0x4
	.error "gText_Rom_5EC504 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EC504) < 0x4
	.space 0x4 - (. - gText_Rom_5EC504)
	.endif
	.incbin "baserom.gba", 0x5ec508, 0x17c

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5EC684
gText_Rom_5EC684: @ 0x085EC684
	.string "あげる$"
	.if (. - gText_Rom_5EC684) > 0x4
	.error "gText_Rom_5EC684 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EC684) < 0x4
	.space 0x4 - (. - gText_Rom_5EC684)
	.endif
	.incbin "baserom.gba", 0x5ec688, 0xaa

	@ src/data/easy_chat/easy_chat_group_actions.h:448 easy_chat_group_actions_line_448
	.globl gText_Rom_5EC732
gText_Rom_5EC732: @ 0x085EC732
	.string "られない$"
	.if (. - gText_Rom_5EC732) > 0x5
	.error "gText_Rom_5EC732 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EC732) < 0x5
	.space 0x5 - (. - gText_Rom_5EC732)
	.endif
	.incbin "baserom.gba", 0x5ec737, 0x69

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5EC7A0
gText_Rom_5EC7A0: @ 0x085EC7A0
	.string "こうげき$"
	.if (. - gText_Rom_5EC7A0) > 0x5
	.error "gText_Rom_5EC7A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EC7A0) < 0x5
	.space 0x5 - (. - gText_Rom_5EC7A0)
	.endif
	.incbin "baserom.gba", 0x5ec7a5, 0xda

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5EC87F
gText_Rom_5EC87F: @ 0x085EC87F
	.string "こうげき$"
	.if (. - gText_Rom_5EC87F) > 0x5
	.error "gText_Rom_5EC87F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EC87F) < 0x5
	.space 0x5 - (. - gText_Rom_5EC87F)
	.endif
	.incbin "baserom.gba", 0x5ec884, 0x31

	@ src/data/easy_chat/easy_chat_group_actions.h:448 easy_chat_group_actions_line_448
	.globl gText_Rom_5EC8B5
gText_Rom_5EC8B5: @ 0x085EC8B5
	.string "られない$"
	.if (. - gText_Rom_5EC8B5) > 0x5
	.error "gText_Rom_5EC8B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EC8B5) < 0x5
	.space 0x5 - (. - gText_Rom_5EC8B5)
	.endif
	.incbin "baserom.gba", 0x5ec8ba, 0x36

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5EC8F0
gText_Rom_5EC8F0: @ 0x085EC8F0
	.string "こうげき$"
	.if (. - gText_Rom_5EC8F0) > 0x5
	.error "gText_Rom_5EC8F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EC8F0) < 0x5
	.space 0x5 - (. - gText_Rom_5EC8F0)
	.endif
	.incbin "baserom.gba", 0x5ec8f5, 0x33

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5EC928
gText_Rom_5EC928: @ 0x085EC928
	.string "あげる$"
	.if (. - gText_Rom_5EC928) > 0x4
	.error "gText_Rom_5EC928 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EC928) < 0x4
	.space 0x4 - (. - gText_Rom_5EC928)
	.endif
	.incbin "baserom.gba", 0x5ec92c, 0x30

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5EC95C
gText_Rom_5EC95C: @ 0x085EC95C
	.string "しまう$"
	.if (. - gText_Rom_5EC95C) > 0x4
	.error "gText_Rom_5EC95C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EC95C) < 0x4
	.space 0x4 - (. - gText_Rom_5EC95C)
	.endif
	.incbin "baserom.gba", 0x5ec960, 0x33

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5EC993
gText_Rom_5EC993: @ 0x085EC993
	.string "あげる$"
	.if (. - gText_Rom_5EC993) > 0x4
	.error "gText_Rom_5EC993 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EC993) < 0x4
	.space 0x4 - (. - gText_Rom_5EC993)
	.endif
	.incbin "baserom.gba", 0x5ec997, 0x33

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5EC9CA
gText_Rom_5EC9CA: @ 0x085EC9CA
	.string "こうげき$"
	.if (. - gText_Rom_5EC9CA) > 0x5
	.error "gText_Rom_5EC9CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EC9CA) < 0x5
	.space 0x5 - (. - gText_Rom_5EC9CA)
	.endif
	.incbin "baserom.gba", 0x5ec9cf, 0x3d

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5ECA0C
gText_Rom_5ECA0C: @ 0x085ECA0C
	.string "しまう$"
	.if (. - gText_Rom_5ECA0C) > 0x4
	.error "gText_Rom_5ECA0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECA0C) < 0x4
	.space 0x4 - (. - gText_Rom_5ECA0C)
	.endif
	.incbin "baserom.gba", 0x5eca10, 0x2a

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5ECA3A
gText_Rom_5ECA3A: @ 0x085ECA3A
	.string "あげる$"
	.if (. - gText_Rom_5ECA3A) > 0x4
	.error "gText_Rom_5ECA3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECA3A) < 0x4
	.space 0x4 - (. - gText_Rom_5ECA3A)
	.endif
	.incbin "baserom.gba", 0x5eca3e, 0x152

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5ECB90
gText_Rom_5ECB90: @ 0x085ECB90
	.string "こうげき$"
	.if (. - gText_Rom_5ECB90) > 0x5
	.error "gText_Rom_5ECB90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECB90) < 0x5
	.space 0x5 - (. - gText_Rom_5ECB90)
	.endif
	.incbin "baserom.gba", 0x5ecb95, 0x6c

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5ECC01
gText_Rom_5ECC01: @ 0x085ECC01
	.string "あげる$"
	.if (. - gText_Rom_5ECC01) > 0x4
	.error "gText_Rom_5ECC01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECC01) < 0x4
	.space 0x4 - (. - gText_Rom_5ECC01)
	.endif
	.incbin "baserom.gba", 0x5ecc05, 0x6a

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5ECC6F
gText_Rom_5ECC6F: @ 0x085ECC6F
	.string "あげる$"
	.if (. - gText_Rom_5ECC6F) > 0x4
	.error "gText_Rom_5ECC6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECC6F) < 0x4
	.space 0x4 - (. - gText_Rom_5ECC6F)
	.endif
	.incbin "baserom.gba", 0x5ecc73, 0x34

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5ECCA7
gText_Rom_5ECCA7: @ 0x085ECCA7
	.string "こうげき$"
	.if (. - gText_Rom_5ECCA7) > 0x5
	.error "gText_Rom_5ECCA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECCA7) < 0x5
	.space 0x5 - (. - gText_Rom_5ECCA7)
	.endif
	.incbin "baserom.gba", 0x5eccac, 0x34

	@ src/data/easy_chat/easy_chat_group_actions.h:448 easy_chat_group_actions_line_448
	.globl gText_Rom_5ECCE0
gText_Rom_5ECCE0: @ 0x085ECCE0
	.string "られない$"
	.if (. - gText_Rom_5ECCE0) > 0x5
	.error "gText_Rom_5ECCE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECCE0) < 0x5
	.space 0x5 - (. - gText_Rom_5ECCE0)
	.endif
	.incbin "baserom.gba", 0x5ecce5, 0xa7

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5ECD8C
gText_Rom_5ECD8C: @ 0x085ECD8C
	.string "しまう$"
	.if (. - gText_Rom_5ECD8C) > 0x4
	.error "gText_Rom_5ECD8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECD8C) < 0x4
	.space 0x4 - (. - gText_Rom_5ECD8C)
	.endif
	.incbin "baserom.gba", 0x5ecd90, 0x14

	@ src/pokemon.c:158 pokemon_line_158
	.globl gText_Rom_5ECDA4
gText_Rom_5ECDA4: @ 0x085ECDA4
	.string "がんばりや$"
	.if (. - gText_Rom_5ECDA4) > 0x6
	.error "gText_Rom_5ECDA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDA4) < 0x6
	.space 0x6 - (. - gText_Rom_5ECDA4)
	.endif

	@ src/pokemon.c:170 pokemon_line_170
	.globl gText_Rom_5ECDAA
gText_Rom_5ECDAA: @ 0x085ECDAA
	.string "さみしがり$"
	.if (. - gText_Rom_5ECDAA) > 0x6
	.error "gText_Rom_5ECDAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDAA) < 0x6
	.space 0x6 - (. - gText_Rom_5ECDAA)
	.endif

	@ src/pokemon.c:182 pokemon_line_182
	.globl gText_Rom_5ECDB0
gText_Rom_5ECDB0: @ 0x085ECDB0
	.string "ゆうかん$"
	.if (. - gText_Rom_5ECDB0) > 0x5
	.error "gText_Rom_5ECDB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDB0) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDB0)
	.endif

	@ src/pokemon.c:194 pokemon_line_194
	.globl gText_Rom_5ECDB5
gText_Rom_5ECDB5: @ 0x085ECDB5
	.string "いじっぱり$"
	.if (. - gText_Rom_5ECDB5) > 0x6
	.error "gText_Rom_5ECDB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDB5) < 0x6
	.space 0x6 - (. - gText_Rom_5ECDB5)
	.endif

	@ src/pokemon.c:206 pokemon_line_206
	.globl gText_Rom_5ECDBB
gText_Rom_5ECDBB: @ 0x085ECDBB
	.string "やんちゃ$"
	.if (. - gText_Rom_5ECDBB) > 0x5
	.error "gText_Rom_5ECDBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDBB) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDBB)
	.endif

	@ src/pokemon.c:218 pokemon_line_218
	.globl gText_Rom_5ECDC0
gText_Rom_5ECDC0: @ 0x085ECDC0
	.string "ずぶとい$"
	.if (. - gText_Rom_5ECDC0) > 0x5
	.error "gText_Rom_5ECDC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDC0) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDC0)
	.endif

	@ src/pokemon.c:230 pokemon_line_230
	.globl gText_Rom_5ECDC5
gText_Rom_5ECDC5: @ 0x085ECDC5
	.string "すなお$"
	.if (. - gText_Rom_5ECDC5) > 0x4
	.error "gText_Rom_5ECDC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDC5) < 0x4
	.space 0x4 - (. - gText_Rom_5ECDC5)
	.endif

	@ src/pokemon.c:242 pokemon_line_242
	.globl gText_Rom_5ECDC9
gText_Rom_5ECDC9: @ 0x085ECDC9
	.string "のんき$"
	.if (. - gText_Rom_5ECDC9) > 0x4
	.error "gText_Rom_5ECDC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDC9) < 0x4
	.space 0x4 - (. - gText_Rom_5ECDC9)
	.endif

	@ src/pokemon.c:254 pokemon_line_254
	.globl gText_Rom_5ECDCD
gText_Rom_5ECDCD: @ 0x085ECDCD
	.string "わんぱく$"
	.if (. - gText_Rom_5ECDCD) > 0x5
	.error "gText_Rom_5ECDCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDCD) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDCD)
	.endif

	@ src/pokemon.c:266 pokemon_line_266
	.globl gText_Rom_5ECDD2
gText_Rom_5ECDD2: @ 0x085ECDD2
	.string "のうてんき$"
	.if (. - gText_Rom_5ECDD2) > 0x6
	.error "gText_Rom_5ECDD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDD2) < 0x6
	.space 0x6 - (. - gText_Rom_5ECDD2)
	.endif

	@ src/pokemon.c:278 pokemon_line_278
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ECDD8
gText_Rom_5ECDD8: @ 0x085ECDD8
	.string "おくびょう$"
	.if (. - gText_Rom_5ECDD8) != 0x6
	.error "gText_Rom_5ECDD8 must retain its original byte length"
	.endif
	.globl gText_Rom_5ECDDA
	.set gText_Rom_5ECDDA, gText_Rom_5ECDD8 + 0x2

	@ src/pokemon.c:290 pokemon_line_290
	.globl gText_Rom_5ECDDE
gText_Rom_5ECDDE: @ 0x085ECDDE
	.string "せっかち$"
	.if (. - gText_Rom_5ECDDE) > 0x5
	.error "gText_Rom_5ECDDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDDE) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDDE)
	.endif

	@ src/pokemon.c:302 pokemon_line_302
	.globl gText_Rom_5ECDE3
gText_Rom_5ECDE3: @ 0x085ECDE3
	.string "まじめ$"
	.if (. - gText_Rom_5ECDE3) > 0x4
	.error "gText_Rom_5ECDE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDE3) < 0x4
	.space 0x4 - (. - gText_Rom_5ECDE3)
	.endif

	@ src/pokemon.c:314 pokemon_line_314
	.globl gText_Rom_5ECDE7
gText_Rom_5ECDE7: @ 0x085ECDE7
	.string "ようき$"
	.if (. - gText_Rom_5ECDE7) > 0x4
	.error "gText_Rom_5ECDE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDE7) < 0x4
	.space 0x4 - (. - gText_Rom_5ECDE7)
	.endif

	@ src/pokemon.c:326 pokemon_line_326
	.globl gText_Rom_5ECDEB
gText_Rom_5ECDEB: @ 0x085ECDEB
	.string "むじゃき$"
	.if (. - gText_Rom_5ECDEB) > 0x5
	.error "gText_Rom_5ECDEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDEB) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDEB)
	.endif

	@ src/pokemon.c:338 pokemon_line_338
	.globl gText_Rom_5ECDF0
gText_Rom_5ECDF0: @ 0x085ECDF0
	.string "ひかえめ$"
	.if (. - gText_Rom_5ECDF0) > 0x5
	.error "gText_Rom_5ECDF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDF0) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDF0)
	.endif

	@ src/pokemon.c:350 pokemon_line_350
	.globl gText_Rom_5ECDF5
gText_Rom_5ECDF5: @ 0x085ECDF5
	.string "おっとり$"
	.if (. - gText_Rom_5ECDF5) > 0x5
	.error "gText_Rom_5ECDF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDF5) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDF5)
	.endif

	@ src/pokemon.c:362 pokemon_line_362
	.globl gText_Rom_5ECDFA
gText_Rom_5ECDFA: @ 0x085ECDFA
	.string "れいせい$"
	.if (. - gText_Rom_5ECDFA) > 0x5
	.error "gText_Rom_5ECDFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDFA) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDFA)
	.endif

	@ src/pokemon.c:374 pokemon_line_374
	.globl gText_Rom_5ECDFF
gText_Rom_5ECDFF: @ 0x085ECDFF
	.string "てれや$"
	.if (. - gText_Rom_5ECDFF) > 0x4
	.error "gText_Rom_5ECDFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDFF) < 0x4
	.space 0x4 - (. - gText_Rom_5ECDFF)
	.endif

	@ src/pokemon.c:386 pokemon_line_386
	.globl gText_Rom_5ECE03
gText_Rom_5ECE03: @ 0x085ECE03
	.string "うっかりや$"
	.if (. - gText_Rom_5ECE03) > 0x6
	.error "gText_Rom_5ECE03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECE03) < 0x6
	.space 0x6 - (. - gText_Rom_5ECE03)
	.endif

	@ src/pokemon.c:398 pokemon_line_398
	.globl gText_Rom_5ECE09
gText_Rom_5ECE09: @ 0x085ECE09
	.string "おだやか$"
	.if (. - gText_Rom_5ECE09) > 0x5
	.error "gText_Rom_5ECE09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECE09) < 0x5
	.space 0x5 - (. - gText_Rom_5ECE09)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:136 easy_chat_group_conditions_line_136 (+1 aliases)
	.globl gText_Rom_5ECE0E
gText_Rom_5ECE0E: @ 0x085ECE0E
	.string "おとなしい$"
	.if (. - gText_Rom_5ECE0E) > 0x6
	.error "gText_Rom_5ECE0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECE0E) < 0x6
	.space 0x6 - (. - gText_Rom_5ECE0E)
	.endif

	@ src/pokemon.c:422 pokemon_line_422
	.globl gText_Rom_5ECE14
gText_Rom_5ECE14: @ 0x085ECE14
	.string "なまいき$"
	.if (. - gText_Rom_5ECE14) > 0x5
	.error "gText_Rom_5ECE14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECE14) < 0x5
	.space 0x5 - (. - gText_Rom_5ECE14)
	.endif

	@ src/pokemon.c:434 pokemon_line_434
	.globl gText_Rom_5ECE19
gText_Rom_5ECE19: @ 0x085ECE19
	.string "しんちょう$"
	.if (. - gText_Rom_5ECE19) > 0x6
	.error "gText_Rom_5ECE19 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECE19) < 0x6
	.space 0x6 - (. - gText_Rom_5ECE19)
	.endif

	@ src/pokedex_plus_hgss.c:176 sText_Stats_ERRATIC (+1 aliases)
	.globl gText_Rom_5ECE1F
gText_Rom_5ECE1F: @ 0x085ECE1F
	.string "きまぐれ$"
	.if (. - gText_Rom_5ECE1F) > 0x5
	.error "gText_Rom_5ECE1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECE1F) < 0x5
	.space 0x5 - (. - gText_Rom_5ECE1F)
	.endif
	.globl gUnknown_85ECE24
gUnknown_85ECE24: @ 0x085ECE24
	.incbin "baserom.gba", 0x5ece24, 0x64
	.globl gUnknown_85ECE88
gUnknown_85ECE88: @ 0x085ECE88
	.incbin "baserom.gba", 0x5ece88, 0x134
	.globl gUnknown_85ECFBC
gUnknown_85ECFBC: @ 0x085ECFBC
	.incbin "baserom.gba", 0x5ecfbc, 0x78
	.globl gUnknown_85ED034
gUnknown_85ED034: @ 0x085ED034
	.incbin "baserom.gba", 0x5ed034, 0xc
	.globl gUnknown_85ED040
gUnknown_85ED040: @ 0x085ED040
	.incbin "baserom.gba", 0x5ed040, 0xc
	.globl gUnknown_85ED04C
gUnknown_85ED04C: @ 0x085ED04C
	.incbin "baserom.gba", 0x5ed04c, 0xc
	.globl gUnknown_85ED058
gUnknown_85ED058: @ 0x085ED058
	.incbin "baserom.gba", 0x5ed058, 0xc
	.globl gUnknown_85ED064
gUnknown_85ED064: @ 0x085ED064
	.incbin "baserom.gba", 0x5ed064, 0x8
	.globl gUnknown_85ED06C
gUnknown_85ED06C: @ 0x085ED06C
	.incbin "baserom.gba", 0x5ed06c, 0xa8
	.globl gUnknown_85ED114
gUnknown_85ED114: @ 0x085ED114
	.incbin "baserom.gba", 0x5ed114, 0x20
	.globl gUnknown_85ED134
gUnknown_85ED134: @ 0x085ED134
	.incbin "baserom.gba", 0x5ed134, 0x28
	.globl gUnknown_85ED15C
gUnknown_85ED15C: @ 0x085ED15C
	.incbin "baserom.gba", 0x5ed15c, 0x20
	.globl gUnknown_85ED17C
gUnknown_85ED17C: @ 0x085ED17C
	.incbin "baserom.gba", 0x5ed17c, 0xa7
	.globl gUnknown_85ED223
gUnknown_85ED223: @ 0x085ED223
	.incbin "baserom.gba", 0x5ed223, 0x81
	.globl gUnknown_85ED2A4
gUnknown_85ED2A4: @ 0x085ED2A4
	.incbin "baserom.gba", 0x5ed2a4, 0x10
	.globl gUnknown_85ED2B4
gUnknown_85ED2B4: @ 0x085ED2B4
	.incbin "baserom.gba", 0x5ed2b4, 0x10
	.globl gUnknown_85ED2C4
gUnknown_85ED2C4: @ 0x085ED2C4

	@ src/pokemon_summary_screen.c:780 sMemoNatureTextColor
	.globl gText_Rom_5ED2C4
gText_Rom_5ED2C4: @ 0x085ED2C4
	.string "{COLOR LIGHT_RED}{SHADOW GREEN}$"
	.if (. - gText_Rom_5ED2C4) > 0x7
	.error "gText_Rom_5ED2C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ED2C4) < 0x7
	.space 0x7 - (. - gText_Rom_5ED2C4)
	.endif
	.globl gUnknown_85ED2CB
gUnknown_85ED2CB: @ 0x085ED2CB

	@ src/pokemon_summary_screen.c:781 sMemoMiscTextColor
	.globl gText_Rom_5ED2CB
gText_Rom_5ED2CB: @ 0x085ED2CB
	.string "{COLOR WHITE}{SHADOW DARK_GRAY}$"
	.if (. - gText_Rom_5ED2CB) > 0x7
	.error "gText_Rom_5ED2CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ED2CB) < 0x7
	.space 0x7 - (. - gText_Rom_5ED2CB)
	.endif
	.globl gUnknown_85ED2D2
gUnknown_85ED2D2: @ 0x085ED2D2

	@ src/pokemon_summary_screen.c:782 sStatsLeftColumnLayout
	.globl gText_Rom_5ED2D2
gText_Rom_5ED2D2: @ 0x085ED2D2
	.string "{DYNAMIC 0}/{DYNAMIC 1}\n{DYNAMIC 2}\n{DYNAMIC 3}$"
	.if (. - gText_Rom_5ED2D2) > 0xc
	.error "gText_Rom_5ED2D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ED2D2) < 0xc
	.space 0xc - (. - gText_Rom_5ED2D2)
	.endif
	.globl gUnknown_85ED2DE
gUnknown_85ED2DE: @ 0x085ED2DE

	@ src/pokemon_summary_screen.c:783 sStatsLeftIVEVColumnLayout (+1 aliases)
	.globl gText_Rom_5ED2DE
gText_Rom_5ED2DE: @ 0x085ED2DE
	.string "{DYNAMIC 0}\n{DYNAMIC 1}\n{DYNAMIC 2}$"
	.if (. - gText_Rom_5ED2DE) > 0x9
	.error "gText_Rom_5ED2DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ED2DE) < 0x9
	.space 0x9 - (. - gText_Rom_5ED2DE)
	.endif
	.globl gUnknown_85ED2E7
gUnknown_85ED2E7: @ 0x085ED2E7

	@ src/pokemon_summary_screen.c:785 sMovesPPLayout
	.globl gText_Rom_5ED2E7
gText_Rom_5ED2E7: @ 0x085ED2E7
	.string "{PP}{DYNAMIC 0}/{DYNAMIC 1}$"
	.if (. - gText_Rom_5ED2E7) > 0x8
	.error "gText_Rom_5ED2E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ED2E7) < 0x8
	.space 0x8 - (. - gText_Rom_5ED2E7)
	.endif
	.incbin "baserom.gba", 0x5ed2ef, 0x11d
	.globl gUnknown_85ED40C
gUnknown_85ED40C: @ 0x085ED40C
	.incbin "baserom.gba", 0x5ed40c, 0x8
	.globl gUnknown_85ED414
gUnknown_85ED414: @ 0x085ED414
	.incbin "baserom.gba", 0x5ed414, 0x18
	.globl gUnknown_85ED42C
gUnknown_85ED42C: @ 0x085ED42C
	.incbin "baserom.gba", 0x5ed42c, 0x98
	.globl gUnknown_85ED4C4
gUnknown_85ED4C4: @ 0x085ED4C4
	.incbin "baserom.gba", 0x5ed4c4, 0x8
	.globl gUnknown_85ED4CC
gUnknown_85ED4CC: @ 0x085ED4CC
	.incbin "baserom.gba", 0x5ed4cc, 0x8
	.globl gUnknown_85ED4D4
gUnknown_85ED4D4: @ 0x085ED4D4
	.incbin "baserom.gba", 0x5ed4d4, 0x74
	.globl gUnknown_85ED548
gUnknown_85ED548: @ 0x085ED548
	.incbin "baserom.gba", 0x5ed548, 0x8
	.globl gUnknown_85ED550
gUnknown_85ED550: @ 0x085ED550
	.incbin "baserom.gba", 0x5ed550, 0x8
	.globl gUnknown_85ED558
gUnknown_85ED558: @ 0x085ED558
	.incbin "baserom.gba", 0x5ed558, 0x18
	.globl gUnknown_85ED570
gUnknown_85ED570: @ 0x085ED570
	.incbin "baserom.gba", 0x5ed570, 0x20
	.globl gUnknown_85ED590
gUnknown_85ED590: @ 0x085ED590
	.incbin "baserom.gba", 0x5ed590, 0x60
	.globl gUnknown_85ED5F0
gUnknown_85ED5F0: @ 0x085ED5F0
	.incbin "baserom.gba", 0x5ed5f0, 0xd54
	.globl gUnknown_85EE344
gUnknown_85EE344: @ 0x085EE344
	.incbin "baserom.gba", 0x5ee344, 0x314
	.globl gUnknown_85EE658
gUnknown_85EE658: @ 0x085EE658
	.incbin "baserom.gba", 0x5ee658, 0xd5c
	.globl gUnknown_85EF3B4
gUnknown_85EF3B4: @ 0x085EF3B4
	.incbin "baserom.gba", 0x5ef3b4, 0x350
	.globl gUnknown_85EF704
gUnknown_85EF704: @ 0x085EF704
	.incbin "baserom.gba", 0x5ef704, 0xc
	.globl gUnknown_85EF710
gUnknown_85EF710: @ 0x085EF710
	.incbin "baserom.gba", 0x5ef710, 0x18
	.globl gUnknown_85EF728
gUnknown_85EF728: @ 0x085EF728
	.incbin "baserom.gba", 0x5ef728, 0x30
	.globl gUnknown_85EF758
gUnknown_85EF758: @ 0x085EF758
	.incbin "baserom.gba", 0x5ef758, 0x4
	.globl gUnknown_85EF75C
gUnknown_85EF75C: @ 0x085EF75C
	.incbin "baserom.gba", 0x5ef75c, 0x2
	.globl gUnknown_85EF75E
gUnknown_85EF75E: @ 0x085EF75E
	.incbin "baserom.gba", 0x5ef75e, 0x2
	.globl gUnknown_85EF760
gUnknown_85EF760: @ 0x085EF760
	.incbin "baserom.gba", 0x5ef760, 0x4
	.globl gUnknown_85EF764
gUnknown_85EF764: @ 0x085EF764
	.incbin "baserom.gba", 0x5ef764, 0x8
	.globl gUnknown_85EF76C
gUnknown_85EF76C: @ 0x085EF76C
	.incbin "baserom.gba", 0x5ef76c, 0xc
	.globl gUnknown_85EF778
gUnknown_85EF778: @ 0x085EF778
	.incbin "baserom.gba", 0x5ef778, 0x28
	.globl gUnknown_85EF7A0
gUnknown_85EF7A0: @ 0x085EF7A0
	.incbin "baserom.gba", 0x5ef7a0, 0x20
	.globl gUnknown_85EF7C0
gUnknown_85EF7C0: @ 0x085EF7C0
	.incbin "baserom.gba", 0x5ef7c0, 0x5c
	.globl gUnknown_85EF81C
gUnknown_85EF81C: @ 0x085EF81C
	.incbin "baserom.gba", 0x5ef81c, 0x8
	.globl gUnknown_85EF824
gUnknown_85EF824: @ 0x085EF824
	.incbin "baserom.gba", 0x5ef824, 0x18
	.globl gUnknown_85EF83C
gUnknown_85EF83C: @ 0x085EF83C
	.incbin "baserom.gba", 0x5ef83c, 0x1a4
	.globl gUnknown_85EF9E0
gUnknown_85EF9E0: @ 0x085EF9E0
	.incbin "baserom.gba", 0x5ef9e0, 0x20
	.globl gUnknown_85EFA00
gUnknown_85EFA00: @ 0x085EFA00
	.incbin "baserom.gba", 0x5efa00, 0x22c
	.globl gUnknown_85EFC2C
gUnknown_85EFC2C: @ 0x085EFC2C
	.incbin "baserom.gba", 0x5efc2c, 0x5f0
	.globl gUnknown_85F021C
gUnknown_85F021C: @ 0x085F021C
	.incbin "baserom.gba", 0x5f021c, 0x11ac
	.globl gUnknown_85F13C8
gUnknown_85F13C8: @ 0x085F13C8
	.incbin "baserom.gba", 0x5f13c8, 0x4
	.globl gUnknown_85F13CC
gUnknown_85F13CC: @ 0x085F13CC
	.incbin "baserom.gba", 0x5f13cc, 0x10
	.globl gUnknown_85F13DC
gUnknown_85F13DC: @ 0x085F13DC
	.incbin "baserom.gba", 0x5f13dc, 0x30
	.globl gUnknown_85F140C
gUnknown_85F140C: @ 0x085F140C
	.incbin "baserom.gba", 0x5f140c, 0x4
	.globl gUnknown_85F1410
gUnknown_85F1410: @ 0x085F1410
	.incbin "baserom.gba", 0x5f1410, 0x8
	.globl gUnknown_85F1418
gUnknown_85F1418: @ 0x085F1418
	.incbin "baserom.gba", 0x5f1418, 0x10
	.globl gUnknown_85F1428
gUnknown_85F1428: @ 0x085F1428
	.incbin "baserom.gba", 0x5f1428, 0x8
	.globl gUnknown_85F1430
gUnknown_85F1430: @ 0x085F1430
	.incbin "baserom.gba", 0x5f1430, 0x30
	.globl gUnknown_85F1460
gUnknown_85F1460: @ 0x085F1460
	.incbin "baserom.gba", 0x5f1460, 0x68
	.globl gUnknown_85F14C8
gUnknown_85F14C8: @ 0x085F14C8
	.incbin "baserom.gba", 0x5f14c8, 0x28
	.globl gUnknown_85F14F0
gUnknown_85F14F0: @ 0x085F14F0
	.incbin "baserom.gba", 0x5f14f0, 0x18
	.globl gUnknown_85F1508
gUnknown_85F1508: @ 0x085F1508
	.incbin "baserom.gba", 0x5f1508, 0xa0
	.globl gUnknown_85F15A8
gUnknown_85F15A8: @ 0x085F15A8
	.incbin "baserom.gba", 0x5f15a8, 0x4
	.globl gUnknown_85F15AC
gUnknown_85F15AC: @ 0x085F15AC
	.incbin "baserom.gba", 0x5f15ac, 0xc
	.globl gUnknown_85F15B8
gUnknown_85F15B8: @ 0x085F15B8
	.incbin "baserom.gba", 0x5f15b8, 0x3
	.globl gUnknown_85F15BB
gUnknown_85F15BB: @ 0x085F15BB
	.incbin "baserom.gba", 0x5f15bb, 0x5
	.globl gUnknown_85F15C0
gUnknown_85F15C0: @ 0x085F15C0
	.incbin "baserom.gba", 0x5f15c0, 0x8
	.globl gUnknown_85F15C8
gUnknown_85F15C8: @ 0x085F15C8
	.incbin "baserom.gba", 0x5f15c8, 0x18
	.globl gUnknown_85F15E0
gUnknown_85F15E0: @ 0x085F15E0
	.incbin "baserom.gba", 0x5f15e0, 0x20
	.globl gUnknown_85F1600
gUnknown_85F1600: @ 0x085F1600
	.incbin "baserom.gba", 0x5f1600, 0x18
	.globl gUnknown_85F1618
gUnknown_85F1618: @ 0x085F1618
	.incbin "baserom.gba", 0x5f1618, 0x5
	.globl gUnknown_85F161D
gUnknown_85F161D: @ 0x085F161D
	.incbin "baserom.gba", 0x5f161d, 0x1f
	.globl gUnknown_85F163C
gUnknown_85F163C: @ 0x085F163C
	.incbin "baserom.gba", 0x5f163c, 0x2
	.globl gUnknown_85F163E
gUnknown_85F163E: @ 0x085F163E
	.incbin "baserom.gba", 0x5f163e, 0xc
	.globl gUnknown_85F164A
gUnknown_85F164A: @ 0x085F164A
	.incbin "baserom.gba", 0x5f164a, 0x12
	.globl gUnknown_85F165C
gUnknown_85F165C: @ 0x085F165C
	.incbin "baserom.gba", 0x5f165c, 0x14
	.globl gUnknown_85F1670
gUnknown_85F1670: @ 0x085F1670
	.incbin "baserom.gba", 0x5f1670, 0xa0
	.globl gUnknown_85F1710
gUnknown_85F1710: @ 0x085F1710
	.incbin "baserom.gba", 0x5f1710, 0x20
	.globl gUnknown_85F1730
gUnknown_85F1730: @ 0x085F1730
	.incbin "baserom.gba", 0x5f1730, 0x50
	.globl gUnknown_85F1780
gUnknown_85F1780: @ 0x085F1780
	.incbin "baserom.gba", 0x5f1780, 0xb8
	.globl gUnknown_85F1838
gUnknown_85F1838: @ 0x085F1838
	.incbin "baserom.gba", 0x5f1838, 0x20
	.globl gUnknown_85F1858
gUnknown_85F1858: @ 0x085F1858
	.incbin "baserom.gba", 0x5f1858, 0x288
	.globl gUnknown_85F1AE0
gUnknown_85F1AE0: @ 0x085F1AE0
	.incbin "baserom.gba", 0x5f1ae0, 0xc1c
	.globl gUnknown_85F26FC
gUnknown_85F26FC: @ 0x085F26FC
	.incbin "baserom.gba", 0x5f26fc, 0xc
	.globl gUnknown_85F2708
gUnknown_85F2708: @ 0x085F2708
	.incbin "baserom.gba", 0x5f2708, 0x24
	.globl gUnknown_85F272C
gUnknown_85F272C: @ 0x085F272C
	.incbin "baserom.gba", 0x5f272c, 0x10
	.globl gUnknown_85F273C
gUnknown_85F273C: @ 0x085F273C
	.incbin "baserom.gba", 0x5f273c, 0x6c
	.globl gUnknown_85F27A8
gUnknown_85F27A8: @ 0x085F27A8
	.incbin "baserom.gba", 0x5f27a8, 0x4
	.globl gUnknown_85F27AC
gUnknown_85F27AC: @ 0x085F27AC
	.incbin "baserom.gba", 0x5f27ac, 0x88
	.globl gUnknown_85F2834
gUnknown_85F2834: @ 0x085F2834
	.incbin "baserom.gba", 0x5f2834, 0x8
	.globl gUnknown_85F283C
gUnknown_85F283C: @ 0x085F283C
	.incbin "baserom.gba", 0x5f283c, 0x38
	.globl gUnknown_85F2874
gUnknown_85F2874: @ 0x085F2874
	.incbin "baserom.gba", 0x5f2874, 0x3
	.globl gUnknown_85F2877
gUnknown_85F2877: @ 0x085F2877
	.incbin "baserom.gba", 0x5f2877, 0x3d
	.globl gUnknown_85F28B4
gUnknown_85F28B4: @ 0x085F28B4
	.incbin "baserom.gba", 0x5f28b4, 0x20
	.globl gUnknown_85F28D4
gUnknown_85F28D4: @ 0x085F28D4
	.incbin "baserom.gba", 0x5f28d4, 0x18
	.globl gUnknown_85F28EC
gUnknown_85F28EC: @ 0x085F28EC
	.incbin "baserom.gba", 0x5f28ec, 0xc

	@ src/data/text/match_call_messages.h:1 gText_MatchCallAromaLady_Rose_Strategy
	.globl gText_Rom_5F28F8
gText_Rom_5F28F8: @ 0x085F28F8
	.string "やさしい きもちに しちゃう$"
	.if (. - gText_Rom_5F28F8) > 0xf
	.error "gText_Rom_5F28F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F28F8) < 0xf
	.space 0xf - (. - gText_Rom_5F28F8)
	.endif

	@ src/data/text/match_call_messages.h:2 gText_MatchCallAromaLady_Rose_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2907
gText_Rom_5F2907: @ 0x085F2907
	.string "いい においの くさポケモン$"
	.if (. - gText_Rom_5F2907) != 0xf
	.error "gText_Rom_5F2907 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2911
	.set gText_Rom_5F2911, gText_Rom_5F2907 + 0xa

	@ src/data/text/match_call_messages.h:3 gText_MatchCallAromaLady_Rose_Intro1
	.globl gText_Rom_5F2916
gText_Rom_5F2916: @ 0x085F2916
	.string "よい かおりが こころと$"
	.if (. - gText_Rom_5F2916) > 0xd
	.error "gText_Rom_5F2916 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2916) < 0xd
	.space 0xd - (. - gText_Rom_5F2916)
	.endif

	@ src/data/text/match_call_messages.h:4 gText_MatchCallAromaLady_Rose_Intro2
	.globl gText_Rom_5F2923
gText_Rom_5F2923: @ 0x085F2923
	.string "からだを けんこうに します!$"
	.if (. - gText_Rom_5F2923) > 0x10
	.error "gText_Rom_5F2923 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2923) < 0x10
	.space 0x10 - (. - gText_Rom_5F2923)
	.endif

	@ src/data/text/match_call_messages.h:6 gText_MatchCallRuinManiac_Andres_Strategy
	.globl gText_Rom_5F2933
gText_Rom_5F2933: @ 0x085F2933
	.string "あんまり つよく ないよ$"
	.if (. - gText_Rom_5F2933) > 0xd
	.error "gText_Rom_5F2933 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2933) < 0xd
	.space 0xd - (. - gText_Rom_5F2933)
	.endif

