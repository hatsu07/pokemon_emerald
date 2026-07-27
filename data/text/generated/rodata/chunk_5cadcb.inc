	@ src/option_menu.c:75 gText_Option (+2 aliases)
	.globl gText_Rom_5CADCB
gText_Rom_5CADCB: @ 0x085CADCB
	.string "せってい$"
	.if (. - gText_Rom_5CADCB) > 0x5
	.error "gText_Rom_5CADCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADCB) < 0x5
	.space 0x5 - (. - gText_Rom_5CADCB)
	.endif
	.globl gUnknown_85CADD0
gUnknown_85CADD0: @ 0x085CADD0

	@ src/data/info_viewer.h:120 sInfoText_ChoiceClose (+4 aliases)
	.globl gText_Rom_5CADD0
gText_Rom_5CADD0: @ 0x085CADD0
	.string "とじる$"
	.if (. - gText_Rom_5CADD0) > 0x4
	.error "gText_Rom_5CADD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADD0) < 0x4
	.space 0x4 - (. - gText_Rom_5CADD0)
	.endif
	.incbin "baserom.gba", 0x5cadd4, 0x5

	@ src/data/script_menu.h:593 script_menu_line_593
	.globl gText_Rom_5CADD9
gText_Rom_5CADD9: @ 0x085CADD9
	.string "10BP$"
	.if (. - gText_Rom_5CADD9) > 0x5
	.error "gText_Rom_5CADD9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADD9) < 0x5
	.space 0x5 - (. - gText_Rom_5CADD9)
	.endif

	@ src/data/script_menu.h:594 script_menu_line_594
	.globl gText_Rom_5CADDE
gText_Rom_5CADDE: @ 0x085CADDE
	.string "15BP$"
	.if (. - gText_Rom_5CADDE) > 0x5
	.error "gText_Rom_5CADDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADDE) < 0x5
	.space 0x5 - (. - gText_Rom_5CADDE)
	.endif

	@ src/data/decoration/header.h:440 header_line_440 (+1 aliases)
	.globl gText_Rom_5CADE3
gText_Rom_5CADE3: @ 0x085CADE3
	.string "あかいテント$"
	.if (. - gText_Rom_5CADE3) > 0x7
	.error "gText_Rom_5CADE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADE3) < 0x7
	.space 0x7 - (. - gText_Rom_5CADE3)
	.endif

	@ src/data/decoration/header.h:454 header_line_454 (+1 aliases)
	.globl gText_Rom_5CADEA
gText_Rom_5CADEA: @ 0x085CADEA
	.string "あおいテント$"
	.if (. - gText_Rom_5CADEA) > 0x7
	.error "gText_Rom_5CADEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADEA) < 0x7
	.space 0x7 - (. - gText_Rom_5CADEA)
	.endif

	@ src/data/region_map/region_map_entries.h:525 region_map_entries_line_525 (+1 aliases)
	.globl gText_Rom_5CADF1
gText_Rom_5CADF1: @ 0x085CADF1
	.string "みなみのことう$"
	.if (. - gText_Rom_5CADF1) > 0x8
	.error "gText_Rom_5CADF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADF1) < 0x8
	.space 0x8 - (. - gText_Rom_5CADF1)
	.endif

	@ src/data/region_map/region_map_entries.h:1386 region_map_entries_line_1386 (+1 aliases)
	.globl gText_Rom_5CADF9
gText_Rom_5CADF9: @ 0x085CADF9
	.string "たんじょうのしま$"
	.if (. - gText_Rom_5CADF9) > 0x9
	.error "gText_Rom_5CADF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADF9) < 0x9
	.space 0x9 - (. - gText_Rom_5CADF9)
	.endif

	@ src/data/region_map/region_map_entries.h:1393 region_map_entries_line_1393 (+1 aliases)
	.globl gText_Rom_5CAE02
gText_Rom_5CAE02: @ 0x085CAE02
	.string "さいはてのことう$"
	.if (. - gText_Rom_5CAE02) > 0x9
	.error "gText_Rom_5CAE02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE02) < 0x9
	.space 0x9 - (. - gText_Rom_5CAE02)
	.endif

	@ src/data/region_map/region_map_entries.h:1463 region_map_entries_line_1463 (+1 aliases)
	.globl gText_Rom_5CAE0B
gText_Rom_5CAE0B: @ 0x085CAE0B
	.string "へそのいわ$"
	.if (. - gText_Rom_5CAE0B) > 0x6
	.error "gText_Rom_5CAE0B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE0B) < 0x6
	.space 0x6 - (. - gText_Rom_5CAE0B)
	.endif
	.incbin "baserom.gba", 0x5cae11, 0x24

	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5CAE35
gText_Rom_5CAE35: @ 0x085CAE35
	.string "かった！$"
	.if (. - gText_Rom_5CAE35) > 0x5
	.error "gText_Rom_5CAE35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE35) < 0x5
	.space 0x5 - (. - gText_Rom_5CAE35)
	.endif
	.incbin "baserom.gba", 0x5cae3a, 0x5

	@ src/data/script_menu.h:771 script_menu_line_771
	.globl gText_Rom_5CAE3F
gText_Rom_5CAE3F: @ 0x085CAE3F
	.string "まけた！$"
	.if (. - gText_Rom_5CAE3F) > 0x5
	.error "gText_Rom_5CAE3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE3F) < 0x5
	.space 0x5 - (. - gText_Rom_5CAE3F)
	.endif
	.incbin "baserom.gba", 0x5cae44, 0xa

	@ src/data/easy_chat/easy_chat_group_trainer.h:46 easy_chat_group_trainer_line_46
	.globl gText_Rom_5CAE4E
gText_Rom_5CAE4E: @ 0x085CAE4E
	.string "センター$"
	.if (. - gText_Rom_5CAE4E) > 0x5
	.error "gText_Rom_5CAE4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE4E) < 0x5
	.space 0x5 - (. - gText_Rom_5CAE4E)
	.endif

	@ src/data/script_menu.h:480 gText_Colosseum
	.globl gText_Rom_5CAE53
gText_Rom_5CAE53: @ 0x085CAE53
	.string "コロシアム$"
	.if (. - gText_Rom_5CAE53) > 0x6
	.error "gText_Rom_5CAE53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE53) < 0x6
	.space 0x6 - (. - gText_Rom_5CAE53)
	.endif
	.incbin "baserom.gba", 0x5cae59, 0x9

	@ src/data/script_menu.h:507 gText_BerryCrush3 (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAE62
gText_Rom_5CAE62: @ 0x085CAE62
	.string "きのみクラッシュ$"
	.if (. - gText_Rom_5CAE62) != 0x9
	.error "gText_Rom_5CAE62 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAE65
	.set gText_Rom_5CAE65, gText_Rom_5CAE62 + 0x3
	.incbin "baserom.gba", 0x5cae6b, 0x4

	@ src/data/easy_chat/easy_chat_group_trainer.h:16 easy_chat_group_trainer_line_16 (+2 aliases)
	.globl gText_Rom_5CAE6F
gText_Rom_5CAE6F: @ 0x085CAE6F
	.string "こうかん$"
	.if (. - gText_Rom_5CAE6F) > 0x5
	.error "gText_Rom_5CAE6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE6F) < 0x5
	.space 0x5 - (. - gText_Rom_5CAE6F)
	.endif
	.incbin "baserom.gba", 0x5cae74, 0x7

	@ src/data/script_menu.h:237 script_menu_line_237 (+1 aliases)
	.globl gText_Rom_5CAE7B
gText_Rom_5CAE7B: @ 0x085CAE7B
	.string "ジャンプ$"
	.if (. - gText_Rom_5CAE7B) > 0x5
	.error "gText_Rom_5CAE7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE7B) < 0x5
	.space 0x5 - (. - gText_Rom_5CAE7B)
	.endif
	.incbin "baserom.gba", 0x5cae80, 0x6

	@ src/data/union_room.h:555 sText_BerryPicking
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAE86
gText_Rom_5CAE86: @ 0x085CAE86
	.string "きのみどり$"
	.if (. - gText_Rom_5CAE86) != 0x6
	.error "gText_Rom_5CAE86 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAE88
	.set gText_Rom_5CAE88, gText_Rom_5CAE86 + 0x2

	@ src/data/script_menu.h:543 script_menu_line_543
	.globl gText_Rom_5CAE8C
gText_Rom_5CAE8C: @ 0x085CAE8C
	.string "リーダーになる$"
	.if (. - gText_Rom_5CAE8C) > 0x8
	.error "gText_Rom_5CAE8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE8C) < 0x8
	.space 0x8 - (. - gText_Rom_5CAE8C)
	.endif

	@ src/data/script_menu.h:542 script_menu_line_542
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAE94
gText_Rom_5CAE94: @ 0x085CAE94
	.string "グループにはいる$"
	.if (. - gText_Rom_5CAE94) != 0x9
	.error "gText_Rom_5CAE94 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAE99
	.set gText_Rom_5CAE99, gText_Rom_5CAE94 + 0x5
	.incbin "baserom.gba", 0x5cae9d, 0x7

	@ src/strings.c:468 gText_Lv50
	.globl gText_Rom_5CAEA4
gText_Rom_5CAEA4: @ 0x085CAEA4
	.string "レベル50$"
	.if (. - gText_Rom_5CAEA4) > 0x6
	.error "gText_Rom_5CAEA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAEA4) < 0x6
	.space 0x6 - (. - gText_Rom_5CAEA4)
	.endif

	@ src/data/script_menu.h:644 script_menu_line_644 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAEAA
gText_Rom_5CAEAA: @ 0x085CAEAA
	.string "オープンレベル$"
	.if (. - gText_Rom_5CAEAA) != 0x8
	.error "gText_Rom_5CAEAA must retain its original byte length"
	.endif
	.globl gText_Rom_5CAEAE
	.set gText_Rom_5CAEAE, gText_Rom_5CAEAA + 0x4
	.incbin "baserom.gba", 0x5caeb2, 0x11

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:178 easy_chat_group_lifestyle_line_178 (+1 aliases)
	.globl gText_Rom_5CAEC3
gText_Rom_5CAEC3: @ 0x085CAEC3
	.string "どうぐ$"
	.if (. - gText_Rom_5CAEC3) > 0x4
	.error "gText_Rom_5CAEC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAEC3) < 0x4
	.space 0x4 - (. - gText_Rom_5CAEC3)
	.endif

	@ src/data/script_menu.h:652 script_menu_line_652
	.globl gText_Rom_5CAEC7
gText_Rom_5CAEC7: @ 0x085CAEC7
	.string "シンボル$"
	.if (. - gText_Rom_5CAEC7) > 0x5
	.error "gText_Rom_5CAEC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAEC7) < 0x5
	.space 0x5 - (. - gText_Rom_5CAEC7)
	.endif
	.incbin "baserom.gba", 0x5caecc, 0x5

	@ src/data/script_menu.h:450 gText_Record2 (+1 aliases)
	.globl gText_Rom_5CAED1
gText_Rom_5CAED1: @ 0x085CAED1
	.string "きろく$"
	.if (. - gText_Rom_5CAED1) > 0x4
	.error "gText_Rom_5CAED1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAED1) < 0x4
	.space 0x4 - (. - gText_Rom_5CAED1)
	.endif

	@ src/data/script_menu.h:654 script_menu_line_654 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAED5
gText_Rom_5CAED5: @ 0x085CAED5
	.string "バトルポイント$"
	.if (. - gText_Rom_5CAED5) != 0x8
	.error "gText_Rom_5CAED5 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAED8
	.set gText_Rom_5CAED8, gText_Rom_5CAED5 + 0x3
	.incbin "baserom.gba", 0x5caedd, 0xd

	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_5CAEEA
gText_Rom_5CAEEA: @ 0x085CAEEA
	.string "ポケモン$"
	.if (. - gText_Rom_5CAEEA) > 0x5
	.error "gText_Rom_5CAEEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAEEA) < 0x5
	.space 0x5 - (. - gText_Rom_5CAEEA)
	.endif

	@ src/data/script_menu.h:676 script_menu_line_676
	.globl gText_Rom_5CAEEF
gText_Rom_5CAEEF: @ 0x085CAEEF
	.string "バトルサロン$"
	.if (. - gText_Rom_5CAEEF) > 0x7
	.error "gText_Rom_5CAEEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAEEF) < 0x7
	.space 0x7 - (. - gText_Rom_5CAEEF)
	.endif
	.incbin "baserom.gba", 0x5caef6, 0x4

	@ src/data/script_menu.h:1332 script_menu_line_1332 (+1 aliases)
	.globl gText_Rom_5CAEFA
gText_Rom_5CAEFA: @ 0x085CAEFA
	.string "マルチ$"
	.if (. - gText_Rom_5CAEFA) > 0x4
	.error "gText_Rom_5CAEFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAEFA) < 0x4
	.space 0x4 - (. - gText_Rom_5CAEFA)
	.endif
	.incbin "baserom.gba", 0x5caefe, 0x3b

	@ src/strings.c:657 gText_Knockout
	.globl gText_Rom_5CAF39
gText_Rom_5CAF39: @ 0x085CAF39
	.string "ノックアウト$"
	.if (. - gText_Rom_5CAF39) > 0x7
	.error "gText_Rom_5CAF39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAF39) < 0x7
	.space 0x7 - (. - gText_Rom_5CAF39)
	.endif

	@ src/data/script_menu.h:689 gText_BasicRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAF40
gText_Rom_5CAF40: @ 0x085CAF40
	.string "きほんルール$"
	.if (. - gText_Rom_5CAF40) != 0x7
	.error "gText_Rom_5CAF40 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAF43
	.set gText_Rom_5CAF43, gText_Rom_5CAF40 + 0x3
	.incbin "baserom.gba", 0x5caf47, 0x5

	@ src/data/easy_chat/easy_chat_group_people.h:4 easy_chat_group_people_line_4 (+1 aliases)
	.globl gText_Rom_5CAF4C
gText_Rom_5CAF4C: @ 0x085CAF4C
	.string "あいて$"
	.if (. - gText_Rom_5CAF4C) > 0x4
	.error "gText_Rom_5CAF4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAF4C) < 0x4
	.space 0x4 - (. - gText_Rom_5CAF4C)
	.endif
	.incbin "baserom.gba", 0x5caf50, 0x14

	@ src/data/script_menu.h:644 script_menu_line_644 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAF64
gText_Rom_5CAF64: @ 0x085CAF64
	.string "オープンレベル$"
	.if (. - gText_Rom_5CAF64) != 0x8
	.error "gText_Rom_5CAF64 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAF68
	.set gText_Rom_5CAF68, gText_Rom_5CAF64 + 0x4
	.incbin "baserom.gba", 0x5caf6c, 0x9

	@ src/strings.c:506 gText_PokemonNature
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAF75
gText_Rom_5CAF75: @ 0x085CAF75
	.string "ポケモンのせいかく$"
	.if (. - gText_Rom_5CAF75) != 0xa
	.error "gText_Rom_5CAF75 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAF7A
	.set gText_Rom_5CAF7A, gText_Rom_5CAF75 + 0x5
	.globl gText_Rom_5CAF7B
	.set gText_Rom_5CAF7B, gText_Rom_5CAF75 + 0x6

	@ src/strings.c:507 gText_PokemonMoves
	.globl gText_Rom_5CAF7F
gText_Rom_5CAF7F: @ 0x085CAF7F
	.string "ポケモンのわざ$"
	.if (. - gText_Rom_5CAF7F) > 0x8
	.error "gText_Rom_5CAF7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAF7F) < 0x8
	.space 0x8 - (. - gText_Rom_5CAF7F)
	.endif

	@ src/strings.c:508 gText_Underpowered
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAF87
gText_Rom_5CAF87: @ 0x085CAF87
	.string "ちからをはっきできない$"
	.if (. - gText_Rom_5CAF87) != 0xc
	.error "gText_Rom_5CAF87 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAF8E
	.set gText_Rom_5CAF8E, gText_Rom_5CAF87 + 0x7

	@ src/strings.c:509 gText_WhenInDanger
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAF93
gText_Rom_5CAF93: @ 0x085CAF93
	.string "ピンチになったら$"
	.if (. - gText_Rom_5CAF93) != 0x9
	.error "gText_Rom_5CAF93 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAF98
	.set gText_Rom_5CAF98, gText_Rom_5CAF93 + 0x5
	.incbin "baserom.gba", 0x5caf9c, 0x7

	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_5CAFA3
gText_Rom_5CAFA3: @ 0x085CAFA3
	.string "ポケモン$"
	.if (. - gText_Rom_5CAFA3) > 0x5
	.error "gText_Rom_5CAFA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAFA3) < 0x5
	.space 0x5 - (. - gText_Rom_5CAFA3)
	.endif
	.incbin "baserom.gba", 0x5cafa8, 0x7

	@ src/data/easy_chat/easy_chat_group_trainer.h:70 easy_chat_group_trainer_line_70 (+1 aliases)
	.globl gText_Rom_5CAFAF
gText_Rom_5CAFAF: @ 0x085CAFAF
	.string "トレーナー$"
	.if (. - gText_Rom_5CAFAF) > 0x6
	.error "gText_Rom_5CAFAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAFAF) < 0x6
	.space 0x6 - (. - gText_Rom_5CAFAF)
	.endif
	.incbin "baserom.gba", 0x5cafb5, 0xb

	@ src/data/script_menu.h:558 script_menu_line_558 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAFC0
gText_Rom_5CAFC0: @ 0x085CAFC0
	.string "バトルバッグ$"
	.if (. - gText_Rom_5CAFC0) != 0x7
	.error "gText_Rom_5CAFC0 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAFC3
	.set gText_Rom_5CAFC3, gText_Rom_5CAFC0 + 0x3
	.incbin "baserom.gba", 0x5cafc7, 0x5

	@ src/pokedex_plus_hgss.c:6790 pokedex_plus_hgss_line_6790
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAFCC
gText_Rom_5CAFCC: @ 0x085CAFCC
	.string " バッグ$"
	.if (. - gText_Rom_5CAFCC) != 0x5
	.error "gText_Rom_5CAFCC must retain its original byte length"
	.endif
	.globl gText_Rom_5CAFCD
	.set gText_Rom_5CAFCD, gText_Rom_5CAFCC + 0x1
	.incbin "baserom.gba", 0x5cafd1, 0x5

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:178 easy_chat_group_lifestyle_line_178 (+1 aliases)
	.globl gText_Rom_5CAFD6
gText_Rom_5CAFD6: @ 0x085CAFD6
	.string "どうぐ$"
	.if (. - gText_Rom_5CAFD6) > 0x4
	.error "gText_Rom_5CAFD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAFD6) < 0x4
	.space 0x4 - (. - gText_Rom_5CAFD6)
	.endif
	.incbin "baserom.gba", 0x5cafda, 0xc

	@ src/strings.c:510 gText_BattlePokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAFE6
gText_Rom_5CAFE6: @ 0x085CAFE6
	.string "でてくるポケモン$"
	.if (. - gText_Rom_5CAFE6) != 0x9
	.error "gText_Rom_5CAFE6 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAFEA
	.set gText_Rom_5CAFEA, gText_Rom_5CAFE6 + 0x4

	@ src/strings.c:511 gText_BattleTrainers
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAFEF
gText_Rom_5CAFEF: @ 0x085CAFEF
	.string "たたかう トレーナー$"
	.if (. - gText_Rom_5CAFEF) != 0xb
	.error "gText_Rom_5CAFEF must retain its original byte length"
	.endif
	.globl gText_Rom_5CAFF4
	.set gText_Rom_5CAFF4, gText_Rom_5CAFEF + 0x5

	@ src/data/script_menu.h:731 gText_GoOn
	.globl gText_Rom_5CAFFA
gText_Rom_5CAFFA: @ 0x085CAFFA
	.string "つづける$"
	.if (. - gText_Rom_5CAFFA) > 0x5
	.error "gText_Rom_5CAFFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAFFA) < 0x5
	.space 0x5 - (. - gText_Rom_5CAFFA)
	.endif
	.incbin "baserom.gba", 0x5cafff, 0x6

	@ src/data/script_menu.h:451 gText_Rest (+1 aliases)
	.globl gText_Rom_5CB005
gText_Rom_5CB005: @ 0x085CB005
	.string "やすむ$"
	.if (. - gText_Rom_5CB005) > 0x4
	.error "gText_Rom_5CB005 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB005) < 0x4
	.space 0x4 - (. - gText_Rom_5CB005)
	.endif

	@ src/data/script_menu.h:452 gText_Retire (+1 aliases)
	.globl gText_Rom_5CB009
gText_Rom_5CB009: @ 0x085CB009
	.string "リタイア$"
	.if (. - gText_Rom_5CB009) > 0x5
	.error "gText_Rom_5CB009 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB009) < 0x5
	.space 0x5 - (. - gText_Rom_5CB009)
	.endif
	.globl gUnknown_85CB00E
gUnknown_85CB00E: @ 0x085CB00E

	@ src/field_specials.c:179 sText_99TimesPlus
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB00E
gText_Rom_5CB00E: @ 0x085CB00E
	.string "99かい いじょう$"
	.if (. - gText_Rom_5CB00E) != 0xa
	.error "gText_Rom_5CB00E must retain its original byte length"
	.endif
	.globl gText_Rom_5CB013
	.set gText_Rom_5CB013, gText_Rom_5CB00E + 0x5
	.globl gUnknown_85CB018
gUnknown_85CB018: @ 0x085CB018

	@ src/field_specials.c:180 sText_1MinutePlus
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB018
gText_Rom_5CB018: @ 0x085CB018
	.string "1ぷん いじょう$"
	.if (. - gText_Rom_5CB018) != 0x9
	.error "gText_Rom_5CB018 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB01C
	.set gText_Rom_5CB01C, gText_Rom_5CB018 + 0x4
	.globl gUnknown_85CB021
gUnknown_85CB021: @ 0x085CB021

	@ src/berry_blender.c:288 sText_Sec (+1 aliases)
	.globl gText_Rom_5CB021
gText_Rom_5CB021: @ 0x085CB021
	.string "びょう$"
	.if (. - gText_Rom_5CB021) > 0x4
	.error "gText_Rom_5CB021 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB021) < 0x4
	.space 0x4 - (. - gText_Rom_5CB021)
	.endif
	.globl gUnknown_85CB025
gUnknown_85CB025: @ 0x085CB025

	@ asm/field_specials.s:111 DetermineCyclingRoadResults
	.globl gText_Rom_5CB025
gText_Rom_5CB025: @ 0x085CB025
	.string "かい$"
	.if (. - gText_Rom_5CB025) > 0x3
	.error "gText_Rom_5CB025 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB025) < 0x3
	.space 0x3 - (. - gText_Rom_5CB025)
	.endif
	.incbin "baserom.gba", 0x5cb028, 0x2
	.globl gUnknown_85CB02A
gUnknown_85CB02A: @ 0x085CB02A

	@ src/field_specials.c:175 sText_BigGuy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB02A
gText_Rom_5CB02A: @ 0x085CB02A
	.string "おにいちゃん$"
	.if (. - gText_Rom_5CB02A) != 0x7
	.error "gText_Rom_5CB02A must retain its original byte length"
	.endif
	.globl gText_Rom_5CB02D
	.set gText_Rom_5CB02D, gText_Rom_5CB02A + 0x3
	.globl gUnknown_85CB031
gUnknown_85CB031: @ 0x085CB031

	@ src/field_specials.c:176 sText_BigGirl
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB031
gText_Rom_5CB031: @ 0x085CB031
	.string "おねえちゃん$"
	.if (. - gText_Rom_5CB031) != 0x7
	.error "gText_Rom_5CB031 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB034
	.set gText_Rom_5CB034, gText_Rom_5CB031 + 0x3
	.globl gUnknown_85CB038
gUnknown_85CB038: @ 0x085CB038

	@ src/field_specials.c:177 sText_Son
	.globl gText_Rom_5CB038
gText_Rom_5CB038: @ 0x085CB038
	.string "むすこ$"
	.if (. - gText_Rom_5CB038) > 0x4
	.error "gText_Rom_5CB038 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB038) < 0x4
	.space 0x4 - (. - gText_Rom_5CB038)
	.endif
	.globl gUnknown_85CB03C
gUnknown_85CB03C: @ 0x085CB03C

	@ src/field_specials.c:178 sText_Daughter
	.globl gText_Rom_5CB03C
gText_Rom_5CB03C: @ 0x085CB03C
	.string "むすめ$"
	.if (. - gText_Rom_5CB03C) > 0x4
	.error "gText_Rom_5CB03C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB03C) < 0x4
	.space 0x4 - (. - gText_Rom_5CB03C)
	.endif

	@ src/data/script_menu.h:256 script_menu_line_256 (+1 aliases)
	.globl gText_Rom_5CB040
gText_Rom_5CB040: @ 0x085CB040
	.string "あおいビードロ$"
	.if (. - gText_Rom_5CB040) > 0x8
	.error "gText_Rom_5CB040 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB040) < 0x8
	.space 0x8 - (. - gText_Rom_5CB040)
	.endif

	@ src/data/script_menu.h:257 script_menu_line_257 (+1 aliases)
	.globl gText_Rom_5CB048
gText_Rom_5CB048: @ 0x085CB048
	.string "きいろビードロ$"
	.if (. - gText_Rom_5CB048) > 0x8
	.error "gText_Rom_5CB048 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB048) < 0x8
	.space 0x8 - (. - gText_Rom_5CB048)
	.endif

	@ src/data/script_menu.h:258 script_menu_line_258 (+1 aliases)
	.globl gText_Rom_5CB050
gText_Rom_5CB050: @ 0x085CB050
	.string "あかいビードロ$"
	.if (. - gText_Rom_5CB050) > 0x8
	.error "gText_Rom_5CB050 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB050) < 0x8
	.space 0x8 - (. - gText_Rom_5CB050)
	.endif

	@ src/data/script_menu.h:259 script_menu_line_259 (+1 aliases)
	.globl gText_Rom_5CB058
gText_Rom_5CB058: @ 0x085CB058
	.string "しろいビードロ$"
	.if (. - gText_Rom_5CB058) > 0x8
	.error "gText_Rom_5CB058 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB058) < 0x8
	.space 0x8 - (. - gText_Rom_5CB058)
	.endif

	@ src/data/script_menu.h:260 script_menu_line_260 (+1 aliases)
	.globl gText_Rom_5CB060
gText_Rom_5CB060: @ 0x085CB060
	.string "くろいビードロ$"
	.if (. - gText_Rom_5CB060) > 0x8
	.error "gText_Rom_5CB060 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB060) < 0x8
	.space 0x8 - (. - gText_Rom_5CB060)
	.endif

	@ src/data/decoration/header.h:188 header_line_188 (+1 aliases)
	.globl gText_Rom_5CB068
gText_Rom_5CB068: @ 0x085CB068
	.string "きれいなイス$"
	.if (. - gText_Rom_5CB068) > 0x7
	.error "gText_Rom_5CB068 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB068) < 0x7
	.space 0x7 - (. - gText_Rom_5CB068)
	.endif

	@ src/data/decoration/header.h:90 header_line_90 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB06F
gText_Rom_5CB06F: @ 0x085CB06F
	.string "きれいなつくえ$"
	.if (. - gText_Rom_5CB06F) != 0x8
	.error "gText_Rom_5CB06F must retain its original byte length"
	.endif
	.globl gText_Rom_5CB073
	.set gText_Rom_5CB073, gText_Rom_5CB06F + 0x4

	@ asm/field_specials.s:4112 sub_08139BD4 (+2 aliases)
	.globl gText_Rom_5CB077
gText_Rom_5CB077: @ 0x085CB077
	.string "1かい$"
	.if (. - gText_Rom_5CB077) > 0x4
	.error "gText_Rom_5CB077 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB077) < 0x4
	.space 0x4 - (. - gText_Rom_5CB077)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+2 aliases)
	.globl gText_Rom_5CB07B
