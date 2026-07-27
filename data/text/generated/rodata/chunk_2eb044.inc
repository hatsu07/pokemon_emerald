	@ src/data/moves_info.h:2766 moves_info_line_2766
	.globl gText_Rom_2EB044
gText_Rom_2EB044: @ 0x082EB044
	.string "バリアー$"
	.if (. - gText_Rom_2EB044) > 0x5
	.error "gText_Rom_2EB044 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB044) < 0x5
	.space 0x5 - (. - gText_Rom_2EB044)
	.endif
	.incbin "baserom.gba", 0x2eb049, 0x3

	@ src/battle_debug.c:410 battle_debug_line_410 (+1 aliases)
	.globl gText_Rom_2EB04C
gText_Rom_2EB04C: @ 0x082EB04C
	.string "ひかりのかべ$"
	.if (. - gText_Rom_2EB04C) > 0x7
	.error "gText_Rom_2EB04C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB04C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB04C)
	.endif
	.incbin "baserom.gba", 0x2eb053, 0x1

	@ src/data/moves_info.h:2818 moves_info_line_2818
	.globl gText_Rom_2EB054
gText_Rom_2EB054: @ 0x082EB054
	.string "くろいきり$"
	.if (. - gText_Rom_2EB054) > 0x6
	.error "gText_Rom_2EB054 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB054) < 0x6
	.space 0x6 - (. - gText_Rom_2EB054)
	.endif
	.incbin "baserom.gba", 0x2eb05a, 0x2

	@ src/battle_debug.c:409 battle_debug_line_409 (+1 aliases)
	.globl gText_Rom_2EB05C
gText_Rom_2EB05C: @ 0x082EB05C
	.string "リフレクター$"
	.if (. - gText_Rom_2EB05C) > 0x7
	.error "gText_Rom_2EB05C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB05C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB05C)
	.endif
	.incbin "baserom.gba", 0x2eb063, 0x1

	@ src/battle_debug.c:369 battle_debug_line_369 (+1 aliases)
	.globl gText_Rom_2EB064
gText_Rom_2EB064: @ 0x082EB064
	.string "きあいだめ$"
	.if (. - gText_Rom_2EB064) > 0x6
	.error "gText_Rom_2EB064 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB064) < 0x6
	.space 0x6 - (. - gText_Rom_2EB064)
	.endif
	.incbin "baserom.gba", 0x2eb06a, 0x2

	@ src/data/easy_chat/easy_chat_group_actions.h:130 easy_chat_group_actions_line_130 (+1 aliases)
	.globl gText_Rom_2EB06C
gText_Rom_2EB06C: @ 0x082EB06C
	.string "がまん$"
	.if (. - gText_Rom_2EB06C) > 0x4
	.error "gText_Rom_2EB06C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB06C) < 0x4
	.space 0x4 - (. - gText_Rom_2EB06C)
	.endif
	.incbin "baserom.gba", 0x2eb070, 0x4

	@ src/data/moves_info.h:2922 moves_info_line_2922
	.globl gText_Rom_2EB074
gText_Rom_2EB074: @ 0x082EB074
	.string "ゆびをふる$"
	.if (. - gText_Rom_2EB074) > 0x6
	.error "gText_Rom_2EB074 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB074) < 0x6
	.space 0x6 - (. - gText_Rom_2EB074)
	.endif
	.incbin "baserom.gba", 0x2eb07a, 0x2

	@ src/data/moves_info.h:2951 moves_info_line_2951
	.globl gText_Rom_2EB07C
gText_Rom_2EB07C: @ 0x082EB07C
	.string "オウムがえし$"
	.if (. - gText_Rom_2EB07C) > 0x7
	.error "gText_Rom_2EB07C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB07C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB07C)
	.endif
	.incbin "baserom.gba", 0x2eb083, 0x1

	@ src/data/moves_info.h:2981 moves_info_line_2981
	.globl gText_Rom_2EB084
gText_Rom_2EB084: @ 0x082EB084
	.string "じばく$"
	.if (. - gText_Rom_2EB084) > 0x4
	.error "gText_Rom_2EB084 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB084) < 0x4
	.space 0x4 - (. - gText_Rom_2EB084)
	.endif
	.incbin "baserom.gba", 0x2eb088, 0x4

	@ src/data/moves_info.h:3004 moves_info_line_3004
	.globl gText_Rom_2EB08C
gText_Rom_2EB08C: @ 0x082EB08C
	.string "タマゴばくだん$"
	.if (. - gText_Rom_2EB08C) > 0x8
	.error "gText_Rom_2EB08C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB08C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB08C)
	.endif

	@ src/data/moves_info.h:3025 moves_info_line_3025
	.globl gText_Rom_2EB094
gText_Rom_2EB094: @ 0x082EB094
	.string "したでなめる$"
	.if (. - gText_Rom_2EB094) > 0x7
	.error "gText_Rom_2EB094 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB094) < 0x7
	.space 0x7 - (. - gText_Rom_2EB094)
	.endif
	.incbin "baserom.gba", 0x2eb09b, 0x1

	@ src/data/moves_info.h:3050 moves_info_line_3050
	.globl gText_Rom_2EB09C
gText_Rom_2EB09C: @ 0x082EB09C
	.string "スモッグ$"
	.if (. - gText_Rom_2EB09C) > 0x5
	.error "gText_Rom_2EB09C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB09C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB09C)
	.endif
	.incbin "baserom.gba", 0x2eb0a1, 0x3

	@ src/data/moves_info.h:3073 moves_info_line_3073
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB0A4
gText_Rom_2EB0A4: @ 0x082EB0A4
	.string "ヘドロこうげき$"
	.if (. - gText_Rom_2EB0A4) != 0x8
	.error "gText_Rom_2EB0A4 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB0A7
	.set gText_Rom_2EB0A7, gText_Rom_2EB0A4 + 0x3

	@ src/data/moves_info.h:3096 moves_info_line_3096
	.globl gText_Rom_2EB0AC
gText_Rom_2EB0AC: @ 0x082EB0AC
	.string "ホネこんぼう$"
	.if (. - gText_Rom_2EB0AC) > 0x7
	.error "gText_Rom_2EB0AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB0AC) < 0x7
	.space 0x7 - (. - gText_Rom_2EB0AC)
	.endif
	.incbin "baserom.gba", 0x2eb0b3, 0x1

	@ src/data/moves_info.h:3119 moves_info_line_3119
	.globl gText_Rom_2EB0B4
gText_Rom_2EB0B4: @ 0x082EB0B4
	.string "だいもんじ$"
	.if (. - gText_Rom_2EB0B4) > 0x6
	.error "gText_Rom_2EB0B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB0B4) < 0x6
	.space 0x6 - (. - gText_Rom_2EB0B4)
	.endif
	.incbin "baserom.gba", 0x2eb0ba, 0x2

	@ src/data/moves_info.h:3143 moves_info_line_3143
	.globl gText_Rom_2EB0BC
gText_Rom_2EB0BC: @ 0x082EB0BC
	.string "たきのぼり$"
	.if (. - gText_Rom_2EB0BC) > 0x6
	.error "gText_Rom_2EB0BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB0BC) < 0x6
	.space 0x6 - (. - gText_Rom_2EB0BC)
	.endif
	.incbin "baserom.gba", 0x2eb0c2, 0x2

	@ src/data/moves_info.h:3170 moves_info_line_3170
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB0C4
gText_Rom_2EB0C4: @ 0x082EB0C4
	.string "からではさむ$"
	.if (. - gText_Rom_2EB0C4) != 0x7
	.error "gText_Rom_2EB0C4 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB0C7
	.set gText_Rom_2EB0C7, gText_Rom_2EB0C4 + 0x3
	.incbin "baserom.gba", 0x2eb0cb, 0x1

	@ src/data/moves_info.h:3196 moves_info_line_3196
	.globl gText_Rom_2EB0CC
gText_Rom_2EB0CC: @ 0x082EB0CC
	.string "スピードスター$"
	.if (. - gText_Rom_2EB0CC) > 0x8
	.error "gText_Rom_2EB0CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB0CC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB0CC)
	.endif

	@ src/data/moves_info.h:3216 moves_info_line_3216
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB0D4
gText_Rom_2EB0D4: @ 0x082EB0D4
	.string "ロケットずつき$"
	.if (. - gText_Rom_2EB0D4) != 0x8
	.error "gText_Rom_2EB0D4 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB0D8
	.set gText_Rom_2EB0D8, gText_Rom_2EB0D4 + 0x4

	@ src/data/moves_info.h:3248 moves_info_line_3248
	.globl gText_Rom_2EB0DC
gText_Rom_2EB0DC: @ 0x082EB0DC
	.string "とげキャノン$"
	.if (. - gText_Rom_2EB0DC) > 0x7
	.error "gText_Rom_2EB0DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB0DC) < 0x7
	.space 0x7 - (. - gText_Rom_2EB0DC)
	.endif
	.incbin "baserom.gba", 0x2eb0e3, 0x1

	@ src/data/moves_info.h:3268 moves_info_line_3268
	.globl gText_Rom_2EB0E4
gText_Rom_2EB0E4: @ 0x082EB0E4
	.string "からみつく$"
	.if (. - gText_Rom_2EB0E4) > 0x6
	.error "gText_Rom_2EB0E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB0E4) < 0x6
	.space 0x6 - (. - gText_Rom_2EB0E4)
	.endif
	.incbin "baserom.gba", 0x2eb0ea, 0x2

	@ src/data/moves_info.h:3293 moves_info_line_3293
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB0EC
gText_Rom_2EB0EC: @ 0x082EB0EC
	.string "ドわすれ$"
	.if (. - gText_Rom_2EB0EC) != 0x5
	.error "gText_Rom_2EB0EC must retain its original byte length"
	.endif
	.globl gText_Rom_2EB0ED
	.set gText_Rom_2EB0ED, gText_Rom_2EB0EC + 0x1
	.incbin "baserom.gba", 0x2eb0f1, 0x3

	@ src/data/moves_info.h:3321 moves_info_line_3321
	.globl gText_Rom_2EB0F4
gText_Rom_2EB0F4: @ 0x082EB0F4
	.string "スプーンまげ$"
	.if (. - gText_Rom_2EB0F4) > 0x7
	.error "gText_Rom_2EB0F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB0F4) < 0x7
	.space 0x7 - (. - gText_Rom_2EB0F4)
	.endif
	.incbin "baserom.gba", 0x2eb0fb, 0x1

	@ src/data/moves_info.h:3347 moves_info_line_3347
	.globl gText_Rom_2EB0FC
gText_Rom_2EB0FC: @ 0x082EB0FC
	.string "タマゴうみ$"
	.if (. - gText_Rom_2EB0FC) > 0x6
	.error "gText_Rom_2EB0FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB0FC) < 0x6
	.space 0x6 - (. - gText_Rom_2EB0FC)
	.endif
	.incbin "baserom.gba", 0x2eb102, 0x2

	@ src/data/moves_info.h:3372 moves_info_line_3372
	.globl gText_Rom_2EB104
gText_Rom_2EB104: @ 0x082EB104
	.string "とびひざげり$"
	.if (. - gText_Rom_2EB104) > 0x7
	.error "gText_Rom_2EB104 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB104) < 0x7
	.space 0x7 - (. - gText_Rom_2EB104)
	.endif
	.incbin "baserom.gba", 0x2eb10b, 0x1

	@ src/data/moves_info.h:3400 moves_info_line_3400
	.globl gText_Rom_2EB10C
gText_Rom_2EB10C: @ 0x082EB10C
	.string "へびにらみ$"
	.if (. - gText_Rom_2EB10C) > 0x6
	.error "gText_Rom_2EB10C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB10C) < 0x6
	.space 0x6 - (. - gText_Rom_2EB10C)
	.endif
	.incbin "baserom.gba", 0x2eb112, 0x2

	@ src/data/moves_info.h:3429 moves_info_line_3429
	.globl gText_Rom_2EB114
gText_Rom_2EB114: @ 0x082EB114
	.string "ゆめくい$"
	.if (. - gText_Rom_2EB114) > 0x5
	.error "gText_Rom_2EB114 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB114) < 0x5
	.space 0x5 - (. - gText_Rom_2EB114)
	.endif
	.incbin "baserom.gba", 0x2eb119, 0x3

	@ src/data/moves_info.h:3451 moves_info_line_3451
	.globl gText_Rom_2EB11C
gText_Rom_2EB11C: @ 0x082EB11C
	.string "どくガス$"
	.if (. - gText_Rom_2EB11C) > 0x5
	.error "gText_Rom_2EB11C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB11C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB11C)
	.endif
	.incbin "baserom.gba", 0x2eb121, 0x3

	@ src/data/moves_info.h:3479 moves_info_line_3479
	.globl gText_Rom_2EB124
gText_Rom_2EB124: @ 0x082EB124
	.string "たまなげ$"
	.if (. - gText_Rom_2EB124) > 0x5
	.error "gText_Rom_2EB124 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB124) < 0x5
	.space 0x5 - (. - gText_Rom_2EB124)
	.endif
	.incbin "baserom.gba", 0x2eb129, 0x3

	@ src/data/moves_info.h:3500 moves_info_line_3500
	.globl gText_Rom_2EB12C
gText_Rom_2EB12C: @ 0x082EB12C
	.string "きゅうけつ$"
	.if (. - gText_Rom_2EB12C) > 0x6
	.error "gText_Rom_2EB12C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB12C) < 0x6
	.space 0x6 - (. - gText_Rom_2EB12C)
	.endif
	.incbin "baserom.gba", 0x2eb132, 0x2

	@ src/data/moves_info.h:3523 moves_info_line_3523
	.globl gText_Rom_2EB134
gText_Rom_2EB134: @ 0x082EB134
	.string "あくまのキッス$"
	.if (. - gText_Rom_2EB134) > 0x8
	.error "gText_Rom_2EB134 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB134) < 0x8
	.space 0x8 - (. - gText_Rom_2EB134)
	.endif

	@ src/data/moves_info.h:3546 moves_info_line_3546
	.globl gText_Rom_2EB13C
gText_Rom_2EB13C: @ 0x082EB13C
	.string "ゴッドバード$"
	.if (. - gText_Rom_2EB13C) > 0x7
	.error "gText_Rom_2EB13C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB13C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB13C)
	.endif
	.incbin "baserom.gba", 0x2eb143, 0x1

	@ src/data/moves_info.h:3576 moves_info_line_3576
	.globl gText_Rom_2EB144
gText_Rom_2EB144: @ 0x082EB144
	.string "へんしん$"
	.if (. - gText_Rom_2EB144) > 0x5
	.error "gText_Rom_2EB144 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB144) < 0x5
	.space 0x5 - (. - gText_Rom_2EB144)
	.endif
	.incbin "baserom.gba", 0x2eb149, 0xb

	@ src/data/moves_info.h:3630 moves_info_line_3630
	.globl gText_Rom_2EB154
gText_Rom_2EB154: @ 0x082EB154
	.string "ピヨピヨパンチ$"
	.if (. - gText_Rom_2EB154) > 0x8
	.error "gText_Rom_2EB154 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB154) < 0x8
	.space 0x8 - (. - gText_Rom_2EB154)
	.endif

	@ src/data/moves_info.h:3658 moves_info_line_3658
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB15C
gText_Rom_2EB15C: @ 0x082EB15C
	.string "キノコのほうし$"
	.if (. - gText_Rom_2EB15C) != 0x8
	.error "gText_Rom_2EB15C must retain its original byte length"
	.endif
	.globl gText_Rom_2EB160
	.set gText_Rom_2EB160, gText_Rom_2EB15C + 0x4

	@ src/data/moves_info.h:3682 moves_info_line_3682
	.globl gText_Rom_2EB164
gText_Rom_2EB164: @ 0x082EB164
	.string "フラッシュ$"
	.if (. - gText_Rom_2EB164) > 0x6
	.error "gText_Rom_2EB164 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB164) < 0x6
	.space 0x6 - (. - gText_Rom_2EB164)
	.endif
	.incbin "baserom.gba", 0x2eb16a, 0x2

	@ src/data/moves_info.h:3708 moves_info_line_3708
	.globl gText_Rom_2EB16C
gText_Rom_2EB16C: @ 0x082EB16C
	.string "サイコウェーブ$"
	.if (. - gText_Rom_2EB16C) > 0x8
	.error "gText_Rom_2EB16C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB16C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB16C)
	.endif

	@ src/data/moves_info.h:3728 moves_info_line_3728
	.globl gText_Rom_2EB174
gText_Rom_2EB174: @ 0x082EB174
	.string "はねる$"
	.if (. - gText_Rom_2EB174) > 0x4
	.error "gText_Rom_2EB174 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB174) < 0x4
	.space 0x4 - (. - gText_Rom_2EB174)
	.endif
	.incbin "baserom.gba", 0x2eb178, 0x4

	@ src/data/moves_info.h:3751 moves_info_line_3751
	.globl gText_Rom_2EB17C
gText_Rom_2EB17C: @ 0x082EB17C
	.string "とける$"
	.if (. - gText_Rom_2EB17C) > 0x4
	.error "gText_Rom_2EB17C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB17C) < 0x4
	.space 0x4 - (. - gText_Rom_2EB17C)
	.endif
	.incbin "baserom.gba", 0x2eb180, 0x4

	@ src/data/moves_info.h:3779 moves_info_line_3779
	.globl gText_Rom_2EB184
gText_Rom_2EB184: @ 0x082EB184
	.string "クラブハンマー$"
	.if (. - gText_Rom_2EB184) > 0x8
	.error "gText_Rom_2EB184 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB184) < 0x8
	.space 0x8 - (. - gText_Rom_2EB184)
	.endif

	@ src/data/moves_info.h:3801 moves_info_line_3801
	.globl gText_Rom_2EB18C
gText_Rom_2EB18C: @ 0x082EB18C
	.string "だいばくはつ$"
	.if (. - gText_Rom_2EB18C) > 0x7
	.error "gText_Rom_2EB18C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB18C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB18C)
	.endif
	.incbin "baserom.gba", 0x2eb193, 0x1

	@ src/data/moves_info.h:3824 moves_info_line_3824
	.globl gText_Rom_2EB194
gText_Rom_2EB194: @ 0x082EB194
	.string "みだれひっかき$"
	.if (. - gText_Rom_2EB194) > 0x8
	.error "gText_Rom_2EB194 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB194) < 0x8
	.space 0x8 - (. - gText_Rom_2EB194)
	.endif

	@ src/data/moves_info.h:3845 moves_info_line_3845
	.globl gText_Rom_2EB19C
gText_Rom_2EB19C: @ 0x082EB19C
	.string "ホネブーメラン$"
	.if (. - gText_Rom_2EB19C) > 0x8
	.error "gText_Rom_2EB19C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB19C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB19C)
	.endif

	@ src/data/moves_info.h:3866 moves_info_line_3866
	.globl gText_Rom_2EB1A4
