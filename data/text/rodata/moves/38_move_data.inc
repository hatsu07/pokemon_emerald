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