gText_Rom_5CB07B: @ 0x085CB07B
	.string "2かい$"
	.if (. - gText_Rom_5CB07B) > 0x4
	.error "gText_Rom_5CB07B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB07B) < 0x4
	.space 0x4 - (. - gText_Rom_5CB07B)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB07F
gText_Rom_5CB07F: @ 0x085CB07F
	.string "3かい$"
	.if (. - gText_Rom_5CB07F) > 0x4
	.error "gText_Rom_5CB07F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB07F) < 0x4
	.space 0x4 - (. - gText_Rom_5CB07F)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB083
gText_Rom_5CB083: @ 0x085CB083
	.string "4かい$"
	.if (. - gText_Rom_5CB083) > 0x4
	.error "gText_Rom_5CB083 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB083) < 0x4
	.space 0x4 - (. - gText_Rom_5CB083)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB087
gText_Rom_5CB087: @ 0x085CB087
	.string "5かい$"
	.if (. - gText_Rom_5CB087) > 0x4
	.error "gText_Rom_5CB087 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB087) < 0x4
	.space 0x4 - (. - gText_Rom_5CB087)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB08B
gText_Rom_5CB08B: @ 0x085CB08B
	.string "6かい$"
	.if (. - gText_Rom_5CB08B) > 0x4
	.error "gText_Rom_5CB08B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB08B) < 0x4
	.space 0x4 - (. - gText_Rom_5CB08B)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB08F
gText_Rom_5CB08F: @ 0x085CB08F
	.string "7かい$"
	.if (. - gText_Rom_5CB08F) > 0x4
	.error "gText_Rom_5CB08F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB08F) < 0x4
	.space 0x4 - (. - gText_Rom_5CB08F)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB093
gText_Rom_5CB093: @ 0x085CB093
	.string "8かい$"
	.if (. - gText_Rom_5CB093) > 0x4
	.error "gText_Rom_5CB093 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB093) < 0x4
	.space 0x4 - (. - gText_Rom_5CB093)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB097
gText_Rom_5CB097: @ 0x085CB097
	.string "9かい$"
	.if (. - gText_Rom_5CB097) > 0x4
	.error "gText_Rom_5CB097 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB097) < 0x4
	.space 0x4 - (. - gText_Rom_5CB097)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB09B
gText_Rom_5CB09B: @ 0x085CB09B
	.string "10かい$"
	.if (. - gText_Rom_5CB09B) > 0x5
	.error "gText_Rom_5CB09B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB09B) < 0x5
	.space 0x5 - (. - gText_Rom_5CB09B)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB0A0
gText_Rom_5CB0A0: @ 0x085CB0A0
	.string "11かい$"
	.if (. - gText_Rom_5CB0A0) != 0x5
	.error "gText_Rom_5CB0A0 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB0A1
	.set gText_Rom_5CB0A1, gText_Rom_5CB0A0 + 0x1

	@ asm/field_specials.s:4112 sub_08139BD4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB0A5
gText_Rom_5CB0A5: @ 0x085CB0A5
	.string "ビ1かい$"
	.if (. - gText_Rom_5CB0A5) != 0x5
	.error "gText_Rom_5CB0A5 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB0A6
	.set gText_Rom_5CB0A6, gText_Rom_5CB0A5 + 0x1

	@ asm/field_specials.s:4112 sub_08139BD4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB0AA
gText_Rom_5CB0AA: @ 0x085CB0AA
	.string "ビ2かい$"
	.if (. - gText_Rom_5CB0AA) != 0x5
	.error "gText_Rom_5CB0AA must retain its original byte length"
	.endif
	.globl gText_Rom_5CB0AB
	.set gText_Rom_5CB0AB, gText_Rom_5CB0AA + 0x1

	@ asm/field_specials.s:4112 sub_08139BD4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB0AF
gText_Rom_5CB0AF: @ 0x085CB0AF
	.string "ビ3かい$"
	.if (. - gText_Rom_5CB0AF) != 0x5
	.error "gText_Rom_5CB0AF must retain its original byte length"
	.endif
	.globl gText_Rom_5CB0B0
	.set gText_Rom_5CB0B0, gText_Rom_5CB0AF + 0x1

	@ asm/field_specials.s:4112 sub_08139BD4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB0B4
gText_Rom_5CB0B4: @ 0x085CB0B4
	.string "ビ4かい$"
	.if (. - gText_Rom_5CB0B4) != 0x5
	.error "gText_Rom_5CB0B4 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB0B5
	.set gText_Rom_5CB0B5, gText_Rom_5CB0B4 + 0x1

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB0B9
gText_Rom_5CB0B9: @ 0x085CB0B9
	.string "おくじょう$"
	.if (. - gText_Rom_5CB0B9) > 0x6
	.error "gText_Rom_5CB0B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0B9) < 0x6
	.space 0x6 - (. - gText_Rom_5CB0B9)
	.endif
	.globl gUnknown_85CB0BF
gUnknown_85CB0BF: @ 0x085CB0BF

	@ src/strings.c:528 gText_ElevatorNowOn
	.globl gText_Rom_5CB0BF
gText_Rom_5CB0BF: @ 0x085CB0BF
	.string "げんざいのフロア$"
	.if (. - gText_Rom_5CB0BF) > 0x9
	.error "gText_Rom_5CB0BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0BF) < 0x9
	.space 0x9 - (. - gText_Rom_5CB0BF)
	.endif
	.globl gUnknown_85CB0C8
gUnknown_85CB0C8: @ 0x085CB0C8

	@ asm/field_specials.s:5777 sub_0813A904
	.globl gText_Rom_5CB0C8
gText_Rom_5CB0C8: @ 0x085CB0C8
	.string "BP$"
	.if (. - gText_Rom_5CB0C8) > 0x3
	.error "gText_Rom_5CB0C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0C8) < 0x3
	.space 0x3 - (. - gText_Rom_5CB0C8)
	.endif

	@ src/field_specials.c:2592 field_specials_line_2592
	.globl gText_Rom_5CB0CB
gText_Rom_5CB0CB: @ 0x085CB0CB
	.string "ちからのこな  {FONT_SMALL}  50$"
	.if (. - gText_Rom_5CB0CB) > 0x10
	.error "gText_Rom_5CB0CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0CB) < 0x10
	.space 0x10 - (. - gText_Rom_5CB0CB)
	.endif

	@ src/field_specials.c:2593 field_specials_line_2593
	.globl gText_Rom_5CB0DB
gText_Rom_5CB0DB: @ 0x085CB0DB
	.string "ちからのねっこ {FONT_SMALL}  80$"
	.if (. - gText_Rom_5CB0DB) > 0x10
	.error "gText_Rom_5CB0DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0DB) < 0x10
	.space 0x10 - (. - gText_Rom_5CB0DB)
	.endif

	@ src/field_specials.c:2594 field_specials_line_2594
	.globl gText_Rom_5CB0EB
gText_Rom_5CB0EB: @ 0x085CB0EB
	.string "ばんのうごな  {FONT_SMALL}  50$"
	.if (. - gText_Rom_5CB0EB) > 0x10
	.error "gText_Rom_5CB0EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0EB) < 0x10
	.space 0x10 - (. - gText_Rom_5CB0EB)
	.endif

	@ src/field_specials.c:2595 field_specials_line_2595
	.globl gText_Rom_5CB0FB
gText_Rom_5CB0FB: @ 0x085CB0FB
	.string "ふっかつそう  {FONT_SMALL} 300$"
	.if (. - gText_Rom_5CB0FB) > 0x10
	.error "gText_Rom_5CB0FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0FB) < 0x10
	.space 0x10 - (. - gText_Rom_5CB0FB)
	.endif

	@ src/field_specials.c:2596 field_specials_line_2596
	.globl gText_Rom_5CB10B
gText_Rom_5CB10B: @ 0x085CB10B
	.string "タウリン    {FONT_SMALL}1000$"
	.if (. - gText_Rom_5CB10B) > 0x10
	.error "gText_Rom_5CB10B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB10B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB10B)
	.endif

	@ src/field_specials.c:2597 field_specials_line_2597
	.globl gText_Rom_5CB11B
gText_Rom_5CB11B: @ 0x085CB11B
	.string "ブロムヘキシン {FONT_SMALL}1000$"
	.if (. - gText_Rom_5CB11B) > 0x10
	.error "gText_Rom_5CB11B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB11B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB11B)
	.endif

	@ src/field_specials.c:2598 field_specials_line_2598
	.globl gText_Rom_5CB12B
gText_Rom_5CB12B: @ 0x085CB12B
	.string "インドメタシン {FONT_SMALL}1000$"
	.if (. - gText_Rom_5CB12B) > 0x10
	.error "gText_Rom_5CB12B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB12B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB12B)
	.endif

	@ src/field_specials.c:2599 field_specials_line_2599
	.globl gText_Rom_5CB13B
gText_Rom_5CB13B: @ 0x085CB13B
	.string "リゾチウム   {FONT_SMALL}1000$"
	.if (. - gText_Rom_5CB13B) > 0x10
	.error "gText_Rom_5CB13B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB13B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB13B)
	.endif

	@ src/field_specials.c:2600 field_specials_line_2600
	.globl gText_Rom_5CB14B
gText_Rom_5CB14B: @ 0x085CB14B
	.string "キトサン    {FONT_SMALL}1000$"
	.if (. - gText_Rom_5CB14B) > 0x10
	.error "gText_Rom_5CB14B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB14B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB14B)
	.endif

	@ src/field_specials.c:2601 field_specials_line_2601
	.globl gText_Rom_5CB15B
gText_Rom_5CB15B: @ 0x085CB15B
	.string "マックスアップ {FONT_SMALL}1000$"
	.if (. - gText_Rom_5CB15B) > 0x10
	.error "gText_Rom_5CB15B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB15B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB15B)
	.endif

	@ src/field_specials.c:2602 field_specials_line_2602
	.globl gText_Rom_5CB16B