gText_Rom_2EB1A4: @ 0x082EB1A4
	.string "ねむる$"
	.if (. - gText_Rom_2EB1A4) > 0x4
	.error "gText_Rom_2EB1A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB1A4) < 0x4
	.space 0x4 - (. - gText_Rom_2EB1A4)
	.endif
	.incbin "baserom.gba", 0x2eb1a8, 0x4

	@ src/data/moves_info.h:3891 moves_info_line_3891
	.globl gText_Rom_2EB1AC
gText_Rom_2EB1AC: @ 0x082EB1AC
	.string "いわなだれ$"
	.if (. - gText_Rom_2EB1AC) > 0x6
	.error "gText_Rom_2EB1AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB1AC) < 0x6
	.space 0x6 - (. - gText_Rom_2EB1AC)
	.endif
	.incbin "baserom.gba", 0x2eb1b2, 0x2

	@ src/data/moves_info.h:3917 moves_info_line_3917
	.globl gText_Rom_2EB1B4
gText_Rom_2EB1B4: @ 0x082EB1B4
	.string "ひっさつまえば$"
	.if (. - gText_Rom_2EB1B4) > 0x8
	.error "gText_Rom_2EB1B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB1B4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB1B4)
	.endif

	@ src/data/moves_info.h:3943 moves_info_line_3943
	.globl gText_Rom_2EB1BC
gText_Rom_2EB1BC: @ 0x082EB1BC
	.string "かくばる$"
	.if (. - gText_Rom_2EB1BC) > 0x5
	.error "gText_Rom_2EB1BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB1BC) < 0x5
	.space 0x5 - (. - gText_Rom_2EB1BC)
	.endif
	.incbin "baserom.gba", 0x2eb1c1, 0x3

	@ src/data/moves_info.h:3971 moves_info_line_3971
	.globl gText_Rom_2EB1C4
gText_Rom_2EB1C4: @ 0x082EB1C4
	.string "テクスチャー$"
	.if (. - gText_Rom_2EB1C4) > 0x7
	.error "gText_Rom_2EB1C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB1C4) < 0x7
	.space 0x7 - (. - gText_Rom_2EB1C4)
	.endif
	.incbin "baserom.gba", 0x2eb1cb, 0x1

	@ src/data/moves_info.h:3995 moves_info_line_3995
	.globl gText_Rom_2EB1CC
gText_Rom_2EB1CC: @ 0x082EB1CC
	.string "トライアタック$"
	.if (. - gText_Rom_2EB1CC) > 0x8
	.error "gText_Rom_2EB1CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB1CC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB1CC)
	.endif

	@ src/data/moves_info.h:4021 moves_info_line_4021
	.globl gText_Rom_2EB1D4
gText_Rom_2EB1D4: @ 0x082EB1D4
	.string "いかりのまえば$"
	.if (. - gText_Rom_2EB1D4) > 0x8
	.error "gText_Rom_2EB1D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB1D4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB1D4)
	.endif

	@ src/data/moves_info.h:4044 moves_info_line_4044
	.globl gText_Rom_2EB1DC
gText_Rom_2EB1DC: @ 0x082EB1DC
	.string "きりさく$"
	.if (. - gText_Rom_2EB1DC) > 0x5
	.error "gText_Rom_2EB1DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB1DC) < 0x5
	.space 0x5 - (. - gText_Rom_2EB1DC)
	.endif
	.incbin "baserom.gba", 0x2eb1e1, 0x3

	@ src/data/moves_info.h:4067 moves_info_line_4067
	.globl gText_Rom_2EB1E4
gText_Rom_2EB1E4: @ 0x082EB1E4
	.string "みがわり$"
	.if (. - gText_Rom_2EB1E4) > 0x5
	.error "gText_Rom_2EB1E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB1E4) < 0x5
	.space 0x5 - (. - gText_Rom_2EB1E4)
	.endif
	.incbin "baserom.gba", 0x2eb1e9, 0x3

	@ src/data/moves_info.h:4092 moves_info_line_4092
	.globl gText_Rom_2EB1EC
gText_Rom_2EB1EC: @ 0x082EB1EC
	.string "わるあがき$"
	.if (. - gText_Rom_2EB1EC) > 0x6
	.error "gText_Rom_2EB1EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB1EC) < 0x6
	.space 0x6 - (. - gText_Rom_2EB1EC)
	.endif
	.incbin "baserom.gba", 0x2eb1f2, 0x2

	@ src/data/moves_info.h:4137 moves_info_line_4137
	.globl gText_Rom_2EB1F4
gText_Rom_2EB1F4: @ 0x082EB1F4
	.string "スケッチ$"
	.if (. - gText_Rom_2EB1F4) > 0x5
	.error "gText_Rom_2EB1F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB1F4) < 0x5
	.space 0x5 - (. - gText_Rom_2EB1F4)
	.endif
	.incbin "baserom.gba", 0x2eb1f9, 0x3

	@ src/data/moves_info.h:4169 moves_info_line_4169
	.globl gText_Rom_2EB1FC
gText_Rom_2EB1FC: @ 0x082EB1FC
	.string "トリプルキック$"
	.if (. - gText_Rom_2EB1FC) > 0x8
	.error "gText_Rom_2EB1FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB1FC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB1FC)
	.endif

	@ src/battle_main.c:379 battle_main_line_379 (+1 aliases)
	.globl gText_Rom_2EB204
gText_Rom_2EB204: @ 0x082EB204
	.string "どろぼう$"
	.if (. - gText_Rom_2EB204) > 0x5
	.error "gText_Rom_2EB204 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB204) < 0x5
	.space 0x5 - (. - gText_Rom_2EB204)
	.endif
	.incbin "baserom.gba", 0x2eb209, 0x3

	@ src/data/moves_info.h:4217 moves_info_line_4217
	.globl gText_Rom_2EB20C
gText_Rom_2EB20C: @ 0x082EB20C
	.string "クモのす$"
	.if (. - gText_Rom_2EB20C) > 0x5
	.error "gText_Rom_2EB20C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB20C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB20C)
	.endif
	.incbin "baserom.gba", 0x2eb211, 0x3

	@ src/data/moves_info.h:4240 moves_info_line_4240
	.globl gText_Rom_2EB214
gText_Rom_2EB214: @ 0x082EB214
	.string "こころのめ$"
	.if (. - gText_Rom_2EB214) > 0x6
	.error "gText_Rom_2EB214 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB214) < 0x6
	.space 0x6 - (. - gText_Rom_2EB214)
	.endif
	.incbin "baserom.gba", 0x2eb21a, 0x2

	@ src/data/moves_info.h:4261 moves_info_line_4261
	.globl gText_Rom_2EB21C
gText_Rom_2EB21C: @ 0x082EB21C
	.string "あくむ$"
	.if (. - gText_Rom_2EB21C) > 0x4
	.error "gText_Rom_2EB21C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB21C) < 0x4
	.space 0x4 - (. - gText_Rom_2EB21C)
	.endif
	.incbin "baserom.gba", 0x2eb220, 0x4

	@ src/data/moves_info.h:4283 moves_info_line_4283
	.globl gText_Rom_2EB224
gText_Rom_2EB224: @ 0x082EB224
	.string "かえんぐるま$"
	.if (. - gText_Rom_2EB224) > 0x7
	.error "gText_Rom_2EB224 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB224) < 0x7
	.space 0x7 - (. - gText_Rom_2EB224)
	.endif
	.incbin "baserom.gba", 0x2eb22b, 0x1

	@ src/data/moves_info.h:4308 moves_info_line_4308
	.globl gText_Rom_2EB22C
gText_Rom_2EB22C: @ 0x082EB22C
	.string "いびき$"
	.if (. - gText_Rom_2EB22C) > 0x4
	.error "gText_Rom_2EB22C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB22C) < 0x4
	.space 0x4 - (. - gText_Rom_2EB22C)
	.endif
	.incbin "baserom.gba", 0x2eb230, 0x4

	@ src/data/moves_info.h:4335 moves_info_line_4335
	.globl gText_Rom_2EB234
gText_Rom_2EB234: @ 0x082EB234
	.string "のろい$"
	.if (. - gText_Rom_2EB234) > 0x4
	.error "gText_Rom_2EB234 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB234) < 0x4
	.space 0x4 - (. - gText_Rom_2EB234)
	.endif
	.incbin "baserom.gba", 0x2eb238, 0x4

	@ src/data/moves_info.h:4368 moves_info_line_4368
	.globl gText_Rom_2EB23C
gText_Rom_2EB23C: @ 0x082EB23C
	.string "じたばた$"
	.if (. - gText_Rom_2EB23C) > 0x5
	.error "gText_Rom_2EB23C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB23C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB23C)
	.endif
	.incbin "baserom.gba", 0x2eb241, 0x3

	@ src/data/moves_info.h:4389 moves_info_line_4389
	.globl gText_Rom_2EB244
gText_Rom_2EB244: @ 0x082EB244
	.string "テクスチャー2$"
	.if (. - gText_Rom_2EB244) > 0x8
	.error "gText_Rom_2EB244 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB244) < 0x8
	.space 0x8 - (. - gText_Rom_2EB244)
	.endif

	@ src/data/moves_info.h:4413 moves_info_line_4413
	.globl gText_Rom_2EB24C
gText_Rom_2EB24C: @ 0x082EB24C
	.string "エアロブラスト$"
	.if (. - gText_Rom_2EB24C) > 0x8
	.error "gText_Rom_2EB24C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB24C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB24C)
	.endif

	@ src/data/moves_info.h:4435 moves_info_line_4435
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB254
gText_Rom_2EB254: @ 0x082EB254
	.string "わたほうし$"
	.if (. - gText_Rom_2EB254) != 0x6
	.error "gText_Rom_2EB254 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB256
	.set gText_Rom_2EB256, gText_Rom_2EB254 + 0x2
	.incbin "baserom.gba", 0x2eb25a, 0x2

	@ src/data/moves_info.h:4462 moves_info_line_4462
	.globl gText_Rom_2EB25C
gText_Rom_2EB25C: @ 0x082EB25C
	.string "きしかいせい$"
	.if (. - gText_Rom_2EB25C) > 0x7
	.error "gText_Rom_2EB25C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB25C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB25C)
	.endif
	.incbin "baserom.gba", 0x2eb263, 0x1

	@ src/data/moves_info.h:4483 moves_info_line_4483
	.globl gText_Rom_2EB264
gText_Rom_2EB264: @ 0x082EB264
	.string "うらみ$"
	.if (. - gText_Rom_2EB264) > 0x4
	.error "gText_Rom_2EB264 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB264) < 0x4
	.space 0x4 - (. - gText_Rom_2EB264)
	.endif
	.incbin "baserom.gba", 0x2eb268, 0x4

	@ src/data/moves_info.h:4506 moves_info_line_4506
	.globl gText_Rom_2EB26C
gText_Rom_2EB26C: @ 0x082EB26C
	.string "こなゆき$"
	.if (. - gText_Rom_2EB26C) > 0x5
	.error "gText_Rom_2EB26C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB26C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB26C)
	.endif
	.incbin "baserom.gba", 0x2eb271, 0x3

	@ src/data/moves_info.h:4529 moves_info_line_4529
	.globl gText_Rom_2EB274
gText_Rom_2EB274: @ 0x082EB274
	.string "まもる$"
	.if (. - gText_Rom_2EB274) > 0x4
	.error "gText_Rom_2EB274 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB274) < 0x4
	.space 0x4 - (. - gText_Rom_2EB274)
	.endif
	.incbin "baserom.gba", 0x2eb278, 0x4

	@ src/data/moves_info.h:4562 moves_info_line_4562
	.globl gText_Rom_2EB27C
gText_Rom_2EB27C: @ 0x082EB27C
	.string "マッハパンチ$"
	.if (. - gText_Rom_2EB27C) > 0x7
	.error "gText_Rom_2EB27C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB27C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB27C)
	.endif
	.incbin "baserom.gba", 0x2eb283, 0x1

	@ src/data/moves_info.h:4584 moves_info_line_4584
	.globl gText_Rom_2EB284
gText_Rom_2EB284: @ 0x082EB284
	.string "こわいかお$"
	.if (. - gText_Rom_2EB284) > 0x6
	.error "gText_Rom_2EB284 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB284) < 0x6
	.space 0x6 - (. - gText_Rom_2EB284)
	.endif
	.incbin "baserom.gba", 0x2eb28a, 0x2

	@ src/data/moves_info.h:4610 moves_info_line_4610
	.globl gText_Rom_2EB28C
gText_Rom_2EB28C: @ 0x082EB28C
	.string "だましうち$"
	.if (. - gText_Rom_2EB28C) > 0x6
	.error "gText_Rom_2EB28C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB28C) < 0x6
	.space 0x6 - (. - gText_Rom_2EB28C)
	.endif
	.incbin "baserom.gba", 0x2eb292, 0x2

	@ src/data/moves_info.h:4631 moves_info_line_4631
	.globl gText_Rom_2EB294
gText_Rom_2EB294: @ 0x082EB294
	.string "てんしのキッス$"
	.if (. - gText_Rom_2EB294) > 0x8
	.error "gText_Rom_2EB294 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB294) < 0x8
	.space 0x8 - (. - gText_Rom_2EB294)
	.endif

	@ src/data/moves_info.h:4653 moves_info_line_4653
	.globl gText_Rom_2EB29C
gText_Rom_2EB29C: @ 0x082EB29C
	.string "はらだいこ$"
	.if (. - gText_Rom_2EB29C) > 0x6
	.error "gText_Rom_2EB29C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB29C) < 0x6
	.space 0x6 - (. - gText_Rom_2EB29C)
	.endif
	.incbin "baserom.gba", 0x2eb2a2, 0x2

	@ src/data/moves_info.h:4681 moves_info_line_4681
	.globl gText_Rom_2EB2A4
gText_Rom_2EB2A4: @ 0x082EB2A4
	.string "ヘドロばくだん$"
	.if (. - gText_Rom_2EB2A4) > 0x8
	.error "gText_Rom_2EB2A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2A4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB2A4)
	.endif

	@ src/data/moves_info.h:4706 moves_info_line_4706
	.globl gText_Rom_2EB2AC
gText_Rom_2EB2AC: @ 0x082EB2AC
	.string "どろかけ$"
	.if (. - gText_Rom_2EB2AC) > 0x5
	.error "gText_Rom_2EB2AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2AC) < 0x5
	.space 0x5 - (. - gText_Rom_2EB2AC)
	.endif
	.incbin "baserom.gba", 0x2eb2b1, 0x3

	@ src/data/moves_info.h:4731 moves_info_line_4731
	.globl gText_Rom_2EB2B4
gText_Rom_2EB2B4: @ 0x082EB2B4
	.string "オクタンほう$"
	.if (. - gText_Rom_2EB2B4) > 0x7
	.error "gText_Rom_2EB2B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2B4) < 0x7
	.space 0x7 - (. - gText_Rom_2EB2B4)
	.endif
	.incbin "baserom.gba", 0x2eb2bb, 0x1

	@ src/battle_debug.c:400 battle_debug_line_400 (+1 aliases)
	.globl gText_Rom_2EB2BC
gText_Rom_2EB2BC: @ 0x082EB2BC
	.string "まきびし$"
	.if (. - gText_Rom_2EB2BC) > 0x5
	.error "gText_Rom_2EB2BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2BC) < 0x5
	.space 0x5 - (. - gText_Rom_2EB2BC)
	.endif
	.incbin "baserom.gba", 0x2eb2c1, 0x3

	@ src/data/moves_info.h:4783 moves_info_line_4783
	.globl gText_Rom_2EB2C4
gText_Rom_2EB2C4: @ 0x082EB2C4
	.string "でんじほう$"
	.if (. - gText_Rom_2EB2C4) > 0x6
	.error "gText_Rom_2EB2C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2C4) < 0x6
	.space 0x6 - (. - gText_Rom_2EB2C4)
	.endif
	.incbin "baserom.gba", 0x2eb2ca, 0x2

	@ src/battle_debug.c:367 battle_debug_line_367 (+1 aliases)
	.globl gText_Rom_2EB2CC
gText_Rom_2EB2CC: @ 0x082EB2CC
	.string "みやぶる$"
	.if (. - gText_Rom_2EB2CC) > 0x5
	.error "gText_Rom_2EB2CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2CC) < 0x5
	.space 0x5 - (. - gText_Rom_2EB2CC)
	.endif
	.incbin "baserom.gba", 0x2eb2d1, 0x3

	@ src/battle_debug.c:364 battle_debug_line_364 (+1 aliases)
	.globl gText_Rom_2EB2D4
gText_Rom_2EB2D4: @ 0x082EB2D4
	.string "みちづれ$"
	.if (. - gText_Rom_2EB2D4) > 0x5
	.error "gText_Rom_2EB2D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2D4) < 0x5
	.space 0x5 - (. - gText_Rom_2EB2D4)
	.endif
	.incbin "baserom.gba", 0x2eb2d9, 0x3

	@ src/battle_debug.c:379 battle_debug_line_379 (+1 aliases)
	.globl gText_Rom_2EB2DC
gText_Rom_2EB2DC: @ 0x082EB2DC
	.string "ほろびのうた$"
	.if (. - gText_Rom_2EB2DC) > 0x7
	.error "gText_Rom_2EB2DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2DC) < 0x7
	.space 0x7 - (. - gText_Rom_2EB2DC)
	.endif
	.incbin "baserom.gba", 0x2eb2e3, 0x1

	@ src/data/moves_info.h:4883 moves_info_line_4883
	.globl gText_Rom_2EB2E4
gText_Rom_2EB2E4: @ 0x082EB2E4
	.string "こごえるかぜ$"
	.if (. - gText_Rom_2EB2E4) > 0x7
	.error "gText_Rom_2EB2E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2E4) < 0x7
	.space 0x7 - (. - gText_Rom_2EB2E4)
	.endif
	.incbin "baserom.gba", 0x2eb2eb, 0x1

	@ src/data/moves_info.h:4909 moves_info_line_4909
	.globl gText_Rom_2EB2EC
gText_Rom_2EB2EC: @ 0x082EB2EC
	.string "みきり$"
	.if (. - gText_Rom_2EB2EC) > 0x4
	.error "gText_Rom_2EB2EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2EC) < 0x4
	.space 0x4 - (. - gText_Rom_2EB2EC)
	.endif
	.incbin "baserom.gba", 0x2eb2f0, 0x4

	@ src/data/moves_info.h:4942 moves_info_line_4942
	.globl gText_Rom_2EB2F4
gText_Rom_2EB2F4: @ 0x082EB2F4
	.string "ボーンラッシュ$"
	.if (. - gText_Rom_2EB2F4) > 0x8
	.error "gText_Rom_2EB2F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2F4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB2F4)
	.endif

	@ src/battle_debug.c:378 battle_debug_line_378 (+1 aliases)
	.globl gText_Rom_2EB2FC
