	@ src/battle_debug.c:336 battle_debug_line_336 (+1 aliases)
	.globl gText_Rom_5FA9A4
gText_Rom_5FA9A4: @ 0x085FA9A4
	.string "さいだいHP$"
	.if (. - gText_Rom_5FA9A4) > 0x7
	.error "gText_Rom_5FA9A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FA9A4) < 0x7
	.space 0x7 - (. - gText_Rom_5FA9A4)
	.endif

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5FA9AB
gText_Rom_5FA9AB: @ 0x085FA9AB
	.string "こうげき$"
	.if (. - gText_Rom_5FA9AB) > 0x5
	.error "gText_Rom_5FA9AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FA9AB) < 0x5
	.space 0x5 - (. - gText_Rom_5FA9AB)
	.endif

	@ src/battle_debug.c:338 battle_debug_line_338 (+4 aliases)
	.globl gText_Rom_5FA9B0
gText_Rom_5FA9B0: @ 0x085FA9B0
	.string "ぼうぎょ$"
	.if (. - gText_Rom_5FA9B0) > 0x5
	.error "gText_Rom_5FA9B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FA9B0) < 0x5
	.space 0x5 - (. - gText_Rom_5FA9B0)
	.endif

	@ src/battle_debug.c:339 battle_debug_line_339 (+4 aliases)
	.globl gText_Rom_5FA9B5
gText_Rom_5FA9B5: @ 0x085FA9B5
	.string "すばやさ$"
	.if (. - gText_Rom_5FA9B5) > 0x5
	.error "gText_Rom_5FA9B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FA9B5) < 0x5
	.space 0x5 - (. - gText_Rom_5FA9B5)
	.endif

	@ src/battle_debug.c:340 battle_debug_line_340 (+5 aliases)
	.globl gText_Rom_5FA9BA
gText_Rom_5FA9BA: @ 0x085FA9BA
	.string "とくこう$"
	.if (. - gText_Rom_5FA9BA) > 0x5
	.error "gText_Rom_5FA9BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FA9BA) < 0x5
	.space 0x5 - (. - gText_Rom_5FA9BA)
	.endif

	@ src/battle_debug.c:341 battle_debug_line_341 (+5 aliases)
	.globl gText_Rom_5FA9BF
gText_Rom_5FA9BF: @ 0x085FA9BF
	.string "とくぼう$"
	.if (. - gText_Rom_5FA9BF) > 0x5
	.error "gText_Rom_5FA9BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FA9BF) < 0x5
	.space 0x5 - (. - gText_Rom_5FA9BF)
	.endif
	.globl gUnknown_85FA9C4
gUnknown_85FA9C4: @ 0x085FA9C4
	.incbin "baserom.gba", 0x5fa9c4, 0x3
	.globl gUnknown_85FA9C7
gUnknown_85FA9C7: @ 0x085FA9C7
	.incbin "baserom.gba", 0x5fa9c7, 0x5
	.globl gUnknown_85FA9CC
gUnknown_85FA9CC: @ 0x085FA9CC
	.incbin "baserom.gba", 0x5fa9cc, 0x18
	.globl gUnknown_85FA9E4
gUnknown_85FA9E4: @ 0x085FA9E4
	.incbin "baserom.gba", 0x5fa9e4, 0xe0

	@ src/ereader_helpers.c:85 ereader_helpers_line_85
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAAC4
gText_Rom_5FAAC4: @ 0x085FAAC4
	.string "マルノーム$$$$$$"
	.if (. - gText_Rom_5FAAC4) != 0xb
	.error "gText_Rom_5FAAC4 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5faacf, 0x21

	@ src/ereader_helpers.c:107 ereader_helpers_line_107
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAAF0
gText_Rom_5FAAF0: @ 0x085FAAF0
	.string "ドクケイル$$$$$$"
	.if (. - gText_Rom_5FAAF0) != 0xb
	.error "gText_Rom_5FAAF0 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5faafb, 0x21

	@ src/ereader_helpers.c:129 ereader_helpers_line_129
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAB1C
gText_Rom_5FAB1C: @ 0x085FAB1C
	.string "ジーランス$$$$$$"
	.if (. - gText_Rom_5FAB1C) != 0xb
	.error "gText_Rom_5FAB1C must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fab27, 0xe1

	@ src/ereader_helpers.c:165 ereader_helpers_line_165
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAC08
gText_Rom_5FAC08: @ 0x085FAC08
	.string "ノクタス$$$$$$$"
	.if (. - gText_Rom_5FAC08) != 0xb
	.error "gText_Rom_5FAC08 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fac13, 0x21

	@ src/ereader_helpers.c:187 ereader_helpers_line_187
	@ Preserve exact byte length: semantic suffix text pointer, internal terminator.
	.globl gText_Rom_5FAC34