gText_Rom_5CB16B: @ 0x085CB16B
	.string "ポイントアップ {FONT_SMALL}3000$"
	.if (. - gText_Rom_5CB16B) > 0x10
	.error "gText_Rom_5CB16B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB16B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB16B)
	.endif

	@ src/strings.c:530 gText_RankingHall
	.globl gText_Rom_5CB17B
gText_Rom_5CB17B: @ 0x085CB17B
	.string "ランキングホール$"
	.if (. - gText_Rom_5CB17B) > 0x9
	.error "gText_Rom_5CB17B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB17B) < 0x9
	.space 0x9 - (. - gText_Rom_5CB17B)
	.endif

	@ src/strings.c:531 gText_ExchangeService
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB184
gText_Rom_5CB184: @ 0x085CB184
	.string "ひきかえサービス$"
	.if (. - gText_Rom_5CB184) != 0x9
	.error "gText_Rom_5CB184 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB188
	.set gText_Rom_5CB188, gText_Rom_5CB184 + 0x4

	@ src/data/region_map/region_map_entries.h:98 region_map_entries_line_98 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB18D
gText_Rom_5CB18D: @ 0x085CB18D
	.string "ミナモシティ$"
	.if (. - gText_Rom_5CB18D) != 0x7
	.error "gText_Rom_5CB18D must retain its original byte length"
	.endif
	.globl gText_Rom_5CB190
	.set gText_Rom_5CB190, gText_Rom_5CB18D + 0x3

	@ src/data/region_map/region_map_entries.h:70 region_map_entries_line_70 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB194
gText_Rom_5CB194: @ 0x085CB194
	.string "カイナシティ$"
	.if (. - gText_Rom_5CB194) != 0x7
	.error "gText_Rom_5CB194 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB197
	.set gText_Rom_5CB197, gText_Rom_5CB194 + 0x3

	@ src/data/region_map/region_map_entries.h:518 region_map_entries_line_518 (+1 aliases)
	.globl gText_Rom_5CB19B
gText_Rom_5CB19B: @ 0x085CB19B
	.string "めざめのほこら$"
	.if (. - gText_Rom_5CB19B) > 0x8
	.error "gText_Rom_5CB19B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB19B) < 0x8
	.space 0x8 - (. - gText_Rom_5CB19B)
	.endif

	@ src/data/region_map/region_map_entries.h:469 region_map_entries_line_469 (+1 aliases)
	.globl gText_Rom_5CB1A3
gText_Rom_5CB1A3: @ 0x085CB1A3
	.string "おくりびやま$"
	.if (. - gText_Rom_5CB1A3) > 0x7
	.error "gText_Rom_5CB1A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB1A3) < 0x7
	.space 0x7 - (. - gText_Rom_5CB1A3)
	.endif

	@ src/data/region_map/region_map_entries.h:609 region_map_entries_line_609 (+1 aliases)
	.globl gText_Rom_5CB1AA
gText_Rom_5CB1AA: @ 0x085CB1AA
	.string "そらのはしら$"
	.if (. - gText_Rom_5CB1AA) > 0x7
	.error "gText_Rom_5CB1AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB1AA) < 0x7
	.space 0x7 - (. - gText_Rom_5CB1AA)
	.endif

	@ src/data/script_menu.h:780 script_menu_line_780
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB1B1
gText_Rom_5CB1B1: @ 0x085CB1B1
	.string "おぼえていない$"
	.if (. - gText_Rom_5CB1B1) != 0x8
	.error "gText_Rom_5CB1B1 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB1B4
	.set gText_Rom_5CB1B4, gText_Rom_5CB1B1 + 0x3
	.globl gText_Rom_5CB1B5
	.set gText_Rom_5CB1B5, gText_Rom_5CB1B1 + 0x4
	.globl gUnknown_85CB1B9
gUnknown_85CB1B9: @ 0x085CB1B9

	@ src/pokemon_storage_system.c:8078 pokemon_storage_system_line_8078 (+5 aliases)
	.globl gText_Rom_5CB1B9
gText_Rom_5CB1B9: @ 0x085CB1B9
	.string "やめる$"
	.if (. - gText_Rom_5CB1B9) > 0x4
	.error "gText_Rom_5CB1B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB1B9) < 0x4
	.space 0x4 - (. - gText_Rom_5CB1B9)
	.endif
	.incbin "baserom.gba", 0x5cb1bd, 0x13

	@ src/pokemon_storage_system.c:1052 pokemon_storage_system_line_1052
	.globl gText_Rom_5CB1D0
gText_Rom_5CB1D0: @ 0x085CB1D0
	.string "このボックスを どうしますか?$"
	.if (. - gText_Rom_5CB1D0) > 0x10
	.error "gText_Rom_5CB1D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB1D0) < 0x10
	.space 0x10 - (. - gText_Rom_5CB1D0)
	.endif

	@ src/pokemon_storage_system.c:1053 pokemon_storage_system_line_1053
	.globl gText_Rom_5CB1E0
gText_Rom_5CB1E0: @ 0x085CB1E0
	.string "どの テーマにしますか?$"
	.if (. - gText_Rom_5CB1E0) > 0xd
	.error "gText_Rom_5CB1E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB1E0) < 0xd
	.space 0xd - (. - gText_Rom_5CB1E0)
	.endif

	@ src/pokemon_storage_system.c:1054 pokemon_storage_system_line_1054
	.globl gText_Rom_5CB1ED
gText_Rom_5CB1ED: @ 0x085CB1ED
	.string "どの かべがみにしますか?$"
	.if (. - gText_Rom_5CB1ED) > 0xe
	.error "gText_Rom_5CB1ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB1ED) < 0xe
	.space 0xe - (. - gText_Rom_5CB1ED)
	.endif
	.incbin "baserom.gba", 0x5cb1fb, 0xc

	@ src/pokemon_storage_system.c:1056 pokemon_storage_system_line_1056
	.globl gText_Rom_5CB207
gText_Rom_5CB207: @ 0x085CB207
	.string "どの ボックスに ジャンプしますか?$"
	.if (. - gText_Rom_5CB207) > 0x13
	.error "gText_Rom_5CB207 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB207) < 0x13
	.space 0x13 - (. - gText_Rom_5CB207)
	.endif

	@ src/pokemon_storage_system.c:1057 pokemon_storage_system_line_1057
	.globl gText_Rom_5CB21A
gText_Rom_5CB21A: @ 0x085CB21A
	.string "どの ボックスに あずけますか?$"
	.if (. - gText_Rom_5CB21A) > 0x11
	.error "gText_Rom_5CB21A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB21A) < 0x11
	.space 0x11 - (. - gText_Rom_5CB21A)
	.endif
	.incbin "baserom.gba", 0x5cb22b, 0xb

	@ src/pokemon_storage_system.c:1059 pokemon_storage_system_line_1059
	.globl gText_Rom_5CB236
gText_Rom_5CB236: @ 0x085CB236
	.string "このボックスは いっぱいだ!$"
	.if (. - gText_Rom_5CB236) > 0xf
	.error "gText_Rom_5CB236 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB236) < 0xf
	.space 0xf - (. - gText_Rom_5CB236)
	.endif

	@ src/pokemon_storage_system.c:1060 pokemon_storage_system_line_1060
	.globl gText_Rom_5CB245
gText_Rom_5CB245: @ 0x085CB245
	.string "ほんとうに にがしますか?$"
	.if (. - gText_Rom_5CB245) > 0xe
	.error "gText_Rom_5CB245 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB245) < 0xe
	.space 0xe - (. - gText_Rom_5CB245)
	.endif
	.incbin "baserom.gba", 0x5cb253, 0x19

	@ src/pokemon_storage_system.c:1063 pokemon_storage_system_line_1063
	.globl gText_Rom_5CB26C
gText_Rom_5CB26C: @ 0x085CB26C
	.string "マーキングしてください$"
	.if (. - gText_Rom_5CB26C) > 0xc
	.error "gText_Rom_5CB26C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB26C) < 0xc
	.space 0xc - (. - gText_Rom_5CB26C)
	.endif

	@ src/pokemon_storage_system.c:1064 pokemon_storage_system_line_1064
	.globl gText_Rom_5CB278
gText_Rom_5CB278: @ 0x085CB278
	.string "たたかうポケモンが いなくなります!$"
	.if (. - gText_Rom_5CB278) > 0x13
	.error "gText_Rom_5CB278 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB278) < 0x13
	.space 0x13 - (. - gText_Rom_5CB278)
	.endif
	.incbin "baserom.gba", 0x5cb28b, 0xd

	@ src/pokemon_storage_system.c:1066 pokemon_storage_system_line_1066
	.globl gText_Rom_5CB298
gText_Rom_5CB298: @ 0x085CB298
	.string "ポケモンを つかんだままですよ!$"
	.if (. - gText_Rom_5CB298) > 0x11
	.error "gText_Rom_5CB298 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB298) < 0x11
	.space 0x11 - (. - gText_Rom_5CB298)
	.endif

	@ src/pokemon_storage_system.c:1067 pokemon_storage_system_line_1067
	.globl gText_Rom_5CB2A9
gText_Rom_5CB2A9: @ 0x085CB2A9
	.string "つれていく ポケモンを えらんで!$"
	.if (. - gText_Rom_5CB2A9) > 0x12
	.error "gText_Rom_5CB2A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB2A9) < 0x12
	.space 0x12 - (. - gText_Rom_5CB2A9)
	.endif

	@ src/pokemon_storage_system.c:1068 pokemon_storage_system_line_1068
	.globl gText_Rom_5CB2BB
gText_Rom_5CB2BB: @ 0x085CB2BB
	.string "タマゴを にがすことは できません!$"
	.if (. - gText_Rom_5CB2BB) > 0x13
	.error "gText_Rom_5CB2BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB2BB) < 0x13
	.space 0x13 - (. - gText_Rom_5CB2BB)
	.endif

	@ src/pokemon_storage_system.c:1069 pokemon_storage_system_line_1069
	.globl gText_Rom_5CB2CE
gText_Rom_5CB2CE: @ 0x085CB2CE
	.string "ボックスそうさを つづけますか?$"
	.if (. - gText_Rom_5CB2CE) > 0x11
	.error "gText_Rom_5CB2CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB2CE) < 0x11
	.space 0x11 - (. - gText_Rom_5CB2CE)
	.endif
	.incbin "baserom.gba", 0x5cb2df, 0xc

	@ src/pokemon_storage_system.c:1071 pokemon_storage_system_line_1071
	.globl gText_Rom_5CB2EB
gText_Rom_5CB2EB: @ 0x085CB2EB
	.string "しんぱい だったのかな……$"
	.if (. - gText_Rom_5CB2EB) > 0xe
	.error "gText_Rom_5CB2EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB2EB) < 0xe
	.space 0xe - (. - gText_Rom_5CB2EB)
	.endif

	@ src/pokemon_storage_system.c:1072 pokemon_storage_system_line_1072
	.globl gText_Rom_5CB2F9
gText_Rom_5CB2F9: @ 0x085CB2F9
	.string "……………!$"
	.if (. - gText_Rom_5CB2F9) > 0x7
	.error "gText_Rom_5CB2F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB2F9) < 0x7
	.space 0x7 - (. - gText_Rom_5CB2F9)
	.endif

	@ src/pokemon_storage_system.c:1073 pokemon_storage_system_line_1073
	.globl gText_Rom_5CB300
gText_Rom_5CB300: @ 0x085CB300
	.string "メールを はずして ください!$"
	.if (. - gText_Rom_5CB300) > 0x10
	.error "gText_Rom_5CB300 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB300) < 0x10
	.space 0x10 - (. - gText_Rom_5CB300)
	.endif

	@ src/pokemon_storage_system.c:1075 pokemon_storage_system_line_1075
	.globl gText_Rom_5CB310
gText_Rom_5CB310: @ 0x085CB310
	.string "どうぐを もたせますか?$"
	.if (. - gText_Rom_5CB310) > 0xd
	.error "gText_Rom_5CB310 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB310) < 0xd
	.space 0xd - (. - gText_Rom_5CB310)
	.endif
	.incbin "baserom.gba", 0x5cb31d, 0xd

	@ src/pokemon_storage_system.c:1077 pokemon_storage_system_line_1077
	.globl gText_Rom_5CB32A
gText_Rom_5CB32A: @ 0x085CB32A
	.string "バッグが いっぱいです!$"
	.if (. - gText_Rom_5CB32A) > 0xd
	.error "gText_Rom_5CB32A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB32A) < 0xd
	.space 0xd - (. - gText_Rom_5CB32A)
	.endif

	@ src/pokemon_storage_system.c:1078 pokemon_storage_system_line_1078
	.globl gText_Rom_5CB337
gText_Rom_5CB337: @ 0x085CB337
	.string "どうぐを バッグに いれますか?$"
	.if (. - gText_Rom_5CB337) > 0x11
	.error "gText_Rom_5CB337 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB337) < 0x11
	.space 0x11 - (. - gText_Rom_5CB337)
	.endif
	.incbin "baserom.gba", 0x5cb348, 0x15

	@ src/pokemon_storage_system.c:1081 pokemon_storage_system_line_1081
	.globl gText_Rom_5CB35D
gText_Rom_5CB35D: @ 0x085CB35D
	.string "メールを あずかることは できません!$"
	.if (. - gText_Rom_5CB35D) > 0x14
	.error "gText_Rom_5CB35D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB35D) < 0x14
	.space 0x14 - (. - gText_Rom_5CB35D)
	.endif
	.incbin "baserom.gba", 0x5cb371, 0x2a

	@ src/pokemon_storage_system.c:8084 pokemon_storage_system_line_8084
	.globl gText_Rom_5CB39B
gText_Rom_5CB39B: @ 0x085CB39B
	.string "ようすをみる$"
	.if (. - gText_Rom_5CB39B) > 0x7
	.error "gText_Rom_5CB39B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB39B) < 0x7
	.space 0x7 - (. - gText_Rom_5CB39B)
	.endif
	.incbin "baserom.gba", 0x5cb3a2, 0x15

	@ src/data/script_menu.h:237 script_menu_line_237 (+1 aliases)
	.globl gText_Rom_5CB3B7
gText_Rom_5CB3B7: @ 0x085CB3B7
	.string "ジャンプ$"
	.if (. - gText_Rom_5CB3B7) > 0x5
	.error "gText_Rom_5CB3B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3B7) < 0x5
	.space 0x5 - (. - gText_Rom_5CB3B7)
	.endif
	.incbin "baserom.gba", 0x5cb3bc, 0x7

	@ src/data/party_menu.h:801 party_menu_line_801
	.globl gText_Rom_5CB3C3
gText_Rom_5CB3C3: @ 0x085CB3C3
	.string "あずかる$"
	.if (. - gText_Rom_5CB3C3) > 0x5
	.error "gText_Rom_5CB3C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3C3) < 0x5
	.space 0x5 - (. - gText_Rom_5CB3C3)
	.endif

	@ src/data/party_menu.h:800 party_menu_line_800 (+2 aliases)
	.globl gText_Rom_5CB3C8
gText_Rom_5CB3C8: @ 0x085CB3C8
	.string "もたせる$"
	.if (. - gText_Rom_5CB3C8) > 0x5
	.error "gText_Rom_5CB3C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3C8) < 0x5
	.space 0x5 - (. - gText_Rom_5CB3C8)
	.endif

	@ src/pokemon_storage_system.c:8093 pokemon_storage_system_line_8093
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB3CD
gText_Rom_5CB3CD: @ 0x085CB3CD
	.string "とりかえる$"
	.if (. - gText_Rom_5CB3CD) != 0x6
	.error "gText_Rom_5CB3CD must retain its original byte length"
	.endif
	.globl gText_Rom_5CB3CF
	.set gText_Rom_5CB3CF, gText_Rom_5CB3CD + 0x2

	@ src/pokemon_storage_system.c:8094 pokemon_storage_system_line_8094
	.globl gText_Rom_5CB3D3
gText_Rom_5CB3D3: @ 0x085CB3D3
	.string "バッグへ$"
	.if (. - gText_Rom_5CB3D3) > 0x5
	.error "gText_Rom_5CB3D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3D3) < 0x5
	.space 0x5 - (. - gText_Rom_5CB3D3)
	.endif

	@ src/data/script_menu.h:9 gText_Info2 (+3 aliases)
	.globl gText_Rom_5CB3D8
gText_Rom_5CB3D8: @ 0x085CB3D8
	.string "せつめい$"
	.if (. - gText_Rom_5CB3D8) > 0x5
	.error "gText_Rom_5CB3D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3D8) < 0x5
	.space 0x5 - (. - gText_Rom_5CB3D8)
	.endif

	@ src/pokemon_storage_system.c:8096 pokemon_storage_system_line_8096
	.globl gText_Rom_5CB3DD
gText_Rom_5CB3DD: @ 0x085CB3DD
	.string "ふうけい1$"
	.if (. - gText_Rom_5CB3DD) > 0x6
	.error "gText_Rom_5CB3DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3DD) < 0x6
	.space 0x6 - (. - gText_Rom_5CB3DD)
	.endif

	@ src/pokemon_storage_system.c:8097 pokemon_storage_system_line_8097
	.globl gText_Rom_5CB3E3
gText_Rom_5CB3E3: @ 0x085CB3E3
	.string "ふうけい2$"
	.if (. - gText_Rom_5CB3E3) > 0x6
	.error "gText_Rom_5CB3E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3E3) < 0x6
	.space 0x6 - (. - gText_Rom_5CB3E3)
	.endif

	@ src/pokemon_storage_system.c:8098 pokemon_storage_system_line_8098
	.globl gText_Rom_5CB3E9
gText_Rom_5CB3E9: @ 0x085CB3E9
	.string "ふうけい3$"
	.if (. - gText_Rom_5CB3E9) > 0x6
	.error "gText_Rom_5CB3E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3E9) < 0x6
	.space 0x6 - (. - gText_Rom_5CB3E9)
	.endif

	@ src/pokemon_storage_system.c:8099 pokemon_storage_system_line_8099
	.globl gText_Rom_5CB3EF
gText_Rom_5CB3EF: @ 0x085CB3EF
	.string "エトセトラ$"
	.if (. - gText_Rom_5CB3EF) > 0x6
	.error "gText_Rom_5CB3EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3EF) < 0x6
	.space 0x6 - (. - gText_Rom_5CB3EF)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:41 gEasyChatWord_Adore (+2 aliases)
	.globl gText_Rom_5CB3F5
gText_Rom_5CB3F5: @ 0x085CB3F5
	.string "だいすき$"
	.if (. - gText_Rom_5CB3F5) > 0x5
	.error "gText_Rom_5CB3F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3F5) < 0x5
	.space 0x5 - (. - gText_Rom_5CB3F5)
	.endif
	.incbin "baserom.gba", 0x5cb3fa, 0x3

	@ src/pokemon_storage_system.c:8102 pokemon_storage_system_line_8102
	.globl gText_Rom_5CB3FD