gText_Rom_2EB2FC: @ 0x082EB2FC
	.string "ロックオン$"
	.if (. - gText_Rom_2EB2FC) > 0x6
	.error "gText_Rom_2EB2FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2FC) < 0x6
	.space 0x6 - (. - gText_Rom_2EB2FC)
	.endif
	.incbin "baserom.gba", 0x2eb302, 0x2

	@ src/data/moves_info.h:4983 moves_info_line_4983
	.globl gText_Rom_2EB304
gText_Rom_2EB304: @ 0x082EB304
	.string "げきりん$"
	.if (. - gText_Rom_2EB304) > 0x5
	.error "gText_Rom_2EB304 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB304) < 0x5
	.space 0x5 - (. - gText_Rom_2EB304)
	.endif
	.incbin "baserom.gba", 0x2eb309, 0x3

	@ src/data/moves_info.h:5009 moves_info_line_5009 (+1 aliases)
	.globl gText_Rom_2EB30C
gText_Rom_2EB30C: @ 0x082EB30C
	.string "すなあらし$"
	.if (. - gText_Rom_2EB30C) > 0x6
	.error "gText_Rom_2EB30C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB30C) < 0x6
	.space 0x6 - (. - gText_Rom_2EB30C)
	.endif
	.incbin "baserom.gba", 0x2eb312, 0x2

	@ src/data/moves_info.h:5033 moves_info_line_5033
	.globl gText_Rom_2EB314
gText_Rom_2EB314: @ 0x082EB314
	.string "ギガドレイン$"
	.if (. - gText_Rom_2EB314) > 0x7
	.error "gText_Rom_2EB314 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB314) < 0x7
	.space 0x7 - (. - gText_Rom_2EB314)
	.endif
	.incbin "baserom.gba", 0x2eb31b, 0x1

	@ src/data/moves_info.h:5056 moves_info_line_5056
	.globl gText_Rom_2EB31C
gText_Rom_2EB31C: @ 0x082EB31C
	.string "こらえる$"
	.if (. - gText_Rom_2EB31C) > 0x5
	.error "gText_Rom_2EB31C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB31C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB31C)
	.endif
	.incbin "baserom.gba", 0x2eb321, 0x3

	@ src/data/moves_info.h:5089 moves_info_line_5089
	.globl gText_Rom_2EB324
gText_Rom_2EB324: @ 0x082EB324
	.string "あまえる$"
	.if (. - gText_Rom_2EB324) > 0x5
	.error "gText_Rom_2EB324 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB324) < 0x5
	.space 0x5 - (. - gText_Rom_2EB324)
	.endif
	.incbin "baserom.gba", 0x2eb329, 0x3

	@ src/data/moves_info.h:5115 moves_info_line_5115
	.globl gText_Rom_2EB32C
gText_Rom_2EB32C: @ 0x082EB32C
	.string "ころがる$"
	.if (. - gText_Rom_2EB32C) > 0x5
	.error "gText_Rom_2EB32C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB32C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB32C)
	.endif
	.incbin "baserom.gba", 0x2eb331, 0x3

	@ src/data/moves_info.h:5138 moves_info_line_5138
	.globl gText_Rom_2EB334
gText_Rom_2EB334: @ 0x082EB334
	.string "みねうち$"
	.if (. - gText_Rom_2EB334) > 0x5
	.error "gText_Rom_2EB334 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB334) < 0x5
	.space 0x5 - (. - gText_Rom_2EB334)
	.endif
	.incbin "baserom.gba", 0x2eb339, 0x3

	@ src/data/moves_info.h:5159 moves_info_line_5159
	.globl gText_Rom_2EB33C
gText_Rom_2EB33C: @ 0x082EB33C
	.string "いばる$"
	.if (. - gText_Rom_2EB33C) > 0x4
	.error "gText_Rom_2EB33C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB33C) < 0x4
	.space 0x4 - (. - gText_Rom_2EB33C)
	.endif
	.incbin "baserom.gba", 0x2eb340, 0x4

	@ src/data/moves_info.h:5186 moves_info_line_5186
	.globl gText_Rom_2EB344
gText_Rom_2EB344: @ 0x082EB344
	.string "ミルクのみ$"
	.if (. - gText_Rom_2EB344) > 0x6
	.error "gText_Rom_2EB344 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB344) < 0x6
	.space 0x6 - (. - gText_Rom_2EB344)
	.endif
	.incbin "baserom.gba", 0x2eb34a, 0x2

	@ src/data/moves_info.h:5211 moves_info_line_5211
	.globl gText_Rom_2EB34C
gText_Rom_2EB34C: @ 0x082EB34C
	.string "スパーク$"
	.if (. - gText_Rom_2EB34C) > 0x5
	.error "gText_Rom_2EB34C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB34C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB34C)
	.endif
	.incbin "baserom.gba", 0x2eb351, 0x3

	@ src/data/moves_info.h:5235 moves_info_line_5235
	.globl gText_Rom_2EB354
gText_Rom_2EB354: @ 0x082EB354
	.string "れんぞくぎり$"
	.if (. - gText_Rom_2EB354) > 0x7
	.error "gText_Rom_2EB354 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB354) < 0x7
	.space 0x7 - (. - gText_Rom_2EB354)
	.endif
	.incbin "baserom.gba", 0x2eb35b, 0x1

	@ src/data/moves_info.h:5263 moves_info_line_5263
	.globl gText_Rom_2EB35C
gText_Rom_2EB35C: @ 0x082EB35C
	.string "はがねのつばさ$"
	.if (. - gText_Rom_2EB35C) > 0x8
	.error "gText_Rom_2EB35C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB35C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB35C)
	.endif

	@ src/data/moves_info.h:5291 moves_info_line_5291
	.globl gText_Rom_2EB364
gText_Rom_2EB364: @ 0x082EB364
	.string "くろいまなざし$"
	.if (. - gText_Rom_2EB364) > 0x8
	.error "gText_Rom_2EB364 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB364) < 0x8
	.space 0x8 - (. - gText_Rom_2EB364)
	.endif

	@ src/battle_debug.c:459 battle_debug_line_459 (+3 aliases)
	.globl gText_Rom_2EB36C
gText_Rom_2EB36C: @ 0x082EB36C
	.string "メロメロ$"
	.if (. - gText_Rom_2EB36C) > 0x5
	.error "gText_Rom_2EB36C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB36C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB36C)
	.endif
	.incbin "baserom.gba", 0x2eb371, 0x3

	@ src/data/moves_info.h:5337 moves_info_line_5337
	.globl gText_Rom_2EB374
gText_Rom_2EB374: @ 0x082EB374
	.string "ねごと$"
	.if (. - gText_Rom_2EB374) > 0x4
	.error "gText_Rom_2EB374 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB374) < 0x4
	.space 0x4 - (. - gText_Rom_2EB374)
	.endif
	.incbin "baserom.gba", 0x2eb378, 0x4

	@ src/data/moves_info.h:5367 moves_info_line_5367
	.globl gText_Rom_2EB37C
gText_Rom_2EB37C: @ 0x082EB37C
	.string "いやしのすず$"
	.if (. - gText_Rom_2EB37C) > 0x7
	.error "gText_Rom_2EB37C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB37C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB37C)
	.endif
	.incbin "baserom.gba", 0x2eb383, 0x1

	@ src/data/moves_info.h:5393 moves_info_line_5393
	.globl gText_Rom_2EB384
gText_Rom_2EB384: @ 0x082EB384
	.string "おんがえし$"
	.if (. - gText_Rom_2EB384) > 0x6
	.error "gText_Rom_2EB384 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB384) < 0x6
	.space 0x6 - (. - gText_Rom_2EB384)
	.endif
	.incbin "baserom.gba", 0x2eb38a, 0x2

	@ src/data/moves_info.h:5414 moves_info_line_5414
	.globl gText_Rom_2EB38C
gText_Rom_2EB38C: @ 0x082EB38C
	.string "プレゼント$"
	.if (. - gText_Rom_2EB38C) > 0x6
	.error "gText_Rom_2EB38C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB38C) < 0x6
	.space 0x6 - (. - gText_Rom_2EB38C)
	.endif
	.incbin "baserom.gba", 0x2eb392, 0x2

	@ src/data/moves_info.h:5435 moves_info_line_5435
	.globl gText_Rom_2EB394
gText_Rom_2EB394: @ 0x082EB394
	.string "やつあたり$"
	.if (. - gText_Rom_2EB394) > 0x6
	.error "gText_Rom_2EB394 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB394) < 0x6
	.space 0x6 - (. - gText_Rom_2EB394)
	.endif
	.incbin "baserom.gba", 0x2eb39a, 0x2

	@ src/battle_debug.c:411 battle_debug_line_411 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB39C
gText_Rom_2EB39C: @ 0x082EB39C
	.string "しんぴのまもり$"
	.if (. - gText_Rom_2EB39C) != 0x8
	.error "gText_Rom_2EB39C must retain its original byte length"
	.endif
	.globl gText_Rom_2EB3A0
	.set gText_Rom_2EB3A0, gText_Rom_2EB39C + 0x4

	@ src/data/moves_info.h:5480 moves_info_line_5480
	.globl gText_Rom_2EB3A4
gText_Rom_2EB3A4: @ 0x082EB3A4
	.string "いたみわけ$"
	.if (. - gText_Rom_2EB3A4) > 0x6
	.error "gText_Rom_2EB3A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB3A4) < 0x6
	.space 0x6 - (. - gText_Rom_2EB3A4)
	.endif
	.incbin "baserom.gba", 0x2eb3aa, 0x2

	@ src/data/moves_info.h:5501 moves_info_line_5501
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB3AC
gText_Rom_2EB3AC: @ 0x082EB3AC
	.string "せいなるほのお$"
	.if (. - gText_Rom_2EB3AC) != 0x8
	.error "gText_Rom_2EB3AC must retain its original byte length"
	.endif
	.globl gText_Rom_2EB3B0
	.set gText_Rom_2EB3B0, gText_Rom_2EB3AC + 0x4

	@ src/data/moves_info.h:5526 moves_info_line_5526
	.globl gText_Rom_2EB3B4
gText_Rom_2EB3B4: @ 0x082EB3B4
	.string "マグニチュード$"
	.if (. - gText_Rom_2EB3B4) > 0x8
	.error "gText_Rom_2EB3B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB3B4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB3B4)
	.endif

	@ src/data/moves_info.h:5547 moves_info_line_5547
	.globl gText_Rom_2EB3BC
gText_Rom_2EB3BC: @ 0x082EB3BC
	.string "ばくれつパンチ$"
	.if (. - gText_Rom_2EB3BC) > 0x8
	.error "gText_Rom_2EB3BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB3BC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB3BC)
	.endif

	@ src/data/moves_info.h:5573 moves_info_line_5573
	.globl gText_Rom_2EB3C4
gText_Rom_2EB3C4: @ 0x082EB3C4
	.string "メガホーン$"
	.if (. - gText_Rom_2EB3C4) > 0x6
	.error "gText_Rom_2EB3C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB3C4) < 0x6
	.space 0x6 - (. - gText_Rom_2EB3C4)
	.endif
	.incbin "baserom.gba", 0x2eb3ca, 0x2

	@ src/data/moves_info.h:5594 moves_info_line_5594
	.globl gText_Rom_2EB3CC
gText_Rom_2EB3CC: @ 0x082EB3CC
	.string "りゅうのいぶき$"
	.if (. - gText_Rom_2EB3CC) > 0x8
	.error "gText_Rom_2EB3CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB3CC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB3CC)
	.endif

	@ src/data/moves_info.h:5619 moves_info_line_5619
	.globl gText_Rom_2EB3D4
gText_Rom_2EB3D4: @ 0x082EB3D4
	.string "バトンタッチ$"
	.if (. - gText_Rom_2EB3D4) > 0x7
	.error "gText_Rom_2EB3D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB3D4) < 0x7
	.space 0x7 - (. - gText_Rom_2EB3D4)
	.endif
	.incbin "baserom.gba", 0x2eb3db, 0x1

	@ src/data/moves_info.h:5642 moves_info_line_5642
	.globl gText_Rom_2EB3DC
gText_Rom_2EB3DC: @ 0x082EB3DC
	.string "アンコール$"
	.if (. - gText_Rom_2EB3DC) > 0x6
	.error "gText_Rom_2EB3DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB3DC) < 0x6
	.space 0x6 - (. - gText_Rom_2EB3DC)
	.endif
	.incbin "baserom.gba", 0x2eb3e2, 0x2

	@ src/data/moves_info.h:5666 moves_info_line_5666
	.globl gText_Rom_2EB3E4
gText_Rom_2EB3E4: @ 0x082EB3E4
	.string "おいうち$"
	.if (. - gText_Rom_2EB3E4) > 0x5
	.error "gText_Rom_2EB3E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB3E4) < 0x5
	.space 0x5 - (. - gText_Rom_2EB3E4)
	.endif
	.incbin "baserom.gba", 0x2eb3e9, 0x3

	@ src/data/moves_info.h:5688 moves_info_line_5688
	.globl gText_Rom_2EB3EC
gText_Rom_2EB3EC: @ 0x082EB3EC
	.string "こうそくスピン$"
	.if (. - gText_Rom_2EB3EC) > 0x8
	.error "gText_Rom_2EB3EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB3EC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB3EC)
	.endif

	@ src/data/moves_info.h:5717 moves_info_line_5717
	.globl gText_Rom_2EB3F4
gText_Rom_2EB3F4: @ 0x082EB3F4
	.string "あまいかおり$"
	.if (. - gText_Rom_2EB3F4) > 0x7
	.error "gText_Rom_2EB3F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB3F4) < 0x7
	.space 0x7 - (. - gText_Rom_2EB3F4)
	.endif
	.incbin "baserom.gba", 0x2eb3fb, 0x1

	@ src/data/moves_info.h:5743 moves_info_line_5743
	.globl gText_Rom_2EB3FC
gText_Rom_2EB3FC: @ 0x082EB3FC
	.string "アイアンテール$"
	.if (. - gText_Rom_2EB3FC) > 0x8
	.error "gText_Rom_2EB3FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB3FC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB3FC)
	.endif

	@ src/data/moves_info.h:5769 moves_info_line_5769
	.globl gText_Rom_2EB404
gText_Rom_2EB404: @ 0x082EB404
	.string "メタルクロー$"
	.if (. - gText_Rom_2EB404) > 0x7
	.error "gText_Rom_2EB404 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB404) < 0x7
	.space 0x7 - (. - gText_Rom_2EB404)
	.endif
	.incbin "baserom.gba", 0x2eb40b, 0x1

	@ src/data/moves_info.h:5796 moves_info_line_5796
	.globl gText_Rom_2EB40C
gText_Rom_2EB40C: @ 0x082EB40C
	.string "あてみなげ$"
	.if (. - gText_Rom_2EB40C) > 0x6
	.error "gText_Rom_2EB40C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB40C) < 0x6
	.space 0x6 - (. - gText_Rom_2EB40C)
	.endif
	.incbin "baserom.gba", 0x2eb412, 0x2

	@ src/data/moves_info.h:5817 moves_info_line_5817
	.globl gText_Rom_2EB414
gText_Rom_2EB414: @ 0x082EB414
	.string "あさのひざし$"
	.if (. - gText_Rom_2EB414) > 0x7
	.error "gText_Rom_2EB414 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB414) < 0x7
	.space 0x7 - (. - gText_Rom_2EB414)
	.endif
	.incbin "baserom.gba", 0x2eb41b, 0x1

	@ src/data/moves_info.h:5842 moves_info_line_5842
	.globl gText_Rom_2EB41C
gText_Rom_2EB41C: @ 0x082EB41C
	.string "こうごうせい$"
	.if (. - gText_Rom_2EB41C) > 0x7
	.error "gText_Rom_2EB41C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB41C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB41C)
	.endif
	.incbin "baserom.gba", 0x2eb423, 0x1

	@ src/data/moves_info.h:5867 moves_info_line_5867
	.globl gText_Rom_2EB424
gText_Rom_2EB424: @ 0x082EB424
	.string "つきのひかり$"
	.if (. - gText_Rom_2EB424) > 0x7
	.error "gText_Rom_2EB424 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB424) < 0x7
	.space 0x7 - (. - gText_Rom_2EB424)
	.endif
	.incbin "baserom.gba", 0x2eb42b, 0x1

	@ src/data/moves_info.h:5892 moves_info_line_5892
	.globl gText_Rom_2EB42C
gText_Rom_2EB42C: @ 0x082EB42C
	.string "めざめるパワー$"
	.if (. - gText_Rom_2EB42C) > 0x8
	.error "gText_Rom_2EB42C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB42C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB42C)
	.endif

	@ src/data/moves_info.h:5912 moves_info_line_5912
	.globl gText_Rom_2EB434
gText_Rom_2EB434: @ 0x082EB434
	.string "クロスチョップ$"
	.if (. - gText_Rom_2EB434) > 0x8
	.error "gText_Rom_2EB434 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB434) < 0x8
	.space 0x8 - (. - gText_Rom_2EB434)
	.endif

	@ src/data/moves_info.h:5934 moves_info_line_5934
	.globl gText_Rom_2EB43C
gText_Rom_2EB43C: @ 0x082EB43C
	.string "たつまき$"
	.if (. - gText_Rom_2EB43C) > 0x5
	.error "gText_Rom_2EB43C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB43C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB43C)
	.endif
	.incbin "baserom.gba", 0x2eb441, 0x3

	@ src/data/moves_info.h:5960 moves_info_line_5960
	.globl gText_Rom_2EB444
gText_Rom_2EB444: @ 0x082EB444
	.string "あまごい$"
	.if (. - gText_Rom_2EB444) > 0x5
	.error "gText_Rom_2EB444 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB444) < 0x5
	.space 0x5 - (. - gText_Rom_2EB444)
	.endif
	.incbin "baserom.gba", 0x2eb449, 0x3

	@ src/data/moves_info.h:5984 moves_info_line_5984
	.globl gText_Rom_2EB44C
gText_Rom_2EB44C: @ 0x082EB44C
	.string "にほんばれ$"
	.if (. - gText_Rom_2EB44C) > 0x6
	.error "gText_Rom_2EB44C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB44C) < 0x6
	.space 0x6 - (. - gText_Rom_2EB44C)
	.endif
	.incbin "baserom.gba", 0x2eb452, 0x2

	@ src/data/moves_info.h:6008 moves_info_line_6008
	.globl gText_Rom_2EB454
gText_Rom_2EB454: @ 0x082EB454
	.string "かみくだく$"
	.if (. - gText_Rom_2EB454) > 0x6
	.error "gText_Rom_2EB454 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB454) < 0x6
	.space 0x6 - (. - gText_Rom_2EB454)
	.endif
	.incbin "baserom.gba", 0x2eb45a, 0x2

	@ src/data/moves_info.h:6036 moves_info_line_6036
	.globl gText_Rom_2EB45C