gText_Rom_5FAC34: @ 0x085FAC34
	.string "オオスバメ$$$$$$"
	.if (. - gText_Rom_5FAC34) != 0xb
	.error "gText_Rom_5FAC34 must retain its original byte length"
	.endif
	.globl gText_Rom_5FAC36
	.set gText_Rom_5FAC36, gText_Rom_5FAC34 + 0x2
	.incbin "baserom.gba", 0x5fac3f, 0x21

	@ src/ereader_helpers.c:209 ereader_helpers_line_209
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAC60
gText_Rom_5FAC60: @ 0x085FAC60
	.string "ナマズン$$$$$$$"
	.if (. - gText_Rom_5FAC60) != 0xb
	.error "gText_Rom_5FAC60 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fac6b, 0xe1

	@ src/ereader_helpers.c:245 ereader_helpers_line_245
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAD4C
gText_Rom_5FAD4C: @ 0x085FAD4C
	.string "エネコロロ$$$$$$"
	.if (. - gText_Rom_5FAD4C) != 0xb
	.error "gText_Rom_5FAD4C must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fad57, 0x21

	@ src/ereader_helpers.c:267 ereader_helpers_line_267
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAD78
gText_Rom_5FAD78: @ 0x085FAD78
	.string "ロゼリア$$$$$$$"
	.if (. - gText_Rom_5FAD78) != 0xb
	.error "gText_Rom_5FAD78 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fad83, 0x21

	@ src/ereader_helpers.c:289 ereader_helpers_line_289
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FADA4
gText_Rom_5FADA4: @ 0x085FADA4
	.string "アゲハント$$$$$$"
	.if (. - gText_Rom_5FADA4) != 0xb
	.error "gText_Rom_5FADA4 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fadaf, 0xe1

	@ src/ereader_helpers.c:325 ereader_helpers_line_325
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAE90
gText_Rom_5FAE90: @ 0x085FAE90
	.string "クチート$$$$$$$"
	.if (. - gText_Rom_5FAE90) != 0xb
	.error "gText_Rom_5FAE90 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fae9b, 0x21

	@ src/ereader_helpers.c:347 ereader_helpers_line_347
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAEBC
gText_Rom_5FAEBC: @ 0x085FAEBC
	.string "サメハダー$$$$$$"
	.if (. - gText_Rom_5FAEBC) != 0xb
	.error "gText_Rom_5FAEBC must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5faec7, 0x21

	@ src/ereader_helpers.c:369 ereader_helpers_line_369
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAEE8
gText_Rom_5FAEE8: @ 0x085FAEE8
	.string "ジュペッタ$$$$$$"
	.if (. - gText_Rom_5FAEE8) != 0xb
	.error "gText_Rom_5FAEE8 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5faef3, 0x1
	.globl gUnknown_85FAEF4
gUnknown_85FAEF4: @ 0x085FAEF4
	.incbin "baserom.gba", 0x5faef4, 0x10
	.globl gUnknown_85FAF04
gUnknown_85FAF04: @ 0x085FAF04
	.incbin "baserom.gba", 0x5faf04, 0x14
	.globl gUnknown_85FAF18
gUnknown_85FAF18: @ 0x085FAF18
	.incbin "baserom.gba", 0x5faf18, 0x10
	.globl gUnknown_85FAF28
gUnknown_85FAF28: @ 0x085FAF28
	.incbin "baserom.gba", 0x5faf28, 0x2
	.globl gUnknown_85FAF2A
gUnknown_85FAF2A: @ 0x085FAF2A
	.incbin "baserom.gba", 0x5faf2a, 0xe
	.globl gUnknown_85FAF38