gText_Rom_5CB3FD: @ 0x085CB3FD
	.string "シティ$"
	.if (. - gText_Rom_5CB3FD) > 0x4
	.error "gText_Rom_5CB3FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3FD) < 0x4
	.space 0x4 - (. - gText_Rom_5CB3FD)
	.endif

	@ src/pokemon_storage_system.c:8103 pokemon_storage_system_line_8103
	.globl gText_Rom_5CB401
gText_Rom_5CB401: @ 0x085CB401
	.string "さばく$"
	.if (. - gText_Rom_5CB401) > 0x4
	.error "gText_Rom_5CB401 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB401) < 0x4
	.space 0x4 - (. - gText_Rom_5CB401)
	.endif

	@ src/pokemon_storage_system.c:8104 pokemon_storage_system_line_8104
	.globl gText_Rom_5CB405
gText_Rom_5CB405: @ 0x085CB405
	.string "サバンナ$"
	.if (. - gText_Rom_5CB405) > 0x5
	.error "gText_Rom_5CB405 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB405) < 0x5
	.space 0x5 - (. - gText_Rom_5CB405)
	.endif

	@ src/pokemon_storage_system.c:8105 pokemon_storage_system_line_8105
	.globl gText_Rom_5CB40A
gText_Rom_5CB40A: @ 0x085CB40A
	.string "いわやま$"
	.if (. - gText_Rom_5CB40A) > 0x5
	.error "gText_Rom_5CB40A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB40A) < 0x5
	.space 0x5 - (. - gText_Rom_5CB40A)
	.endif

	@ src/pokemon_storage_system.c:8106 pokemon_storage_system_line_8106
	.globl gText_Rom_5CB40F
gText_Rom_5CB40F: @ 0x085CB40F
	.string "かざん$"
	.if (. - gText_Rom_5CB40F) > 0x4
	.error "gText_Rom_5CB40F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB40F) < 0x4
	.space 0x4 - (. - gText_Rom_5CB40F)
	.endif

	@ src/pokemon_storage_system.c:8107 pokemon_storage_system_line_8107
	.globl gText_Rom_5CB413
gText_Rom_5CB413: @ 0x085CB413
	.string "ゆきやま$"
	.if (. - gText_Rom_5CB413) > 0x5
	.error "gText_Rom_5CB413 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB413) < 0x5
	.space 0x5 - (. - gText_Rom_5CB413)
	.endif

	@ src/pokemon_storage_system.c:8108 pokemon_storage_system_line_8108
	.globl gText_Rom_5CB418
gText_Rom_5CB418: @ 0x085CB418
	.string "どうくつ$"
	.if (. - gText_Rom_5CB418) > 0x5
	.error "gText_Rom_5CB418 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB418) < 0x5
	.space 0x5 - (. - gText_Rom_5CB418)
	.endif

	@ src/pokemon_storage_system.c:8109 pokemon_storage_system_line_8109
	.globl gText_Rom_5CB41D
gText_Rom_5CB41D: @ 0x085CB41D
	.string "うみべ$"
	.if (. - gText_Rom_5CB41D) > 0x4
	.error "gText_Rom_5CB41D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB41D) < 0x4
	.space 0x4 - (. - gText_Rom_5CB41D)
	.endif

	@ src/pokemon_storage_system.c:8110 pokemon_storage_system_line_8110 (+1 aliases)
	.globl gText_Rom_5CB421
gText_Rom_5CB421: @ 0x085CB421
	.string "かいてい$"
	.if (. - gText_Rom_5CB421) > 0x5
	.error "gText_Rom_5CB421 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB421) < 0x5
	.space 0x5 - (. - gText_Rom_5CB421)
	.endif

	@ src/pokemon_storage_system.c:8111 pokemon_storage_system_line_8111
	.globl gText_Rom_5CB426
gText_Rom_5CB426: @ 0x085CB426
	.string "かわ$"
	.if (. - gText_Rom_5CB426) > 0x3
	.error "gText_Rom_5CB426 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB426) < 0x3
	.space 0x3 - (. - gText_Rom_5CB426)
	.endif
	.incbin "baserom.gba", 0x5cb429, 0x3

	@ src/pokemon_storage_system.c:8113 pokemon_storage_system_line_8113
	.globl gText_Rom_5CB42C
gText_Rom_5CB42C: @ 0x085CB42C
	.string "みずたま$"
	.if (. - gText_Rom_5CB42C) > 0x5
	.error "gText_Rom_5CB42C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB42C) < 0x5
	.space 0x5 - (. - gText_Rom_5CB42C)
	.endif

	@ src/pokemon_storage_system.c:8114 pokemon_storage_system_line_8114
	.globl gText_Rom_5CB431
gText_Rom_5CB431: @ 0x085CB431
	.string "ポケセン$"
	.if (. - gText_Rom_5CB431) > 0x5
	.error "gText_Rom_5CB431 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB431) < 0x5
	.space 0x5 - (. - gText_Rom_5CB431)
	.endif

	@ src/pokemon_storage_system.c:8115 pokemon_storage_system_line_8115
	.globl gText_Rom_5CB436
gText_Rom_5CB436: @ 0x085CB436
	.string "きかい$"
	.if (. - gText_Rom_5CB436) > 0x4
	.error "gText_Rom_5CB436 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB436) < 0x4
	.space 0x4 - (. - gText_Rom_5CB436)
	.endif

	@ src/pokemon_storage_system.c:8116 pokemon_storage_system_line_8116
	.globl gText_Rom_5CB43A
gText_Rom_5CB43A: @ 0x085CB43A
	.string "シンプル$"
	.if (. - gText_Rom_5CB43A) > 0x5
	.error "gText_Rom_5CB43A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB43A) < 0x5
	.space 0x5 - (. - gText_Rom_5CB43A)
	.endif

	@ src/pokemon_storage_system.c:8117 pokemon_storage_system_line_8117 (+1 aliases)
	.globl gText_Rom_5CB43F
gText_Rom_5CB43F: @ 0x085CB43F
	.string "なにを しますか?$"
	.if (. - gText_Rom_5CB43F) > 0xa
	.error "gText_Rom_5CB43F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB43F) < 0xa
	.space 0xa - (. - gText_Rom_5CB43F)
	.endif

	@ src/pokemon_storage_system.c:870 pokemon_storage_system_line_870
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB449
gText_Rom_5CB449: @ 0x085CB449
	.string "ポケモンを つれていく$"
	.if (. - gText_Rom_5CB449) != 0xc
	.error "gText_Rom_5CB449 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB44F
	.set gText_Rom_5CB44F, gText_Rom_5CB449 + 0x6
	.incbin "baserom.gba", 0x5cb455, 0x18

	@ src/pokemon_storage_system.c:873 pokemon_storage_system_line_873
	.globl gText_Rom_5CB46D
gText_Rom_5CB46D: @ 0x085CB46D
	.string "どうぐせいり$"
	.if (. - gText_Rom_5CB46D) > 0x7
	.error "gText_Rom_5CB46D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB46D) < 0x7
	.space 0x7 - (. - gText_Rom_5CB46D)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:100 easy_chat_group_greetings_line_100 (+1 aliases)
	.globl gText_Rom_5CB474
gText_Rom_5CB474: @ 0x085CB474
	.string "さようなら$"
	.if (. - gText_Rom_5CB474) > 0x6
	.error "gText_Rom_5CB474 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB474) < 0x6
	.space 0x6 - (. - gText_Rom_5CB474)
	.endif

	@ src/pokemon_storage_system.c:870 pokemon_storage_system_line_870
	.globl gText_Rom_5CB47A
gText_Rom_5CB47A: @ 0x085CB47A
	.string "ボックスに あずけている ポケモンを \nてもちに くわえる ことが できます $"
	.if (. - gText_Rom_5CB47A) > 0x28
	.error "gText_Rom_5CB47A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB47A) < 0x28
	.space 0x28 - (. - gText_Rom_5CB47A)
	.endif
	.incbin "baserom.gba", 0x5cb4a2, 0x28

	@ src/pokemon_storage_system.c:872 pokemon_storage_system_line_872
	.globl gText_Rom_5CB4CA
gText_Rom_5CB4CA: @ 0x085CB4CA
	.string "ボックスに あずけている ポケモンや \nてもちの ポケモンを せいり できます$"
	.if (. - gText_Rom_5CB4CA) > 0x28
	.error "gText_Rom_5CB4CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB4CA) < 0x28
	.space 0x28 - (. - gText_Rom_5CB4CA)
	.endif

	@ src/pokemon_storage_system.c:873 pokemon_storage_system_line_873
	.globl gText_Rom_5CB4F2
gText_Rom_5CB4F2: @ 0x085CB4F2
	.string "ポケモンが もっている どうぐを\nせいり できます$"
	.if (. - gText_Rom_5CB4F2) > 0x1a
	.error "gText_Rom_5CB4F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB4F2) < 0x1a
	.space 0x1a - (. - gText_Rom_5CB4F2)
	.endif
	.incbin "baserom.gba", 0x5cb50c, 0x28
	.globl gUnknown_85CB534
gUnknown_85CB534: @ 0x085CB534
	.incbin "baserom.gba", 0x5cb534, 0x28
	.globl gUnknown_85CB55C
gUnknown_85CB55C: @ 0x085CB55C
	.incbin "baserom.gba", 0x5cb55c, 0x28
	.globl gUnknown_85CB584
gUnknown_85CB584: @ 0x085CB584

	@ src/pokemon_storage_system.c:863 gText_Box
	.globl gText_Rom_5CB584
gText_Rom_5CB584: @ 0x085CB584
	.string "ボックス$"
	.if (. - gText_Rom_5CB584) > 0x5
	.error "gText_Rom_5CB584 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB584) < 0x5
	.space 0x5 - (. - gText_Rom_5CB584)
	.endif

	@ src/pokenav_menu_handler_gfx.c:272 pokenav_menu_handler_gfx_line_272
	.globl gText_Rom_5CB589
gText_Rom_5CB589: @ 0x085CB589
	.string "ホウエンちほうの マップを みます$"
	.if (. - gText_Rom_5CB589) > 0x12
	.error "gText_Rom_5CB589 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB589) < 0x12
	.space 0x12 - (. - gText_Rom_5CB589)
	.endif

	@ src/pokenav_menu_handler_gfx.c:273 pokenav_menu_handler_gfx_line_273
	.globl gText_Rom_5CB59B
gText_Rom_5CB59B: @ 0x085CB59B
	.string "ポケモンを くわしく しらべます$"
	.if (. - gText_Rom_5CB59B) > 0x11
	.error "gText_Rom_5CB59B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB59B) < 0x11
	.space 0x11 - (. - gText_Rom_5CB59B)
	.endif

	@ src/pokenav_menu_handler_gfx.c:274 pokenav_menu_handler_gfx_line_274
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB5AC
gText_Rom_5CB5AC: @ 0x085CB5AC
	.string "とうろくした ひとを よびだします$"
	.if (. - gText_Rom_5CB5AC) != 0x12
	.error "gText_Rom_5CB5AC must retain its original byte length"
	.endif
	.globl gText_Rom_5CB5BA
	.set gText_Rom_5CB5BA, gText_Rom_5CB5AC + 0xe

	@ src/pokenav_menu_handler_gfx.c:275 pokenav_menu_handler_gfx_line_275
	.globl gText_Rom_5CB5BE
gText_Rom_5CB5BE: @ 0x085CB5BE
	.string "てにいれた きねんリボンを みます$"
	.if (. - gText_Rom_5CB5BE) > 0x12
	.error "gText_Rom_5CB5BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB5BE) < 0x12
	.space 0x12 - (. - gText_Rom_5CB5BE)
	.endif

	@ src/pokenav_menu_handler_gfx.c:276 pokenav_menu_handler_gfx_line_276
	.globl gText_Rom_5CB5D0
gText_Rom_5CB5D0: @ 0x085CB5D0
	.string "ポケナビを しまいます$"
	.if (. - gText_Rom_5CB5D0) > 0xc
	.error "gText_Rom_5CB5D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB5D0) < 0xc
	.space 0xc - (. - gText_Rom_5CB5D0)
	.endif
	.globl gUnknown_85CB5DC
gUnknown_85CB5DC: @ 0x085CB5DC

	@ src/pokenav_menu_handler_gfx.c:111 gText_NoRibbonWinners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB5DC
gText_Rom_5CB5DC: @ 0x085CB5DC
	.string "リボンを もっている ポケモンが いません$"
	.if (. - gText_Rom_5CB5DC) != 0x16
	.error "gText_Rom_5CB5DC must retain its original byte length"
	.endif
	.globl gText_Rom_5CB5EE
	.set gText_Rom_5CB5EE, gText_Rom_5CB5DC + 0x12
	.incbin "baserom.gba", 0x5cb5f2, 0x10

	@ src/data/easy_chat/easy_chat_group_endings.h:352 easy_chat_group_endings_line_352
	.globl gText_Rom_5CB602
gText_Rom_5CB602: @ 0x085CB602
	.string "ません$"
	.if (. - gText_Rom_5CB602) > 0x4
	.error "gText_Rom_5CB602 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB602) < 0x4
	.space 0x4 - (. - gText_Rom_5CB602)
	.endif

	@ src/pokenav_menu_handler_gfx.c:277 pokenav_menu_handler_gfx_line_277
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB606
gText_Rom_5CB606: @ 0x085CB606
	.string "てもちポケモンを くわしく しらべます$"
	.if (. - gText_Rom_5CB606) != 0x14
	.error "gText_Rom_5CB606 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB609
	.set gText_Rom_5CB609, gText_Rom_5CB606 + 0x3

	@ src/pokenav_menu_handler_gfx.c:278 pokenav_menu_handler_gfx_line_278
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB61A
gText_Rom_5CB61A: @ 0x085CB61A
	.string "すべてのポケモンを くわしく しらべます$"
	.if (. - gText_Rom_5CB61A) != 0x15
	.error "gText_Rom_5CB61A must retain its original byte length"
	.endif
	.globl gText_Rom_5CB61E
	.set gText_Rom_5CB61E, gText_Rom_5CB61A + 0x4

	@ src/pokenav_menu_handler_gfx.c:279 pokenav_menu_handler_gfx_line_279
	.globl gText_Rom_5CB62F
gText_Rom_5CB62F: @ 0x085CB62F
	.string "ポケナビの メニューに もどります$"
	.if (. - gText_Rom_5CB62F) > 0x12
	.error "gText_Rom_5CB62F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB62F) < 0x12
	.space 0x12 - (. - gText_Rom_5CB62F)
	.endif

	@ src/pokenav_menu_handler_gfx.c:280 pokenav_menu_handler_gfx_line_280
	.globl gText_Rom_5CB641
gText_Rom_5CB641: @ 0x085CB641
	.string "かっこいい ポケモンを みつけます$"
	.if (. - gText_Rom_5CB641) > 0x12
	.error "gText_Rom_5CB641 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB641) < 0x12
	.space 0x12 - (. - gText_Rom_5CB641)
	.endif

	@ src/pokenav_menu_handler_gfx.c:281 pokenav_menu_handler_gfx_line_281
	.globl gText_Rom_5CB653
gText_Rom_5CB653: @ 0x085CB653
	.string "うつくしい ポケモンを みつけます$"
	.if (. - gText_Rom_5CB653) > 0x12
	.error "gText_Rom_5CB653 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB653) < 0x12
	.space 0x12 - (. - gText_Rom_5CB653)
	.endif

	@ src/pokenav_menu_handler_gfx.c:282 pokenav_menu_handler_gfx_line_282
	.globl gText_Rom_5CB665
gText_Rom_5CB665: @ 0x085CB665
	.string "かわいい ポケモンを みつけます$"
	.if (. - gText_Rom_5CB665) > 0x11
	.error "gText_Rom_5CB665 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB665) < 0x11
	.space 0x11 - (. - gText_Rom_5CB665)
	.endif

	@ src/pokenav_menu_handler_gfx.c:283 pokenav_menu_handler_gfx_line_283
	.globl gText_Rom_5CB676
gText_Rom_5CB676: @ 0x085CB676
	.string "かしこい ポケモンを みつけます$"
	.if (. - gText_Rom_5CB676) > 0x11
	.error "gText_Rom_5CB676 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB676) < 0x11
	.space 0x11 - (. - gText_Rom_5CB676)
	.endif

	@ src/pokenav_menu_handler_gfx.c:284 pokenav_menu_handler_gfx_line_284
	.globl gText_Rom_5CB687
gText_Rom_5CB687: @ 0x085CB687
	.string "たくましい ポケモンを みつけます$"
	.if (. - gText_Rom_5CB687) > 0x12
	.error "gText_Rom_5CB687 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB687) < 0x12
	.space 0x12 - (. - gText_Rom_5CB687)
	.endif

	@ src/pokenav_menu_handler_gfx.c:285 pokenav_menu_handler_gfx_line_285
	.globl gText_Rom_5CB699
gText_Rom_5CB699: @ 0x085CB699
	.string "コンディションの メニューに もどります$"
	.if (. - gText_Rom_5CB699) > 0x15
	.error "gText_Rom_5CB699 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB699) < 0x15
	.space 0x15 - (. - gText_Rom_5CB699)
	.endif
	.globl gUnknown_85CB6AE
gUnknown_85CB6AE: @ 0x085CB6AE

	@ src/pokenav_match_call_gfx.c:127 gText_NumberRegistered
	.globl gText_Rom_5CB6AE
gText_Rom_5CB6AE: @ 0x085CB6AE
	.string "とうろく にんずう$"
	.if (. - gText_Rom_5CB6AE) > 0xa
	.error "gText_Rom_5CB6AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB6AE) < 0xa
	.space 0xa - (. - gText_Rom_5CB6AE)
	.endif
	.globl gUnknown_85CB6B8
gUnknown_85CB6B8: @ 0x085CB6B8

	@ src/pokenav_match_call_gfx.c:128 gText_NumberOfBattles
	.globl gText_Rom_5CB6B8
gText_Rom_5CB6B8: @ 0x085CB6B8
	.string "たいせん かいすう$"
	.if (. - gText_Rom_5CB6B8) > 0xa
	.error "gText_Rom_5CB6B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB6B8) < 0xa
	.space 0xa - (. - gText_Rom_5CB6B8)
	.endif

	@ src/pokenav_match_call_gfx.c:208 pokenav_match_call_gfx_line_208
	.globl gText_Rom_5CB6C2
gText_Rom_5CB6C2: @ 0x085CB6C2
	.string "しょうさい$"
	.if (. - gText_Rom_5CB6C2) > 0x6
	.error "gText_Rom_5CB6C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB6C2) < 0x6
	.space 0x6 - (. - gText_Rom_5CB6C2)
	.endif
	.incbin "baserom.gba", 0x5cb6c8, 0x5

	@ src/pokemon_storage_system.c:8078 pokemon_storage_system_line_8078 (+5 aliases)
	.globl gText_Rom_5CB6CD