gText_Rom_2EB45C: @ 0x082EB45C
	.string "ミラーコート$"
	.if (. - gText_Rom_2EB45C) > 0x7
	.error "gText_Rom_2EB45C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB45C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB45C)
	.endif
	.incbin "baserom.gba", 0x2eb463, 0x1

	@ src/data/moves_info.h:6066 moves_info_line_6066
	.globl gText_Rom_2EB464
gText_Rom_2EB464: @ 0x082EB464
	.string "じこあんじ$"
	.if (. - gText_Rom_2EB464) > 0x6
	.error "gText_Rom_2EB464 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB464) < 0x6
	.space 0x6 - (. - gText_Rom_2EB464)
	.endif
	.incbin "baserom.gba", 0x2eb46a, 0x2

	@ src/data/moves_info.h:6091 moves_info_line_6091
	.globl gText_Rom_2EB46C
gText_Rom_2EB46C: @ 0x082EB46C
	.string "しんそく$"
	.if (. - gText_Rom_2EB46C) > 0x5
	.error "gText_Rom_2EB46C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB46C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB46C)
	.endif
	.incbin "baserom.gba", 0x2eb471, 0x3

	@ src/data/moves_info.h:6112 moves_info_line_6112
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB474
gText_Rom_2EB474: @ 0x082EB474
	.string "げんしのちから$"
	.if (. - gText_Rom_2EB474) != 0x8
	.error "gText_Rom_2EB474 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB478
	.set gText_Rom_2EB478, gText_Rom_2EB474 + 0x4

	@ src/data/moves_info.h:6143 moves_info_line_6143
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB47C
gText_Rom_2EB47C: @ 0x082EB47C
	.string "シャドーボール$"
	.if (. - gText_Rom_2EB47C) != 0x8
	.error "gText_Rom_2EB47C must retain its original byte length"
	.endif
	.globl gText_Rom_2EB480
	.set gText_Rom_2EB480, gText_Rom_2EB47C + 0x4

	@ src/data/moves_info.h:6169 moves_info_line_6169
	.globl gText_Rom_2EB484
gText_Rom_2EB484: @ 0x082EB484
	.string "みらいよち$"
	.if (. - gText_Rom_2EB484) > 0x6
	.error "gText_Rom_2EB484 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB484) < 0x6
	.space 0x6 - (. - gText_Rom_2EB484)
	.endif
	.incbin "baserom.gba", 0x2eb48a, 0x2

	@ src/data/moves_info.h:6197 moves_info_line_6197
	.globl gText_Rom_2EB48C
gText_Rom_2EB48C: @ 0x082EB48C
	.string "いわくだき$"
	.if (. - gText_Rom_2EB48C) > 0x6
	.error "gText_Rom_2EB48C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB48C) < 0x6
	.space 0x6 - (. - gText_Rom_2EB48C)
	.endif
	.incbin "baserom.gba", 0x2eb492, 0x2

	@ src/data/moves_info.h:6223 moves_info_line_6223
	.globl gText_Rom_2EB494
gText_Rom_2EB494: @ 0x082EB494
	.string "うずしお$"
	.if (. - gText_Rom_2EB494) > 0x5
	.error "gText_Rom_2EB494 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB494) < 0x5
	.space 0x5 - (. - gText_Rom_2EB494)
	.endif
	.incbin "baserom.gba", 0x2eb499, 0x3

	@ src/data/moves_info.h:6249 moves_info_line_6249
	.globl gText_Rom_2EB49C
gText_Rom_2EB49C: @ 0x082EB49C
	.string "ふくろだたき$"
	.if (. - gText_Rom_2EB49C) > 0x7
	.error "gText_Rom_2EB49C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB49C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB49C)
	.endif
	.incbin "baserom.gba", 0x2eb4a3, 0x1

	@ src/data/moves_info.h:6274 moves_info_line_6274
	.globl gText_Rom_2EB4A4
gText_Rom_2EB4A4: @ 0x082EB4A4
	.string "ねこだまし$"
	.if (. - gText_Rom_2EB4A4) > 0x6
	.error "gText_Rom_2EB4A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB4A4) < 0x6
	.space 0x6 - (. - gText_Rom_2EB4A4)
	.endif
	.incbin "baserom.gba", 0x2eb4aa, 0x2

	@ src/data/moves_info.h:6299 moves_info_line_6299
	.globl gText_Rom_2EB4AC
gText_Rom_2EB4AC: @ 0x082EB4AC
	.string "さわぐ$"
	.if (. - gText_Rom_2EB4AC) > 0x4
	.error "gText_Rom_2EB4AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB4AC) < 0x4
	.space 0x4 - (. - gText_Rom_2EB4AC)
	.endif
	.incbin "baserom.gba", 0x2eb4b0, 0x4

	@ src/data/moves_info.h:6328 moves_info_line_6328
	.globl gText_Rom_2EB4B4
gText_Rom_2EB4B4: @ 0x082EB4B4
	.string "たくわえる$"
	.if (. - gText_Rom_2EB4B4) > 0x6
	.error "gText_Rom_2EB4B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB4B4) < 0x6
	.space 0x6 - (. - gText_Rom_2EB4B4)
	.endif
	.incbin "baserom.gba", 0x2eb4ba, 0x2

	@ src/data/moves_info.h:6358 moves_info_line_6358
	.globl gText_Rom_2EB4BC
gText_Rom_2EB4BC: @ 0x082EB4BC
	.string "はきだす$"
	.if (. - gText_Rom_2EB4BC) > 0x5
	.error "gText_Rom_2EB4BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB4BC) < 0x5
	.space 0x5 - (. - gText_Rom_2EB4BC)
	.endif
	.incbin "baserom.gba", 0x2eb4c1, 0x3

	@ src/data/moves_info.h:6379 moves_info_line_6379
	.globl gText_Rom_2EB4C4
gText_Rom_2EB4C4: @ 0x082EB4C4
	.string "のみこむ$"
	.if (. - gText_Rom_2EB4C4) > 0x5
	.error "gText_Rom_2EB4C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB4C4) < 0x5
	.space 0x5 - (. - gText_Rom_2EB4C4)
	.endif
	.incbin "baserom.gba", 0x2eb4c9, 0x3

	@ src/data/moves_info.h:6404 moves_info_line_6404
	.globl gText_Rom_2EB4CC
gText_Rom_2EB4CC: @ 0x082EB4CC
	.string "ねっぷう$"
	.if (. - gText_Rom_2EB4CC) > 0x5
	.error "gText_Rom_2EB4CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB4CC) < 0x5
	.space 0x5 - (. - gText_Rom_2EB4CC)
	.endif
	.incbin "baserom.gba", 0x2eb4d1, 0x3

	@ src/data/moves_info.h:6429 moves_info_line_6429
	.globl gText_Rom_2EB4D4
gText_Rom_2EB4D4: @ 0x082EB4D4
	.string "あられ$"
	.if (. - gText_Rom_2EB4D4) > 0x4
	.error "gText_Rom_2EB4D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB4D4) < 0x4
	.space 0x4 - (. - gText_Rom_2EB4D4)
	.endif
	.incbin "baserom.gba", 0x2eb4d8, 0x4

	@ src/battle_debug.c:360 battle_debug_line_360 (+1 aliases)
	.globl gText_Rom_2EB4DC
gText_Rom_2EB4DC: @ 0x082EB4DC
	.string "いちゃもん$"
	.if (. - gText_Rom_2EB4DC) > 0x6
	.error "gText_Rom_2EB4DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB4DC) < 0x6
	.space 0x6 - (. - gText_Rom_2EB4DC)
	.endif
	.incbin "baserom.gba", 0x2eb4e2, 0x2

	@ src/data/moves_info.h:6475 moves_info_line_6475
	.globl gText_Rom_2EB4E4
gText_Rom_2EB4E4: @ 0x082EB4E4
	.string "おだてる$"
	.if (. - gText_Rom_2EB4E4) > 0x5
	.error "gText_Rom_2EB4E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB4E4) < 0x5
	.space 0x5 - (. - gText_Rom_2EB4E4)
	.endif
	.incbin "baserom.gba", 0x2eb4e9, 0x3

	@ src/data/moves_info.h:6501 moves_info_line_6501
	.globl gText_Rom_2EB4EC
gText_Rom_2EB4EC: @ 0x082EB4EC
	.string "おにび$"
	.if (. - gText_Rom_2EB4EC) > 0x4
	.error "gText_Rom_2EB4EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB4EC) < 0x4
	.space 0x4 - (. - gText_Rom_2EB4EC)
	.endif
	.incbin "baserom.gba", 0x2eb4f0, 0x4

	@ src/data/moves_info.h:6524 moves_info_line_6524
	.globl gText_Rom_2EB4F4
gText_Rom_2EB4F4: @ 0x082EB4F4
	.string "おきみやげ$"
	.if (. - gText_Rom_2EB4F4) > 0x6
	.error "gText_Rom_2EB4F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB4F4) < 0x6
	.space 0x6 - (. - gText_Rom_2EB4F4)
	.endif
	.incbin "baserom.gba", 0x2eb4fa, 0x2

	@ src/data/moves_info.h:6550 moves_info_line_6550
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB4FC
gText_Rom_2EB4FC: @ 0x082EB4FC
	.string "からげんき$"
	.if (. - gText_Rom_2EB4FC) != 0x6
	.error "gText_Rom_2EB4FC must retain its original byte length"
	.endif
	.globl gText_Rom_2EB4FE
	.set gText_Rom_2EB4FE, gText_Rom_2EB4FC + 0x2
	.incbin "baserom.gba", 0x2eb502, 0x2

	@ src/data/moves_info.h:6571 moves_info_line_6571
	.globl gText_Rom_2EB504
gText_Rom_2EB504: @ 0x082EB504
	.string "きあいパンチ$"
	.if (. - gText_Rom_2EB504) > 0x7
	.error "gText_Rom_2EB504 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB504) < 0x7
	.space 0x7 - (. - gText_Rom_2EB504)
	.endif
	.incbin "baserom.gba", 0x2eb50b, 0x1

	@ src/data/moves_info.h:6600 moves_info_line_6600
	.globl gText_Rom_2EB50C
gText_Rom_2EB50C: @ 0x082EB50C
	.string "きつけ$"
	.if (. - gText_Rom_2EB50C) > 0x4
	.error "gText_Rom_2EB50C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB50C) < 0x4
	.space 0x4 - (. - gText_Rom_2EB50C)
	.endif
	.incbin "baserom.gba", 0x2eb510, 0x4

	@ src/battle_z_move.c:101 sText_FollowMe (+1 aliases)
	.globl gText_Rom_2EB514
gText_Rom_2EB514: @ 0x082EB514
	.string "このゆびとまれ$"
	.if (. - gText_Rom_2EB514) > 0x8
	.error "gText_Rom_2EB514 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB514) < 0x8
	.space 0x8 - (. - gText_Rom_2EB514)
	.endif

	@ src/data/moves_info.h:6651 moves_info_line_6651
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB51C
gText_Rom_2EB51C: @ 0x082EB51C
	.string "しぜんのちから$"
	.if (. - gText_Rom_2EB51C) != 0x8
	.error "gText_Rom_2EB51C must retain its original byte length"
	.endif
	.globl gText_Rom_2EB520
	.set gText_Rom_2EB520, gText_Rom_2EB51C + 0x4

	@ src/battle_debug.c:381 battle_debug_line_381 (+1 aliases)
	.globl gText_Rom_2EB524
gText_Rom_2EB524: @ 0x082EB524
	.string "じゅうでん$"
	.if (. - gText_Rom_2EB524) > 0x6
	.error "gText_Rom_2EB524 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB524) < 0x6
	.space 0x6 - (. - gText_Rom_2EB524)
	.endif
	.incbin "baserom.gba", 0x2eb52a, 0x2

	@ src/data/moves_info.h:6710 moves_info_line_6710
	.globl gText_Rom_2EB52C
gText_Rom_2EB52C: @ 0x082EB52C
	.string "ちょうはつ$"
	.if (. - gText_Rom_2EB52C) > 0x6
	.error "gText_Rom_2EB52C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB52C) < 0x6
	.space 0x6 - (. - gText_Rom_2EB52C)
	.endif
	.incbin "baserom.gba", 0x2eb532, 0x2

	@ src/data/moves_info.h:6734 moves_info_line_6734
	.globl gText_Rom_2EB534
gText_Rom_2EB534: @ 0x082EB534
	.string "てだすけ$"
	.if (. - gText_Rom_2EB534) > 0x5
	.error "gText_Rom_2EB534 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB534) < 0x5
	.space 0x5 - (. - gText_Rom_2EB534)
	.endif
	.incbin "baserom.gba", 0x2eb539, 0x3

	@ src/data/moves_info.h:6761 moves_info_line_6761
	.globl gText_Rom_2EB53C
gText_Rom_2EB53C: @ 0x082EB53C
	.string "トリック$"
	.if (. - gText_Rom_2EB53C) > 0x5
	.error "gText_Rom_2EB53C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB53C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB53C)
	.endif
	.incbin "baserom.gba", 0x2eb541, 0x3

	@ src/data/moves_info.h:6785 moves_info_line_6785
	.globl gText_Rom_2EB544
gText_Rom_2EB544: @ 0x082EB544
	.string "なりきり$"
	.if (. - gText_Rom_2EB544) > 0x5
	.error "gText_Rom_2EB544 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB544) < 0x5
	.space 0x5 - (. - gText_Rom_2EB544)
	.endif
	.incbin "baserom.gba", 0x2eb549, 0x3

	@ src/data/moves_info.h:6809 moves_info_line_6809
	.globl gText_Rom_2EB54C
gText_Rom_2EB54C: @ 0x082EB54C
	.string "ねがいごと$"
	.if (. - gText_Rom_2EB54C) > 0x6
	.error "gText_Rom_2EB54C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB54C) < 0x6
	.space 0x6 - (. - gText_Rom_2EB54C)
	.endif
	.incbin "baserom.gba", 0x2eb552, 0x2

	@ src/data/moves_info.h:6834 moves_info_line_6834
	.globl gText_Rom_2EB554
gText_Rom_2EB554: @ 0x082EB554
	.string "ねこのて$"
	.if (. - gText_Rom_2EB554) > 0x5
	.error "gText_Rom_2EB554 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB554) < 0x5
	.space 0x5 - (. - gText_Rom_2EB554)
	.endif
	.incbin "baserom.gba", 0x2eb559, 0x3

	@ src/battle_debug.c:382 battle_debug_line_382 (+1 aliases)
	.globl gText_Rom_2EB55C
gText_Rom_2EB55C: @ 0x082EB55C
	.string "ねをはる$"
	.if (. - gText_Rom_2EB55C) > 0x5
	.error "gText_Rom_2EB55C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB55C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB55C)
	.endif
	.incbin "baserom.gba", 0x2eb561, 0x3

	@ src/data/moves_info.h:6888 moves_info_line_6888
	.globl gText_Rom_2EB564
gText_Rom_2EB564: @ 0x082EB564
	.string "ばかぢから$"
	.if (. - gText_Rom_2EB564) > 0x6
	.error "gText_Rom_2EB564 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB564) < 0x6
	.space 0x6 - (. - gText_Rom_2EB564)
	.endif
	.incbin "baserom.gba", 0x2eb56a, 0x2

	@ src/data/moves_info.h:6915 moves_info_line_6915
	.globl gText_Rom_2EB56C
gText_Rom_2EB56C: @ 0x082EB56C
	.string "マジックコート$"
	.if (. - gText_Rom_2EB56C) > 0x8
	.error "gText_Rom_2EB56C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB56C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB56C)
	.endif

	@ src/data/moves_info.h:6938 moves_info_line_6938
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB574
gText_Rom_2EB574: @ 0x082EB574
	.string "リサイクル$"
	.if (. - gText_Rom_2EB574) != 0x6
	.error "gText_Rom_2EB574 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB575
	.set gText_Rom_2EB575, gText_Rom_2EB574 + 0x1
	.incbin "baserom.gba", 0x2eb57a, 0x2

	@ src/data/moves_info.h:6962 moves_info_line_6962
	.globl gText_Rom_2EB57C
gText_Rom_2EB57C: @ 0x082EB57C
	.string "リベンジ$"
	.if (. - gText_Rom_2EB57C) > 0x5
	.error "gText_Rom_2EB57C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB57C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB57C)
	.endif
	.incbin "baserom.gba", 0x2eb581, 0x3

	@ src/data/moves_info.h:6983 moves_info_line_6983
	.globl gText_Rom_2EB584
gText_Rom_2EB584: @ 0x082EB584
	.string "かわらわり$"
	.if (. - gText_Rom_2EB584) > 0x6
	.error "gText_Rom_2EB584 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB584) < 0x6
	.space 0x6 - (. - gText_Rom_2EB584)
	.endif
	.incbin "baserom.gba", 0x2eb58a, 0x2

	@ src/battle_debug.c:383 battle_debug_line_383 (+1 aliases)
	.globl gText_Rom_2EB58C
gText_Rom_2EB58C: @ 0x082EB58C
	.string "あくび$"
	.if (. - gText_Rom_2EB58C) > 0x4
	.error "gText_Rom_2EB58C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB58C) < 0x4
	.space 0x4 - (. - gText_Rom_2EB58C)
	.endif
	.incbin "baserom.gba", 0x2eb590, 0x4

	@ src/data/moves_info.h:7031 moves_info_line_7031
	.globl gText_Rom_2EB594
gText_Rom_2EB594: @ 0x082EB594
	.string "はたきおとす$"
	.if (. - gText_Rom_2EB594) > 0x7
	.error "gText_Rom_2EB594 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB594) < 0x7
	.space 0x7 - (. - gText_Rom_2EB594)
	.endif
	.incbin "baserom.gba", 0x2eb59b, 0x1

	@ src/data/moves_info.h:7052 moves_info_line_7052
	.globl gText_Rom_2EB59C
gText_Rom_2EB59C: @ 0x082EB59C
	.string "がむしゃら$"
	.if (. - gText_Rom_2EB59C) > 0x6
	.error "gText_Rom_2EB59C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB59C) < 0x6
	.space 0x6 - (. - gText_Rom_2EB59C)
	.endif
	.incbin "baserom.gba", 0x2eb5a2, 0x2

	@ src/data/moves_info.h:7074 moves_info_line_7074
	.globl gText_Rom_2EB5A4
gText_Rom_2EB5A4: @ 0x082EB5A4
	.string "ふんか$"
	.if (. - gText_Rom_2EB5A4) > 0x4
	.error "gText_Rom_2EB5A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5A4) < 0x4
	.space 0x4 - (. - gText_Rom_2EB5A4)
	.endif
	.incbin "baserom.gba", 0x2eb5a8, 0x4

	@ src/data/moves_info.h:7094 moves_info_line_7094
	.globl gText_Rom_2EB5AC