gUnknown_85FAF38: @ 0x085FAF38
	.incbin "baserom.gba", 0x5faf38, 0x68

	@ src/data/battle_frontier/trainer_hill.h:52 trainer_hill_line_52
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAFA0
gText_Rom_5FAFA0: @ 0x085FAFA0
	.string "ジグザグマ$$$$$$"
	.if (. - gText_Rom_5FAFA0) != 0xb
	.error "gText_Rom_5FAFA0 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fafab, 0x21

	@ src/data/battle_frontier/trainer_hill.h:72 trainer_hill_line_72
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAFCC
gText_Rom_5FAFCC: @ 0x085FAFCC
	.string "キノココ$$$$$$$"
	.if (. - gText_Rom_5FAFCC) != 0xb
	.error "gText_Rom_5FAFCC must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fafd7, 0x21

	@ src/data/battle_frontier/trainer_hill.h:92 trainer_hill_line_92
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAFF8
gText_Rom_5FAFF8: @ 0x085FAFF8
	.string "サンド$$$$$$$$"
	.if (. - gText_Rom_5FAFF8) != 0xb
	.error "gText_Rom_5FAFF8 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fb003, 0x165

	@ src/data/battle_frontier/trainer_hill.h:130 trainer_hill_line_130
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FB168
gText_Rom_5FB168: @ 0x085FB168
	.string "キャモメ$$$$$$$"
	.if (. - gText_Rom_5FB168) != 0xb
	.error "gText_Rom_5FB168 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fb173, 0x21

	@ src/data/battle_frontier/trainer_hill.h:151 trainer_hill_line_151
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FB194
gText_Rom_5FB194: @ 0x085FB194
	.string "ドンメル$$$$$$$"
	.if (. - gText_Rom_5FB194) != 0xb
	.error "gText_Rom_5FB194 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fb19f, 0x21

	@ src/data/battle_frontier/trainer_hill.h:172 trainer_hill_line_172
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FB1C0
gText_Rom_5FB1C0: @ 0x085FB1C0
	.string "アメタマ$$$$$$$"
	.if (. - gText_Rom_5FB1C0) != 0xb
	.error "gText_Rom_5FB1C0 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fb1cb, 0x185

	@ src/data/battle_frontier/trainer_hill.h:216 trainer_hill_line_216
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FB350
gText_Rom_5FB350: @ 0x085FB350
	.string "ラクライ$$$$$$$"
	.if (. - gText_Rom_5FB350) != 0xb
	.error "gText_Rom_5FB350 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fb35b, 0x21

	@ src/data/battle_frontier/trainer_hill.h:237 trainer_hill_line_237
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FB37C
gText_Rom_5FB37C: @ 0x085FB37C
	.string "ヘイガニ$$$$$$$"
	.if (. - gText_Rom_5FB37C) != 0xb
	.error "gText_Rom_5FB37C must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fb387, 0x21

	@ src/data/battle_frontier/trainer_hill.h:258 trainer_hill_line_258
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FB3A8
gText_Rom_5FB3A8: @ 0x085FB3A8
	.string "ヤジロン$$$$$$$"
	.if (. - gText_Rom_5FB3A8) != 0xb
	.error "gText_Rom_5FB3A8 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fb3b3, 0x165

	@ src/data/battle_frontier/trainer_hill.h:296 trainer_hill_line_296
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FB518
gText_Rom_5FB518: @ 0x085FB518
	.string "タマザラシ$$$$$$"
	.if (. - gText_Rom_5FB518) != 0xb
	.error "gText_Rom_5FB518 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fb523, 0x21

	@ src/data/battle_frontier/trainer_hill.h:317 trainer_hill_line_317
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FB544
gText_Rom_5FB544: @ 0x085FB544
	.string "バネブー$$$$$$$"
	.if (. - gText_Rom_5FB544) != 0xb
	.error "gText_Rom_5FB544 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fb54f, 0x21

	@ src/data/battle_frontier/trainer_hill.h:339 trainer_hill_line_339
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FB570
gText_Rom_5FB570: @ 0x085FB570
	.string "ポチエナ$$$$$$$"
	.if (. - gText_Rom_5FB570) != 0xb
	.error "gText_Rom_5FB570 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fb57b, 0x125
	.globl gUnknown_85FB6A0
gUnknown_85FB6A0: @ 0x085FB6A0
	.incbin "baserom.gba", 0x5fb6a0, 0x218
	.globl gUnknown_85FB8B8
gUnknown_85FB8B8: @ 0x085FB8B8
	.incbin "baserom.gba", 0x5fb8b8, 0x8
	.globl gUnknown_85FB8C0
gUnknown_85FB8C0: @ 0x085FB8C0
	.incbin "baserom.gba", 0x5fb8c0, 0x20
	.globl gUnknown_85FB8E0
gUnknown_85FB8E0: @ 0x085FB8E0
	.incbin "baserom.gba", 0x5fb8e0, 0x3
	.globl gUnknown_85FB8E3
gUnknown_85FB8E3: @ 0x085FB8E3

	@ src/strings.c:1113 gText_TimeBoard
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5FB8E3
gText_Rom_5FB8E3: @ 0x085FB8E3
	.string "タイムボード$"
	.if (. - gText_Rom_5FB8E3) != 0x7
	.error "gText_Rom_5FB8E3 must retain its original byte length"
	.endif
	.globl gText_Rom_5FB8E6
	.set gText_Rom_5FB8E6, gText_Rom_5FB8E3 + 0x3
	.globl gUnknown_85FB8EA
gUnknown_85FB8EA: @ 0x085FB8EA
	.incbin "baserom.gba", 0x5fb8ea, 0x7
	.globl gUnknown_85FB8F1
gUnknown_85FB8F1: @ 0x085FB8F1

	@ data/maps/TrainerHill_Entrance/scripts.inc:358 TrainerHill_Entrance_Text_ChallengeTime
	.globl gText_Rom_5FB8F1
gText_Rom_5FB8F1: @ 0x085FB8F1
	.string "{STR_VAR_1}ふん {STR_VAR_2}びょう {STR_VAR_3}$"
	.if (. - gText_Rom_5FB8F1) > 0xe
	.error "gText_Rom_5FB8F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FB8F1) < 0xe
	.space 0xe - (. - gText_Rom_5FB8F1)
	.endif
	.incbin "baserom.gba", 0x5fb8ff, 0x3