gText_Rom_5CB6CD: @ 0x085CB6CD
	.string "やめる$"
	.if (. - gText_Rom_5CB6CD) > 0x4
	.error "gText_Rom_5CB6CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB6CD) < 0x4
	.space 0x4 - (. - gText_Rom_5CB6CD)
	.endif

	@ src/pokenav_match_call_list.c:39 gText_CallCantBeMadeHere
	.globl gText_Rom_5CB6D1
gText_Rom_5CB6D1: @ 0x085CB6D1
	.string "ここでは あいてを よびだす ことが\nできないようだ$"
	.if (. - gText_Rom_5CB6D1) > 0x1b
	.error "gText_Rom_5CB6D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB6D1) < 0x1b
	.space 0x1b - (. - gText_Rom_5CB6D1)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:136 easy_chat_group_battle_line_136 (+1 aliases)
	.globl gText_Rom_5CB6EC
gText_Rom_5CB6EC: @ 0x085CB6EC
	.string "さくせん$"
	.if (. - gText_Rom_5CB6EC) > 0x5
	.error "gText_Rom_5CB6EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB6EC) < 0x5
	.space 0x5 - (. - gText_Rom_5CB6EC)
	.endif

	@ src/pokenav_list.c:100 gText_PokenavMatchCall_TrainerPokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB6F1