gText_Rom_2EB5AC: @ 0x082EB5AC
	.string "スキルスワップ$"
	.if (. - gText_Rom_2EB5AC) > 0x8
	.error "gText_Rom_2EB5AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5AC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB5AC)
	.endif

	@ src/battle_debug.c:384 battle_debug_line_384 (+1 aliases)
	.globl gText_Rom_2EB5B4
gText_Rom_2EB5B4: @ 0x082EB5B4
	.string "ふういん$"
	.if (. - gText_Rom_2EB5B4) > 0x5
	.error "gText_Rom_2EB5B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5B4) < 0x5
	.space 0x5 - (. - gText_Rom_2EB5B4)
	.endif
	.incbin "baserom.gba", 0x2eb5b9, 0x3

	@ src/data/moves_info.h:7142 moves_info_line_7142
	.globl gText_Rom_2EB5BC
gText_Rom_2EB5BC: @ 0x082EB5BC
	.string "リフレッシュ$"
	.if (. - gText_Rom_2EB5BC) > 0x7
	.error "gText_Rom_2EB5BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5BC) < 0x7
	.space 0x7 - (. - gText_Rom_2EB5BC)
	.endif
	.incbin "baserom.gba", 0x2eb5c3, 0x1

	@ src/battle_debug.c:385 battle_debug_line_385 (+1 aliases)
	.globl gText_Rom_2EB5C4
gText_Rom_2EB5C4: @ 0x082EB5C4
	.string "おんねん$"
	.if (. - gText_Rom_2EB5C4) > 0x5
	.error "gText_Rom_2EB5C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5C4) < 0x5
	.space 0x5 - (. - gText_Rom_2EB5C4)
	.endif
	.incbin "baserom.gba", 0x2eb5c9, 0x3

	@ src/data/moves_info.h:7190 moves_info_line_7190
	.globl gText_Rom_2EB5CC
gText_Rom_2EB5CC: @ 0x082EB5CC
	.string "よこどり$"
	.if (. - gText_Rom_2EB5CC) > 0x5
	.error "gText_Rom_2EB5CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5CC) < 0x5
	.space 0x5 - (. - gText_Rom_2EB5CC)
	.endif
	.incbin "baserom.gba", 0x2eb5d1, 0x3

	@ src/data/moves_info.h:7218 moves_info_line_7218
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB5D4
gText_Rom_2EB5D4: @ 0x082EB5D4
	.string "ひみつのちから$"
	.if (. - gText_Rom_2EB5D4) != 0x8
	.error "gText_Rom_2EB5D4 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB5D8
	.set gText_Rom_2EB5D8, gText_Rom_2EB5D4 + 0x4

	@ src/data/moves_info.h:7242 moves_info_line_7242
	.globl gText_Rom_2EB5DC
gText_Rom_2EB5DC: @ 0x082EB5DC
	.string "ダイビング$"
	.if (. - gText_Rom_2EB5DC) > 0x6
	.error "gText_Rom_2EB5DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5DC) < 0x6
	.space 0x6 - (. - gText_Rom_2EB5DC)
	.endif
	.incbin "baserom.gba", 0x2eb5e2, 0x2

	@ src/data/moves_info.h:7268 moves_info_line_7268
	.globl gText_Rom_2EB5E4
gText_Rom_2EB5E4: @ 0x082EB5E4
	.string "つっぱり$"
	.if (. - gText_Rom_2EB5E4) > 0x5
	.error "gText_Rom_2EB5E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5E4) < 0x5
	.space 0x5 - (. - gText_Rom_2EB5E4)
	.endif
	.incbin "baserom.gba", 0x2eb5e9, 0x3

	@ src/data/moves_info.h:7289 moves_info_line_7289
	.globl gText_Rom_2EB5EC
gText_Rom_2EB5EC: @ 0x082EB5EC
	.string "ほごしょく$"
	.if (. - gText_Rom_2EB5EC) > 0x6
	.error "gText_Rom_2EB5EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5EC) < 0x6
	.space 0x6 - (. - gText_Rom_2EB5EC)
	.endif
	.incbin "baserom.gba", 0x2eb5f2, 0x2

	@ src/data/moves_info.h:7313 moves_info_line_7313
	.globl gText_Rom_2EB5F4
gText_Rom_2EB5F4: @ 0x082EB5F4
	.string "ほたるび$"
	.if (. - gText_Rom_2EB5F4) > 0x5
	.error "gText_Rom_2EB5F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5F4) < 0x5
	.space 0x5 - (. - gText_Rom_2EB5F4)
	.endif
	.incbin "baserom.gba", 0x2eb5f9, 0x3

	@ src/data/moves_info.h:7341 moves_info_line_7341
	.globl gText_Rom_2EB5FC
gText_Rom_2EB5FC: @ 0x082EB5FC
	.string "ラスターパージ$"
	.if (. - gText_Rom_2EB5FC) > 0x8
	.error "gText_Rom_2EB5FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5FC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB5FC)
	.endif

	@ src/data/moves_info.h:7366 moves_info_line_7366
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB604
gText_Rom_2EB604: @ 0x082EB604
	.string "ミストボール$"
	.if (. - gText_Rom_2EB604) != 0x7
	.error "gText_Rom_2EB604 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB607
	.set gText_Rom_2EB607, gText_Rom_2EB604 + 0x3
	.incbin "baserom.gba", 0x2eb60b, 0x1

	@ src/data/moves_info.h:7392 moves_info_line_7392
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB60C
gText_Rom_2EB60C: @ 0x082EB60C
	.string "フェザーダンス$"
	.if (. - gText_Rom_2EB60C) != 0x8
	.error "gText_Rom_2EB60C must retain its original byte length"
	.endif
	.globl gText_Rom_2EB610
	.set gText_Rom_2EB610, gText_Rom_2EB60C + 0x4

	@ src/data/moves_info.h:7419 moves_info_line_7419
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB614
gText_Rom_2EB614: @ 0x082EB614
	.string "フラフラダンス$"
	.if (. - gText_Rom_2EB614) != 0x8
	.error "gText_Rom_2EB614 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB618
	.set gText_Rom_2EB618, gText_Rom_2EB614 + 0x4

	@ src/data/moves_info.h:7442 moves_info_line_7442
	.globl gText_Rom_2EB61C
gText_Rom_2EB61C: @ 0x082EB61C
	.string "ブレイズキック$"
	.if (. - gText_Rom_2EB61C) > 0x8
	.error "gText_Rom_2EB61C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB61C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB61C)
	.endif

	@ src/battle_debug.c:371 battle_debug_line_371 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB624
gText_Rom_2EB624: @ 0x082EB624
	.string "どろあそび$"
	.if (. - gText_Rom_2EB624) != 0x6
	.error "gText_Rom_2EB624 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB626
	.set gText_Rom_2EB626, gText_Rom_2EB624 + 0x2
	.incbin "baserom.gba", 0x2eb62a, 0x2

	@ src/data/moves_info.h:7493 moves_info_line_7493
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB62C
gText_Rom_2EB62C: @ 0x082EB62C
	.string "アイスボール$"
	.if (. - gText_Rom_2EB62C) != 0x7
	.error "gText_Rom_2EB62C must retain its original byte length"
	.endif
	.globl gText_Rom_2EB62F
	.set gText_Rom_2EB62F, gText_Rom_2EB62C + 0x3
	.incbin "baserom.gba", 0x2eb633, 0x1

	@ src/data/moves_info.h:7516 moves_info_line_7516
	.globl gText_Rom_2EB634
gText_Rom_2EB634: @ 0x082EB634
	.string "ニードルアーム$"
	.if (. - gText_Rom_2EB634) > 0x8
	.error "gText_Rom_2EB634 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB634) < 0x8
	.space 0x8 - (. - gText_Rom_2EB634)
	.endif

	@ src/data/moves_info.h:7542 moves_info_line_7542
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB63C
gText_Rom_2EB63C: @ 0x082EB63C
	.string "なまける$"
	.if (. - gText_Rom_2EB63C) != 0x5
	.error "gText_Rom_2EB63C must retain its original byte length"
	.endif
	.globl gText_Rom_2EB63D
	.set gText_Rom_2EB63D, gText_Rom_2EB63C + 0x1
	.incbin "baserom.gba", 0x2eb641, 0x3

	@ src/data/moves_info.h:7567 moves_info_line_7567
	.globl gText_Rom_2EB644
gText_Rom_2EB644: @ 0x082EB644
	.string "ハイパーボイス$"
	.if (. - gText_Rom_2EB644) > 0x8
	.error "gText_Rom_2EB644 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB644) < 0x8
	.space 0x8 - (. - gText_Rom_2EB644)
	.endif

	@ src/data/moves_info.h:7589 moves_info_line_7589
	.globl gText_Rom_2EB64C
gText_Rom_2EB64C: @ 0x082EB64C
	.string "どくどくのキバ$"
	.if (. - gText_Rom_2EB64C) > 0x8
	.error "gText_Rom_2EB64C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB64C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB64C)
	.endif

	@ src/data/moves_info.h:7614 moves_info_line_7614
	.globl gText_Rom_2EB654
gText_Rom_2EB654: @ 0x082EB654
	.string "ブレイククロー$"
	.if (. - gText_Rom_2EB654) > 0x8
	.error "gText_Rom_2EB654 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB654) < 0x8
	.space 0x8 - (. - gText_Rom_2EB654)
	.endif

	@ src/data/moves_info.h:7640 moves_info_line_7640
	.globl gText_Rom_2EB65C
gText_Rom_2EB65C: @ 0x082EB65C
	.string "ブラストバーン$"
	.if (. - gText_Rom_2EB65C) > 0x8
	.error "gText_Rom_2EB65C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB65C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB65C)
	.endif

	@ src/data/moves_info.h:7664 moves_info_line_7664
	.globl gText_Rom_2EB664
gText_Rom_2EB664: @ 0x082EB664
	.string "ハイドロカノン$"
	.if (. - gText_Rom_2EB664) > 0x8
	.error "gText_Rom_2EB664 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB664) < 0x8
	.space 0x8 - (. - gText_Rom_2EB664)
	.endif

	@ src/data/moves_info.h:7688 moves_info_line_7688
	.globl gText_Rom_2EB66C
gText_Rom_2EB66C: @ 0x082EB66C
	.string "コメットパンチ$"
	.if (. - gText_Rom_2EB66C) > 0x8
	.error "gText_Rom_2EB66C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB66C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB66C)
	.endif

	@ src/data/moves_info.h:7716 moves_info_line_7716
	.globl gText_Rom_2EB674
gText_Rom_2EB674: @ 0x082EB674
	.string "おどろかす$"
	.if (. - gText_Rom_2EB674) > 0x6
	.error "gText_Rom_2EB674 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB674) < 0x6
	.space 0x6 - (. - gText_Rom_2EB674)
	.endif
	.incbin "baserom.gba", 0x2eb67a, 0x2

	@ src/data/moves_info.h:7742 moves_info_line_7742
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB67C
gText_Rom_2EB67C: @ 0x082EB67C
	.string "ウェザーボール$"
	.if (. - gText_Rom_2EB67C) != 0x8
	.error "gText_Rom_2EB67C must retain its original byte length"
	.endif
	.globl gText_Rom_2EB680
	.set gText_Rom_2EB680, gText_Rom_2EB67C + 0x4

	@ src/data/moves_info.h:7764 moves_info_line_7764
	.globl gText_Rom_2EB684
gText_Rom_2EB684: @ 0x082EB684
	.string "アロマセラピー$"
	.if (. - gText_Rom_2EB684) > 0x8
	.error "gText_Rom_2EB684 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB684) < 0x8
	.space 0x8 - (. - gText_Rom_2EB684)
	.endif

	@ src/data/moves_info.h:7789 moves_info_line_7789
	.globl gText_Rom_2EB68C
gText_Rom_2EB68C: @ 0x082EB68C
	.string "うそなき$"
	.if (. - gText_Rom_2EB68C) > 0x5
	.error "gText_Rom_2EB68C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB68C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB68C)
	.endif
	.incbin "baserom.gba", 0x2eb691, 0x3

	@ src/data/moves_info.h:7815 moves_info_line_7815
	.globl gText_Rom_2EB694
gText_Rom_2EB694: @ 0x082EB694
	.string "エアカッター$"
	.if (. - gText_Rom_2EB694) > 0x7
	.error "gText_Rom_2EB694 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB694) < 0x7
	.space 0x7 - (. - gText_Rom_2EB694)
	.endif
	.incbin "baserom.gba", 0x2eb69b, 0x1

	@ src/data/moves_info.h:7838 moves_info_line_7838
	.globl gText_Rom_2EB69C
gText_Rom_2EB69C: @ 0x082EB69C
	.string "オーバーヒート$"
	.if (. - gText_Rom_2EB69C) > 0x8
	.error "gText_Rom_2EB69C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB69C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB69C)
	.endif

	@ src/data/moves_info.h:7864 moves_info_line_7864
	.globl gText_Rom_2EB6A4
gText_Rom_2EB6A4: @ 0x082EB6A4
	.string "かぎわける$"
	.if (. - gText_Rom_2EB6A4) > 0x6
	.error "gText_Rom_2EB6A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB6A4) < 0x6
	.space 0x6 - (. - gText_Rom_2EB6A4)
	.endif
	.incbin "baserom.gba", 0x2eb6aa, 0x2

	@ src/data/moves_info.h:7887 moves_info_line_7887
	.globl gText_Rom_2EB6AC
gText_Rom_2EB6AC: @ 0x082EB6AC
	.string "がんせきふうじ$"
	.if (. - gText_Rom_2EB6AC) > 0x8
	.error "gText_Rom_2EB6AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB6AC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB6AC)
	.endif

	@ src/data/moves_info.h:7912 moves_info_line_7912
	.globl gText_Rom_2EB6B4
gText_Rom_2EB6B4: @ 0x082EB6B4
	.string "ぎんいろのかぜ$"
	.if (. - gText_Rom_2EB6B4) > 0x8
	.error "gText_Rom_2EB6B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB6B4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB6B4)
	.endif

	@ src/data/moves_info.h:7943 moves_info_line_7943
	.globl gText_Rom_2EB6BC
gText_Rom_2EB6BC: @ 0x082EB6BC
	.string "きんぞくおん$"
	.if (. - gText_Rom_2EB6BC) > 0x7
	.error "gText_Rom_2EB6BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB6BC) < 0x7
	.space 0x7 - (. - gText_Rom_2EB6BC)
	.endif
	.incbin "baserom.gba", 0x2eb6c3, 0x1

	@ src/data/moves_info.h:7971 moves_info_line_7971
	.globl gText_Rom_2EB6C4
gText_Rom_2EB6C4: @ 0x082EB6C4
	.string "くさぶえ$"
	.if (. - gText_Rom_2EB6C4) > 0x5
	.error "gText_Rom_2EB6C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB6C4) < 0x5
	.space 0x5 - (. - gText_Rom_2EB6C4)
	.endif
	.incbin "baserom.gba", 0x2eb6c9, 0x3

	@ src/data/moves_info.h:7996 moves_info_line_7996
	.globl gText_Rom_2EB6CC
gText_Rom_2EB6CC: @ 0x082EB6CC
	.string "くすぐる$"
	.if (. - gText_Rom_2EB6CC) > 0x5
	.error "gText_Rom_2EB6CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB6CC) < 0x5
	.space 0x5 - (. - gText_Rom_2EB6CC)
	.endif
	.incbin "baserom.gba", 0x2eb6d1, 0x3

	@ src/data/moves_info.h:8024 moves_info_line_8024
	.globl gText_Rom_2EB6D4
gText_Rom_2EB6D4: @ 0x082EB6D4
	.string "コスモパワー$"
	.if (. - gText_Rom_2EB6D4) > 0x7
	.error "gText_Rom_2EB6D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB6D4) < 0x7
	.space 0x7 - (. - gText_Rom_2EB6D4)
	.endif
	.incbin "baserom.gba", 0x2eb6db, 0x1

	@ src/data/moves_info.h:8053 moves_info_line_8053
	.globl gText_Rom_2EB6DC
gText_Rom_2EB6DC: @ 0x082EB6DC
	.string "しおふき$"
	.if (. - gText_Rom_2EB6DC) > 0x5
	.error "gText_Rom_2EB6DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB6DC) < 0x5
	.space 0x5 - (. - gText_Rom_2EB6DC)
	.endif
	.incbin "baserom.gba", 0x2eb6e1, 0x3

	@ src/data/moves_info.h:8073 moves_info_line_8073
	.globl gText_Rom_2EB6E4
gText_Rom_2EB6E4: @ 0x082EB6E4
	.string "シグナルビーム$"
	.if (. - gText_Rom_2EB6E4) > 0x8
	.error "gText_Rom_2EB6E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB6E4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB6E4)
	.endif

	@ src/data/moves_info.h:8097 moves_info_line_8097
	.globl gText_Rom_2EB6EC
gText_Rom_2EB6EC: @ 0x082EB6EC
	.string "シャドーパンチ$"
	.if (. - gText_Rom_2EB6EC) > 0x8
	.error "gText_Rom_2EB6EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB6EC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB6EC)
	.endif

	@ src/data/moves_info.h:8119 moves_info_line_8119
	.globl gText_Rom_2EB6F4
gText_Rom_2EB6F4: @ 0x082EB6F4
	.string "じんつうりき$"
	.if (. - gText_Rom_2EB6F4) > 0x7
	.error "gText_Rom_2EB6F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB6F4) < 0x7
	.space 0x7 - (. - gText_Rom_2EB6F4)
	.endif
	.incbin "baserom.gba", 0x2eb6fb, 0x1

	@ src/data/moves_info.h:8144 moves_info_line_8144
	.globl gText_Rom_2EB6FC
gText_Rom_2EB6FC: @ 0x082EB6FC
	.string "スカイアッパー$"
	.if (. - gText_Rom_2EB6FC) > 0x8
	.error "gText_Rom_2EB6FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB6FC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB6FC)
	.endif

	@ src/data/moves_info.h:8167 moves_info_line_8167
	.globl gText_Rom_2EB704
gText_Rom_2EB704: @ 0x082EB704
	.string "すなじごく$"
	.if (. - gText_Rom_2EB704) > 0x6
	.error "gText_Rom_2EB704 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB704) < 0x6
	.space 0x6 - (. - gText_Rom_2EB704)
	.endif
	.incbin "baserom.gba", 0x2eb70a, 0x2

	@ src/data/moves_info.h:8191 moves_info_line_8191
	.globl gText_Rom_2EB70C
gText_Rom_2EB70C: @ 0x082EB70C
	.string "ぜったいれいど$"
	.if (. - gText_Rom_2EB70C) > 0x8
	.error "gText_Rom_2EB70C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB70C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB70C)
	.endif

	@ src/data/moves_info.h:8213 moves_info_line_8213
	.globl gText_Rom_2EB714
