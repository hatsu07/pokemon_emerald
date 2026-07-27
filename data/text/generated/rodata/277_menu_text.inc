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