gText_Rom_5CB6F1: @ 0x085CB6F1
	.string "もってる ポケモン$"
	.if (. - gText_Rom_5CB6F1) != 0xa
	.error "gText_Rom_5CB6F1 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB6F6
	.set gText_Rom_5CB6F6, gText_Rom_5CB6F1 + 0x5

	@ src/pokenav_list.c:101 gText_PokenavMatchCall_SelfIntroduction
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB6FB
gText_Rom_5CB6FB: @ 0x085CB6FB
	.string "じこしょうかい$"
	.if (. - gText_Rom_5CB6FB) != 0x8
	.error "gText_Rom_5CB6FB must retain its original byte length"
	.endif
	.globl gText_Rom_5CB6FD
	.set gText_Rom_5CB6FD, gText_Rom_5CB6FB + 0x2
	.incbin "baserom.gba", 0x5cb703, 0x1a

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB71D
gText_Rom_5CB71D: @ 0x085CB71D
	.string "もどる$"
	.if (. - gText_Rom_5CB71D) > 0x4
	.error "gText_Rom_5CB71D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB71D) < 0x4
	.space 0x4 - (. - gText_Rom_5CB71D)
	.endif
	.incbin "baserom.gba", 0x5cb721, 0x9

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB72A
gText_Rom_5CB72A: @ 0x085CB72A
	.string "もどる$"
	.if (. - gText_Rom_5CB72A) > 0x4
	.error "gText_Rom_5CB72A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB72A) < 0x4
	.space 0x4 - (. - gText_Rom_5CB72A)
	.endif
	.incbin "baserom.gba", 0x5cb72e, 0xf

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB73D
gText_Rom_5CB73D: @ 0x085CB73D
	.string "もどる$"
	.if (. - gText_Rom_5CB73D) > 0x4
	.error "gText_Rom_5CB73D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB73D) < 0x4
	.space 0x4 - (. - gText_Rom_5CB73D)
	.endif
	.incbin "baserom.gba", 0x5cb741, 0xa

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB74B
gText_Rom_5CB74B: @ 0x085CB74B
	.string "もどる$"
	.if (. - gText_Rom_5CB74B) > 0x4
	.error "gText_Rom_5CB74B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB74B) < 0x4
	.space 0x4 - (. - gText_Rom_5CB74B)
	.endif
	.incbin "baserom.gba", 0x5cb74f, 0xa

	@ src/data/union_room.h:88 sText_BButtonCancel (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB759
gText_Rom_5CB759: @ 0x085CB759
	.string "{B_BUTTON}やめる$"
	.if (. - gText_Rom_5CB759) != 0x6
	.error "gText_Rom_5CB759 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB75B
	.set gText_Rom_5CB75B, gText_Rom_5CB759 + 0x2
	.incbin "baserom.gba", 0x5cb75f, 0x9

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB768
gText_Rom_5CB768: @ 0x085CB768
	.string "もどる$"
	.if (. - gText_Rom_5CB768) > 0x4
	.error "gText_Rom_5CB768 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB768) < 0x4
	.space 0x4 - (. - gText_Rom_5CB768)
	.endif
	.incbin "baserom.gba", 0x5cb76c, 0x9

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB775
gText_Rom_5CB775: @ 0x085CB775
	.string "もどる$"
	.if (. - gText_Rom_5CB775) > 0x4
	.error "gText_Rom_5CB775 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB775) < 0x4
	.space 0x4 - (. - gText_Rom_5CB775)
	.endif
	.incbin "baserom.gba", 0x5cb779, 0x2

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB77B
gText_Rom_5CB77B: @ 0x085CB77B
	.string "もどる$"
	.if (. - gText_Rom_5CB77B) > 0x4
	.error "gText_Rom_5CB77B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB77B) < 0x4
	.space 0x4 - (. - gText_Rom_5CB77B)
	.endif
	.incbin "baserom.gba", 0x5cb77f, 0xb

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB78A
gText_Rom_5CB78A: @ 0x085CB78A
	.string "もどる$"
	.if (. - gText_Rom_5CB78A) > 0x4
	.error "gText_Rom_5CB78A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB78A) < 0x4
	.space 0x4 - (. - gText_Rom_5CB78A)
	.endif
	.incbin "baserom.gba", 0x5cb78e, 0xa

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB798
gText_Rom_5CB798: @ 0x085CB798
	.string "もどる$"
	.if (. - gText_Rom_5CB798) > 0x4
	.error "gText_Rom_5CB798 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB798) < 0x4
	.space 0x4 - (. - gText_Rom_5CB798)
	.endif
	.incbin "baserom.gba", 0x5cb79c, 0x2

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB79E
gText_Rom_5CB79E: @ 0x085CB79E
	.string "もどる$"
	.if (. - gText_Rom_5CB79E) > 0x4
	.error "gText_Rom_5CB79E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB79E) < 0x4
	.space 0x4 - (. - gText_Rom_5CB79E)
	.endif
	.globl gUnknown_85CB7A2
gUnknown_85CB7A2: @ 0x085CB7A2

	@ src/use_pokeblock.c:163 sText_NatureSlash
	.globl gText_Rom_5CB7A2
gText_Rom_5CB7A2: @ 0x085CB7A2
	.string "せいかく/$"
	.if (. - gText_Rom_5CB7A2) > 0x6
	.error "gText_Rom_5CB7A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB7A2) < 0x6
	.space 0x6 - (. - gText_Rom_5CB7A2)
	.endif
	.globl gUnknown_85CB7A8
gUnknown_85CB7A8: @ 0x085CB7A8

	@ src/pokenav_match_call_gfx.c:129 gText_TrainerCloseBy
	.globl gText_Rom_5CB7A8
gText_Rom_5CB7A8: @ 0x085CB7A8
	.string "ちかくに いるみたいだから\nちょくせつ あって はなそう!$"
	.if (. - gText_Rom_5CB7A8) > 0x1e
	.error "gText_Rom_5CB7A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB7A8) < 0x1e
	.space 0x1e - (. - gText_Rom_5CB7A8)
	.endif
	.globl gUnknown_85CB7C6
gUnknown_85CB7C6: @ 0x085CB7C6
	.incbin "baserom.gba", 0x5cb7c6, 0x3

	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_5CB7C9
gText_Rom_5CB7C9: @ 0x085CB7C9
	.string "ポケモン$"
	.if (. - gText_Rom_5CB7C9) > 0x5
	.error "gText_Rom_5CB7C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB7C9) < 0x5
	.space 0x5 - (. - gText_Rom_5CB7C9)
	.endif
	.globl gUnknown_85CB7CE
gUnknown_85CB7CE: @ 0x085CB7CE

	@ asm/pokenav_unk_4.s:6801 sub_081CDE98
	.globl gText_Rom_5CB7CE
gText_Rom_5CB7CE: @ 0x085CB7CE
	.string "ばんめ$"
	.if (. - gText_Rom_5CB7CE) > 0x4
	.error "gText_Rom_5CB7CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB7CE) < 0x4
	.space 0x4 - (. - gText_Rom_5CB7CE)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:22 gEasyChatWord_Ribbon (+1 aliases)
	.globl gText_Rom_5CB7D2
gText_Rom_5CB7D2: @ 0x085CB7D2
	.string "リボン$"
	.if (. - gText_Rom_5CB7D2) > 0x4
	.error "gText_Rom_5CB7D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB7D2) < 0x4
	.space 0x4 - (. - gText_Rom_5CB7D2)
	.endif
	.globl gUnknown_85CB7D6
gUnknown_85CB7D6: @ 0x085CB7D6
	.incbin "baserom.gba", 0x5cb7d6, 0x14
	.globl gUnknown_85CB7EA
gUnknown_85CB7EA: @ 0x085CB7EA
	.incbin "baserom.gba", 0x5cb7ea, 0x14
	.globl gUnknown_85CB7FE
gUnknown_85CB7FE: @ 0x085CB7FE
	.incbin "baserom.gba", 0x5cb7fe, 0xa
	.globl gUnknown_85CB808
gUnknown_85CB808: @ 0x085CB808

	@ src/pokedex_plus_hgss.c:6512 pokedex_plus_hgss_line_6512 (+2 aliases)
	.globl gText_Rom_5CB808
gText_Rom_5CB808: @ 0x085CB808
	.string "ふめい$"
	.if (. - gText_Rom_5CB808) > 0x4
	.error "gText_Rom_5CB808 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB808) < 0x4
	.space 0x4 - (. - gText_Rom_5CB808)
	.endif

	@ asm/pokenav_unk_4.s:1653 sub_081CB6AC (+1 aliases)
	.globl gText_Rom_5CB80C
gText_Rom_5CB80C: @ 0x085CB80C
	.string "よびだし$"
	.if (. - gText_Rom_5CB80C) > 0x5
	.error "gText_Rom_5CB80C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB80C) < 0x5
	.space 0x5 - (. - gText_Rom_5CB80C)
	.endif

	@ asm/pokenav_unk_4.s:1653 sub_081CB6AC (+1 aliases)
	.globl gText_Rom_5CB811
gText_Rom_5CB811: @ 0x085CB811
	.string "しょうさい$"
	.if (. - gText_Rom_5CB811) > 0x6
	.error "gText_Rom_5CB811 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB811) < 0x6
	.space 0x6 - (. - gText_Rom_5CB811)
	.endif

	@ asm/pokenav_unk_4.s:1653 sub_081CB6AC (+6 aliases)
	.globl gText_Rom_5CB817
gText_Rom_5CB817: @ 0x085CB817
	.string "もどる$"
	.if (. - gText_Rom_5CB817) > 0x4
	.error "gText_Rom_5CB817 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB817) < 0x4
	.space 0x4 - (. - gText_Rom_5CB817)
	.endif
	.globl gUnknown_85CB81B
gUnknown_85CB81B: @ 0x085CB81B

	@ src/pokenav_conditions_search_results.c:25 gText_NumberIndex
	.globl gText_Rom_5CB81B
gText_Rom_5CB81B: @ 0x085CB81B
	.string "{DYNAMIC 0}ばんめ$"
	.if (. - gText_Rom_5CB81B) > 0x6
	.error "gText_Rom_5CB81B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB81B) < 0x6
	.space 0x6 - (. - gText_Rom_5CB81B)
	.endif
	.globl gUnknown_85CB821
gUnknown_85CB821: @ 0x085CB821

	@ src/pokenav_ribbons_summary.c:43 gText_RibbonsF700
	.globl gText_Rom_5CB821
gText_Rom_5CB821: @ 0x085CB821
	.string "リボン {DYNAMIC 0}こ$"
	.if (. - gText_Rom_5CB821) > 0x8
	.error "gText_Rom_5CB821 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB821) < 0x8
	.space 0x8 - (. - gText_Rom_5CB821)
	.endif
	.incbin "baserom.gba", 0x5cb829, 0x3e

	@ src/strings.c:542 gText_CombineFourWordsOrPhrases
	.globl gText_Rom_5CB867
gText_Rom_5CB867: @ 0x085CB867
	.string "4つの ことばを くみあわせて$"
	.if (. - gText_Rom_5CB867) > 0x10
	.error "gText_Rom_5CB867 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB867) < 0x10
	.space 0x10 - (. - gText_Rom_5CB867)
	.endif

	@ src/strings.c:543 gText_AndMakeYourProfile
	.globl gText_Rom_5CB877
gText_Rom_5CB877: @ 0x085CB877
	.string "プロフィールを つくろう!$"
	.if (. - gText_Rom_5CB877) > 0xe
	.error "gText_Rom_5CB877 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB877) < 0xe
	.space 0xe - (. - gText_Rom_5CB877)
	.endif
	.incbin "baserom.gba", 0x5cb885, 0x9

	@ src/strings.c:545 gText_AndMakeAMessage (+1 aliases)
	.globl gText_Rom_5CB88E
gText_Rom_5CB88E: @ 0x085CB88E
	.string "メッセージを つくろう!$"
	.if (. - gText_Rom_5CB88E) > 0xd
	.error "gText_Rom_5CB88E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB88E) < 0xd
	.space 0xd - (. - gText_Rom_5CB88E)
	.endif
	.incbin "baserom.gba", 0x5cb89b, 0x16

	@ src/strings.c:546 gText_FindWordsThatDescribeYour
	.globl gText_Rom_5CB8B1
gText_Rom_5CB8B1: @ 0x085CB8B1
	.string "いまの きもちに ぴったりあう$"
	.if (. - gText_Rom_5CB8B1) > 0x10
	.error "gText_Rom_5CB8B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB8B1) < 0x10
	.space 0x10 - (. - gText_Rom_5CB8B1)
	.endif

	@ src/strings.c:547 gText_FeelingsRightNow
	.globl gText_Rom_5CB8C1
gText_Rom_5CB8C1: @ 0x085CB8C1
	.string "ことばを みつけよう!$"
	.if (. - gText_Rom_5CB8C1) > 0xc
	.error "gText_Rom_5CB8C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB8C1) < 0xc
	.space 0xc - (. - gText_Rom_5CB8C1)
	.endif

	@ src/strings.c:548 gText_WithFourPhrases
	.globl gText_Rom_5CB8CD
gText_Rom_5CB8CD: @ 0x085CB8CD
	.string "4つの ことばで$"
	.if (. - gText_Rom_5CB8CD) > 0x9
	.error "gText_Rom_5CB8CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB8CD) < 0x9
	.space 0x9 - (. - gText_Rom_5CB8CD)
	.endif

	@ src/strings.c:549 gText_CombineNineWordsOrPhrases
	.globl gText_Rom_5CB8D6
gText_Rom_5CB8D6: @ 0x085CB8D6
	.string "9つの ことばを くみあわせて$"
	.if (. - gText_Rom_5CB8D6) > 0x10
	.error "gText_Rom_5CB8D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB8D6) < 0x10
	.space 0x10 - (. - gText_Rom_5CB8D6)
	.endif

	@ src/strings.c:545 gText_AndMakeAMessage (+1 aliases)
	.globl gText_Rom_5CB8E6
gText_Rom_5CB8E6: @ 0x085CB8E6
	.string "メッセージを つくろう!$"
	.if (. - gText_Rom_5CB8E6) > 0xd
	.error "gText_Rom_5CB8E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB8E6) < 0xd
	.space 0xd - (. - gText_Rom_5CB8E6)
	.endif

	@ src/strings.c:551 gText_ChangeJustOneWordOrPhrase
	.globl gText_Rom_5CB8F3
gText_Rom_5CB8F3: @ 0x085CB8F3
	.string "ことばを 1つだけ いれかえて$"
	.if (. - gText_Rom_5CB8F3) > 0x10
	.error "gText_Rom_5CB8F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB8F3) < 0x10
	.space 0x10 - (. - gText_Rom_5CB8F3)
	.endif

	@ src/strings.c:552 gText_AndImproveTheBardsSong
	.globl gText_Rom_5CB903
gText_Rom_5CB903: @ 0x085CB903
	.string "オヤジのうたを よくして あげよう!$"
	.if (. - gText_Rom_5CB903) > 0x13
	.error "gText_Rom_5CB903 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB903) < 0x13
	.space 0x13 - (. - gText_Rom_5CB903)
	.endif

	@ src/strings.c:553 gText_YourProfile
	.globl gText_Rom_5CB916
gText_Rom_5CB916: @ 0x085CB916
	.string "プロフィールは$"
	.if (. - gText_Rom_5CB916) > 0x8
	.error "gText_Rom_5CB916 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB916) < 0x8
	.space 0x8 - (. - gText_Rom_5CB916)
	.endif

	@ src/strings.c:554 gText_YourFeelingAtTheBattlesStart
	.globl gText_Rom_5CB91E
gText_Rom_5CB91E: @ 0x085CB91E
	.string "たいせんが はじまるときの きもちは$"
	.if (. - gText_Rom_5CB91E) > 0x13
	.error "gText_Rom_5CB91E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB91E) < 0x13
	.space 0x13 - (. - gText_Rom_5CB91E)
	.endif

	@ src/strings.c:555 gText_WhatYouSayIfYouWin
	.globl gText_Rom_5CB931
gText_Rom_5CB931: @ 0x085CB931
	.string "たいせんに かったときの あいさつは$"
	.if (. - gText_Rom_5CB931) > 0x13
	.error "gText_Rom_5CB931 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB931) < 0x13
	.space 0x13 - (. - gText_Rom_5CB931)
	.endif

	@ src/strings.c:556 gText_WhatYouSayIfYouLose
	.globl gText_Rom_5CB944
gText_Rom_5CB944: @ 0x085CB944
	.string "たいせんに まけたときの あいさつは$"
	.if (. - gText_Rom_5CB944) > 0x13
	.error "gText_Rom_5CB944 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB944) < 0x13
	.space 0x13 - (. - gText_Rom_5CB944)
	.endif

	@ src/strings.c:557 gText_TheAnswer (+1 aliases)
	.globl gText_Rom_5CB957
gText_Rom_5CB957: @ 0x085CB957
	.string "こたえは$"
	.if (. - gText_Rom_5CB957) > 0x5
	.error "gText_Rom_5CB957 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB957) < 0x5
	.space 0x5 - (. - gText_Rom_5CB957)
	.endif

	@ src/strings.c:558 gText_TheMailMessage
	.globl gText_Rom_5CB95C
gText_Rom_5CB95C: @ 0x085CB95C
	.string "メールに のせる メッセージは$"
	.if (. - gText_Rom_5CB95C) > 0x10
	.error "gText_Rom_5CB95C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB95C) < 0x10
	.space 0x10 - (. - gText_Rom_5CB95C)
	.endif

	@ src/strings.c:559 gText_TheMailSalutation
	.globl gText_Rom_5CB96C
gText_Rom_5CB96C: @ 0x085CB96C
	.string "はがきに のせる あいさつは$"
	.if (. - gText_Rom_5CB96C) > 0xf
	.error "gText_Rom_5CB96C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB96C) < 0xf
	.space 0xf - (. - gText_Rom_5CB96C)
	.endif

	@ src/strings.c:560 gText_TheBardsSong2
	.globl gText_Rom_5CB97B
gText_Rom_5CB97B: @ 0x085CB97B
	.string "あたらしい うたは$"
	.if (. - gText_Rom_5CB97B) > 0xa
	.error "gText_Rom_5CB97B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB97B) < 0xa
	.space 0xa - (. - gText_Rom_5CB97B)
	.endif

	@ src/strings.c:561 gText_CombineTwoWordsOrPhrases (+1 aliases)
	.globl gText_Rom_5CB985
gText_Rom_5CB985: @ 0x085CB985
	.string "2つの ことばを くみあわせて$"
	.if (. - gText_Rom_5CB985) > 0x10
	.error "gText_Rom_5CB985 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB985) < 0x10
	.space 0x10 - (. - gText_Rom_5CB985)
	.endif

	@ src/strings.c:562 gText_AndMakeATrendySaying
	.globl gText_Rom_5CB995
gText_Rom_5CB995: @ 0x085CB995
	.string "はやらせたい ことばを つくろう!$"
	.if (. - gText_Rom_5CB995) > 0x12
	.error "gText_Rom_5CB995 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB995) < 0x12
	.space 0x12 - (. - gText_Rom_5CB995)
	.endif

	@ src/strings.c:563 gText_TheTrendySaying
	.globl gText_Rom_5CB9A7
gText_Rom_5CB9A7: @ 0x085CB9A7
	.string "はやらせたい ことばは$"
	.if (. - gText_Rom_5CB9A7) > 0xc
	.error "gText_Rom_5CB9A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB9A7) < 0xc
	.space 0xc - (. - gText_Rom_5CB9A7)
	.endif

	@ src/strings.c:564 gText_IsAsShownOkay
	.globl gText_Rom_5CB9B3
gText_Rom_5CB9B3: @ 0x085CB9B3
	.string "これで いいですか?$"
	.if (. - gText_Rom_5CB9B3) > 0xb
	.error "gText_Rom_5CB9B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB9B3) < 0xb
	.space 0xb - (. - gText_Rom_5CB9B3)
	.endif

	@ src/strings.c:561 gText_CombineTwoWordsOrPhrases (+1 aliases)
	.globl gText_Rom_5CB9BE
gText_Rom_5CB9BE: @ 0x085CB9BE
	.string "2つの ことばを くみあわせて$"
	.if (. - gText_Rom_5CB9BE) > 0x10
	.error "gText_Rom_5CB9BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB9BE) < 0x10
	.space 0x10 - (. - gText_Rom_5CB9BE)
	.endif

	@ src/strings.c:566 gText_ToTeachHerAGoodSaying
	.globl gText_Rom_5CB9CE
gText_Rom_5CB9CE: @ 0x085CB9CE
	.string "いい ことばを おしえてあげよう!$"
	.if (. - gText_Rom_5CB9CE) > 0x12
	.error "gText_Rom_5CB9CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB9CE) < 0x12
	.space 0x12 - (. - gText_Rom_5CB9CE)
	.endif

	@ src/strings.c:567 gText_FindWordsWhichFit
	.globl gText_Rom_5CB9E0
gText_Rom_5CB9E0: @ 0x085CB9E0
	.string "トレーナーの イメージに$"
	.if (. - gText_Rom_5CB9E0) > 0xd
	.error "gText_Rom_5CB9E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB9E0) < 0xd
	.space 0xd - (. - gText_Rom_5CB9E0)
	.endif

	@ src/strings.c:568 gText_TheTrainersImage
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB9ED
gText_Rom_5CB9ED: @ 0x085CB9ED
	.string "ぴったりの ことばを みつけよう!$"
	.if (. - gText_Rom_5CB9ED) != 0x12
	.error "gText_Rom_5CB9ED must retain its original byte length"
	.endif
	.globl gText_Rom_5CB9F3
	.set gText_Rom_5CB9F3, gText_Rom_5CB9ED + 0x6

	@ src/strings.c:569 gText_TheImage
	.globl gText_Rom_5CB9FF
gText_Rom_5CB9FF: @ 0x085CB9FF
	.string "イメージは$"
	.if (. - gText_Rom_5CB9FF) > 0x6
	.error "gText_Rom_5CB9FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB9FF) < 0x6
	.space 0x6 - (. - gText_Rom_5CB9FF)
	.endif

	@ src/strings.c:570 gText_OutOfTheListedChoices
	.globl gText_Rom_5CBA05
gText_Rom_5CBA05: @ 0x085CBA05
	.string "ことばの なかから$"
	.if (. - gText_Rom_5CBA05) > 0xa
	.error "gText_Rom_5CBA05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA05) < 0xa
	.space 0xa - (. - gText_Rom_5CBA05)
	.endif

	@ src/strings.c:571 gText_SelectTheAnswerToTheQuiz
	.globl gText_Rom_5CBA0F
gText_Rom_5CBA0F: @ 0x085CBA0F
	.string "クイズの こたえを えらぼう!$"
	.if (. - gText_Rom_5CBA0F) > 0x10
	.error "gText_Rom_5CBA0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA0F) < 0x10
	.space 0x10 - (. - gText_Rom_5CBA0F)
	.endif

	@ src/strings.c:572 gText_AndCreateAQuiz
	.globl gText_Rom_5CBA1F
gText_Rom_5CBA1F: @ 0x085CBA1F
	.string "クイズを つくろう!$"
	.if (. - gText_Rom_5CBA1F) > 0xb
	.error "gText_Rom_5CBA1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA1F) < 0xb
	.space 0xb - (. - gText_Rom_5CBA1F)
	.endif

	@ src/strings.c:573 gText_PickAWordOrPhraseAnd
	.globl gText_Rom_5CBA2A
gText_Rom_5CBA2A: @ 0x085CBA2A
	.string "ことばの なかから ひとつを えらんで$"
	.if (. - gText_Rom_5CBA2A) > 0x14
	.error "gText_Rom_5CBA2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA2A) < 0x14
	.space 0x14 - (. - gText_Rom_5CBA2A)
	.endif

	@ src/strings.c:574 gText_SetTheQuizAnswer
	.globl gText_Rom_5CBA3E
gText_Rom_5CBA3E: @ 0x085CBA3E
	.string "クイズの こたえを つくろう!$"
	.if (. - gText_Rom_5CBA3E) > 0x10
	.error "gText_Rom_5CBA3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA3E) < 0x10
	.space 0x10 - (. - gText_Rom_5CBA3E)
	.endif

	@ src/strings.c:557 gText_TheAnswer (+1 aliases)
	.globl gText_Rom_5CBA4E
gText_Rom_5CBA4E: @ 0x085CBA4E
	.string "こたえは$"
	.if (. - gText_Rom_5CBA4E) > 0x5
	.error "gText_Rom_5CBA4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA4E) < 0x5
	.space 0x5 - (. - gText_Rom_5CBA4E)
	.endif

	@ src/strings.c:576 gText_TheQuizColon
	.globl gText_Rom_5CBA53
gText_Rom_5CBA53: @ 0x085CBA53
	.string "クイズは$"
	.if (. - gText_Rom_5CBA53) > 0x5
	.error "gText_Rom_5CBA53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA53) < 0x5
	.space 0x5 - (. - gText_Rom_5CBA53)
	.endif

	@ src/strings.c:577 gText_ApprenticePhrase
	.globl gText_Rom_5CBA58
gText_Rom_5CBA58: @ 0x085CBA58
	.string "でしの きめゼリフは$"
	.if (. - gText_Rom_5CBA58) > 0xb
	.error "gText_Rom_5CBA58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA58) < 0xb
	.space 0xb - (. - gText_Rom_5CBA58)
	.endif
	.globl gUnknown_85CBA63
gUnknown_85CBA63: @ 0x085CBA63

	@ src/strings.c:578 gText_QuitEditing (+1 aliases)
	.globl gText_Rom_5CBA63
gText_Rom_5CBA63: @ 0x085CBA63
	.string "へんしゅうを やめますか？$"
	.if (. - gText_Rom_5CBA63) > 0xe
	.error "gText_Rom_5CBA63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA63) < 0xe
	.space 0xe - (. - gText_Rom_5CBA63)
	.endif
	.globl gUnknown_85CBA71
gUnknown_85CBA71: @ 0x085CBA71

	@ src/strings.c:579 gText_StopGivingPkmnMail (+1 aliases)
	.globl gText_Rom_5CBA71
gText_Rom_5CBA71: @ 0x085CBA71
	.string "メールを もたせるのを やめますか?$"
	.if (. - gText_Rom_5CBA71) > 0x13
	.error "gText_Rom_5CBA71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA71) < 0x13
	.space 0x13 - (. - gText_Rom_5CBA71)
	.endif

	@ src/strings.c:580 gText_AndFillOutTheQuestionnaire
	.globl gText_Rom_5CBA84
gText_Rom_5CBA84: @ 0x085CBA84
	.string "ショップの アンケートに こたえよう!$"
	.if (. - gText_Rom_5CBA84) > 0x14
	.error "gText_Rom_5CBA84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA84) < 0x14
	.space 0x14 - (. - gText_Rom_5CBA84)
	.endif

	@ src/strings.c:581 gText_LetsReplyToTheInterview
	.globl gText_Rom_5CBA98
gText_Rom_5CBA98: @ 0x085CBA98
	.string "インタビューに こたえよう！$"
	.if (. - gText_Rom_5CBA98) > 0xf
	.error "gText_Rom_5CBA98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA98) < 0xf
	.space 0xf - (. - gText_Rom_5CBA98)
	.endif
	.globl gUnknown_85CBAA7
gUnknown_85CBAA7: @ 0x085CBAA7

	@ src/strings.c:582 gText_AllTextBeingEditedWill
	.globl gText_Rom_5CBAA7
gText_Rom_5CBAA7: @ 0x085CBAA7
	.string "へんしゅうちゅうの ことばを$"
	.if (. - gText_Rom_5CBAA7) > 0xf
	.error "gText_Rom_5CBAA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBAA7) < 0xf
	.space 0xf - (. - gText_Rom_5CBAA7)
	.endif
	.globl gUnknown_85CBAB6
gUnknown_85CBAB6: @ 0x085CBAB6

	@ src/strings.c:583 gText_BeDeletedThatOkay
	.globl gText_Rom_5CBAB6
gText_Rom_5CBAB6: @ 0x085CBAB6
	.string "ぜんぶ けしても いいですか?$"
	.if (. - gText_Rom_5CBAB6) > 0x10
	.error "gText_Rom_5CBAB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBAB6) < 0x10
	.space 0x10 - (. - gText_Rom_5CBAB6)
	.endif

	@ src/strings.c:578 gText_QuitEditing (+1 aliases)
	.globl gText_Rom_5CBAC6
gText_Rom_5CBAC6: @ 0x085CBAC6
	.string "へんしゅうを やめますか？$"
	.if (. - gText_Rom_5CBAC6) > 0xe
	.error "gText_Rom_5CBAC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBAC6) < 0xe
	.space 0xe - (. - gText_Rom_5CBAC6)
	.endif

	@ src/strings.c:585 gText_EditedTextWillNotBeSaved
	.globl gText_Rom_5CBAD4
gText_Rom_5CBAD4: @ 0x085CBAD4
	.string "へんしゅうした ことばは ほぞん$"
	.if (. - gText_Rom_5CBAD4) > 0x11
	.error "gText_Rom_5CBAD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBAD4) < 0x11
	.space 0x11 - (. - gText_Rom_5CBAD4)
	.endif

	@ src/strings.c:586 gText_IsThatOkay
	.globl gText_Rom_5CBAE5
gText_Rom_5CBAE5: @ 0x085CBAE5
	.string "されませんが いいですか?$"
	.if (. - gText_Rom_5CBAE5) > 0xe
	.error "gText_Rom_5CBAE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBAE5) < 0xe
	.space 0xe - (. - gText_Rom_5CBAE5)
	.endif

	@ src/strings.c:587 gText_PleaseEnterPhraseOrWord
	.globl gText_Rom_5CBAF3
gText_Rom_5CBAF3: @ 0x085CBAF3
	.string "なにか ことばを いれてください!$"
	.if (. - gText_Rom_5CBAF3) > 0x12
	.error "gText_Rom_5CBAF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBAF3) < 0x12
	.space 0x12 - (. - gText_Rom_5CBAF3)
	.endif

	@ src/strings.c:588 gText_EntireTextCantBeDeleted
	.globl gText_Rom_5CBB05
gText_Rom_5CBB05: @ 0x085CBB05
	.string "ことばを ぜんぶ けすことは できません!$"
	.if (. - gText_Rom_5CBB05) > 0x16
	.error "gText_Rom_5CBB05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB05) < 0x16
	.space 0x16 - (. - gText_Rom_5CBB05)
	.endif
	.globl gUnknown_85CBB1B
gUnknown_85CBB1B: @ 0x085CBB1B

	@ src/strings.c:589 gText_OnlyOnePhrase
	.globl gText_Rom_5CBB1B
gText_Rom_5CBB1B: @ 0x085CBB1B
	.string "かえられる ことばは 1つ までです!$"
	.if (. - gText_Rom_5CBB1B) > 0x14
	.error "gText_Rom_5CBB1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB1B) < 0x14
	.space 0x14 - (. - gText_Rom_5CBB1B)
	.endif
	.globl gUnknown_85CBB2F
gUnknown_85CBB2F: @ 0x085CBB2F

	@ src/strings.c:590 gText_OriginalSongWillBeUsed
	.globl gText_Rom_5CBB2F
gText_Rom_5CBB2F: @ 0x085CBB2F
	.string "うたを もとに もどします!$"
	.if (. - gText_Rom_5CBB2F) > 0xf
	.error "gText_Rom_5CBB2F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB2F) < 0xf
	.space 0xf - (. - gText_Rom_5CBB2F)
	.endif

	@ src/strings.c:591 gText_ThatsTrendyAlready
	.globl gText_Rom_5CBB3E
gText_Rom_5CBB3E: @ 0x085CBB3E
	.string "それは もう はやっています！$"
	.if (. - gText_Rom_5CBB3E) > 0x10
	.error "gText_Rom_5CBB3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB3E) < 0x10
	.space 0x10 - (. - gText_Rom_5CBB3E)
	.endif
	.globl gUnknown_85CBB4E
gUnknown_85CBB4E: @ 0x085CBB4E

	@ src/strings.c:592 gText_CombineTwoWordsOrPhrases3
	.globl gText_Rom_5CBB4E
gText_Rom_5CBB4E: @ 0x085CBB4E
	.string "2つの ことばを くみあわせてください!$"
	.if (. - gText_Rom_5CBB4E) > 0x15
	.error "gText_Rom_5CBB4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB4E) < 0x15
	.space 0x15 - (. - gText_Rom_5CBB4E)
	.endif

	@ src/strings.c:593 gText_QuitGivingInfo
	.globl gText_Rom_5CBB63
gText_Rom_5CBB63: @ 0x085CBB63
	.string "ことばを おしえるのを やめますか?$"
	.if (. - gText_Rom_5CBB63) > 0x13
	.error "gText_Rom_5CBB63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB63) < 0x13
	.space 0x13 - (. - gText_Rom_5CBB63)
	.endif

	@ src/strings.c:579 gText_StopGivingPkmnMail (+1 aliases)
	.globl gText_Rom_5CBB76
gText_Rom_5CBB76: @ 0x085CBB76
	.string "メールを もたせるのを やめますか?$"
	.if (. - gText_Rom_5CBB76) > 0x13
	.error "gText_Rom_5CBB76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB76) < 0x13
	.space 0x13 - (. - gText_Rom_5CBB76)
	.endif

	@ src/strings.c:595 gText_CreateAQuiz2 (+1 aliases)
	.globl gText_Rom_5CBB89
gText_Rom_5CBB89: @ 0x085CBB89
	.string "もんだいを つくってください!$"
	.if (. - gText_Rom_5CBB89) > 0x10
	.error "gText_Rom_5CBB89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB89) < 0x10
	.space 0x10 - (. - gText_Rom_5CBB89)
	.endif

	@ src/strings.c:596 gText_SetTheAnswer (+1 aliases)
	.globl gText_Rom_5CBB99
gText_Rom_5CBB99: @ 0x085CBB99
	.string "こたえを えらんでください!$"
	.if (. - gText_Rom_5CBB99) > 0xf
	.error "gText_Rom_5CBB99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB99) < 0xf
	.space 0xf - (. - gText_Rom_5CBB99)
	.endif

	@ src/strings.c:597 gText_CancelSelection
	.globl gText_Rom_5CBBA8
gText_Rom_5CBBA8: @ 0x085CBBA8
	.string "もとにもどして いいですか?$"
	.if (. - gText_Rom_5CBBA8) > 0xf
	.error "gText_Rom_5CBBA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBA8) < 0xf
	.space 0xf - (. - gText_Rom_5CBBA8)
	.endif

	@ src/strings.c:598 gText_Profile
	.globl gText_Rom_5CBBB7
gText_Rom_5CBBB7: @ 0x085CBBB7
	.string "プロフィール$"
	.if (. - gText_Rom_5CBBB7) > 0x7
	.error "gText_Rom_5CBBB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBB7) < 0x7
	.space 0x7 - (. - gText_Rom_5CBBB7)
	.endif

	@ src/strings.c:599 gText_AtTheBattlesStart
	.globl gText_Rom_5CBBBE
gText_Rom_5CBBBE: @ 0x085CBBBE
	.string "たいせんが はじまるとき$"
	.if (. - gText_Rom_5CBBBE) > 0xd
	.error "gText_Rom_5CBBBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBBE) < 0xd
	.space 0xd - (. - gText_Rom_5CBBBE)
	.endif

	@ src/strings.c:600 gText_UponWinningABattle
	.globl gText_Rom_5CBBCB
gText_Rom_5CBBCB: @ 0x085CBBCB
	.string "たいせんに かったとき$"
	.if (. - gText_Rom_5CBBCB) > 0xc
	.error "gText_Rom_5CBBCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBCB) < 0xc
	.space 0xc - (. - gText_Rom_5CBBCB)
	.endif

	@ src/strings.c:601 gText_UponLosingABattle
	.globl gText_Rom_5CBBD7
gText_Rom_5CBBD7: @ 0x085CBBD7
	.string "たいせんに まけたとき$"
	.if (. - gText_Rom_5CBBD7) > 0xc
	.error "gText_Rom_5CBBD7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBD7) < 0xc
	.space 0xc - (. - gText_Rom_5CBBD7)
	.endif

	@ src/strings.c:602 gText_TheBardsSong
	.globl gText_Rom_5CBBE3
gText_Rom_5CBBE3: @ 0x085CBBE3
	.string "オヤジのうた$"
	.if (. - gText_Rom_5CBBE3) > 0x7
	.error "gText_Rom_5CBBE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBE3) < 0x7
	.space 0x7 - (. - gText_Rom_5CBBE3)
	.endif

	@ src/strings.c:603 gText_WhatsHipAndHappening
	.globl gText_Rom_5CBBEA
gText_Rom_5CBBEA: @ 0x085CBBEA
	.string "はやっている ものは?$"
	.if (. - gText_Rom_5CBBEA) > 0xc
	.error "gText_Rom_5CBBEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBEA) < 0xc
	.space 0xc - (. - gText_Rom_5CBBEA)
	.endif

	@ src/strings.c:604 gText_Interview
	.globl gText_Rom_5CBBF6
gText_Rom_5CBBF6: @ 0x085CBBF6
	.string "インタビュー$"
	.if (. - gText_Rom_5CBBF6) > 0x7
	.error "gText_Rom_5CBBF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBF6) < 0x7
	.space 0x7 - (. - gText_Rom_5CBBF6)
	.endif

	@ src/strings.c:605 gText_GoodSaying
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBBFD
gText_Rom_5CBBFD: @ 0x085CBBFD
	.string "いい ことば$"
	.if (. - gText_Rom_5CBBFD) != 0x7
	.error "gText_Rom_5CBBFD must retain its original byte length"
	.endif
	.globl gText_Rom_5CBC00
	.set gText_Rom_5CBC00, gText_Rom_5CBBFD + 0x3

	@ src/strings.c:606 gText_FansQuestion
	.globl gText_Rom_5CBC04
gText_Rom_5CBC04: @ 0x085CBC04
	.string "ファンのしつもん$"
	.if (. - gText_Rom_5CBC04) > 0x9
	.error "gText_Rom_5CBC04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC04) < 0x9
	.space 0x9 - (. - gText_Rom_5CBC04)
	.endif

	@ src/strings.c:607 gJPText_WhatIsTheQuizAnswer (+1 aliases)
	.globl gText_Rom_5CBC0D
gText_Rom_5CBC0D: @ 0x085CBC0D
	.string "クイズの こたえは？$"
	.if (. - gText_Rom_5CBC0D) > 0xb
	.error "gText_Rom_5CBC0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC0D) < 0xb
	.space 0xb - (. - gText_Rom_5CBC0D)
	.endif

	@ src/strings.c:608 gText_ApprenticesPhrase
	.globl gText_Rom_5CBC18
gText_Rom_5CBC18: @ 0x085CBC18
	.string "でしの きめゼリフ$"
	.if (. - gText_Rom_5CBC18) > 0xa
	.error "gText_Rom_5CBC18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC18) < 0xa
	.space 0xa - (. - gText_Rom_5CBC18)
	.endif

	@ src/strings.c:609 gText_Questionnaire
	.globl gText_Rom_5CBC22
gText_Rom_5CBC22: @ 0x085CBC22
	.string "アンケート$"
	.if (. - gText_Rom_5CBC22) > 0x6
	.error "gText_Rom_5CBC22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC22) < 0x6
	.space 0x6 - (. - gText_Rom_5CBC22)
	.endif
	.incbin "baserom.gba", 0x5cbc28, 0x28

	@ src/strings.c:89 gText_DexSearchAlphaSTU
	.globl gText_Rom_5CBC50
gText_Rom_5CBC50: @ 0x085CBC50
	.string "まみむめも$"
	.if (. - gText_Rom_5CBC50) > 0x6
	.error "gText_Rom_5CBC50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC50) < 0x6
	.space 0x6 - (. - gText_Rom_5CBC50)
	.endif
	.incbin "baserom.gba", 0x5cbc56, 0x6

	@ src/strings.c:90 gText_DexSearchAlphaVWX
	.globl gText_Rom_5CBC5C
gText_Rom_5CBC5C: @ 0x085CBC5C
	.string "らりるれろ$"
	.if (. - gText_Rom_5CBC5C) > 0x6
	.error "gText_Rom_5CBC5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC5C) < 0x6
	.space 0x6 - (. - gText_Rom_5CBC5C)
	.endif
	.globl gUnknown_85CBC62
gUnknown_85CBC62: @ 0x085CBC62

	@ src/strings.c:610 gText_YouCannotQuitHere
	.globl gText_Rom_5CBC62
gText_Rom_5CBC62: @ 0x085CBC62
	.string "ここでは とちゅうで$"
	.if (. - gText_Rom_5CBC62) > 0xb
	.error "gText_Rom_5CBC62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC62) < 0xb
	.space 0xb - (. - gText_Rom_5CBC62)
	.endif
	.globl gUnknown_85CBC6D
gUnknown_85CBC6D: @ 0x085CBC6D

	@ src/strings.c:611 gText_SectionMustBeCompleted
	.globl gText_Rom_5CBC6D
gText_Rom_5CBC6D: @ 0x085CBC6D
	.string "やめることは できません!$"
	.if (. - gText_Rom_5CBC6D) > 0xe
	.error "gText_Rom_5CBC6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC6D) < 0xe
	.space 0xe - (. - gText_Rom_5CBC6D)
	.endif
	.globl gUnknown_85CBC7B
gUnknown_85CBC7B: @ 0x085CBC7B
	.incbin "baserom.gba", 0x5cbc7b, 0x6

	@ src/strings.c:1166 gText_Quiz
	.globl gText_Rom_5CBC81
gText_Rom_5CBC81: @ 0x085CBC81
	.string "クイズ$"
	.if (. - gText_Rom_5CBC81) > 0x4
	.error "gText_Rom_5CBC81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC81) < 0x4
	.space 0x4 - (. - gText_Rom_5CBC81)
	.endif
	.globl gUnknown_85CBC85
gUnknown_85CBC85: @ 0x085CBC85
	.incbin "baserom.gba", 0x5cbc85, 0x4

	@ src/strings.c:614 gText_AfterYouHaveReadTheQuiz
	.globl gText_Rom_5CBC89
gText_Rom_5CBC89: @ 0x085CBC89
	.string "もんだいを よんだら$"
	.if (. - gText_Rom_5CBC89) > 0xb
	.error "gText_Rom_5CBC89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC89) < 0xb
	.space 0xb - (. - gText_Rom_5CBC89)
	.endif

	@ src/strings.c:615 gText_QuestionPressTheAButton
	.globl gText_Rom_5CBC94
gText_Rom_5CBC94: @ 0x085CBC94
	.string "Aボタンを おしてね!$"
	.if (. - gText_Rom_5CBC94) > 0xc
	.error "gText_Rom_5CBC94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC94) < 0xc
	.space 0xc - (. - gText_Rom_5CBC94)
	.endif

	@ src/strings.c:607 gJPText_WhatIsTheQuizAnswer (+1 aliases)
	.globl gText_Rom_5CBCA0
gText_Rom_5CBCA0: @ 0x085CBCA0
	.string "クイズの こたえは？$"
	.if (. - gText_Rom_5CBCA0) > 0xb
	.error "gText_Rom_5CBCA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBCA0) < 0xb
	.space 0xb - (. - gText_Rom_5CBCA0)
	.endif
	.globl gUnknown_85CBCAB
gUnknown_85CBCAB: @ 0x085CBCAB

	@ src/strings.c:617 gText_LikeToQuitQuiz
	.globl gText_Rom_5CBCAB
gText_Rom_5CBCAB: @ 0x085CBCAB
	.string "クイズの チャレンジを$"
	.if (. - gText_Rom_5CBCAB) > 0xc
	.error "gText_Rom_5CBCAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBCAB) < 0xc
	.space 0xc - (. - gText_Rom_5CBCAB)
	.endif
	.globl gUnknown_85CBCB7
gUnknown_85CBCB7: @ 0x085CBCB7

	@ src/strings.c:618 gText_ChallengeQuestionMark
	.globl gText_Rom_5CBCB7
gText_Rom_5CBCB7: @ 0x085CBCB7
	.string "あきらめますか?$"
	.if (. - gText_Rom_5CBCB7) > 0x9
	.error "gText_Rom_5CBCB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBCB7) < 0x9
	.space 0x9 - (. - gText_Rom_5CBCB7)
	.endif

	@ src/strings.c:619 gText_IsThisQuizOK
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBCC0
gText_Rom_5CBCC0: @ 0x085CBCC0
	.string "クイズは これで いいですか?$"
	.if (. - gText_Rom_5CBCC0) != 0x10
	.error "gText_Rom_5CBCC0 must retain its original byte length"
	.endif
	.globl gText_Rom_5CBCC5
	.set gText_Rom_5CBCC5, gText_Rom_5CBCC0 + 0x5
	.globl gUnknown_85CBCD0
gUnknown_85CBCD0: @ 0x085CBCD0

	@ src/strings.c:595 gText_CreateAQuiz2 (+1 aliases)
	.globl gText_Rom_5CBCD0
gText_Rom_5CBCD0: @ 0x085CBCD0
	.string "もんだいを つくってください!$"
	.if (. - gText_Rom_5CBCD0) > 0x10
	.error "gText_Rom_5CBCD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBCD0) < 0x10
	.space 0x10 - (. - gText_Rom_5CBCD0)
	.endif
	.globl gUnknown_85CBCE0
gUnknown_85CBCE0: @ 0x085CBCE0

	@ src/strings.c:596 gText_SetTheAnswer (+1 aliases)
	.globl gText_Rom_5CBCE0
gText_Rom_5CBCE0: @ 0x085CBCE0
	.string "こたえを えらんでください!$"
	.if (. - gText_Rom_5CBCE0) > 0xf
	.error "gText_Rom_5CBCE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBCE0) < 0xf
	.space 0xf - (. - gText_Rom_5CBCE0)
	.endif
	.globl gUnknown_85CBCEF
gUnknown_85CBCEF: @ 0x085CBCEF

	@ src/strings.c:622 gText_LyricsCantBeDeleted
	.globl gText_Rom_5CBCEF
gText_Rom_5CBCEF: @ 0x085CBCEF
	.string "かしを けすことは できません!$"
	.if (. - gText_Rom_5CBCEF) > 0x11
	.error "gText_Rom_5CBCEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBCEF) < 0x11
	.space 0x11 - (. - gText_Rom_5CBCEF)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:15 gGiftRibbonDescriptionPart1_PokemonLeague
	.globl gText_Rom_5CBD00
gText_Rom_5CBD00: @ 0x085CBD00
	.string "ポケモン リーグ$"
	.if (. - gText_Rom_5CBD00) > 0x9
	.error "gText_Rom_5CBD00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD00) < 0x9
	.space 0x9 - (. - gText_Rom_5CBD00)
	.endif

	@ src/strings.c:624 gText_PokemonCenter
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBD09
gText_Rom_5CBD09: @ 0x085CBD09
	.string "ポケモンセンター$"
	.if (. - gText_Rom_5CBD09) != 0x9
	.error "gText_Rom_5CBD09 must retain its original byte length"
	.endif
	.globl gText_Rom_5CBD0D
	.set gText_Rom_5CBD0D, gText_Rom_5CBD09 + 0x4
	.globl gUnknown_85CBD12
gUnknown_85CBD12: @ 0x085CBD12

	@ src/use_pokeblock.c:159 sText_GetsAPokeBlockQuestion
	.globl gText_Rom_5CBD12
gText_Rom_5CBD12: @ 0x085CBD12
	.string "に ポロックを あげますか?$"
	.if (. - gText_Rom_5CBD12) > 0xf
	.error "gText_Rom_5CBD12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD12) < 0xf
	.space 0xf - (. - gText_Rom_5CBD12)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD21
gText_Rom_5CBD21: @ 0x085CBD21
	.string "かっこよさ$"
	.if (. - gText_Rom_5CBD21) > 0x6
	.error "gText_Rom_5CBD21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD21) < 0x6
	.space 0x6 - (. - gText_Rom_5CBD21)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD27
gText_Rom_5CBD27: @ 0x085CBD27
	.string "うつくしさ$"
	.if (. - gText_Rom_5CBD27) > 0x6
	.error "gText_Rom_5CBD27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD27) < 0x6
	.space 0x6 - (. - gText_Rom_5CBD27)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD2D
gText_Rom_5CBD2D: @ 0x085CBD2D
	.string "かわいさ$"
	.if (. - gText_Rom_5CBD2D) > 0x5
	.error "gText_Rom_5CBD2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD2D) < 0x5
	.space 0x5 - (. - gText_Rom_5CBD2D)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD32
gText_Rom_5CBD32: @ 0x085CBD32
	.string "かしこさ$"
	.if (. - gText_Rom_5CBD32) > 0x5
	.error "gText_Rom_5CBD32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD32) < 0x5
	.space 0x5 - (. - gText_Rom_5CBD32)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD37
gText_Rom_5CBD37: @ 0x085CBD37
	.string "たくましさ$"
	.if (. - gText_Rom_5CBD37) > 0x6
	.error "gText_Rom_5CBD37 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD37) < 0x6
	.space 0x6 - (. - gText_Rom_5CBD37)
	.endif
	.globl gUnknown_85CBD3D
gUnknown_85CBD3D: @ 0x085CBD3D

	@ asm/use_pokeblock.s:1658 Pokeblock_BufferEnhancedStatText
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBD3D
gText_Rom_5CBD3D: @ 0x085CBD3D
	.string "に　みがきが　かかった！$"
	.if (. - gText_Rom_5CBD3D) != 0xd
	.error "gText_Rom_5CBD3D must retain its original byte length"
	.endif
	.globl gText_Rom_5CBD45
	.set gText_Rom_5CBD45, gText_Rom_5CBD3D + 0x8
	.globl gUnknown_85CBD4A
gUnknown_85CBD4A: @ 0x085CBD4A

	@ src/use_pokeblock.c:161 sText_NothingChanged
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBD4A
gText_Rom_5CBD4A: @ 0x085CBD4A
	.string "なにも かわらなかった!$"
	.if (. - gText_Rom_5CBD4A) != 0xd
	.error "gText_Rom_5CBD4A must retain its original byte length"
	.endif
	.globl gText_Rom_5CBD52
	.set gText_Rom_5CBD52, gText_Rom_5CBD4A + 0x8
	.globl gUnknown_85CBD57
gUnknown_85CBD57: @ 0x085CBD57

	@ src/use_pokeblock.c:162 sText_WontEatAnymore
	.globl gText_Rom_5CBD57
gText_Rom_5CBD57: @ 0x085CBD57
	.string "もう これいじょう たべない みたい…$"
	.if (. - gText_Rom_5CBD57) > 0x14
	.error "gText_Rom_5CBD57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD57) < 0x14
	.space 0x14 - (. - gText_Rom_5CBD57)
	.endif
	.globl gUnknown_85CBD6B
gUnknown_85CBD6B: @ 0x085CBD6B
	.incbin "baserom.gba", 0x5cbd6b, 0x47
	.globl gUnknown_85CBDB2
gUnknown_85CBDB2: @ 0x085CBDB2
	.incbin "baserom.gba", 0x5cbdb2, 0x45
	.globl gUnknown_85CBDF7
gUnknown_85CBDF7: @ 0x085CBDF7
	.incbin "baserom.gba", 0x5cbdf7, 0x29
	.globl gUnknown_85CBE20
gUnknown_85CBE20: @ 0x085CBE20

	@ src/strings.c:634 gText_CheckCompleted
	.globl gText_Rom_5CBE20
gText_Rom_5CBE20: @ 0x085CBE20
	.string "けんさが しゅうりょうしました!\nもういちど レポートを かきこみます\nしばらくおまちください$"
	.if (. - gText_Rom_5CBE20) > 0x30
	.error "gText_Rom_5CBE20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBE20) < 0x30
	.space 0x30 - (. - gText_Rom_5CBE20)
	.endif
	.globl gUnknown_85CBE50
gUnknown_85CBE50: @ 0x085CBE50
	.incbin "baserom.gba", 0x5cbe50, 0x40
	.globl gUnknown_85CBE90
gUnknown_85CBE90: @ 0x085CBE90
	.incbin "baserom.gba", 0x5cbe90, 0x2a
	.globl gUnknown_85CBEBA
gUnknown_85CBEBA: @ 0x085CBEBA

	@ src/strings.c:638 gText_Ferry
	.globl gText_Rom_5CBEBA
gText_Rom_5CBEBA: @ 0x085CBEBA
	.string "れんらくせん$"
	.if (. - gText_Rom_5CBEBA) > 0x7
	.error "gText_Rom_5CBEBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBEBA) < 0x7
	.space 0x7 - (. - gText_Rom_5CBEBA)
	.endif
	.globl gUnknown_85CBEC1
gUnknown_85CBEC1: @ 0x085CBEC1

	@ src/data/easy_chat/easy_chat_group_events.h:17 gEasyChatWord_SecretBase (+3 aliases)
	.globl gText_Rom_5CBEC1
gText_Rom_5CBEC1: @ 0x085CBEC1
	.string "ひみつきち$"
	.if (. - gText_Rom_5CBEC1) > 0x6
	.error "gText_Rom_5CBEC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBEC1) < 0x6
	.space 0x6 - (. - gText_Rom_5CBEC1)
	.endif
	.globl gUnknown_85CBEC7
gUnknown_85CBEC7: @ 0x085CBEC7

	@ src/strings.c:640 gText_Hideout
	.globl gText_Rom_5CBEC7
gText_Rom_5CBEC7: @ 0x085CBEC7
	.string "アジト$"
	.if (. - gText_Rom_5CBEC7) > 0x4
	.error "gText_Rom_5CBEC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBEC7) < 0x4
	.space 0x4 - (. - gText_Rom_5CBEC7)
	.endif
	.globl gUnknown_85CBECB
gUnknown_85CBECB: @ 0x085CBECB
	.incbin "baserom.gba", 0x5cbecb, 0x1e
	.globl gUnknown_85CBEE9
gUnknown_85CBEE9: @ 0x085CBEE9

	@ src/strings.c:642 gText_PresentTime
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBEE9
gText_Rom_5CBEE9: @ 0x085CBEE9
	.string "げんざいの ゲームない じかん$"
	.if (. - gText_Rom_5CBEE9) != 0x10
	.error "gText_Rom_5CBEE9 must retain its original byte length"
	.endif
	.globl gText_Rom_5CBEF5
	.set gText_Rom_5CBEF5, gText_Rom_5CBEE9 + 0xc
	.globl gUnknown_85CBEF9
gUnknown_85CBEF9: @ 0x085CBEF9

	@ src/strings.c:643 gText_PreviousTime
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBEF9
gText_Rom_5CBEF9: @ 0x085CBEF9
	.string "ぜんかいの ゲームない じかん$"
	.if (. - gText_Rom_5CBEF9) != 0x10
	.error "gText_Rom_5CBEF9 must retain its original byte length"
	.endif
	.globl gText_Rom_5CBF05
	.set gText_Rom_5CBF05, gText_Rom_5CBEF9 + 0xc
	.globl gUnknown_85CBF09
gUnknown_85CBF09: @ 0x085CBF09

	@ src/strings.c:644 gText_PleaseResetTime
	.globl gText_Rom_5CBF09
gText_Rom_5CBF09: @ 0x085CBF09
	.string "じかんを さいせってい してください$"
	.if (. - gText_Rom_5CBF09) > 0x13
	.error "gText_Rom_5CBF09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF09) < 0x13
	.space 0x13 - (. - gText_Rom_5CBF09)
	.endif
	.globl gUnknown_85CBF1C
gUnknown_85CBF1C: @ 0x085CBF1C

	@ src/strings.c:645 gText_ClockHasBeenReset
	.globl gText_Rom_5CBF1C
gText_Rom_5CBF1C: @ 0x085CBF1C
	.string "じかんを さいせってい しました!\nレポートを かいています おまちください$"
	.if (. - gText_Rom_5CBF1C) > 0x27
	.error "gText_Rom_5CBF1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF1C) < 0x27
	.space 0x27 - (. - gText_Rom_5CBF1C)
	.endif
	.globl gUnknown_85CBF43
gUnknown_85CBF43: @ 0x085CBF43

	@ src/strings.c:646 gText_SaveCompleted
	.globl gText_Rom_5CBF43
gText_Rom_5CBF43: @ 0x085CBF43
	.string "レポートを かきこみました!$"
	.if (. - gText_Rom_5CBF43) > 0xf
	.error "gText_Rom_5CBF43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF43) < 0xf
	.space 0xf - (. - gText_Rom_5CBF43)
	.endif
	.globl gUnknown_85CBF52
gUnknown_85CBF52: @ 0x085CBF52

	@ src/strings.c:647 gText_SaveFailed
	.globl gText_Rom_5CBF52
gText_Rom_5CBF52: @ 0x085CBF52
	.string "レポートの かきこみに\nしっぱい しました…$"
	.if (. - gText_Rom_5CBF52) > 0x17
	.error "gText_Rom_5CBF52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF52) < 0x17
	.space 0x17 - (. - gText_Rom_5CBF52)
	.endif
	.globl gUnknown_85CBF69
gUnknown_85CBF69: @ 0x085CBF69

	@ src/strings.c:648 gText_NoSaveFileCantSetTime
	.globl gText_Rom_5CBF69
gText_Rom_5CBF69: @ 0x085CBF69
	.string "レポートが ないので\nじかんの せっていは できません!$"
	.if (. - gText_Rom_5CBF69) > 0x1d
	.error "gText_Rom_5CBF69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF69) < 0x1d
	.space 0x1d - (. - gText_Rom_5CBF69)
	.endif
	.globl gUnknown_85CBF86
gUnknown_85CBF86: @ 0x085CBF86

	@ src/strings.c:649 gText_InGameClockUsable
	.globl gText_Rom_5CBF86
gText_Rom_5CBF86: @ 0x085CBF86
	.string "ゲームない じかんの しゅうせい システムが\nつかえる ように なりました!$"
	.if (. - gText_Rom_5CBF86) > 0x27
	.error "gText_Rom_5CBF86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF86) < 0x27
	.space 0x27 - (. - gText_Rom_5CBF86)
	.endif
	.globl gUnknown_85CBFAD
gUnknown_85CBFAD: @ 0x085CBFAD

	@ asm/tv.s:15280 DoTVShowFindThatGamer
	.globl gText_Rom_5CBFAD
gText_Rom_5CBFAD: @ 0x085CBFAD
	.string "スロット$"
	.if (. - gText_Rom_5CBFAD) > 0x5
	.error "gText_Rom_5CBFAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFAD) < 0x5
	.space 0x5 - (. - gText_Rom_5CBFAD)
	.endif
	.globl gUnknown_85CBFB2
gUnknown_85CBFB2: @ 0x085CBFB2

	@ asm/tv.s:15288 DoTVShowFindThatGamer
	.globl gText_Rom_5CBFB2
gText_Rom_5CBFB2: @ 0x085CBFB2
	.string "ルーレット$"
	.if (. - gText_Rom_5CBFB2) > 0x6
	.error "gText_Rom_5CBFB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFB2) < 0x6
	.space 0x6 - (. - gText_Rom_5CBFB2)
	.endif
	.globl gUnknown_85CBFB8
gUnknown_85CBFB8: @ 0x085CBFB8

	@ asm/tv.s:14135 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFB8
gText_Rom_5CBFB8: @ 0x085CBFB8
	.string "いい$"
	.if (. - gText_Rom_5CBFB8) > 0x3
	.error "gText_Rom_5CBFB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFB8) < 0x3
	.space 0x3 - (. - gText_Rom_5CBFB8)
	.endif
	.globl gUnknown_85CBFBB
gUnknown_85CBFBB: @ 0x085CBFBB

	@ asm/tv.s:14127 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFBB
gText_Rom_5CBFBB: @ 0x085CBFBB
	.string "おいしい$"
	.if (. - gText_Rom_5CBFBB) > 0x5
	.error "gText_Rom_5CBFBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFBB) < 0x5
	.space 0x5 - (. - gText_Rom_5CBFBB)
	.endif
	.globl gUnknown_85CBFC0
gUnknown_85CBFC0: @ 0x085CBFC0

	@ src/data/easy_chat/easy_chat_group_conditions.h:172 easy_chat_group_conditions_line_172 (+1 aliases)
	.globl gText_Rom_5CBFC0
gText_Rom_5CBFC0: @ 0x085CBFC0
	.string "さいこう$"
	.if (. - gText_Rom_5CBFC0) > 0x5
	.error "gText_Rom_5CBFC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFC0) < 0x5
	.space 0x5 - (. - gText_Rom_5CBFC0)
	.endif
	.globl gUnknown_85CBFC5
gUnknown_85CBFC5: @ 0x085CBFC5

	@ src/data/script_menu.h:294 script_menu_line_294
	.globl gText_Rom_5CBFC5
gText_Rom_5CBFC5: @ 0x085CBFC5
	.string "いまいち$"
	.if (. - gText_Rom_5CBFC5) > 0x5
	.error "gText_Rom_5CBFC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFC5) < 0x5
	.space 0x5 - (. - gText_Rom_5CBFC5)
	.endif
	.globl gUnknown_85CBFCA
gUnknown_85CBFCA: @ 0x085CBFCA

	@ asm/tv.s:14229 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFCA
gText_Rom_5CBFCA: @ 0x085CBFCA
	.string "まずい$"
	.if (. - gText_Rom_5CBFCA) > 0x4
	.error "gText_Rom_5CBFCA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFCA) < 0x4
	.space 0x4 - (. - gText_Rom_5CBFCA)
	.endif
	.globl gUnknown_85CBFCE
gUnknown_85CBFCE: @ 0x085CBFCE

	@ asm/tv.s:14237 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFCE
gText_Rom_5CBFCE: @ 0x085CBFCE
	.string "さいあく$"
	.if (. - gText_Rom_5CBFCE) > 0x5
	.error "gText_Rom_5CBFCE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFCE) < 0x5
	.space 0x5 - (. - gText_Rom_5CBFCE)
	.endif
	.globl gUnknown_85CBFD3
gUnknown_85CBFD3: @ 0x085CBFD3

	@ asm/tv.s:14076 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFD3
gText_Rom_5CBFD3: @ 0x085CBFD3
	.string "から$"
	.if (. - gText_Rom_5CBFD3) > 0x3
	.error "gText_Rom_5CBFD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFD3) < 0x3
	.space 0x3 - (. - gText_Rom_5CBFD3)
	.endif
	.globl gUnknown_85CBFD6
gUnknown_85CBFD6: @ 0x085CBFD6

	@ src/strings.c:651 gText_Dry2
	.globl gText_Rom_5CBFD6
gText_Rom_5CBFD6: @ 0x085CBFD6
	.string "しぶ$"
	.if (. - gText_Rom_5CBFD6) > 0x3
	.error "gText_Rom_5CBFD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFD6) < 0x3
	.space 0x3 - (. - gText_Rom_5CBFD6)
	.endif
	.globl gUnknown_85CBFD9
gUnknown_85CBFD9: @ 0x085CBFD9

	@ asm/tv.s:14092 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFD9
gText_Rom_5CBFD9: @ 0x085CBFD9
	.string "あま$"
	.if (. - gText_Rom_5CBFD9) > 0x3
	.error "gText_Rom_5CBFD9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFD9) < 0x3
	.space 0x3 - (. - gText_Rom_5CBFD9)
	.endif
	.globl gUnknown_85CBFDC
gUnknown_85CBFDC: @ 0x085CBFDC

	@ asm/tv.s:14100 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFDC
gText_Rom_5CBFDC: @ 0x085CBFDC
	.string "にが$"
	.if (. - gText_Rom_5CBFDC) > 0x3
	.error "gText_Rom_5CBFDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFDC) < 0x3
	.space 0x3 - (. - gText_Rom_5CBFDC)
	.endif
	.globl gUnknown_85CBFDF
gUnknown_85CBFDF: @ 0x085CBFDF

	@ src/strings.c:654 gText_Sour2
	.globl gText_Rom_5CBFDF
gText_Rom_5CBFDF: @ 0x085CBFDF
	.string "すっぱ$"
	.if (. - gText_Rom_5CBFDF) > 0x4
	.error "gText_Rom_5CBFDF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFDF) < 0x4
	.space 0x4 - (. - gText_Rom_5CBFDF)
	.endif
	.globl gUnknown_85CBFE3
gUnknown_85CBFE3: @ 0x085CBFE3

	@ src/data/script_menu.h:1330 script_menu_line_1330 (+2 aliases)
	.globl gText_Rom_5CBFE3
gText_Rom_5CBFE3: @ 0x085CBFE3
	.string "シングル$"
	.if (. - gText_Rom_5CBFE3) > 0x5
	.error "gText_Rom_5CBFE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFE3) < 0x5
	.space 0x5 - (. - gText_Rom_5CBFE3)
	.endif
	.globl gUnknown_85CBFE8
gUnknown_85CBFE8: @ 0x085CBFE8

	@ src/data/script_menu.h:1331 script_menu_line_1331 (+2 aliases)
	.globl gText_Rom_5CBFE8
gText_Rom_5CBFE8: @ 0x085CBFE8
	.string "ダブル$"
	.if (. - gText_Rom_5CBFE8) > 0x4
	.error "gText_Rom_5CBFE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFE8) < 0x4
	.space 0x4 - (. - gText_Rom_5CBFE8)
	.endif
	.globl gUnknown_85CBFEC
gUnknown_85CBFEC: @ 0x085CBFEC

	@ asm/tv.s:16070 DoTVShowPokemonLotteryWinnerFlashReport
	.globl gText_Rom_5CBFEC
gText_Rom_5CBFEC: @ 0x085CBFEC
	.string "とく$"
	.if (. - gText_Rom_5CBFEC) > 0x3
	.error "gText_Rom_5CBFEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFEC) < 0x3
	.space 0x3 - (. - gText_Rom_5CBFEC)
	.endif

	@ src/field_specials.c:2531 field_specials_line_2531
	.globl gText_Rom_5CBFEF
gText_Rom_5CBFEF: @ 0x085CBFEF
	.string "  0てん$"
	.if (. - gText_Rom_5CBFEF) > 0x6
	.error "gText_Rom_5CBFEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFEF) < 0x6
	.space 0x6 - (. - gText_Rom_5CBFEF)
	.endif

	@ src/field_specials.c:2532 field_specials_line_2532
	.globl gText_Rom_5CBFF5
gText_Rom_5CBFF5: @ 0x085CBFF5
	.string " 10てん$"
	.if (. - gText_Rom_5CBFF5) > 0x6
	.error "gText_Rom_5CBFF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFF5) < 0x6
	.space 0x6 - (. - gText_Rom_5CBFF5)
	.endif

	@ src/field_specials.c:2533 field_specials_line_2533
	.globl gText_Rom_5CBFFB
gText_Rom_5CBFFB: @ 0x085CBFFB
	.string " 20てん$"
	.if (. - gText_Rom_5CBFFB) > 0x6
	.error "gText_Rom_5CBFFB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFFB) < 0x6
	.space 0x6 - (. - gText_Rom_5CBFFB)
	.endif

	@ src/field_specials.c:2534 field_specials_line_2534
	.globl gText_Rom_5CC001
gText_Rom_5CC001: @ 0x085CC001
	.string " 30てん$"
	.if (. - gText_Rom_5CC001) > 0x6
	.error "gText_Rom_5CC001 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC001) < 0x6
	.space 0x6 - (. - gText_Rom_5CC001)
	.endif

	@ src/field_specials.c:2535 field_specials_line_2535
	.globl gText_Rom_5CC007
gText_Rom_5CC007: @ 0x085CC007
	.string " 40てん$"
	.if (. - gText_Rom_5CC007) > 0x6
	.error "gText_Rom_5CC007 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC007) < 0x6
	.space 0x6 - (. - gText_Rom_5CC007)
	.endif

	@ src/field_specials.c:2536 field_specials_line_2536
	.globl gText_Rom_5CC00D
gText_Rom_5CC00D: @ 0x085CC00D
	.string " 50てん$"
	.if (. - gText_Rom_5CC00D) > 0x6
	.error "gText_Rom_5CC00D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC00D) < 0x6
	.space 0x6 - (. - gText_Rom_5CC00D)
	.endif

	@ src/field_specials.c:2537 field_specials_line_2537
	.globl gText_Rom_5CC013
gText_Rom_5CC013: @ 0x085CC013
	.string " 60てん$"
	.if (. - gText_Rom_5CC013) > 0x6
	.error "gText_Rom_5CC013 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC013) < 0x6
	.space 0x6 - (. - gText_Rom_5CC013)
	.endif

	@ src/field_specials.c:2538 field_specials_line_2538
	.globl gText_Rom_5CC019
gText_Rom_5CC019: @ 0x085CC019
	.string " 70てん$"
	.if (. - gText_Rom_5CC019) > 0x6
	.error "gText_Rom_5CC019 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC019) < 0x6
	.space 0x6 - (. - gText_Rom_5CC019)
	.endif

	@ src/field_specials.c:2539 field_specials_line_2539
	.globl gText_Rom_5CC01F
gText_Rom_5CC01F: @ 0x085CC01F
	.string " 80てん$"
	.if (. - gText_Rom_5CC01F) > 0x6
	.error "gText_Rom_5CC01F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC01F) < 0x6
	.space 0x6 - (. - gText_Rom_5CC01F)
	.endif

	@ src/field_specials.c:2540 field_specials_line_2540
	.globl gText_Rom_5CC025
gText_Rom_5CC025: @ 0x085CC025
	.string " 90てん$"
	.if (. - gText_Rom_5CC025) > 0x6
	.error "gText_Rom_5CC025 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC025) < 0x6
	.space 0x6 - (. - gText_Rom_5CC025)
	.endif

	@ src/field_specials.c:2541 field_specials_line_2541
	.globl gText_Rom_5CC02B
gText_Rom_5CC02B: @ 0x085CC02B
	.string "100てん$"
	.if (. - gText_Rom_5CC02B) > 0x6
	.error "gText_Rom_5CC02B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC02B) < 0x6
	.space 0x6 - (. - gText_Rom_5CC02B)
	.endif

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_5CC031
gText_Rom_5CC031: @ 0x085CC031
	.string "  ？$"
	.if (. - gText_Rom_5CC031) > 0x4
	.error "gText_Rom_5CC031 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC031) < 0x4
	.space 0x4 - (. - gText_Rom_5CC031)
	.endif

	@ src/field_specials.c:2546 field_specials_line_2546
	.globl gText_Rom_5CC035
gText_Rom_5CC035: @ 0x085CC035
	.string "キッスポスター   16BP$"
	.if (. - gText_Rom_5CC035) > 0xf
	.error "gText_Rom_5CC035 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC035) < 0xf
	.space 0xf - (. - gText_Rom_5CC035)
	.endif

	@ src/field_specials.c:2547 field_specials_line_2547
	.globl gText_Rom_5CC044
gText_Rom_5CC044: @ 0x085CC044
	.string "キッスクッション  32BP$"
	.if (. - gText_Rom_5CC044) > 0xf
	.error "gText_Rom_5CC044 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC044) < 0xf
	.space 0xf - (. - gText_Rom_5CC044)
	.endif

	@ src/field_specials.c:2548 field_specials_line_2548
	.globl gText_Rom_5CC053
gText_Rom_5CC053: @ 0x085CC053
	.string "ムチュールドール  32BP$"
	.if (. - gText_Rom_5CC053) > 0xf
	.error "gText_Rom_5CC053 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC053) < 0xf
	.space 0xf - (. - gText_Rom_5CC053)
	.endif

	@ src/field_specials.c:2549 field_specials_line_2549
	.globl gText_Rom_5CC062
gText_Rom_5CC062: @ 0x085CC062
	.string "トゲピードール   48BP$"
	.if (. - gText_Rom_5CC062) > 0xf
	.error "gText_Rom_5CC062 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC062) < 0xf
	.space 0xf - (. - gText_Rom_5CC062)
	.endif

	@ src/field_specials.c:2550 field_specials_line_2550
	.globl gText_Rom_5CC071
gText_Rom_5CC071: @ 0x085CC071
	.string "ニャースドール   48BP$"
	.if (. - gText_Rom_5CC071) > 0xf
	.error "gText_Rom_5CC071 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC071) < 0xf
	.space 0xf - (. - gText_Rom_5CC071)
	.endif

	@ src/field_specials.c:2551 field_specials_line_2551
	.globl gText_Rom_5CC080
gText_Rom_5CC080: @ 0x085CC080
	.string "ピッピドール    48BP$"
	.if (. - gText_Rom_5CC080) > 0xf
	.error "gText_Rom_5CC080 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC080) < 0xf
	.space 0xf - (. - gText_Rom_5CC080)
	.endif

	@ src/field_specials.c:2552 field_specials_line_2552
	.globl gText_Rom_5CC08F
gText_Rom_5CC08F: @ 0x085CC08F
	.string "メタモンドール   48BP$"
	.if (. - gText_Rom_5CC08F) > 0xf
	.error "gText_Rom_5CC08F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC08F) < 0xf
	.space 0xf - (. - gText_Rom_5CC08F)
	.endif

	@ src/field_specials.c:2553 field_specials_line_2553
	.globl gText_Rom_5CC09E
gText_Rom_5CC09E: @ 0x085CC09E
	.string "ヒノアラシドール  80BP$"
	.if (. - gText_Rom_5CC09E) > 0xf
	.error "gText_Rom_5CC09E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC09E) < 0xf
	.space 0xf - (. - gText_Rom_5CC09E)
	.endif

	@ src/field_specials.c:2554 field_specials_line_2554
	.globl gText_Rom_5CC0AD
gText_Rom_5CC0AD: @ 0x085CC0AD
	.string "チコリータドール  80BP$"
	.if (. - gText_Rom_5CC0AD) > 0xf
	.error "gText_Rom_5CC0AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC0AD) < 0xf
	.space 0xf - (. - gText_Rom_5CC0AD)
	.endif