gText_Rom_2EB714: @ 0x082EB714
	.string "だくりゅう$"
	.if (. - gText_Rom_2EB714) > 0x6
	.error "gText_Rom_2EB714 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB714) < 0x6
	.space 0x6 - (. - gText_Rom_2EB714)
	.endif
	.incbin "baserom.gba", 0x2eb71a, 0x2

	@ src/data/moves_info.h:8239 moves_info_line_8239
	.globl gText_Rom_2EB71C
gText_Rom_2EB71C: @ 0x082EB71C
	.string "タネマシンガン$"
	.if (. - gText_Rom_2EB71C) > 0x8
	.error "gText_Rom_2EB71C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB71C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB71C)
	.endif

	@ src/data/moves_info.h:8260 moves_info_line_8260
	.globl gText_Rom_2EB724
gText_Rom_2EB724: @ 0x082EB724
	.string "つばめがえし$"
	.if (. - gText_Rom_2EB724) > 0x7
	.error "gText_Rom_2EB724 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB724) < 0x7
	.space 0x7 - (. - gText_Rom_2EB724)
	.endif
	.incbin "baserom.gba", 0x2eb72b, 0x1

	@ src/data/moves_info.h:8282 moves_info_line_8282
	.globl gText_Rom_2EB72C
gText_Rom_2EB72C: @ 0x082EB72C
	.string "つららばり$"
	.if (. - gText_Rom_2EB72C) > 0x6
	.error "gText_Rom_2EB72C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB72C) < 0x6
	.space 0x6 - (. - gText_Rom_2EB72C)
	.endif
	.incbin "baserom.gba", 0x2eb732, 0x2

	@ src/data/moves_info.h:8302 moves_info_line_8302
	.globl gText_Rom_2EB734
gText_Rom_2EB734: @ 0x082EB734
	.string "てっぺき$"
	.if (. - gText_Rom_2EB734) > 0x5
	.error "gText_Rom_2EB734 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB734) < 0x5
	.space 0x5 - (. - gText_Rom_2EB734)
	.endif
	.incbin "baserom.gba", 0x2eb739, 0x3

	@ src/data/moves_info.h:8330 moves_info_line_8330
	.globl gText_Rom_2EB73C
gText_Rom_2EB73C: @ 0x082EB73C
	.string "とおせんぼう$"
	.if (. - gText_Rom_2EB73C) > 0x7
	.error "gText_Rom_2EB73C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB73C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB73C)
	.endif
	.incbin "baserom.gba", 0x2eb743, 0x1

	@ src/data/moves_info.h:8353 moves_info_line_8353
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB744
gText_Rom_2EB744: @ 0x082EB744
	.string "とおぼえ$"
	.if (. - gText_Rom_2EB744) != 0x5
	.error "gText_Rom_2EB744 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB745
	.set gText_Rom_2EB745, gText_Rom_2EB744 + 0x1
	.incbin "baserom.gba", 0x2eb749, 0x3

	@ src/data/moves_info.h:8382 moves_info_line_8382
	.globl gText_Rom_2EB74C
gText_Rom_2EB74C: @ 0x082EB74C
	.string "ドラゴンクロー$"
	.if (. - gText_Rom_2EB74C) > 0x8
	.error "gText_Rom_2EB74C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB74C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB74C)
	.endif

	@ src/data/moves_info.h:8403 moves_info_line_8403
	.globl gText_Rom_2EB754
gText_Rom_2EB754: @ 0x082EB754
	.string "ハードプラント$"
	.if (. - gText_Rom_2EB754) > 0x8
	.error "gText_Rom_2EB754 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB754) < 0x8
	.space 0x8 - (. - gText_Rom_2EB754)
	.endif

	@ src/data/moves_info.h:8428 moves_info_line_8428
	.globl gText_Rom_2EB75C
gText_Rom_2EB75C: @ 0x082EB75C
	.string "ビルドアップ$"
	.if (. - gText_Rom_2EB75C) > 0x7
	.error "gText_Rom_2EB75C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB75C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB75C)
	.endif
	.incbin "baserom.gba", 0x2eb763, 0x1

	@ src/data/moves_info.h:8457 moves_info_line_8457
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB764
gText_Rom_2EB764: @ 0x082EB764
	.string "とびはねる$"
	.if (. - gText_Rom_2EB764) != 0x6
	.error "gText_Rom_2EB764 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB766
	.set gText_Rom_2EB766, gText_Rom_2EB764 + 0x2
	.incbin "baserom.gba", 0x2eb76a, 0x2

	@ src/data/moves_info.h:8487 moves_info_line_8487
	.globl gText_Rom_2EB76C
gText_Rom_2EB76C: @ 0x082EB76C
	.string "マッドショット$"
	.if (. - gText_Rom_2EB76C) > 0x8
	.error "gText_Rom_2EB76C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB76C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB76C)
	.endif

	@ src/data/moves_info.h:8511 moves_info_line_8511
	.globl gText_Rom_2EB774
gText_Rom_2EB774: @ 0x082EB774
	.string "ポイズンテール$"
	.if (. - gText_Rom_2EB774) > 0x8
	.error "gText_Rom_2EB774 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB774) < 0x8
	.space 0x8 - (. - gText_Rom_2EB774)
	.endif

	@ src/data/moves_info.h:8537 moves_info_line_8537
	.globl gText_Rom_2EB77C
gText_Rom_2EB77C: @ 0x082EB77C
	.string "ほしがる$"
	.if (. - gText_Rom_2EB77C) > 0x5
	.error "gText_Rom_2EB77C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB77C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB77C)
	.endif
	.incbin "baserom.gba", 0x2eb781, 0x3

	@ src/data/moves_info.h:8562 moves_info_line_8562
	.globl gText_Rom_2EB784
gText_Rom_2EB784: @ 0x082EB784
	.string "ボルテッカー$"
	.if (. - gText_Rom_2EB784) > 0x7
	.error "gText_Rom_2EB784 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB784) < 0x7
	.space 0x7 - (. - gText_Rom_2EB784)
	.endif
	.incbin "baserom.gba", 0x2eb78b, 0x1

	@ src/data/moves_info.h:8590 moves_info_line_8590
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB78C
gText_Rom_2EB78C: @ 0x082EB78C
	.string "マジカルリーフ$"
	.if (. - gText_Rom_2EB78C) != 0x8
	.error "gText_Rom_2EB78C must retain its original byte length"
	.endif
	.globl gText_Rom_2EB790
	.set gText_Rom_2EB790, gText_Rom_2EB78C + 0x4

	@ src/battle_debug.c:372 battle_debug_line_372 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB794
gText_Rom_2EB794: @ 0x082EB794
	.string "みずあそび$"
	.if (. - gText_Rom_2EB794) != 0x6
	.error "gText_Rom_2EB794 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB796
	.set gText_Rom_2EB796, gText_Rom_2EB794 + 0x2
	.incbin "baserom.gba", 0x2eb79a, 0x2

	@ src/data/moves_info.h:8635 moves_info_line_8635
	.globl gText_Rom_2EB79C
gText_Rom_2EB79C: @ 0x082EB79C
	.string "めいそう$"
	.if (. - gText_Rom_2EB79C) > 0x5
	.error "gText_Rom_2EB79C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB79C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB79C)
	.endif
	.incbin "baserom.gba", 0x2eb7a1, 0x3

	@ src/data/moves_info.h:8664 moves_info_line_8664
	.globl gText_Rom_2EB7A4
gText_Rom_2EB7A4: @ 0x082EB7A4
	.string "リーフブレード$"
	.if (. - gText_Rom_2EB7A4) > 0x8
	.error "gText_Rom_2EB7A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB7A4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB7A4)
	.endif

	@ src/data/moves_info.h:8687 moves_info_line_8687
	.globl gText_Rom_2EB7AC
gText_Rom_2EB7AC: @ 0x082EB7AC
	.string "りゅうのまい$"
	.if (. - gText_Rom_2EB7AC) > 0x7
	.error "gText_Rom_2EB7AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB7AC) < 0x7
	.space 0x7 - (. - gText_Rom_2EB7AC)
	.endif
	.incbin "baserom.gba", 0x2eb7b3, 0x1

	@ src/data/moves_info.h:8717 moves_info_line_8717
	.globl gText_Rom_2EB7B4
gText_Rom_2EB7B4: @ 0x082EB7B4
	.string "ロックブラスト$"
	.if (. - gText_Rom_2EB7B4) > 0x8
	.error "gText_Rom_2EB7B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB7B4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB7B4)
	.endif

	@ src/data/moves_info.h:8738 moves_info_line_8738
	.globl gText_Rom_2EB7BC
gText_Rom_2EB7BC: @ 0x082EB7BC
	.string "でんげきは$"
	.if (. - gText_Rom_2EB7BC) > 0x6
	.error "gText_Rom_2EB7BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB7BC) < 0x6
	.space 0x6 - (. - gText_Rom_2EB7BC)
	.endif
	.incbin "baserom.gba", 0x2eb7c2, 0x2

	@ src/data/moves_info.h:8758 moves_info_line_8758
	.globl gText_Rom_2EB7C4
gText_Rom_2EB7C4: @ 0x082EB7C4
	.string "みずのはどう$"
	.if (. - gText_Rom_2EB7C4) > 0x7
	.error "gText_Rom_2EB7C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB7C4) < 0x7
	.space 0x7 - (. - gText_Rom_2EB7C4)
	.endif
	.incbin "baserom.gba", 0x2eb7cb, 0x1

	@ src/data/moves_info.h:8783 moves_info_line_8783
	.globl gText_Rom_2EB7CC
gText_Rom_2EB7CC: @ 0x082EB7CC
	.string "はめつのねがい$"
	.if (. - gText_Rom_2EB7CC) > 0x8
	.error "gText_Rom_2EB7CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB7CC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB7CC)
	.endif

	@ src/data/moves_info.h:8805 moves_info_line_8805
	.globl gText_Rom_2EB7D4
gText_Rom_2EB7D4: @ 0x082EB7D4
	.string "サイコブースト$"
	.if (. - gText_Rom_2EB7D4) > 0x8
	.error "gText_Rom_2EB7D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB7D4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB7D4)
	.endif
	.incbin "baserom.gba", 0x2eb7dc, 0x4c
	.globl gUnknown_82EB828
gUnknown_82EB828: @ 0x082EB828
	.incbin "baserom.gba", 0x2eb828, 0x18
	.globl gUnknown_82EB840
gUnknown_82EB840: @ 0x082EB840
	.incbin "baserom.gba", 0x2eb840, 0x18
	.globl gUnknown_82EB858
gUnknown_82EB858: @ 0x082EB858
	.incbin "baserom.gba", 0x2eb858, 0x8
	.globl gUnknown_82EB860
gUnknown_82EB860: @ 0x082EB860
	.incbin "baserom.gba", 0x2eb860, 0x198
	.globl gUnknown_82EB9F8
gUnknown_82EB9F8: @ 0x082EB9F8
	.incbin "baserom.gba", 0x2eb9f8, 0x8
	.globl gUnknown_82EBA00
gUnknown_82EBA00: @ 0x082EBA00
	.incbin "baserom.gba", 0x2eba00, 0xc8
	.globl gUnknown_82EBAC8
gUnknown_82EBAC8: @ 0x082EBAC8
	.incbin "baserom.gba", 0x2ebac8, 0x18
	.globl gUnknown_82EBAE0
gUnknown_82EBAE0: @ 0x082EBAE0
	.incbin "baserom.gba", 0x2ebae0, 0x50
	.globl gUnknown_82EBB30
gUnknown_82EBB30: @ 0x082EBB30
	.incbin "baserom.gba", 0x2ebb30, 0x8
	.globl gUnknown_82EBB38
gUnknown_82EBB38: @ 0x082EBB38
	.incbin "baserom.gba", 0x2ebb38, 0x150
	.globl gUnknown_82EBC88
gUnknown_82EBC88: @ 0x082EBC88

	@ src/data/easy_chat/easy_chat_group_events.h:11 gEasyChatWord_Evolution (+4 aliases)
	.globl gText_Rom_2EBC88
gText_Rom_2EBC88: @ 0x082EBC88
	.string "ノーマル$"
	.if (. - gText_Rom_2EBC88) > 0x5
	.error "gText_Rom_2EBC88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBC88) < 0x5
	.space 0x5 - (. - gText_Rom_2EBC88)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:100 easy_chat_group_status_line_100 (+1 aliases)
	.globl gText_Rom_2EBC8D
gText_Rom_2EBC8D: @ 0x082EBC8D
	.string "かくとう$"
	.if (. - gText_Rom_2EBC8D) > 0x5
	.error "gText_Rom_2EBC8D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBC8D) < 0x5
	.space 0x5 - (. - gText_Rom_2EBC8D)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:454 easy_chat_group_status_line_454 (+2 aliases)
	.globl gText_Rom_2EBC92
gText_Rom_2EBC92: @ 0x082EBC92
	.string "ひこう$"
	.if (. - gText_Rom_2EBC92) > 0x4
	.error "gText_Rom_2EBC92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBC92) < 0x4
	.space 0x4 - (. - gText_Rom_2EBC92)
	.endif
	.incbin "baserom.gba", 0x2ebc96, 0x6

	@ src/data/easy_chat/easy_chat_group_status.h:232 easy_chat_group_status_line_232 (+1 aliases)
	.globl gText_Rom_2EBC9C
gText_Rom_2EBC9C: @ 0x082EBC9C
	.string "じめん$"
	.if (. - gText_Rom_2EBC9C) > 0x4
	.error "gText_Rom_2EBC9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBC9C) < 0x4
	.space 0x4 - (. - gText_Rom_2EBC9C)
	.endif
	.incbin "baserom.gba", 0x2ebca0, 0xb

	@ src/data/easy_chat/easy_chat_group_status.h:190 easy_chat_group_status_line_190 (+3 aliases)
	.globl gText_Rom_2EBCAB
gText_Rom_2EBCAB: @ 0x082EBCAB
	.string "ゴースト$"
	.if (. - gText_Rom_2EBCAB) > 0x5
	.error "gText_Rom_2EBCAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBCAB) < 0x5
	.space 0x5 - (. - gText_Rom_2EBCAB)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:424 easy_chat_group_status_line_424 (+1 aliases)
	.globl gText_Rom_2EBCB0
gText_Rom_2EBCB0: @ 0x082EBCB0
	.string "はがね$"
	.if (. - gText_Rom_2EBCB0) > 0x4
	.error "gText_Rom_2EBCB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBCB0) < 0x4
	.space 0x4 - (. - gText_Rom_2EBCB0)
	.endif
	.incbin "baserom.gba", 0x2ebcb4, 0x6

	@ src/data/easy_chat/easy_chat_group_status.h:544 easy_chat_group_status_line_544 (+1 aliases)
	.globl gText_Rom_2EBCBA
gText_Rom_2EBCBA: @ 0x082EBCBA
	.string "ほのお$"
	.if (. - gText_Rom_2EBCBA) > 0x4
	.error "gText_Rom_2EBCBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBCBA) < 0x4
	.space 0x4 - (. - gText_Rom_2EBCBA)
	.endif
	.incbin "baserom.gba", 0x2ebcbe, 0xb

	@ src/data/easy_chat/easy_chat_group_status.h:346 easy_chat_group_status_line_346 (+1 aliases)
	.globl gText_Rom_2EBCC9
gText_Rom_2EBCC9: @ 0x082EBCC9
	.string "でんき$"
	.if (. - gText_Rom_2EBCC9) > 0x4
	.error "gText_Rom_2EBCC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBCC9) < 0x4
	.space 0x4 - (. - gText_Rom_2EBCC9)
	.endif
	.incbin "baserom.gba", 0x2ebccd, 0x1

	@ src/data/easy_chat/easy_chat_group_status.h:88 easy_chat_group_status_line_88 (+1 aliases)
	.globl gText_Rom_2EBCCE
gText_Rom_2EBCCE: @ 0x082EBCCE
	.string "エスパー$"
	.if (. - gText_Rom_2EBCCE) > 0x5
	.error "gText_Rom_2EBCCE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBCCE) < 0x5
	.space 0x5 - (. - gText_Rom_2EBCCE)
	.endif

	@ src/battle_debug.c:349 battle_debug_line_349 (+5 aliases)
	.globl gText_Rom_2EBCD3
gText_Rom_2EBCD3: @ 0x082EBCD3
	.string "こおり$"
	.if (. - gText_Rom_2EBCD3) > 0x4
	.error "gText_Rom_2EBCD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBCD3) < 0x4
	.space 0x4 - (. - gText_Rom_2EBCD3)
	.endif
	.incbin "baserom.gba", 0x2ebcd7, 0x1

	@ src/data/easy_chat/easy_chat_group_status.h:376 easy_chat_group_status_line_376 (+2 aliases)
	.globl gText_Rom_2EBCD8
gText_Rom_2EBCD8: @ 0x082EBCD8
	.string "ドラゴン$"
	.if (. - gText_Rom_2EBCD8) > 0x5
	.error "gText_Rom_2EBCD8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBCD8) < 0x5
	.space 0x5 - (. - gText_Rom_2EBCD8)
	.endif
	.incbin "baserom.gba", 0x2ebcdd, 0x7
	.globl gUnknown_82EBCE4
gUnknown_82EBCE4: @ 0x082EBCE4
	.incbin "baserom.gba", 0x2ebce4, 0xe0
	.globl gUnknown_82EBDC4
gUnknown_82EBDC4: @ 0x082EBDC4

	@ src/battle_records.c:89 sText_DashesNoPlayer (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EBDC4
gText_Rom_2EBDC4: @ 0x082EBDC4
	.string "-------$"
	.if (. - gText_Rom_2EBDC4) != 0x8
	.error "gText_Rom_2EBDC4 must retain its original byte length"
	.endif
	.globl gText_Rom_2EBDC7
	.set gText_Rom_2EBDC7, gText_Rom_2EBDC4 + 0x3
	.globl gText_Rom_2EBDC8
	.set gText_Rom_2EBDC8, gText_Rom_2EBDC4 + 0x4

	@ src/data/abilities.h:14 abilities_line_14 (+1 aliases)
	.globl gText_Rom_2EBDCC
gText_Rom_2EBDCC: @ 0x082EBDCC
	.string "あくしゅう$"
	.if (. - gText_Rom_2EBDCC) > 0x6
	.error "gText_Rom_2EBDCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBDCC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBDCC)
	.endif
	.incbin "baserom.gba", 0x2ebdd2, 0x2

	@ src/data/abilities.h:21 abilities_line_21 (+1 aliases)
	.globl gText_Rom_2EBDD4
gText_Rom_2EBDD4: @ 0x082EBDD4
	.string "あめふらし$"
	.if (. - gText_Rom_2EBDD4) > 0x6
	.error "gText_Rom_2EBDD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBDD4) < 0x6
	.space 0x6 - (. - gText_Rom_2EBDD4)
	.endif
	.incbin "baserom.gba", 0x2ebdda, 0x2

	@ src/data/abilities.h:28 abilities_line_28 (+1 aliases)
	.globl gText_Rom_2EBDDC
gText_Rom_2EBDDC: @ 0x082EBDDC
	.string "かそく$"
	.if (. - gText_Rom_2EBDDC) > 0x4
	.error "gText_Rom_2EBDDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBDDC) < 0x4
	.space 0x4 - (. - gText_Rom_2EBDDC)
	.endif
	.incbin "baserom.gba", 0x2ebde0, 0x4

	@ src/data/abilities.h:35 abilities_line_35 (+1 aliases)
	.globl gText_Rom_2EBDE4
gText_Rom_2EBDE4: @ 0x082EBDE4
	.string "カブトアーマー$"
	.if (. - gText_Rom_2EBDE4) > 0x8
	.error "gText_Rom_2EBDE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBDE4) < 0x8
	.space 0x8 - (. - gText_Rom_2EBDE4)
	.endif

	@ src/data/abilities.h:43 abilities_line_43 (+1 aliases)
	.globl gText_Rom_2EBDEC
gText_Rom_2EBDEC: @ 0x082EBDEC
	.string "がんじょう$"
	.if (. - gText_Rom_2EBDEC) > 0x6
	.error "gText_Rom_2EBDEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBDEC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBDEC)
	.endif
	.incbin "baserom.gba", 0x2ebdf2, 0x2

	@ src/data/abilities.h:51 abilities_line_51 (+1 aliases)
	.globl gText_Rom_2EBDF4
gText_Rom_2EBDF4: @ 0x082EBDF4
	.string "しめりけ$"
	.if (. - gText_Rom_2EBDF4) > 0x5
	.error "gText_Rom_2EBDF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBDF4) < 0x5
	.space 0x5 - (. - gText_Rom_2EBDF4)
	.endif
	.incbin "baserom.gba", 0x2ebdf9, 0x3

	@ src/data/abilities.h:59 abilities_line_59 (+1 aliases)
	.globl gText_Rom_2EBDFC
gText_Rom_2EBDFC: @ 0x082EBDFC
	.string "じゅうなん$"
	.if (. - gText_Rom_2EBDFC) > 0x6
	.error "gText_Rom_2EBDFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBDFC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBDFC)
	.endif
	.incbin "baserom.gba", 0x2ebe02, 0x2

	@ src/data/abilities.h:67 abilities_line_67 (+1 aliases)
	.globl gText_Rom_2EBE04
gText_Rom_2EBE04: @ 0x082EBE04
	.string "すながくれ$"
	.if (. - gText_Rom_2EBE04) > 0x6
	.error "gText_Rom_2EBE04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE04) < 0x6
	.space 0x6 - (. - gText_Rom_2EBE04)
	.endif
	.incbin "baserom.gba", 0x2ebe0a, 0x2

	@ src/data/abilities.h:75 abilities_line_75 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EBE0C
gText_Rom_2EBE0C: @ 0x082EBE0C
	.string "せいでんき$"
	.if (. - gText_Rom_2EBE0C) != 0x6
	.error "gText_Rom_2EBE0C must retain its original byte length"
	.endif
	.globl gText_Rom_2EBE0E
	.set gText_Rom_2EBE0E, gText_Rom_2EBE0C + 0x2
	.incbin "baserom.gba", 0x2ebe12, 0x2

	@ src/data/abilities.h:82 abilities_line_82 (+1 aliases)
	.globl gText_Rom_2EBE14
gText_Rom_2EBE14: @ 0x082EBE14
	.string "ちくでん$"
	.if (. - gText_Rom_2EBE14) > 0x5
	.error "gText_Rom_2EBE14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE14) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE14)
	.endif
	.incbin "baserom.gba", 0x2ebe19, 0x3

	@ src/data/abilities.h:90 abilities_line_90 (+1 aliases)
	.globl gText_Rom_2EBE1C
gText_Rom_2EBE1C: @ 0x082EBE1C
	.string "ちょすい$"
	.if (. - gText_Rom_2EBE1C) > 0x5
	.error "gText_Rom_2EBE1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE1C) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE1C)
	.endif
	.incbin "baserom.gba", 0x2ebe21, 0x3

	@ src/data/abilities.h:98 abilities_line_98 (+1 aliases)
	.globl gText_Rom_2EBE24
gText_Rom_2EBE24: @ 0x082EBE24
	.string "どんかん$"
	.if (. - gText_Rom_2EBE24) > 0x5
	.error "gText_Rom_2EBE24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE24) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE24)
	.endif
	.incbin "baserom.gba", 0x2ebe29, 0x3

	@ src/data/abilities.h:106 abilities_line_106 (+1 aliases)
	.globl gText_Rom_2EBE2C
gText_Rom_2EBE2C: @ 0x082EBE2C
	.string "ノーてんき$"
	.if (. - gText_Rom_2EBE2C) > 0x6
	.error "gText_Rom_2EBE2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE2C) < 0x6
	.space 0x6 - (. - gText_Rom_2EBE2C)
	.endif
	.incbin "baserom.gba", 0x2ebe32, 0x2

	@ src/data/abilities.h:113 abilities_line_113 (+1 aliases)
	.globl gText_Rom_2EBE34
gText_Rom_2EBE34: @ 0x082EBE34
	.string "ふくがん$"
	.if (. - gText_Rom_2EBE34) > 0x5
	.error "gText_Rom_2EBE34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE34) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE34)
	.endif
	.incbin "baserom.gba", 0x2ebe39, 0x3

	@ src/data/abilities.h:120 abilities_line_120 (+1 aliases)
	.globl gText_Rom_2EBE3C
gText_Rom_2EBE3C: @ 0x082EBE3C
	.string "ふみん$"
	.if (. - gText_Rom_2EBE3C) > 0x4
	.error "gText_Rom_2EBE3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE3C) < 0x4
	.space 0x4 - (. - gText_Rom_2EBE3C)
	.endif
	.incbin "baserom.gba", 0x2ebe40, 0x4

	@ src/data/abilities.h:128 abilities_line_128 (+1 aliases)
	.globl gText_Rom_2EBE44
gText_Rom_2EBE44: @ 0x082EBE44
	.string "へんしょく$"
	.if (. - gText_Rom_2EBE44) > 0x6
	.error "gText_Rom_2EBE44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE44) < 0x6
	.space 0x6 - (. - gText_Rom_2EBE44)
	.endif
	.incbin "baserom.gba", 0x2ebe4a, 0x2

	@ src/data/abilities.h:135 abilities_line_135 (+1 aliases)
	.globl gText_Rom_2EBE4C
gText_Rom_2EBE4C: @ 0x082EBE4C
	.string "めんえき$"
	.if (. - gText_Rom_2EBE4C) > 0x5
	.error "gText_Rom_2EBE4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE4C) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE4C)
	.endif
	.incbin "baserom.gba", 0x2ebe51, 0x3

	@ src/data/abilities.h:143 abilities_line_143 (+1 aliases)
	.globl gText_Rom_2EBE54
gText_Rom_2EBE54: @ 0x082EBE54
	.string "もらいび$"
	.if (. - gText_Rom_2EBE54) > 0x5
	.error "gText_Rom_2EBE54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE54) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE54)
	.endif
	.incbin "baserom.gba", 0x2ebe59, 0x3

	@ src/data/abilities.h:151 abilities_line_151 (+1 aliases)
	.globl gText_Rom_2EBE5C
gText_Rom_2EBE5C: @ 0x082EBE5C
	.string "りんぷん$"
	.if (. - gText_Rom_2EBE5C) > 0x5
	.error "gText_Rom_2EBE5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE5C) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE5C)
	.endif
	.incbin "baserom.gba", 0x2ebe61, 0x3

	@ src/data/abilities.h:159 abilities_line_159 (+1 aliases)
	.globl gText_Rom_2EBE64
gText_Rom_2EBE64: @ 0x082EBE64
	.string "マイペース$"
	.if (. - gText_Rom_2EBE64) > 0x6
	.error "gText_Rom_2EBE64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE64) < 0x6
	.space 0x6 - (. - gText_Rom_2EBE64)
	.endif
	.incbin "baserom.gba", 0x2ebe6a, 0x2

	@ src/data/abilities.h:167 abilities_line_167 (+1 aliases)
	.globl gText_Rom_2EBE6C
gText_Rom_2EBE6C: @ 0x082EBE6C
	.string "きゅうばん$"
	.if (. - gText_Rom_2EBE6C) > 0x6
	.error "gText_Rom_2EBE6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE6C) < 0x6
	.space 0x6 - (. - gText_Rom_2EBE6C)
	.endif
	.incbin "baserom.gba", 0x2ebe72, 0x2

	@ src/data/abilities.h:175 abilities_line_175 (+1 aliases)
	.globl gText_Rom_2EBE74
gText_Rom_2EBE74: @ 0x082EBE74
	.string "いかく$"
	.if (. - gText_Rom_2EBE74) > 0x4
	.error "gText_Rom_2EBE74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE74) < 0x4
	.space 0x4 - (. - gText_Rom_2EBE74)
	.endif
	.incbin "baserom.gba", 0x2ebe78, 0x4

	@ src/data/abilities.h:182 abilities_line_182 (+1 aliases)
	.globl gText_Rom_2EBE7C
gText_Rom_2EBE7C: @ 0x082EBE7C
	.string "かげふみ$"
	.if (. - gText_Rom_2EBE7C) > 0x5
	.error "gText_Rom_2EBE7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE7C) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE7C)
	.endif
	.incbin "baserom.gba", 0x2ebe81, 0x3

	@ src/data/abilities.h:189 abilities_line_189 (+1 aliases)
	.globl gText_Rom_2EBE84
gText_Rom_2EBE84: @ 0x082EBE84
	.string "さめはだ$"
	.if (. - gText_Rom_2EBE84) > 0x5
	.error "gText_Rom_2EBE84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE84) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE84)
	.endif
	.incbin "baserom.gba", 0x2ebe89, 0x3

	@ src/data/abilities.h:196 abilities_line_196 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EBE8C
gText_Rom_2EBE8C: @ 0x082EBE8C
	.string "ふしぎなまもり$"
	.if (. - gText_Rom_2EBE8C) != 0x8
	.error "gText_Rom_2EBE8C must retain its original byte length"
	.endif
	.globl gText_Rom_2EBE90
	.set gText_Rom_2EBE90, gText_Rom_2EBE8C + 0x4

	@ src/data/abilities.h:206 abilities_line_206 (+1 aliases)
	.globl gText_Rom_2EBE94
gText_Rom_2EBE94: @ 0x082EBE94
	.string "ふゆう$"
	.if (. - gText_Rom_2EBE94) > 0x4
	.error "gText_Rom_2EBE94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE94) < 0x4
	.space 0x4 - (. - gText_Rom_2EBE94)
	.endif
	.incbin "baserom.gba", 0x2ebe98, 0x4

	@ src/data/abilities.h:214 abilities_line_214 (+1 aliases)
	.globl gText_Rom_2EBE9C
gText_Rom_2EBE9C: @ 0x082EBE9C
	.string "ほうし$"
	.if (. - gText_Rom_2EBE9C) > 0x4
	.error "gText_Rom_2EBE9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE9C) < 0x4
	.space 0x4 - (. - gText_Rom_2EBE9C)
	.endif
	.incbin "baserom.gba", 0x2ebea0, 0x4

	@ src/data/abilities.h:221 abilities_line_221 (+1 aliases)
	.globl gText_Rom_2EBEA4
gText_Rom_2EBEA4: @ 0x082EBEA4
	.string "シンクロ$"
	.if (. - gText_Rom_2EBEA4) > 0x5
	.error "gText_Rom_2EBEA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEA4) < 0x5
	.space 0x5 - (. - gText_Rom_2EBEA4)
	.endif
	.incbin "baserom.gba", 0x2ebea9, 0x3

	@ src/data/abilities.h:228 abilities_line_228 (+1 aliases)
	.globl gText_Rom_2EBEAC
gText_Rom_2EBEAC: @ 0x082EBEAC
	.string "クリアボディ$"
	.if (. - gText_Rom_2EBEAC) > 0x7
	.error "gText_Rom_2EBEAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEAC) < 0x7
	.space 0x7 - (. - gText_Rom_2EBEAC)
	.endif
	.incbin "baserom.gba", 0x2ebeb3, 0x1

	@ src/data/abilities.h:236 abilities_line_236 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EBEB4
gText_Rom_2EBEB4: @ 0x082EBEB4
	.string "しぜんかいふく$"
	.if (. - gText_Rom_2EBEB4) != 0x8
	.error "gText_Rom_2EBEB4 must retain its original byte length"
	.endif
	.globl gText_Rom_2EBEB5
	.set gText_Rom_2EBEB5, gText_Rom_2EBEB4 + 0x1
	.globl gText_Rom_2EBEB7
	.set gText_Rom_2EBEB7, gText_Rom_2EBEB4 + 0x3

	@ src/data/abilities.h:243 abilities_line_243 (+1 aliases)
	.globl gText_Rom_2EBEBC
gText_Rom_2EBEBC: @ 0x082EBEBC
	.string "ひらいしん$"
	.if (. - gText_Rom_2EBEBC) > 0x6
	.error "gText_Rom_2EBEBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEBC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBEBC)
	.endif
	.incbin "baserom.gba", 0x2ebec2, 0x2

	@ src/data/abilities.h:251 abilities_line_251 (+1 aliases)
	.globl gText_Rom_2EBEC4
gText_Rom_2EBEC4: @ 0x082EBEC4
	.string "てんのめぐみ$"
	.if (. - gText_Rom_2EBEC4) > 0x7
	.error "gText_Rom_2EBEC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEC4) < 0x7
	.space 0x7 - (. - gText_Rom_2EBEC4)
	.endif
	.incbin "baserom.gba", 0x2ebecb, 0x1

	@ src/data/abilities.h:258 abilities_line_258 (+1 aliases)
	.globl gText_Rom_2EBECC
gText_Rom_2EBECC: @ 0x082EBECC
	.string "すいすい$"
	.if (. - gText_Rom_2EBECC) > 0x5
	.error "gText_Rom_2EBECC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBECC) < 0x5
	.space 0x5 - (. - gText_Rom_2EBECC)
	.endif
	.incbin "baserom.gba", 0x2ebed1, 0x3

	@ src/data/abilities.h:265 abilities_line_265 (+1 aliases)
	.globl gText_Rom_2EBED4
gText_Rom_2EBED4: @ 0x082EBED4
	.string "ようりょくそ$"
	.if (. - gText_Rom_2EBED4) > 0x7
	.error "gText_Rom_2EBED4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBED4) < 0x7
	.space 0x7 - (. - gText_Rom_2EBED4)
	.endif
	.incbin "baserom.gba", 0x2ebedb, 0x1

	@ src/data/abilities.h:272 abilities_line_272 (+1 aliases)
	.globl gText_Rom_2EBEDC
gText_Rom_2EBEDC: @ 0x082EBEDC
	.string "はっこう$"
	.if (. - gText_Rom_2EBEDC) > 0x5
	.error "gText_Rom_2EBEDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEDC) < 0x5
	.space 0x5 - (. - gText_Rom_2EBEDC)
	.endif
	.incbin "baserom.gba", 0x2ebee1, 0x3

	@ src/data/abilities.h:280 abilities_line_280 (+1 aliases)
	.globl gText_Rom_2EBEE4
gText_Rom_2EBEE4: @ 0x082EBEE4
	.string "トレース$"
	.if (. - gText_Rom_2EBEE4) > 0x5
	.error "gText_Rom_2EBEE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEE4) < 0x5
	.space 0x5 - (. - gText_Rom_2EBEE4)
	.endif
	.incbin "baserom.gba", 0x2ebee9, 0x3

	@ src/data/abilities.h:289 abilities_line_289 (+1 aliases)
	.globl gText_Rom_2EBEEC
gText_Rom_2EBEEC: @ 0x082EBEEC
	.string "ちからもち$"
	.if (. - gText_Rom_2EBEEC) > 0x6
	.error "gText_Rom_2EBEEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEEC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBEEC)
	.endif
	.incbin "baserom.gba", 0x2ebef2, 0x2

	@ src/data/abilities.h:296 abilities_line_296 (+1 aliases)
	.globl gText_Rom_2EBEF4
gText_Rom_2EBEF4: @ 0x082EBEF4
	.string "どくのトゲ$"
	.if (. - gText_Rom_2EBEF4) > 0x6
	.error "gText_Rom_2EBEF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEF4) < 0x6
	.space 0x6 - (. - gText_Rom_2EBEF4)
	.endif
	.incbin "baserom.gba", 0x2ebefa, 0x2

	@ src/data/abilities.h:303 abilities_line_303 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EBEFC
gText_Rom_2EBEFC: @ 0x082EBEFC
	.string "せいしんりょく$"
	.if (. - gText_Rom_2EBEFC) != 0x8
	.error "gText_Rom_2EBEFC must retain its original byte length"
	.endif
	.globl gText_Rom_2EBEFE
	.set gText_Rom_2EBEFE, gText_Rom_2EBEFC + 0x2

	@ src/data/abilities.h:311 abilities_line_311 (+1 aliases)
	.globl gText_Rom_2EBF04
gText_Rom_2EBF04: @ 0x082EBF04
	.string "マグマのよろい$"
	.if (. - gText_Rom_2EBF04) > 0x8
	.error "gText_Rom_2EBF04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF04) < 0x8
	.space 0x8 - (. - gText_Rom_2EBF04)
	.endif

	@ src/data/abilities.h:319 abilities_line_319 (+1 aliases)
	.globl gText_Rom_2EBF0C
gText_Rom_2EBF0C: @ 0x082EBF0C
	.string "みずのベール$"
	.if (. - gText_Rom_2EBF0C) > 0x7
	.error "gText_Rom_2EBF0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF0C) < 0x7
	.space 0x7 - (. - gText_Rom_2EBF0C)
	.endif
	.incbin "baserom.gba", 0x2ebf13, 0x1

	@ src/data/abilities.h:327 abilities_line_327 (+1 aliases)
	.globl gText_Rom_2EBF14
gText_Rom_2EBF14: @ 0x082EBF14
	.string "じりょく$"
	.if (. - gText_Rom_2EBF14) > 0x5
	.error "gText_Rom_2EBF14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF14) < 0x5
	.space 0x5 - (. - gText_Rom_2EBF14)
	.endif
	.incbin "baserom.gba", 0x2ebf19, 0x3

	@ src/data/abilities.h:334 abilities_line_334 (+1 aliases)
	.globl gText_Rom_2EBF1C
gText_Rom_2EBF1C: @ 0x082EBF1C
	.string "ぼうおん$"
	.if (. - gText_Rom_2EBF1C) > 0x5
	.error "gText_Rom_2EBF1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF1C) < 0x5
	.space 0x5 - (. - gText_Rom_2EBF1C)
	.endif
	.incbin "baserom.gba", 0x2ebf21, 0x3

	@ src/data/abilities.h:342 abilities_line_342 (+1 aliases)
	.globl gText_Rom_2EBF24
gText_Rom_2EBF24: @ 0x082EBF24
	.string "あめうけざら$"
	.if (. - gText_Rom_2EBF24) > 0x7
	.error "gText_Rom_2EBF24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF24) < 0x7
	.space 0x7 - (. - gText_Rom_2EBF24)
	.endif
	.incbin "baserom.gba", 0x2ebf2b, 0x1

	@ src/data/abilities.h:349 abilities_line_349 (+1 aliases)
	.globl gText_Rom_2EBF2C
gText_Rom_2EBF2C: @ 0x082EBF2C
	.string "すなおこし$"
	.if (. - gText_Rom_2EBF2C) > 0x6
	.error "gText_Rom_2EBF2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF2C) < 0x6
	.space 0x6 - (. - gText_Rom_2EBF2C)
	.endif
	.incbin "baserom.gba", 0x2ebf32, 0x2

	@ src/data/abilities.h:356 abilities_line_356 (+1 aliases)
	.globl gText_Rom_2EBF34
gText_Rom_2EBF34: @ 0x082EBF34
	.string "プレッシャー$"
	.if (. - gText_Rom_2EBF34) > 0x7
	.error "gText_Rom_2EBF34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF34) < 0x7
	.space 0x7 - (. - gText_Rom_2EBF34)
	.endif
	.incbin "baserom.gba", 0x2ebf3b, 0x1

	@ src/data/abilities.h:363 abilities_line_363 (+1 aliases)
	.globl gText_Rom_2EBF3C
gText_Rom_2EBF3C: @ 0x082EBF3C
	.string "あついしぼう$"
	.if (. - gText_Rom_2EBF3C) > 0x7
	.error "gText_Rom_2EBF3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF3C) < 0x7
	.space 0x7 - (. - gText_Rom_2EBF3C)
	.endif
	.incbin "baserom.gba", 0x2ebf43, 0x1

	@ src/data/abilities.h:371 abilities_line_371 (+1 aliases)
	.globl gText_Rom_2EBF44
gText_Rom_2EBF44: @ 0x082EBF44
	.string "はやおき$"
	.if (. - gText_Rom_2EBF44) > 0x5
	.error "gText_Rom_2EBF44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF44) < 0x5
	.space 0x5 - (. - gText_Rom_2EBF44)
	.endif
	.incbin "baserom.gba", 0x2ebf49, 0x3

	@ src/data/abilities.h:378 abilities_line_378 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EBF4C
gText_Rom_2EBF4C: @ 0x082EBF4C
	.string "ほのおのからだ$"
	.if (. - gText_Rom_2EBF4C) != 0x8
	.error "gText_Rom_2EBF4C must retain its original byte length"
	.endif
	.globl gText_Rom_2EBF50
	.set gText_Rom_2EBF50, gText_Rom_2EBF4C + 0x4

	@ src/data/abilities.h:385 abilities_line_385 (+1 aliases)
	.globl gText_Rom_2EBF54
gText_Rom_2EBF54: @ 0x082EBF54
	.string "にげあし$"
	.if (. - gText_Rom_2EBF54) > 0x5
	.error "gText_Rom_2EBF54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF54) < 0x5
	.space 0x5 - (. - gText_Rom_2EBF54)
	.endif
	.incbin "baserom.gba", 0x2ebf59, 0x3

	@ src/data/abilities.h:392 abilities_line_392 (+1 aliases)
	.globl gText_Rom_2EBF5C
gText_Rom_2EBF5C: @ 0x082EBF5C
	.string "するどいめ$"
	.if (. - gText_Rom_2EBF5C) > 0x6
	.error "gText_Rom_2EBF5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF5C) < 0x6
	.space 0x6 - (. - gText_Rom_2EBF5C)
	.endif
	.incbin "baserom.gba", 0x2ebf62, 0x2

	@ src/data/abilities.h:400 abilities_line_400 (+1 aliases)
	.globl gText_Rom_2EBF64
gText_Rom_2EBF64: @ 0x082EBF64
	.string "かいりきバサミ$"
	.if (. - gText_Rom_2EBF64) > 0x8
	.error "gText_Rom_2EBF64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF64) < 0x8
	.space 0x8 - (. - gText_Rom_2EBF64)
	.endif

	@ src/data/abilities.h:408 abilities_line_408 (+1 aliases)
	.globl gText_Rom_2EBF6C
gText_Rom_2EBF6C: @ 0x082EBF6C
	.string "ものひろい$"
	.if (. - gText_Rom_2EBF6C) > 0x6
	.error "gText_Rom_2EBF6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF6C) < 0x6
	.space 0x6 - (. - gText_Rom_2EBF6C)
	.endif
	.incbin "baserom.gba", 0x2ebf72, 0x2

	@ src/data/abilities.h:415 abilities_line_415 (+1 aliases)
	.globl gText_Rom_2EBF74
gText_Rom_2EBF74: @ 0x082EBF74
	.string "なまけ$"
	.if (. - gText_Rom_2EBF74) > 0x4
	.error "gText_Rom_2EBF74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF74) < 0x4
	.space 0x4 - (. - gText_Rom_2EBF74)
	.endif
	.incbin "baserom.gba", 0x2ebf78, 0x4

	@ src/data/abilities.h:423 abilities_line_423 (+1 aliases)
	.globl gText_Rom_2EBF7C
gText_Rom_2EBF7C: @ 0x082EBF7C
	.string "はりきり$"
	.if (. - gText_Rom_2EBF7C) > 0x5
	.error "gText_Rom_2EBF7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF7C) < 0x5
	.space 0x5 - (. - gText_Rom_2EBF7C)
	.endif
	.incbin "baserom.gba", 0x2ebf81, 0x3

	@ src/data/abilities.h:430 abilities_line_430 (+1 aliases)
	.globl gText_Rom_2EBF84
gText_Rom_2EBF84: @ 0x082EBF84
	.string "メロメロボディ$"
	.if (. - gText_Rom_2EBF84) > 0x8
	.error "gText_Rom_2EBF84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF84) < 0x8
	.space 0x8 - (. - gText_Rom_2EBF84)
	.endif

	@ src/data/abilities.h:437 abilities_line_437 (+1 aliases)
	.globl gText_Rom_2EBF8C
gText_Rom_2EBF8C: @ 0x082EBF8C
	.string "プラス$"
	.if (. - gText_Rom_2EBF8C) > 0x4
	.error "gText_Rom_2EBF8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF8C) < 0x4
	.space 0x4 - (. - gText_Rom_2EBF8C)
	.endif
	.incbin "baserom.gba", 0x2ebf90, 0x4

	@ src/data/abilities.h:444 abilities_line_444 (+1 aliases)
	.globl gText_Rom_2EBF94
gText_Rom_2EBF94: @ 0x082EBF94
	.string "マイナス$"
	.if (. - gText_Rom_2EBF94) > 0x5
	.error "gText_Rom_2EBF94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF94) < 0x5
	.space 0x5 - (. - gText_Rom_2EBF94)
	.endif
	.incbin "baserom.gba", 0x2ebf99, 0x3

	@ src/data/abilities.h:451 abilities_line_451 (+1 aliases)
	.globl gText_Rom_2EBF9C
gText_Rom_2EBF9C: @ 0x082EBF9C
	.string "てんきや$"
	.if (. - gText_Rom_2EBF9C) > 0x5
	.error "gText_Rom_2EBF9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF9C) < 0x5
	.space 0x5 - (. - gText_Rom_2EBF9C)
	.endif
	.incbin "baserom.gba", 0x2ebfa1, 0x3

	@ src/data/abilities.h:461 abilities_line_461 (+1 aliases)
	.globl gText_Rom_2EBFA4
gText_Rom_2EBFA4: @ 0x082EBFA4
	.string "ねんちゃく$"
	.if (. - gText_Rom_2EBFA4) > 0x6
	.error "gText_Rom_2EBFA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFA4) < 0x6
	.space 0x6 - (. - gText_Rom_2EBFA4)
	.endif
	.incbin "baserom.gba", 0x2ebfaa, 0x2

	@ src/data/abilities.h:469 abilities_line_469 (+1 aliases)
	.globl gText_Rom_2EBFAC
gText_Rom_2EBFAC: @ 0x082EBFAC
	.string "だっぴ$"
	.if (. - gText_Rom_2EBFAC) > 0x4
	.error "gText_Rom_2EBFAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFAC) < 0x4
	.space 0x4 - (. - gText_Rom_2EBFAC)
	.endif
	.incbin "baserom.gba", 0x2ebfb0, 0x4

	@ src/data/abilities.h:476 abilities_line_476 (+2 aliases)
	.globl gText_Rom_2EBFB4
gText_Rom_2EBFB4: @ 0x082EBFB4
	.string "こんじょう$"
	.if (. - gText_Rom_2EBFB4) > 0x6
	.error "gText_Rom_2EBFB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFB4) < 0x6
	.space 0x6 - (. - gText_Rom_2EBFB4)
	.endif
	.incbin "baserom.gba", 0x2ebfba, 0x2

	@ src/data/abilities.h:483 abilities_line_483 (+1 aliases)
	.globl gText_Rom_2EBFBC
gText_Rom_2EBFBC: @ 0x082EBFBC
	.string "ふしぎなうろこ$"
	.if (. - gText_Rom_2EBFBC) > 0x8
	.error "gText_Rom_2EBFBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFBC) < 0x8
	.space 0x8 - (. - gText_Rom_2EBFBC)
	.endif

	@ src/data/abilities.h:491 abilities_line_491 (+1 aliases)
	.globl gText_Rom_2EBFC4
gText_Rom_2EBFC4: @ 0x082EBFC4
	.string "ヘドロえき$"
	.if (. - gText_Rom_2EBFC4) > 0x6
	.error "gText_Rom_2EBFC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFC4) < 0x6
	.space 0x6 - (. - gText_Rom_2EBFC4)
	.endif
	.incbin "baserom.gba", 0x2ebfca, 0x2

	@ src/data/abilities.h:498 abilities_line_498 (+1 aliases)
	.globl gText_Rom_2EBFCC
gText_Rom_2EBFCC: @ 0x082EBFCC
	.string "しんりょく$"
	.if (. - gText_Rom_2EBFCC) > 0x6
	.error "gText_Rom_2EBFCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFCC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBFCC)
	.endif
	.incbin "baserom.gba", 0x2ebfd2, 0x2

	@ src/data/abilities.h:505 abilities_line_505 (+1 aliases)
	.globl gText_Rom_2EBFD4
gText_Rom_2EBFD4: @ 0x082EBFD4
	.string "もうか$"
	.if (. - gText_Rom_2EBFD4) > 0x4
	.error "gText_Rom_2EBFD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFD4) < 0x4
	.space 0x4 - (. - gText_Rom_2EBFD4)
	.endif
	.incbin "baserom.gba", 0x2ebfd8, 0x4

	@ src/data/abilities.h:512 abilities_line_512 (+1 aliases)
	.globl gText_Rom_2EBFDC
gText_Rom_2EBFDC: @ 0x082EBFDC
	.string "げきりゅう$"
	.if (. - gText_Rom_2EBFDC) > 0x6
	.error "gText_Rom_2EBFDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFDC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBFDC)
	.endif
	.incbin "baserom.gba", 0x2ebfe2, 0x2

	@ src/data/abilities.h:519 abilities_line_519 (+1 aliases)
	.globl gText_Rom_2EBFE4
gText_Rom_2EBFE4: @ 0x082EBFE4
	.string "むしのしらせ$"
	.if (. - gText_Rom_2EBFE4) > 0x7
	.error "gText_Rom_2EBFE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFE4) < 0x7
	.space 0x7 - (. - gText_Rom_2EBFE4)
	.endif
	.incbin "baserom.gba", 0x2ebfeb, 0x1

	@ src/data/abilities.h:526 abilities_line_526 (+1 aliases)
	.globl gText_Rom_2EBFEC
gText_Rom_2EBFEC: @ 0x082EBFEC
	.string "いしあたま$"
	.if (. - gText_Rom_2EBFEC) > 0x6
	.error "gText_Rom_2EBFEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFEC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBFEC)
	.endif
	.incbin "baserom.gba", 0x2ebff2, 0x2

	@ src/data/abilities.h:533 abilities_line_533 (+1 aliases)
	.globl gText_Rom_2EBFF4
gText_Rom_2EBFF4: @ 0x082EBFF4
	.string "ひでり$"
	.if (. - gText_Rom_2EBFF4) > 0x4
	.error "gText_Rom_2EBFF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFF4) < 0x4
	.space 0x4 - (. - gText_Rom_2EBFF4)
	.endif
	.incbin "baserom.gba", 0x2ebff8, 0x4

	@ src/data/abilities.h:540 abilities_line_540 (+1 aliases)
	.globl gText_Rom_2EBFFC
gText_Rom_2EBFFC: @ 0x082EBFFC
	.string "ありじごく$"
	.if (. - gText_Rom_2EBFFC) > 0x6
	.error "gText_Rom_2EBFFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFFC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBFFC)
	.endif
	.incbin "baserom.gba", 0x2ec002, 0x2

	@ src/data/abilities.h:547 abilities_line_547 (+1 aliases)
	.globl gText_Rom_2EC004
gText_Rom_2EC004: @ 0x082EC004
	.string "やるき$"
	.if (. - gText_Rom_2EC004) > 0x4
	.error "gText_Rom_2EC004 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC004) < 0x4
	.space 0x4 - (. - gText_Rom_2EC004)
	.endif
	.incbin "baserom.gba", 0x2ec008, 0x4

	@ src/data/abilities.h:555 abilities_line_555 (+1 aliases)
	.globl gText_Rom_2EC00C
gText_Rom_2EC00C: @ 0x082EC00C
	.string "しろいけむり$"
	.if (. - gText_Rom_2EC00C) > 0x7
	.error "gText_Rom_2EC00C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC00C) < 0x7
	.space 0x7 - (. - gText_Rom_2EC00C)
	.endif
	.incbin "baserom.gba", 0x2ec013, 0x1

	@ src/data/abilities.h:563 abilities_line_563 (+1 aliases)
	.globl gText_Rom_2EC014
gText_Rom_2EC014: @ 0x082EC014
	.string "ヨガパワー$"
	.if (. - gText_Rom_2EC014) > 0x6
	.error "gText_Rom_2EC014 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC014) < 0x6
	.space 0x6 - (. - gText_Rom_2EC014)
	.endif
	.incbin "baserom.gba", 0x2ec01a, 0x2

	@ src/data/abilities.h:570 abilities_line_570 (+1 aliases)
	.globl gText_Rom_2EC01C
gText_Rom_2EC01C: @ 0x082EC01C
	.string "シェルアーマー$"
	.if (. - gText_Rom_2EC01C) > 0x8
	.error "gText_Rom_2EC01C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC01C) < 0x8
	.space 0x8 - (. - gText_Rom_2EC01C)
	.endif
	.incbin "baserom.gba", 0x2ec024, 0x8

	@ src/data/abilities.h:578 abilities_line_578 (+1 aliases)
	.globl gText_Rom_2EC02C
gText_Rom_2EC02C: @ 0x082EC02C
	.string "エアロック$"
	.if (. - gText_Rom_2EC02C) > 0x6
	.error "gText_Rom_2EC02C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC02C) < 0x6
	.space 0x6 - (. - gText_Rom_2EC02C)
	.endif
	.incbin "baserom.gba", 0x2ec032, 0x2
	.globl gUnknown_82EC034
gUnknown_82EC034: @ 0x082EC034
	.incbin "baserom.gba", 0x2ec034, 0x13

	@ src/data/abilities.h:15 abilities_line_15
	.globl gText_Rom_2EC047
gText_Rom_2EC047: @ 0x082EC047
	.string "ポケモンが よりつき にくくなる$"
	.if (. - gText_Rom_2EC047) > 0x11
	.error "gText_Rom_2EC047 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC047) < 0x11
	.space 0x11 - (. - gText_Rom_2EC047)
	.endif
	.incbin "baserom.gba", 0x2ec058, 0x2

	@ src/data/abilities.h:22 abilities_line_22
	.globl gText_Rom_2EC05A
gText_Rom_2EC05A: @ 0x082EC05A
	.string "せんとうに でると あめを ふらす$"
	.if (. - gText_Rom_2EC05A) > 0x12
	.error "gText_Rom_2EC05A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC05A) < 0x12
	.space 0x12 - (. - gText_Rom_2EC05A)
	.endif
	.incbin "baserom.gba", 0x2ec06c, 0x1

	@ src/data/abilities.h:29 abilities_line_29
	.globl gText_Rom_2EC06D
gText_Rom_2EC06D: @ 0x082EC06D
	.string "ちょっとずつ すばやく なっていく$"
	.if (. - gText_Rom_2EC06D) > 0x12
	.error "gText_Rom_2EC06D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC06D) < 0x12
	.space 0x12 - (. - gText_Rom_2EC06D)
	.endif
	.incbin "baserom.gba", 0x2ec07f, 0x1

	@ src/data/abilities.h:36 abilities_line_36 (+1 aliases)
	.globl gText_Rom_2EC080
gText_Rom_2EC080: @ 0x082EC080
	.string "わざを きゅうしょに うけない$"
	.if (. - gText_Rom_2EC080) > 0x10
	.error "gText_Rom_2EC080 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC080) < 0x10
	.space 0x10 - (. - gText_Rom_2EC080)
	.endif
	.incbin "baserom.gba", 0x2ec090, 0x16

	@ src/data/abilities.h:52 abilities_line_52
	.globl gText_Rom_2EC0A6
gText_Rom_2EC0A6: @ 0x082EC0A6
	.string "だれも じばくが できなくなる$"
	.if (. - gText_Rom_2EC0A6) > 0x10
	.error "gText_Rom_2EC0A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC0A6) < 0x10
	.space 0x10 - (. - gText_Rom_2EC0A6)
	.endif
	.incbin "baserom.gba", 0x2ec0b6, 0x3

	@ src/data/abilities.h:60 abilities_line_60
	.globl gText_Rom_2EC0B9
gText_Rom_2EC0B9: @ 0x082EC0B9
	.string "まひ じょうたいに ならない$"
	.if (. - gText_Rom_2EC0B9) > 0xf
	.error "gText_Rom_2EC0B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC0B9) < 0xf
	.space 0xf - (. - gText_Rom_2EC0B9)
	.endif
	.incbin "baserom.gba", 0x2ec0c8, 0x4

