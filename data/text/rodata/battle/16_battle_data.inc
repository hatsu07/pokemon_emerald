	@ src/battle_main.c:302 battle_main_line_302 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3564
gText_Rom_2E3564: @ 0x082E3564
	.string "ポケモントレーナー$"
	.if (. - gText_Rom_2E3564) != 0xa
	.error "gText_Rom_2E3564 must retain its original byte length"
	.endif
	.globl gText_Rom_2E3568
	.set gText_Rom_2E3568, gText_Rom_2E3564 + 0x4
	.incbin "baserom.gba", 0x2e356e, 0x1

	@ src/battle_main.c:302 battle_main_line_302 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E356F
gText_Rom_2E356F: @ 0x082E356F
	.string "ポケモントレーナー$"
	.if (. - gText_Rom_2E356F) != 0xa
	.error "gText_Rom_2E356F must retain its original byte length"
	.endif
	.globl gText_Rom_2E3573
	.set gText_Rom_2E3573, gText_Rom_2E356F + 0x4
	.incbin "baserom.gba", 0x2e3579, 0x1

	@ src/battle_main.c:304 battle_main_line_304 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E357A
gText_Rom_2E357A: @ 0x082E357A
	.string "やまおとこ$"
	.if (. - gText_Rom_2E357A) != 0x6
	.error "gText_Rom_2E357A must retain its original byte length"
	.endif
	.globl gText_Rom_2E357C
	.set gText_Rom_2E357C, gText_Rom_2E357A + 0x2
	.incbin "baserom.gba", 0x2e3580, 0x5

	@ src/battle_main.c:305 battle_main_line_305 (+1 aliases)
	.globl gText_Rom_2E3585
gText_Rom_2E3585: @ 0x082E3585
	.string "アクアだん$"
	.if (. - gText_Rom_2E3585) > 0x6
	.error "gText_Rom_2E3585 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3585) < 0x6
	.space 0x6 - (. - gText_Rom_2E3585)
	.endif
	.incbin "baserom.gba", 0x2e358b, 0x5

	@ src/battle_main.c:306 battle_main_line_306 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3590
gText_Rom_2E3590: @ 0x082E3590
	.string "ポケモンブリーダー$"
	.if (. - gText_Rom_2E3590) != 0xa
	.error "gText_Rom_2E3590 must retain its original byte length"
	.endif
	.globl gText_Rom_2E3595
	.set gText_Rom_2E3595, gText_Rom_2E3590 + 0x5
	.incbin "baserom.gba", 0x2e359a, 0x1

	@ src/battle_main.c:307 battle_main_line_307 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E359B
gText_Rom_2E359B: @ 0x082E359B
	.string "エリートトレーナー$"
	.if (. - gText_Rom_2E359B) != 0xa
	.error "gText_Rom_2E359B must retain its original byte length"
	.endif
	.globl gText_Rom_2E359F
	.set gText_Rom_2E359F, gText_Rom_2E359B + 0x4
	.incbin "baserom.gba", 0x2e35a5, 0x1

	@ src/battle_main.c:308 battle_main_line_308 (+1 aliases)
	.globl gText_Rom_2E35A6
gText_Rom_2E35A6: @ 0x082E35A6
	.string "とりつかい$"
	.if (. - gText_Rom_2E35A6) > 0x6
	.error "gText_Rom_2E35A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35A6) < 0x6
	.space 0x6 - (. - gText_Rom_2E35A6)
	.endif
	.incbin "baserom.gba", 0x2e35ac, 0x5

	@ src/battle_main.c:309 battle_main_line_309
	.globl gText_Rom_2E35B1
gText_Rom_2E35B1: @ 0x082E35B1
	.string "ポケモンコレクター$"
	.if (. - gText_Rom_2E35B1) > 0xa
	.error "gText_Rom_2E35B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35B1) < 0xa
	.space 0xa - (. - gText_Rom_2E35B1)
	.endif
	.incbin "baserom.gba", 0x2e35bb, 0x1

	@ src/battle_main.c:310 battle_main_line_310 (+1 aliases)
	.globl gText_Rom_2E35BC
gText_Rom_2E35BC: @ 0x082E35BC
	.string "かいパンやろう$"
	.if (. - gText_Rom_2E35BC) > 0x8
	.error "gText_Rom_2E35BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35BC) < 0x8
	.space 0x8 - (. - gText_Rom_2E35BC)
	.endif
	.incbin "baserom.gba", 0x2e35c4, 0x3

	@ src/battle_main.c:311 battle_main_line_311 (+1 aliases)
	.globl gText_Rom_2E35C7
gText_Rom_2E35C7: @ 0x082E35C7
	.string "マグマだん$"
	.if (. - gText_Rom_2E35C7) > 0x6
	.error "gText_Rom_2E35C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35C7) < 0x6
	.space 0x6 - (. - gText_Rom_2E35C7)
	.endif
	.incbin "baserom.gba", 0x2e35cd, 0x5

	@ src/battle_main.c:312 battle_main_line_312
	.globl gText_Rom_2E35D2
gText_Rom_2E35D2: @ 0x082E35D2
	.string "たつじん$"
	.if (. - gText_Rom_2E35D2) > 0x5
	.error "gText_Rom_2E35D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35D2) < 0x5
	.space 0x5 - (. - gText_Rom_2E35D2)
	.endif
	.incbin "baserom.gba", 0x2e35d7, 0x6

	@ src/battle_main.c:313 battle_main_line_313
	.globl gText_Rom_2E35DD
gText_Rom_2E35DD: @ 0x082E35DD
	.string "アクアだんかんぶ$"
	.if (. - gText_Rom_2E35DD) > 0x9
	.error "gText_Rom_2E35DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35DD) < 0x9
	.space 0x9 - (. - gText_Rom_2E35DD)
	.endif
	.incbin "baserom.gba", 0x2e35e6, 0x2

	@ src/battle_main.c:314 battle_main_line_314 (+1 aliases)
	.globl gText_Rom_2E35E8
gText_Rom_2E35E8: @ 0x082E35E8
	.string "カラテおう$"
	.if (. - gText_Rom_2E35E8) > 0x6
	.error "gText_Rom_2E35E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35E8) < 0x6
	.space 0x6 - (. - gText_Rom_2E35E8)
	.endif
	.incbin "baserom.gba", 0x2e35ee, 0x5

	@ src/battle_main.c:315 battle_main_line_315
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E35F3
gText_Rom_2E35F3: @ 0x082E35F3
	.string "アクアだんリーダー$"
	.if (. - gText_Rom_2E35F3) != 0xa
	.error "gText_Rom_2E35F3 must retain its original byte length"
	.endif
	.globl gText_Rom_2E35F8
	.set gText_Rom_2E35F8, gText_Rom_2E35F3 + 0x5
	.incbin "baserom.gba", 0x2e35fd, 0x1

	@ src/battle_main.c:316 battle_main_line_316
	.globl gText_Rom_2E35FE
gText_Rom_2E35FE: @ 0x082E35FE
	.string "オカルトマニア$"
	.if (. - gText_Rom_2E35FE) > 0x8
	.error "gText_Rom_2E35FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35FE) < 0x8
	.space 0x8 - (. - gText_Rom_2E35FE)
	.endif
	.incbin "baserom.gba", 0x2e3606, 0x3

	@ src/battle_main.c:317 battle_main_line_317 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3609
gText_Rom_2E3609: @ 0x082E3609
	.string "アロマなおねえさん$"
	.if (. - gText_Rom_2E3609) != 0xa
	.error "gText_Rom_2E3609 must retain its original byte length"
	.endif
	.globl gText_Rom_2E360D
	.set gText_Rom_2E360D, gText_Rom_2E3609 + 0x4
	.incbin "baserom.gba", 0x2e3613, 0x1

	@ src/battle_main.c:318 battle_main_line_318 (+1 aliases)
	.globl gText_Rom_2E3614
gText_Rom_2E3614: @ 0x082E3614
	.string "いせきマニア$"
	.if (. - gText_Rom_2E3614) > 0x7
	.error "gText_Rom_2E3614 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3614) < 0x7
	.space 0x7 - (. - gText_Rom_2E3614)
	.endif
	.incbin "baserom.gba", 0x2e361b, 0x4

	@ src/battle_main.c:319 battle_main_line_319
	.globl gText_Rom_2E361F
gText_Rom_2E361F: @ 0x082E361F
	.string "インタビュアー$"
	.if (. - gText_Rom_2E361F) > 0x8
	.error "gText_Rom_2E361F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E361F) < 0x8
	.space 0x8 - (. - gText_Rom_2E361F)
	.endif
	.incbin "baserom.gba", 0x2e3627, 0x3

	@ src/battle_main.c:320 battle_main_line_320 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E362A
gText_Rom_2E362A: @ 0x082E362A
	.string "うきわガール$"
	.if (. - gText_Rom_2E362A) != 0x7
	.error "gText_Rom_2E362A must retain its original byte length"
	.endif
	.globl gText_Rom_2E362D
	.set gText_Rom_2E362D, gText_Rom_2E362A + 0x3
	.incbin "baserom.gba", 0x2e3631, 0x4

	@ src/battle_main.c:321 battle_main_line_321
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3635
gText_Rom_2E3635: @ 0x082E3635
	.string "うきわボーイ$"
	.if (. - gText_Rom_2E3635) != 0x7
	.error "gText_Rom_2E3635 must retain its original byte length"
	.endif
	.globl gText_Rom_2E3638
	.set gText_Rom_2E3638, gText_Rom_2E3635 + 0x3
	.incbin "baserom.gba", 0x2e363c, 0x4

	@ src/battle_main.c:322 battle_main_line_322 (+1 aliases)
	.globl gText_Rom_2E3640
gText_Rom_2E3640: @ 0x082E3640
	.string "おじょうさま$"
	.if (. - gText_Rom_2E3640) > 0x7
	.error "gText_Rom_2E3640 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3640) < 0x7
	.space 0x7 - (. - gText_Rom_2E3640)
	.endif
	.incbin "baserom.gba", 0x2e3647, 0x4

	@ src/battle_main.c:323 battle_main_line_323 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E364B
gText_Rom_2E364B: @ 0x082E364B
	.string "おとなのおねえさん$"
	.if (. - gText_Rom_2E364B) != 0xa
	.error "gText_Rom_2E364B must retain its original byte length"
	.endif
	.globl gText_Rom_2E364F
	.set gText_Rom_2E364F, gText_Rom_2E364B + 0x4
	.incbin "baserom.gba", 0x2e3655, 0x1

	@ src/battle_main.c:324 battle_main_line_324
	.globl gText_Rom_2E3656
gText_Rom_2E3656: @ 0x082E3656
	.string "おぼっちゃま$"
	.if (. - gText_Rom_2E3656) > 0x7
	.error "gText_Rom_2E3656 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3656) < 0x7
	.space 0x7 - (. - gText_Rom_2E3656)
	.endif
	.incbin "baserom.gba", 0x2e365d, 0x4

	@ src/battle_main.c:325 battle_main_line_325 (+1 aliases)
	.globl gText_Rom_2E3661
gText_Rom_2E3661: @ 0x082E3661
	.string "かいじゅうマニア$"
	.if (. - gText_Rom_2E3661) > 0x9
	.error "gText_Rom_2E3661 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3661) < 0x9
	.space 0x9 - (. - gText_Rom_2E3661)
	.endif
	.incbin "baserom.gba", 0x2e366a, 0x2

	@ src/battle_main.c:326 battle_main_line_326
	.globl gText_Rom_2E366C
gText_Rom_2E366C: @ 0x082E366C
	.string "ギタリスト$"
	.if (. - gText_Rom_2E366C) > 0x6
	.error "gText_Rom_2E366C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E366C) < 0x6
	.space 0x6 - (. - gText_Rom_2E366C)
	.endif
	.incbin "baserom.gba", 0x2e3672, 0x5

	@ src/battle_main.c:327 battle_main_line_327
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3677
gText_Rom_2E3677: @ 0x082E3677
	.string "キャンプファイヤー$"
	.if (. - gText_Rom_2E3677) != 0xa
	.error "gText_Rom_2E3677 must retain its original byte length"
	.endif
	.globl gText_Rom_2E367B
	.set gText_Rom_2E367B, gText_Rom_2E3677 + 0x4
	.incbin "baserom.gba", 0x2e3681, 0x1

	@ src/battle_main.c:328 battle_main_line_328 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3682
gText_Rom_2E3682: @ 0x082E3682
	.string "キャンプボーイ$"
	.if (. - gText_Rom_2E3682) != 0x8
	.error "gText_Rom_2E3682 must retain its original byte length"
	.endif
	.globl gText_Rom_2E3686
	.set gText_Rom_2E3686, gText_Rom_2E3682 + 0x4
	.incbin "baserom.gba", 0x2e368a, 0x3

	@ src/battle_main.c:329 battle_main_line_329 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E368D
gText_Rom_2E368D: @ 0x082E368D
	.string "ピクニックガール$"
	.if (. - gText_Rom_2E368D) != 0x9
	.error "gText_Rom_2E368D must retain its original byte length"
	.endif
	.globl gText_Rom_2E3692
	.set gText_Rom_2E3692, gText_Rom_2E368D + 0x5
	.incbin "baserom.gba", 0x2e3696, 0x2

	@ src/battle_main.c:330 battle_main_line_330
	.globl gText_Rom_2E3698
gText_Rom_2E3698: @ 0x082E3698
	.string "こんちゅうマニア$"
	.if (. - gText_Rom_2E3698) > 0x9
	.error "gText_Rom_2E3698 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3698) < 0x9
	.space 0x9 - (. - gText_Rom_2E3698)
	.endif
	.incbin "baserom.gba", 0x2e36a1, 0x2

	@ src/battle_main.c:331 battle_main_line_331 (+1 aliases)
	.globl gText_Rom_2E36A3
gText_Rom_2E36A3: @ 0x082E36A3
	.string "サイキッカー$"
	.if (. - gText_Rom_2E36A3) > 0x7
	.error "gText_Rom_2E36A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E36A3) < 0x7
	.space 0x7 - (. - gText_Rom_2E36A3)
	.endif
	.incbin "baserom.gba", 0x2e36aa, 0x4

	@ src/battle_main.c:332 battle_main_line_332 (+1 aliases)
	.globl gText_Rom_2E36AE
gText_Rom_2E36AE: @ 0x082E36AE
	.string "ジェントルマン$"
	.if (. - gText_Rom_2E36AE) > 0x8
	.error "gText_Rom_2E36AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E36AE) < 0x8
	.space 0x8 - (. - gText_Rom_2E36AE)
	.endif
	.incbin "baserom.gba", 0x2e36b6, 0x3

	@ src/battle_main.c:333 battle_main_line_333 (+2 aliases)
	.globl gText_Rom_2E36B9
gText_Rom_2E36B9: @ 0x082E36B9
	.string "してんのう$"
	.if (. - gText_Rom_2E36B9) > 0x6
	.error "gText_Rom_2E36B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E36B9) < 0x6
	.space 0x6 - (. - gText_Rom_2E36B9)
	.endif
	.incbin "baserom.gba", 0x2e36bf, 0x5

	@ src/battle_main.c:334 battle_main_line_334 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E36C4
gText_Rom_2E36C4: @ 0x082E36C4
	.string "ジムリーダー$"
	.if (. - gText_Rom_2E36C4) != 0x7
	.error "gText_Rom_2E36C4 must retain its original byte length"
	.endif
	.globl gText_Rom_2E36C6
	.set gText_Rom_2E36C6, gText_Rom_2E36C4 + 0x2
	.incbin "baserom.gba", 0x2e36cb, 0x4

	@ src/battle_main.c:335 battle_main_line_335
	.globl gText_Rom_2E36CF
gText_Rom_2E36CF: @ 0x082E36CF
	.string "じゅくがえり$"
	.if (. - gText_Rom_2E36CF) > 0x7
	.error "gText_Rom_2E36CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E36CF) < 0x7
	.space 0x7 - (. - gText_Rom_2E36CF)
	.endif
	.incbin "baserom.gba", 0x2e36d6, 0x4

	@ src/battle_main.c:336 battle_main_line_336
	.globl gText_Rom_2E36DA
gText_Rom_2E36DA: @ 0x082E36DA
	.string "センパイとコウハイ$"
	.if (. - gText_Rom_2E36DA) > 0xa
	.error "gText_Rom_2E36DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E36DA) < 0xa
	.space 0xa - (. - gText_Rom_2E36DA)
	.endif
	.incbin "baserom.gba", 0x2e36e4, 0x1

	@ src/battle_main.c:337 battle_main_line_337
	.globl gText_Rom_2E36E5
gText_Rom_2E36E5: @ 0x082E36E5
	.string "カチヌキさんち$"
	.if (. - gText_Rom_2E36E5) > 0x8
	.error "gText_Rom_2E36E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E36E5) < 0x8
	.space 0x8 - (. - gText_Rom_2E36E5)
	.endif
	.incbin "baserom.gba", 0x2e36ed, 0x3

	@ src/battle_main.c:338 battle_main_line_338
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E36F0
gText_Rom_2E36F0: @ 0x082E36F0
	.string "だいすきクラブ$"
	.if (. - gText_Rom_2E36F0) != 0x8
	.error "gText_Rom_2E36F0 must retain its original byte length"
	.endif
	.globl gText_Rom_2E36F4
	.set gText_Rom_2E36F4, gText_Rom_2E36F0 + 0x4
	.incbin "baserom.gba", 0x2e36f8, 0x3

	@ src/battle_main.c:339 battle_main_line_339 (+1 aliases)
	.globl gText_Rom_2E36FB
gText_Rom_2E36FB: @ 0x082E36FB
	.string "たんぱんこぞう$"
	.if (. - gText_Rom_2E36FB) > 0x8
	.error "gText_Rom_2E36FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E36FB) < 0x8
	.space 0x8 - (. - gText_Rom_2E36FB)
	.endif
	.incbin "baserom.gba", 0x2e3703, 0x3

	@ src/battle_main.c:340 battle_main_line_340 (+2 aliases)
	.globl gText_Rom_2E3706
gText_Rom_2E3706: @ 0x082E3706
	.string "チャンピオン$"
	.if (. - gText_Rom_2E3706) > 0x7
	.error "gText_Rom_2E3706 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3706) < 0x7
	.space 0x7 - (. - gText_Rom_2E3706)
	.endif
	.incbin "baserom.gba", 0x2e370d, 0x4

	@ src/battle_main.c:341 battle_main_line_341 (+1 aliases)
	.globl gText_Rom_2E3711
gText_Rom_2E3711: @ 0x082E3711
	.string "つりびと$"
	.if (. - gText_Rom_2E3711) > 0x5
	.error "gText_Rom_2E3711 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3711) < 0x5
	.space 0x5 - (. - gText_Rom_2E3711)
	.endif
	.incbin "baserom.gba", 0x2e3716, 0x6

	@ src/battle_main.c:342 battle_main_line_342
	.globl gText_Rom_2E371C
gText_Rom_2E371C: @ 0x082E371C
	.string "トライアスリート$"
	.if (. - gText_Rom_2E371C) > 0x9
	.error "gText_Rom_2E371C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E371C) < 0x9
	.space 0x9 - (. - gText_Rom_2E371C)
	.endif
	.incbin "baserom.gba", 0x2e3725, 0x2

	@ src/battle_main.c:343 battle_main_line_343
	.globl gText_Rom_2E3727
gText_Rom_2E3727: @ 0x082E3727
	.string "ドラゴンつかい$"
	.if (. - gText_Rom_2E3727) > 0x8
	.error "gText_Rom_2E3727 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3727) < 0x8
	.space 0x8 - (. - gText_Rom_2E3727)
	.endif
	.incbin "baserom.gba", 0x2e372f, 0x3

	@ src/battle_main.c:344 battle_main_line_344
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3732
gText_Rom_2E3732: @ 0x082E3732
	.string "ニンジャごっこ$"
	.if (. - gText_Rom_2E3732) != 0x8
	.error "gText_Rom_2E3732 must retain its original byte length"
	.endif
	.globl gText_Rom_2E3736
	.set gText_Rom_2E3736, gText_Rom_2E3732 + 0x4
	.incbin "baserom.gba", 0x2e373a, 0x3

	@ src/battle_main.c:345 battle_main_line_345
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E373D
gText_Rom_2E373D: @ 0x082E373D
	.string "バトルガール$"
	.if (. - gText_Rom_2E373D) != 0x7
	.error "gText_Rom_2E373D must retain its original byte length"
	.endif
	.globl gText_Rom_2E3740
	.set gText_Rom_2E3740, gText_Rom_2E373D + 0x3
	.incbin "baserom.gba", 0x2e3744, 0x4

	@ src/battle_main.c:346 battle_main_line_346
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3748
gText_Rom_2E3748: @ 0x082E3748
	.string "パラソルおねえさん$"
	.if (. - gText_Rom_2E3748) != 0xa
	.error "gText_Rom_2E3748 must retain its original byte length"
	.endif
	.globl gText_Rom_2E374C
	.set gText_Rom_2E374C, gText_Rom_2E3748 + 0x4
	.incbin "baserom.gba", 0x2e3752, 0x1

	@ src/battle_main.c:347 battle_main_line_347 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3753
gText_Rom_2E3753: @ 0x082E3753
	.string "ビキニのおねえさん$"
	.if (. - gText_Rom_2E3753) != 0xa
	.error "gText_Rom_2E3753 must retain its original byte length"
	.endif
	.globl gText_Rom_2E3757
	.set gText_Rom_2E3757, gText_Rom_2E3753 + 0x4
	.incbin "baserom.gba", 0x2e375d, 0x1

	@ src/battle_main.c:348 battle_main_line_348 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E375E
gText_Rom_2E375E: @ 0x082E375E
	.string "ふたごちゃん$"
	.if (. - gText_Rom_2E375E) != 0x7
	.error "gText_Rom_2E375E must retain its original byte length"
	.endif
	.globl gText_Rom_2E3761
	.set gText_Rom_2E3761, gText_Rom_2E375E + 0x3
	.incbin "baserom.gba", 0x2e3765, 0x4

	@ src/battle_main.c:349 battle_main_line_349 (+1 aliases)
	.globl gText_Rom_2E3769
gText_Rom_2E3769: @ 0x082E3769
	.string "ふなのり$"
	.if (. - gText_Rom_2E3769) > 0x5
	.error "gText_Rom_2E3769 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3769) < 0x5
	.space 0x5 - (. - gText_Rom_2E3769)
	.endif
	.incbin "baserom.gba", 0x2e376e, 0x6

	@ src/battle_main.c:350 battle_main_line_350
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3774
gText_Rom_2E3774: @ 0x082E3774
	.string "エリートレーナー$"
	.if (. - gText_Rom_2E3774) != 0x9
	.error "gText_Rom_2E3774 must retain its original byte length"
	.endif
	.globl gText_Rom_2E3777
	.set gText_Rom_2E3777, gText_Rom_2E3774 + 0x3
	.incbin "baserom.gba", 0x2e377d, 0x2

	@ src/battle_main.c:351 battle_main_line_351
	.globl gText_Rom_2E377F
gText_Rom_2E377F: @ 0x082E377F
	.string "マグマだんかんぶ$"
	.if (. - gText_Rom_2E377F) > 0x9
	.error "gText_Rom_2E377F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E377F) < 0x9
	.space 0x9 - (. - gText_Rom_2E377F)
	.endif
	.incbin "baserom.gba", 0x2e3788, 0x2

	@ src/battle_main.c:302 battle_main_line_302 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E378A
gText_Rom_2E378A: @ 0x082E378A
	.string "ポケモントレーナー$"
	.if (. - gText_Rom_2E378A) != 0xa
	.error "gText_Rom_2E378A must retain its original byte length"
	.endif
	.globl gText_Rom_2E378E
	.set gText_Rom_2E378E, gText_Rom_2E378A + 0x4
	.incbin "baserom.gba", 0x2e3794, 0x1

	@ src/battle_main.c:353 battle_main_line_353 (+1 aliases)
	.globl gText_Rom_2E3795
gText_Rom_2E3795: @ 0x082E3795
	.string "むしとりしょうねん$"
	.if (. - gText_Rom_2E3795) > 0xa
	.error "gText_Rom_2E3795 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3795) < 0xa
	.space 0xa - (. - gText_Rom_2E3795)
	.endif
	.incbin "baserom.gba", 0x2e379f, 0x1

	@ src/battle_main.c:354 battle_main_line_354 (+1 aliases)
	.globl gText_Rom_2E37A0
gText_Rom_2E37A0: @ 0x082E37A0
	.string "ポケモンレンジャー$"
	.if (. - gText_Rom_2E37A0) > 0xa
	.error "gText_Rom_2E37A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E37A0) < 0xa
	.space 0xa - (. - gText_Rom_2E37A0)
	.endif
	.incbin "baserom.gba", 0x2e37aa, 0x1

	@ src/battle_main.c:355 battle_main_line_355
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E37AB
gText_Rom_2E37AB: @ 0x082E37AB
	.string "マグマだんリーダー$"
	.if (. - gText_Rom_2E37AB) != 0xa
	.error "gText_Rom_2E37AB must retain its original byte length"
	.endif
	.globl gText_Rom_2E37B0
	.set gText_Rom_2E37B0, gText_Rom_2E37AB + 0x5
	.incbin "baserom.gba", 0x2e37b5, 0x1

	@ src/battle_main.c:356 battle_main_line_356 (+1 aliases)
	.globl gText_Rom_2E37B6
gText_Rom_2E37B6: @ 0x082E37B6
	.string "ミニスカート$"
	.if (. - gText_Rom_2E37B6) > 0x7
	.error "gText_Rom_2E37B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E37B6) < 0x7
	.space 0x7 - (. - gText_Rom_2E37B6)
	.endif
	.incbin "baserom.gba", 0x2e37bd, 0x4

	@ src/battle_main.c:357 battle_main_line_357 (+1 aliases)
	.globl gText_Rom_2E37C1
gText_Rom_2E37C1: @ 0x082E37C1
	.string "ラブラブカップル$"
	.if (. - gText_Rom_2E37C1) > 0x9
	.error "gText_Rom_2E37C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E37C1) < 0x9
	.space 0x9 - (. - gText_Rom_2E37C1)
	.endif
	.incbin "baserom.gba", 0x2e37ca, 0x2

	@ src/battle_main.c:358 battle_main_line_358
	.globl gText_Rom_2E37CC
gText_Rom_2E37CC: @ 0x082E37CC
	.string "きんこんしき$"
	.if (. - gText_Rom_2E37CC) > 0x7
	.error "gText_Rom_2E37CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E37CC) < 0x7
	.space 0x7 - (. - gText_Rom_2E37CC)
	.endif
	.incbin "baserom.gba", 0x2e37d3, 0x4

	@ src/battle_main.c:359 battle_main_line_359 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E37D7
gText_Rom_2E37D7: @ 0x082E37D7
	.string "うみきょうだい$"
	.if (. - gText_Rom_2E37D7) != 0x8
	.error "gText_Rom_2E37D7 must retain its original byte length"
	.endif
	.globl gText_Rom_2E37D9
	.set gText_Rom_2E37D9, gText_Rom_2E37D7 + 0x2
	.incbin "baserom.gba", 0x2e37df, 0x3

	@ src/battle_main.c:360 battle_main_line_360
	.globl gText_Rom_2E37E2
gText_Rom_2E37E2: @ 0x082E37E2
	.string "タワータイクーン$"
	.if (. - gText_Rom_2E37E2) > 0x9
	.error "gText_Rom_2E37E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E37E2) < 0x9
	.space 0x9 - (. - gText_Rom_2E37E2)
	.endif
	.incbin "baserom.gba", 0x2e37eb, 0x2

	@ src/battle_main.c:361 battle_main_line_361
	.globl gText_Rom_2E37ED
gText_Rom_2E37ED: @ 0x082E37ED
	.string "ドームスーパースター$"
	.if (. - gText_Rom_2E37ED) > 0xb
	.error "gText_Rom_2E37ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E37ED) < 0xb
	.space 0xb - (. - gText_Rom_2E37ED)
	.endif

	@ src/battle_main.c:362 battle_main_line_362
	.globl gText_Rom_2E37F8
gText_Rom_2E37F8: @ 0x082E37F8
	.string "パレスガーディアン$"
	.if (. - gText_Rom_2E37F8) > 0xa
	.error "gText_Rom_2E37F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E37F8) < 0xa
	.space 0xa - (. - gText_Rom_2E37F8)
	.endif
	.incbin "baserom.gba", 0x2e3802, 0x1

	@ src/battle_main.c:363 battle_main_line_363
	.globl gText_Rom_2E3803
gText_Rom_2E3803: @ 0x082E3803
	.string "アリーナキャプテン$"
	.if (. - gText_Rom_2E3803) > 0xa
	.error "gText_Rom_2E3803 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3803) < 0xa
	.space 0xa - (. - gText_Rom_2E3803)
	.endif
	.incbin "baserom.gba", 0x2e380d, 0x1

	@ src/battle_main.c:364 battle_main_line_364
	.globl gText_Rom_2E380E
gText_Rom_2E380E: @ 0x082E380E
	.string "ファクトリーヘッド$"
	.if (. - gText_Rom_2E380E) > 0xa
	.error "gText_Rom_2E380E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E380E) < 0xa
	.space 0xa - (. - gText_Rom_2E380E)
	.endif
	.incbin "baserom.gba", 0x2e3818, 0x1

	@ src/battle_main.c:365 battle_main_line_365
	.globl gText_Rom_2E3819
gText_Rom_2E3819: @ 0x082E3819
	.string "チューブクイーン$"
	.if (. - gText_Rom_2E3819) > 0x9
	.error "gText_Rom_2E3819 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3819) < 0x9
	.space 0x9 - (. - gText_Rom_2E3819)
	.endif
	.incbin "baserom.gba", 0x2e3822, 0x2

	@ src/battle_main.c:366 battle_main_line_366
	.globl gText_Rom_2E3824
gText_Rom_2E3824: @ 0x082E3824
	.string "ピラミッドキング$"
	.if (. - gText_Rom_2E3824) > 0x9
	.error "gText_Rom_2E3824 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3824) < 0x9
	.space 0x9 - (. - gText_Rom_2E3824)
	.endif
	.incbin "baserom.gba", 0x2e382d, 0x2

	@ src/battle_main.c:302 battle_main_line_302 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E382F
gText_Rom_2E382F: @ 0x082E382F
	.string "ポケモントレーナー$"
	.if (. - gText_Rom_2E382F) != 0xa
	.error "gText_Rom_2E382F must retain its original byte length"
	.endif
	.globl gText_Rom_2E3833
	.set gText_Rom_2E3833, gText_Rom_2E382F + 0x4
	.incbin "baserom.gba", 0x2e3839, 0x3
	.globl gUnknown_82E383C
gUnknown_82E383C: @ 0x082E383C
	.incbin "baserom.gba", 0x2e383c, 0x4
	.globl gUnknown_82E3840
gUnknown_82E3840: @ 0x082E3840
	.incbin "baserom.gba", 0x2e3840, 0x6
	.globl gUnknown_82E3846
gUnknown_82E3846: @ 0x082E3846
	.incbin "baserom.gba", 0x2e3846, 0x1a

	@ src/data/trainers.h:33 trainers_line_33 (+4 aliases)
	.globl gText_Rom_2E3860
gText_Rom_2E3860: @ 0x082E3860
	.string "マサヒコ$"
	.if (. - gText_Rom_2E3860) > 0x5
	.error "gText_Rom_2E3860 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3860) < 0x5
	.space 0x5 - (. - gText_Rom_2E3860)
	.endif
	.incbin "baserom.gba", 0x2e3865, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E3880
gText_Rom_2E3880: @ 0x082E3880
	.string "したっぱ$"
	.if (. - gText_Rom_2E3880) > 0x5
	.error "gText_Rom_2E3880 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3880) < 0x5
	.space 0x5 - (. - gText_Rom_2E3880)
	.endif
	.incbin "baserom.gba", 0x2e3885, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E38A0
gText_Rom_2E38A0: @ 0x082E38A0
	.string "したっぱ$"
	.if (. - gText_Rom_2E38A0) > 0x5
	.error "gText_Rom_2E38A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E38A0) < 0x5
	.space 0x5 - (. - gText_Rom_2E38A0)
	.endif
	.incbin "baserom.gba", 0x2e38a5, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E38C0
gText_Rom_2E38C0: @ 0x082E38C0
	.string "したっぱ$"
	.if (. - gText_Rom_2E38C0) > 0x5
	.error "gText_Rom_2E38C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E38C0) < 0x5
	.space 0x5 - (. - gText_Rom_2E38C0)
	.endif
	.incbin "baserom.gba", 0x2e38c5, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E38E0
gText_Rom_2E38E0: @ 0x082E38E0
	.string "したっぱ$"
	.if (. - gText_Rom_2E38E0) > 0x5
	.error "gText_Rom_2E38E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E38E0) < 0x5
	.space 0x5 - (. - gText_Rom_2E38E0)
	.endif
	.incbin "baserom.gba", 0x2e38e5, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E3900
gText_Rom_2E3900: @ 0x082E3900
	.string "したっぱ$"
	.if (. - gText_Rom_2E3900) > 0x5
	.error "gText_Rom_2E3900 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3900) < 0x5
	.space 0x5 - (. - gText_Rom_2E3900)
	.endif
	.incbin "baserom.gba", 0x2e3905, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E3920
gText_Rom_2E3920: @ 0x082E3920
	.string "したっぱ$"
	.if (. - gText_Rom_2E3920) > 0x5
	.error "gText_Rom_2E3920 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3920) < 0x5
	.space 0x5 - (. - gText_Rom_2E3920)
	.endif
	.incbin "baserom.gba", 0x2e3925, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E3940
gText_Rom_2E3940: @ 0x082E3940
	.string "したっぱ$"
	.if (. - gText_Rom_2E3940) > 0x5
	.error "gText_Rom_2E3940 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3940) < 0x5
	.space 0x5 - (. - gText_Rom_2E3940)
	.endif
	.incbin "baserom.gba", 0x2e3945, 0x1b

	@ src/data/trainers.h:333 trainers_line_333 (+4 aliases)
	.globl gText_Rom_2E3960
gText_Rom_2E3960: @ 0x082E3960
	.string "フクミ$"
	.if (. - gText_Rom_2E3960) > 0x4
	.error "gText_Rom_2E3960 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3960) < 0x4
	.space 0x4 - (. - gText_Rom_2E3960)
	.endif
	.incbin "baserom.gba", 0x2e3964, 0x1c

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E3980
gText_Rom_2E3980: @ 0x082E3980
	.string "したっぱ$"
	.if (. - gText_Rom_2E3980) > 0x5
	.error "gText_Rom_2E3980 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3980) < 0x5
	.space 0x5 - (. - gText_Rom_2E3980)
	.endif
	.incbin "baserom.gba", 0x2e3985, 0x1b

	@ src/data/trainers.h:465 trainers_line_465
	.globl gText_Rom_2E39A0
gText_Rom_2E39A0: @ 0x082E39A0
	.string "セツオ$"
	.if (. - gText_Rom_2E39A0) > 0x4
	.error "gText_Rom_2E39A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E39A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E39A0)
	.endif
	.incbin "baserom.gba", 0x2e39a4, 0x1c

	@ src/data/trainers.h:515 trainers_line_515
	.globl gText_Rom_2E39C0
gText_Rom_2E39C0: @ 0x082E39C0
	.string "ヨウスケ$"
	.if (. - gText_Rom_2E39C0) > 0x5
	.error "gText_Rom_2E39C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E39C0) < 0x5
	.space 0x5 - (. - gText_Rom_2E39C0)
	.endif
	.incbin "baserom.gba", 0x2e39c5, 0x1b

	@ src/data/trainers.h:563 trainers_line_563
	.globl gText_Rom_2E39E0
gText_Rom_2E39E0: @ 0x082E39E0
	.string "スグル$"
	.if (. - gText_Rom_2E39E0) > 0x4
	.error "gText_Rom_2E39E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E39E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E39E0)
	.endif
	.incbin "baserom.gba", 0x2e39e4, 0x1c

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E3A00
gText_Rom_2E3A00: @ 0x082E3A00
	.string "したっぱ$"
	.if (. - gText_Rom_2E3A00) > 0x5
	.error "gText_Rom_2E3A00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3A00) < 0x5
	.space 0x5 - (. - gText_Rom_2E3A00)
	.endif
	.incbin "baserom.gba", 0x2e3a05, 0x1b

	@ src/data/trainers.h:647 trainers_line_647
	.globl gText_Rom_2E3A20
gText_Rom_2E3A20: @ 0x082E3A20
	.string "イッペイ$"
	.if (. - gText_Rom_2E3A20) > 0x5
	.error "gText_Rom_2E3A20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3A20) < 0x5
	.space 0x5 - (. - gText_Rom_2E3A20)
	.endif
	.incbin "baserom.gba", 0x2e3a25, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E3A40
gText_Rom_2E3A40: @ 0x082E3A40
	.string "したっぱ$"
	.if (. - gText_Rom_2E3A40) > 0x5
	.error "gText_Rom_2E3A40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3A40) < 0x5
	.space 0x5 - (. - gText_Rom_2E3A40)
	.endif
	.incbin "baserom.gba", 0x2e3a45, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E3A60
gText_Rom_2E3A60: @ 0x082E3A60
	.string "したっぱ$"
	.if (. - gText_Rom_2E3A60) > 0x5
	.error "gText_Rom_2E3A60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3A60) < 0x5
	.space 0x5 - (. - gText_Rom_2E3A60)
	.endif
	.incbin "baserom.gba", 0x2e3a65, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E3A80
gText_Rom_2E3A80: @ 0x082E3A80
	.string "したっぱ$"
	.if (. - gText_Rom_2E3A80) > 0x5
	.error "gText_Rom_2E3A80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3A80) < 0x5
	.space 0x5 - (. - gText_Rom_2E3A80)
	.endif
	.incbin "baserom.gba", 0x2e3a85, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E3AA0
gText_Rom_2E3AA0: @ 0x082E3AA0
	.string "したっぱ$"
	.if (. - gText_Rom_2E3AA0) > 0x5
	.error "gText_Rom_2E3AA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3AA0) < 0x5
	.space 0x5 - (. - gText_Rom_2E3AA0)
	.endif
	.incbin "baserom.gba", 0x2e3aa5, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E3AC0
gText_Rom_2E3AC0: @ 0x082E3AC0
	.string "したっぱ$"
	.if (. - gText_Rom_2E3AC0) > 0x5
	.error "gText_Rom_2E3AC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3AC0) < 0x5
	.space 0x5 - (. - gText_Rom_2E3AC0)
	.endif
	.incbin "baserom.gba", 0x2e3ac5, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E3AE0
gText_Rom_2E3AE0: @ 0x082E3AE0
	.string "したっぱ$"
	.if (. - gText_Rom_2E3AE0) > 0x5
	.error "gText_Rom_2E3AE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3AE0) < 0x5
	.space 0x5 - (. - gText_Rom_2E3AE0)
	.endif
	.incbin "baserom.gba", 0x2e3ae5, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E3B00
gText_Rom_2E3B00: @ 0x082E3B00
	.string "したっぱ$"
	.if (. - gText_Rom_2E3B00) > 0x5
	.error "gText_Rom_2E3B00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3B00) < 0x5
	.space 0x5 - (. - gText_Rom_2E3B00)
	.endif
	.incbin "baserom.gba", 0x2e3b05, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E3B20
gText_Rom_2E3B20: @ 0x082E3B20
	.string "したっぱ$"
	.if (. - gText_Rom_2E3B20) > 0x5
	.error "gText_Rom_2E3B20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3B20) < 0x5
	.space 0x5 - (. - gText_Rom_2E3B20)
	.endif
	.incbin "baserom.gba", 0x2e3b25, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E3B40
gText_Rom_2E3B40: @ 0x082E3B40
	.string "したっぱ$"
	.if (. - gText_Rom_2E3B40) > 0x5
	.error "gText_Rom_2E3B40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3B40) < 0x5
	.space 0x5 - (. - gText_Rom_2E3B40)
	.endif
	.incbin "baserom.gba", 0x2e3b45, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E3B60
gText_Rom_2E3B60: @ 0x082E3B60
	.string "したっぱ$"
	.if (. - gText_Rom_2E3B60) > 0x5
	.error "gText_Rom_2E3B60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3B60) < 0x5
	.space 0x5 - (. - gText_Rom_2E3B60)
	.endif
	.incbin "baserom.gba", 0x2e3b65, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E3B80
gText_Rom_2E3B80: @ 0x082E3B80
	.string "したっぱ$"
	.if (. - gText_Rom_2E3B80) > 0x5
	.error "gText_Rom_2E3B80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3B80) < 0x5
	.space 0x5 - (. - gText_Rom_2E3B80)
	.endif
	.incbin "baserom.gba", 0x2e3b85, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E3BA0
gText_Rom_2E3BA0: @ 0x082E3BA0
	.string "したっぱ$"
	.if (. - gText_Rom_2E3BA0) > 0x5
	.error "gText_Rom_2E3BA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3BA0) < 0x5
	.space 0x5 - (. - gText_Rom_2E3BA0)
	.endif
	.incbin "baserom.gba", 0x2e3ba5, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E3BC0
gText_Rom_2E3BC0: @ 0x082E3BC0
	.string "したっぱ$"
	.if (. - gText_Rom_2E3BC0) > 0x5
	.error "gText_Rom_2E3BC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3BC0) < 0x5
	.space 0x5 - (. - gText_Rom_2E3BC0)
	.endif
	.incbin "baserom.gba", 0x2e3bc5, 0x1b

	@ src/data/trainers.h:1223 trainers_line_1223
	.globl gText_Rom_2E3BE0
gText_Rom_2E3BE0: @ 0x082E3BE0
	.string "トシシゲ$"
	.if (. - gText_Rom_2E3BE0) > 0x5
	.error "gText_Rom_2E3BE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3BE0) < 0x5
	.space 0x5 - (. - gText_Rom_2E3BE0)
	.endif
	.incbin "baserom.gba", 0x2e3be5, 0x1b

	@ src/data/trainers.h:1271 trainers_line_1271
	.globl gText_Rom_2E3C00
gText_Rom_2E3C00: @ 0x082E3C00
	.string "ウシオ$"
	.if (. - gText_Rom_2E3C00) > 0x4
	.error "gText_Rom_2E3C00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3C00) < 0x4
	.space 0x4 - (. - gText_Rom_2E3C00)
	.endif
	.incbin "baserom.gba", 0x2e3c04, 0x1c

	@ src/data/trainers.h:1321 trainers_line_1321
	.globl gText_Rom_2E3C20
gText_Rom_2E3C20: @ 0x082E3C20
	.string "リョウジ$"
	.if (. - gText_Rom_2E3C20) > 0x5
	.error "gText_Rom_2E3C20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3C20) < 0x5
	.space 0x5 - (. - gText_Rom_2E3C20)
	.endif
	.incbin "baserom.gba", 0x2e3c25, 0x1b

	@ src/data/trainers.h:1357 trainers_line_1357 (+1 aliases)
	.globl gText_Rom_2E3C40
gText_Rom_2E3C40: @ 0x082E3C40
	.string "イズミ$"
	.if (. - gText_Rom_2E3C40) > 0x4
	.error "gText_Rom_2E3C40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3C40) < 0x4
	.space 0x4 - (. - gText_Rom_2E3C40)
	.endif
	.incbin "baserom.gba", 0x2e3c44, 0x1c

	@ src/data/trainers.h:1357 trainers_line_1357 (+1 aliases)
	.globl gText_Rom_2E3C60
gText_Rom_2E3C60: @ 0x082E3C60
	.string "イズミ$"
	.if (. - gText_Rom_2E3C60) > 0x4
	.error "gText_Rom_2E3C60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3C60) < 0x4
	.space 0x4 - (. - gText_Rom_2E3C60)
	.endif
	.incbin "baserom.gba", 0x2e3c64, 0x1c

	@ src/data/trainers.h:1453 trainers_line_1453 (+2 aliases)
	.globl gText_Rom_2E3C80
gText_Rom_2E3C80: @ 0x082E3C80
	.string "アオギリ$"
	.if (. - gText_Rom_2E3C80) > 0x5
	.error "gText_Rom_2E3C80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3C80) < 0x5
	.space 0x5 - (. - gText_Rom_2E3C80)
	.endif
	.incbin "baserom.gba", 0x2e3c85, 0x3b

	@ src/data/trainers.h:1551 trainers_line_1551
	.globl gText_Rom_2E3CC0
gText_Rom_2E3CC0: @ 0x082E3CC0
	.string "ミドリ$"
	.if (. - gText_Rom_2E3CC0) > 0x4
	.error "gText_Rom_2E3CC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3CC0) < 0x4
	.space 0x4 - (. - gText_Rom_2E3CC0)
	.endif
	.incbin "baserom.gba", 0x2e3cc4, 0x1c

	@ src/data/trainers.h:1599 trainers_line_1599 (+4 aliases)
	.globl gText_Rom_2E3CE0
gText_Rom_2E3CE0: @ 0x082E3CE0
	.string "ヤヨイ$"
	.if (. - gText_Rom_2E3CE0) > 0x4
	.error "gText_Rom_2E3CE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3CE0) < 0x4
	.space 0x4 - (. - gText_Rom_2E3CE0)
	.endif
	.incbin "baserom.gba", 0x2e3ce4, 0x1c

	@ src/data/trainers.h:1659 trainers_line_1659
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3D00
gText_Rom_2E3D00: @ 0x082E3D00
	.string "コウジロウ$"
	.if (. - gText_Rom_2E3D00) != 0x6
	.error "gText_Rom_2E3D00 must retain its original byte length"
	.endif
	.globl gText_Rom_2E3D02
	.set gText_Rom_2E3D02, gText_Rom_2E3D00 + 0x2
	.incbin "baserom.gba", 0x2e3d06, 0x1a

	@ src/data/trainers.h:1718 trainers_line_1718
	.globl gText_Rom_2E3D20
gText_Rom_2E3D20: @ 0x082E3D20
	.string "チヅル$"
	.if (. - gText_Rom_2E3D20) > 0x4
	.error "gText_Rom_2E3D20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3D20) < 0x4
	.space 0x4 - (. - gText_Rom_2E3D20)
	.endif
	.incbin "baserom.gba", 0x2e3d24, 0x1c

	@ src/data/trainers.h:1599 trainers_line_1599 (+4 aliases)
	.globl gText_Rom_2E3D40
gText_Rom_2E3D40: @ 0x082E3D40
	.string "ヤヨイ$"
	.if (. - gText_Rom_2E3D40) > 0x4
	.error "gText_Rom_2E3D40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3D40) < 0x4
	.space 0x4 - (. - gText_Rom_2E3D40)
	.endif
	.incbin "baserom.gba", 0x2e3d44, 0x1c

	@ src/data/trainers.h:1599 trainers_line_1599 (+4 aliases)
	.globl gText_Rom_2E3D60
gText_Rom_2E3D60: @ 0x082E3D60
	.string "ヤヨイ$"
	.if (. - gText_Rom_2E3D60) > 0x4
	.error "gText_Rom_2E3D60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3D60) < 0x4
	.space 0x4 - (. - gText_Rom_2E3D60)
	.endif
	.incbin "baserom.gba", 0x2e3d64, 0x1c

	@ src/data/trainers.h:1599 trainers_line_1599 (+4 aliases)
	.globl gText_Rom_2E3D80
gText_Rom_2E3D80: @ 0x082E3D80
	.string "ヤヨイ$"
	.if (. - gText_Rom_2E3D80) > 0x4
	.error "gText_Rom_2E3D80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3D80) < 0x4
	.space 0x4 - (. - gText_Rom_2E3D80)
	.endif
	.incbin "baserom.gba", 0x2e3d84, 0x1c

	@ src/data/trainers.h:1599 trainers_line_1599 (+4 aliases)
	.globl gText_Rom_2E3DA0
gText_Rom_2E3DA0: @ 0x082E3DA0
	.string "ヤヨイ$"
	.if (. - gText_Rom_2E3DA0) > 0x4
	.error "gText_Rom_2E3DA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3DA0) < 0x4
	.space 0x4 - (. - gText_Rom_2E3DA0)
	.endif
	.incbin "baserom.gba", 0x2e3da4, 0x1c

	@ src/data/trainers.h:1994 trainers_line_1994 (+4 aliases)
	.globl gText_Rom_2E3DC0
gText_Rom_2E3DC0: @ 0x082E3DC0
	.string "ノブオ$"
	.if (. - gText_Rom_2E3DC0) > 0x4
	.error "gText_Rom_2E3DC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3DC0) < 0x4
	.space 0x4 - (. - gText_Rom_2E3DC0)
	.endif
	.incbin "baserom.gba", 0x2e3dc4, 0x1c

	@ src/data/trainers.h:2037 trainers_line_2037
	.globl gText_Rom_2E3DE0
gText_Rom_2E3DE0: @ 0x082E3DE0
	.string "ケイイチ$"
	.if (. - gText_Rom_2E3DE0) > 0x5
	.error "gText_Rom_2E3DE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3DE0) < 0x5
	.space 0x5 - (. - gText_Rom_2E3DE0)
	.endif
	.incbin "baserom.gba", 0x2e3de5, 0x1b

	@ src/data/trainers.h:2118 trainers_line_2118
	.globl gText_Rom_2E3E00
gText_Rom_2E3E00: @ 0x082E3E00
	.string "アキヒト$"
	.if (. - gText_Rom_2E3E00) > 0x5
	.error "gText_Rom_2E3E00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3E00) < 0x5
	.space 0x5 - (. - gText_Rom_2E3E00)
	.endif
	.incbin "baserom.gba", 0x2e3e05, 0x1b

	@ src/data/trainers.h:1994 trainers_line_1994 (+4 aliases)
	.globl gText_Rom_2E3E20
gText_Rom_2E3E20: @ 0x082E3E20
	.string "ノブオ$"
	.if (. - gText_Rom_2E3E20) > 0x4
	.error "gText_Rom_2E3E20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3E20) < 0x4
	.space 0x4 - (. - gText_Rom_2E3E20)
	.endif
	.incbin "baserom.gba", 0x2e3e24, 0x1c

	@ src/data/trainers.h:1994 trainers_line_1994 (+4 aliases)
	.globl gText_Rom_2E3E40
gText_Rom_2E3E40: @ 0x082E3E40
	.string "ノブオ$"
	.if (. - gText_Rom_2E3E40) > 0x4
	.error "gText_Rom_2E3E40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3E40) < 0x4
	.space 0x4 - (. - gText_Rom_2E3E40)
	.endif
	.incbin "baserom.gba", 0x2e3e44, 0x1c

	@ src/data/trainers.h:1994 trainers_line_1994 (+4 aliases)
	.globl gText_Rom_2E3E60
gText_Rom_2E3E60: @ 0x082E3E60
	.string "ノブオ$"
	.if (. - gText_Rom_2E3E60) > 0x4
	.error "gText_Rom_2E3E60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3E60) < 0x4
	.space 0x4 - (. - gText_Rom_2E3E60)
	.endif
	.incbin "baserom.gba", 0x2e3e64, 0x1c

	@ src/data/trainers.h:1994 trainers_line_1994 (+4 aliases)
	.globl gText_Rom_2E3E80
gText_Rom_2E3E80: @ 0x082E3E80
	.string "ノブオ$"
	.if (. - gText_Rom_2E3E80) > 0x4
	.error "gText_Rom_2E3E80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3E80) < 0x4
	.space 0x4 - (. - gText_Rom_2E3E80)
	.endif
	.incbin "baserom.gba", 0x2e3e84, 0x1c

	@ src/data/trainers.h:2352 trainers_line_2352 (+5 aliases)
	.globl gText_Rom_2E3EA0
gText_Rom_2E3EA0: @ 0x082E3EA0
	.string "マリとダイ$"
	.if (. - gText_Rom_2E3EA0) > 0x6
	.error "gText_Rom_2E3EA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3EA0) < 0x6
	.space 0x6 - (. - gText_Rom_2E3EA0)
	.endif
	.incbin "baserom.gba", 0x2e3ea6, 0x1a

	@ src/data/trainers.h:2352 trainers_line_2352 (+5 aliases)
	.globl gText_Rom_2E3EC0
gText_Rom_2E3EC0: @ 0x082E3EC0
	.string "マリとダイ$"
	.if (. - gText_Rom_2E3EC0) > 0x6
	.error "gText_Rom_2E3EC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3EC0) < 0x6
	.space 0x6 - (. - gText_Rom_2E3EC0)
	.endif
	.incbin "baserom.gba", 0x2e3ec6, 0x1a

	@ src/data/trainers.h:2352 trainers_line_2352 (+5 aliases)
	.globl gText_Rom_2E3EE0
gText_Rom_2E3EE0: @ 0x082E3EE0
	.string "マリとダイ$"
	.if (. - gText_Rom_2E3EE0) > 0x6
	.error "gText_Rom_2E3EE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3EE0) < 0x6
	.space 0x6 - (. - gText_Rom_2E3EE0)
	.endif
	.incbin "baserom.gba", 0x2e3ee6, 0x1a

	@ src/data/trainers.h:2352 trainers_line_2352 (+5 aliases)
	.globl gText_Rom_2E3F00
gText_Rom_2E3F00: @ 0x082E3F00
	.string "マリとダイ$"
	.if (. - gText_Rom_2E3F00) > 0x6
	.error "gText_Rom_2E3F00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3F00) < 0x6
	.space 0x6 - (. - gText_Rom_2E3F00)
	.endif
	.incbin "baserom.gba", 0x2e3f06, 0x1a

	@ src/data/trainers.h:2352 trainers_line_2352 (+5 aliases)
	.globl gText_Rom_2E3F20
gText_Rom_2E3F20: @ 0x082E3F20
	.string "マリとダイ$"
	.if (. - gText_Rom_2E3F20) > 0x6
	.error "gText_Rom_2E3F20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3F20) < 0x6
	.space 0x6 - (. - gText_Rom_2E3F20)
	.endif
	.incbin "baserom.gba", 0x2e3f26, 0x1a

	@ src/data/trainers.h:2352 trainers_line_2352 (+5 aliases)
	.globl gText_Rom_2E3F40
gText_Rom_2E3F40: @ 0x082E3F40
	.string "マリとダイ$"
	.if (. - gText_Rom_2E3F40) > 0x6
	.error "gText_Rom_2E3F40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3F40) < 0x6
	.space 0x6 - (. - gText_Rom_2E3F40)
	.endif
	.incbin "baserom.gba", 0x2e3f46, 0x1a

	@ src/data/trainers.h:2654 trainers_line_2654 (+4 aliases)
	.globl gText_Rom_2E3F60
gText_Rom_2E3F60: @ 0x082E3F60
	.string "アユミ$"
	.if (. - gText_Rom_2E3F60) > 0x4
	.error "gText_Rom_2E3F60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3F60) < 0x4
	.space 0x4 - (. - gText_Rom_2E3F60)
	.endif
	.incbin "baserom.gba", 0x2e3f64, 0x1c

	@ src/data/trainers.h:2702 trainers_line_2702 (+1 aliases)
	.globl gText_Rom_2E3F80
gText_Rom_2E3F80: @ 0x082E3F80
	.string "ヒロミ$"
	.if (. - gText_Rom_2E3F80) > 0x4
	.error "gText_Rom_2E3F80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3F80) < 0x4
	.space 0x4 - (. - gText_Rom_2E3F80)
	.endif
	.incbin "baserom.gba", 0x2e3f84, 0x1c

	@ src/data/trainers.h:2738 trainers_line_2738
	.globl gText_Rom_2E3FA0
gText_Rom_2E3FA0: @ 0x082E3FA0
	.string "ノゾミ$"
	.if (. - gText_Rom_2E3FA0) > 0x4
	.error "gText_Rom_2E3FA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3FA0) < 0x4
	.space 0x4 - (. - gText_Rom_2E3FA0)
	.endif
	.incbin "baserom.gba", 0x2e3fa4, 0x1c

	@ src/data/trainers.h:2654 trainers_line_2654 (+4 aliases)
	.globl gText_Rom_2E3FC0
gText_Rom_2E3FC0: @ 0x082E3FC0
	.string "アユミ$"
	.if (. - gText_Rom_2E3FC0) > 0x4
	.error "gText_Rom_2E3FC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3FC0) < 0x4
	.space 0x4 - (. - gText_Rom_2E3FC0)
	.endif
	.incbin "baserom.gba", 0x2e3fc4, 0x1c

	@ src/data/trainers.h:2654 trainers_line_2654 (+4 aliases)
	.globl gText_Rom_2E3FE0
gText_Rom_2E3FE0: @ 0x082E3FE0
	.string "アユミ$"
	.if (. - gText_Rom_2E3FE0) > 0x4
	.error "gText_Rom_2E3FE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3FE0) < 0x4
	.space 0x4 - (. - gText_Rom_2E3FE0)
	.endif
	.incbin "baserom.gba", 0x2e3fe4, 0x1c

	@ src/data/trainers.h:2654 trainers_line_2654 (+4 aliases)
	.globl gText_Rom_2E4000
gText_Rom_2E4000: @ 0x082E4000
	.string "アユミ$"
	.if (. - gText_Rom_2E4000) > 0x4
	.error "gText_Rom_2E4000 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4000) < 0x4
	.space 0x4 - (. - gText_Rom_2E4000)
	.endif
	.incbin "baserom.gba", 0x2e4004, 0x1c

	@ src/data/trainers.h:2654 trainers_line_2654 (+4 aliases)
	.globl gText_Rom_2E4020
gText_Rom_2E4020: @ 0x082E4020
	.string "アユミ$"
	.if (. - gText_Rom_2E4020) > 0x4
	.error "gText_Rom_2E4020 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4020) < 0x4
	.space 0x4 - (. - gText_Rom_2E4020)
	.endif
	.incbin "baserom.gba", 0x2e4024, 0x1c

	@ src/data/trainers.h:2966 trainers_line_2966 (+4 aliases)
	.globl gText_Rom_2E4040
gText_Rom_2E4040: @ 0x082E4040
	.string "ユウタ$"
	.if (. - gText_Rom_2E4040) > 0x4
	.error "gText_Rom_2E4040 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4040) < 0x4
	.space 0x4 - (. - gText_Rom_2E4040)
	.endif
	.incbin "baserom.gba", 0x2e4044, 0x1c

	@ src/data/trainers.h:3009 trainers_line_3009
	.globl gText_Rom_2E4060
gText_Rom_2E4060: @ 0x082E4060
	.string "ヤスノブ$"
	.if (. - gText_Rom_2E4060) > 0x5
	.error "gText_Rom_2E4060 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4060) < 0x5
	.space 0x5 - (. - gText_Rom_2E4060)
	.endif
	.incbin "baserom.gba", 0x2e4065, 0x1b

	@ src/data/trainers.h:3057 trainers_line_3057
	.globl gText_Rom_2E4080
gText_Rom_2E4080: @ 0x082E4080
	.string "マナブ$"
	.if (. - gText_Rom_2E4080) > 0x4
	.error "gText_Rom_2E4080 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4080) < 0x4
	.space 0x4 - (. - gText_Rom_2E4080)
	.endif
	.incbin "baserom.gba", 0x2e4084, 0x1c

	@ src/data/trainers.h:2966 trainers_line_2966 (+4 aliases)
	.globl gText_Rom_2E40A0
gText_Rom_2E40A0: @ 0x082E40A0
	.string "ユウタ$"
	.if (. - gText_Rom_2E40A0) > 0x4
	.error "gText_Rom_2E40A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E40A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E40A0)
	.endif
	.incbin "baserom.gba", 0x2e40a4, 0x1c

	@ src/data/trainers.h:2966 trainers_line_2966 (+4 aliases)
	.globl gText_Rom_2E40C0
gText_Rom_2E40C0: @ 0x082E40C0
	.string "ユウタ$"
	.if (. - gText_Rom_2E40C0) > 0x4
	.error "gText_Rom_2E40C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E40C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E40C0)
	.endif
	.incbin "baserom.gba", 0x2e40c4, 0x1c

	@ src/data/trainers.h:2966 trainers_line_2966 (+4 aliases)
	.globl gText_Rom_2E40E0
gText_Rom_2E40E0: @ 0x082E40E0
	.string "ユウタ$"
	.if (. - gText_Rom_2E40E0) > 0x4
	.error "gText_Rom_2E40E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E40E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E40E0)
	.endif
	.incbin "baserom.gba", 0x2e40e4, 0x1c

	@ src/data/trainers.h:2966 trainers_line_2966 (+4 aliases)
	.globl gText_Rom_2E4100
gText_Rom_2E4100: @ 0x082E4100
	.string "ユウタ$"
	.if (. - gText_Rom_2E4100) > 0x4
	.error "gText_Rom_2E4100 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4100) < 0x4
	.space 0x4 - (. - gText_Rom_2E4100)
	.endif
	.incbin "baserom.gba", 0x2e4104, 0x1c

	@ src/data/trainers.h:3265 trainers_line_3265
	.globl gText_Rom_2E4120
gText_Rom_2E4120: @ 0x082E4120
	.string "トシキ$"
	.if (. - gText_Rom_2E4120) > 0x4
	.error "gText_Rom_2E4120 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4120) < 0x4
	.space 0x4 - (. - gText_Rom_2E4120)
	.endif
	.incbin "baserom.gba", 0x2e4124, 0x1c

	@ src/data/trainers.h:3309 trainers_line_3309
	.globl gText_Rom_2E4140
gText_Rom_2E4140: @ 0x082E4140
	.string "ヒデキ$"
	.if (. - gText_Rom_2E4140) > 0x4
	.error "gText_Rom_2E4140 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4140) < 0x4
	.space 0x4 - (. - gText_Rom_2E4140)
	.endif
	.incbin "baserom.gba", 0x2e4144, 0x1c

	@ src/data/trainers.h:3353 trainers_line_3353
	.globl gText_Rom_2E4160
gText_Rom_2E4160: @ 0x082E4160
	.string "カズマ$"
	.if (. - gText_Rom_2E4160) > 0x4
	.error "gText_Rom_2E4160 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4160) < 0x4
	.space 0x4 - (. - gText_Rom_2E4160)
	.endif
	.incbin "baserom.gba", 0x2e4164, 0x1c

	@ src/data/trainers.h:3399 trainers_line_3399
	.globl gText_Rom_2E4180
gText_Rom_2E4180: @ 0x082E4180
	.string "ナオキ$"
	.if (. - gText_Rom_2E4180) > 0x4
	.error "gText_Rom_2E4180 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4180) < 0x4
	.space 0x4 - (. - gText_Rom_2E4180)
	.endif
	.incbin "baserom.gba", 0x2e4184, 0x1c

	@ src/data/trainers.h:3442 trainers_line_3442
	.globl gText_Rom_2E41A0
gText_Rom_2E41A0: @ 0x082E41A0
	.string "ヨシオ$"
	.if (. - gText_Rom_2E41A0) > 0x4
	.error "gText_Rom_2E41A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E41A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E41A0)
	.endif
	.incbin "baserom.gba", 0x2e41a4, 0x1c

	@ src/data/trainers.h:3563 trainers_line_3563
	.globl gText_Rom_2E41C0
gText_Rom_2E41C0: @ 0x082E41C0
	.string "ユウト$"
	.if (. - gText_Rom_2E41C0) > 0x4
	.error "gText_Rom_2E41C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E41C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E41C0)
	.endif
	.incbin "baserom.gba", 0x2e41c4, 0x1c

	@ src/data/trainers.h:3625 trainers_line_3625 (+1 aliases)
	.globl gText_Rom_2E41E0
gText_Rom_2E41E0: @ 0x082E41E0
	.string "マコト$"
	.if (. - gText_Rom_2E41E0) > 0x4
	.error "gText_Rom_2E41E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E41E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E41E0)
	.endif
	.incbin "baserom.gba", 0x2e41e4, 0x1c

	@ src/data/trainers.h:3675 trainers_line_3675 (+4 aliases)
	.globl gText_Rom_2E4200
gText_Rom_2E4200: @ 0x082E4200
	.string "ユウスケ$"
	.if (. - gText_Rom_2E4200) > 0x5
	.error "gText_Rom_2E4200 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4200) < 0x5
	.space 0x5 - (. - gText_Rom_2E4200)
	.endif
	.incbin "baserom.gba", 0x2e4205, 0x1b

	@ src/data/trainers.h:3737 trainers_line_3737
	.globl gText_Rom_2E4220
gText_Rom_2E4220: @ 0x082E4220
	.string "コウキ$"
	.if (. - gText_Rom_2E4220) > 0x4
	.error "gText_Rom_2E4220 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4220) < 0x4
	.space 0x4 - (. - gText_Rom_2E4220)
	.endif
	.incbin "baserom.gba", 0x2e4224, 0x1c

	@ src/data/trainers.h:3787 trainers_line_3787 (+5 aliases)
	.globl gText_Rom_2E4240
gText_Rom_2E4240: @ 0x082E4240
	.string "ショウ$"
	.if (. - gText_Rom_2E4240) > 0x4
	.error "gText_Rom_2E4240 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4240) < 0x4
	.space 0x4 - (. - gText_Rom_2E4240)
	.endif
	.incbin "baserom.gba", 0x2e4244, 0x1c

	@ src/data/trainers.h:3837 trainers_line_3837
	.globl gText_Rom_2E4260
gText_Rom_2E4260: @ 0x082E4260
	.string "タクヤ$"
	.if (. - gText_Rom_2E4260) > 0x4
	.error "gText_Rom_2E4260 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4260) < 0x4
	.space 0x4 - (. - gText_Rom_2E4260)
	.endif
	.incbin "baserom.gba", 0x2e4264, 0x1c

	@ src/data/trainers.h:3899 trainers_line_3899
	.globl gText_Rom_2E4280
gText_Rom_2E4280: @ 0x082E4280
	.string "リョウヘイ$"
	.if (. - gText_Rom_2E4280) > 0x6
	.error "gText_Rom_2E4280 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4280) < 0x6
	.space 0x6 - (. - gText_Rom_2E4280)
	.endif
	.incbin "baserom.gba", 0x2e4286, 0x1a

	@ src/data/trainers.h:3973 trainers_line_3973
	.globl gText_Rom_2E42A0
gText_Rom_2E42A0: @ 0x082E42A0
	.string "カケル$"
	.if (. - gText_Rom_2E42A0) > 0x4
	.error "gText_Rom_2E42A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E42A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E42A0)
	.endif
	.incbin "baserom.gba", 0x2e42a4, 0x1c

	@ src/data/trainers.h:3675 trainers_line_3675 (+4 aliases)
	.globl gText_Rom_2E42C0
gText_Rom_2E42C0: @ 0x082E42C0
	.string "ユウスケ$"
	.if (. - gText_Rom_2E42C0) > 0x5
	.error "gText_Rom_2E42C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E42C0) < 0x5
	.space 0x5 - (. - gText_Rom_2E42C0)
	.endif
	.incbin "baserom.gba", 0x2e42c5, 0x1b

	@ src/data/trainers.h:3675 trainers_line_3675 (+4 aliases)
	.globl gText_Rom_2E42E0
gText_Rom_2E42E0: @ 0x082E42E0
	.string "ユウスケ$"
	.if (. - gText_Rom_2E42E0) > 0x5
	.error "gText_Rom_2E42E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E42E0) < 0x5
	.space 0x5 - (. - gText_Rom_2E42E0)
	.endif
	.incbin "baserom.gba", 0x2e42e5, 0x1b

	@ src/data/trainers.h:3675 trainers_line_3675 (+4 aliases)
	.globl gText_Rom_2E4300
gText_Rom_2E4300: @ 0x082E4300
	.string "ユウスケ$"
	.if (. - gText_Rom_2E4300) > 0x5
	.error "gText_Rom_2E4300 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4300) < 0x5
	.space 0x5 - (. - gText_Rom_2E4300)
	.endif
	.incbin "baserom.gba", 0x2e4305, 0x1b

	@ src/data/trainers.h:3675 trainers_line_3675 (+4 aliases)
	.globl gText_Rom_2E4320
gText_Rom_2E4320: @ 0x082E4320
	.string "ユウスケ$"
	.if (. - gText_Rom_2E4320) > 0x5
	.error "gText_Rom_2E4320 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4320) < 0x5
	.space 0x5 - (. - gText_Rom_2E4320)
	.endif
	.incbin "baserom.gba", 0x2e4325, 0x1b

	@ src/data/trainers.h:4283 trainers_line_4283
	.globl gText_Rom_2E4340
gText_Rom_2E4340: @ 0x082E4340
	.string "レイジ$"
	.if (. - gText_Rom_2E4340) > 0x4
	.error "gText_Rom_2E4340 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4340) < 0x4
	.space 0x4 - (. - gText_Rom_2E4340)
	.endif
	.incbin "baserom.gba", 0x2e4344, 0x1c

	@ src/data/trainers.h:4333 trainers_line_4333
	.globl gText_Rom_2E4360
gText_Rom_2E4360: @ 0x082E4360
	.string "アヤカ$"
	.if (. - gText_Rom_2E4360) > 0x4
	.error "gText_Rom_2E4360 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4360) < 0x4
	.space 0x4 - (. - gText_Rom_2E4360)
	.endif
	.incbin "baserom.gba", 0x2e4364, 0x1c

	@ src/data/trainers.h:4376 trainers_line_4376
	.globl gText_Rom_2E4380
gText_Rom_2E4380: @ 0x082E4380
	.string "ミハル$"
	.if (. - gText_Rom_2E4380) > 0x4
	.error "gText_Rom_2E4380 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4380) < 0x4
	.space 0x4 - (. - gText_Rom_2E4380)
	.endif
	.incbin "baserom.gba", 0x2e4384, 0x1c

	@ src/data/trainers.h:4420 trainers_line_4420
	.globl gText_Rom_2E43A0
gText_Rom_2E43A0: @ 0x082E43A0
	.string "サオリ$"
	.if (. - gText_Rom_2E43A0) > 0x4
	.error "gText_Rom_2E43A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E43A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E43A0)
	.endif
	.incbin "baserom.gba", 0x2e43a4, 0x1c

	@ src/data/trainers.h:4463 trainers_line_4463
	.globl gText_Rom_2E43C0
gText_Rom_2E43C0: @ 0x082E43C0
	.string "セツナ$"
	.if (. - gText_Rom_2E43C0) > 0x4
	.error "gText_Rom_2E43C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E43C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E43C0)
	.endif
	.incbin "baserom.gba", 0x2e43c4, 0x1c

	@ src/data/trainers.h:4546 trainers_line_4546
	.globl gText_Rom_2E43E0
gText_Rom_2E43E0: @ 0x082E43E0
	.string "アイナ$"
	.if (. - gText_Rom_2E43E0) > 0x4
	.error "gText_Rom_2E43E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E43E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E43E0)
	.endif
	.incbin "baserom.gba", 0x2e43e4, 0x1c

	@ src/data/trainers.h:4596 trainers_line_4596 (+4 aliases)
	.globl gText_Rom_2E4400
gText_Rom_2E4400: @ 0x082E4400
	.string "マリア$"
	.if (. - gText_Rom_2E4400) > 0x4
	.error "gText_Rom_2E4400 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4400) < 0x4
	.space 0x4 - (. - gText_Rom_2E4400)
	.endif
	.incbin "baserom.gba", 0x2e4404, 0x1c

	@ src/data/trainers.h:4658 trainers_line_4658
	.globl gText_Rom_2E4420
gText_Rom_2E4420: @ 0x082E4420
	.string "ヤエコ$"
	.if (. - gText_Rom_2E4420) > 0x4
	.error "gText_Rom_2E4420 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4420) < 0x4
	.space 0x4 - (. - gText_Rom_2E4420)
	.endif
	.incbin "baserom.gba", 0x2e4424, 0x1c

	@ src/data/trainers.h:4696 trainers_line_4696
	.globl gText_Rom_2E4440
gText_Rom_2E4440: @ 0x082E4440
	.string "アイリ$"
	.if (. - gText_Rom_2E4440) > 0x4
	.error "gText_Rom_2E4440 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4440) < 0x4
	.space 0x4 - (. - gText_Rom_2E4440)
	.endif
	.incbin "baserom.gba", 0x2e4444, 0x1c

	@ src/data/trainers.h:4734 trainers_line_4734
	.globl gText_Rom_2E4460
gText_Rom_2E4460: @ 0x082E4460
	.string "エリコ$"
	.if (. - gText_Rom_2E4460) > 0x4
	.error "gText_Rom_2E4460 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4460) < 0x4
	.space 0x4 - (. - gText_Rom_2E4460)
	.endif
	.incbin "baserom.gba", 0x2e4464, 0x1c

	@ src/data/trainers.h:4772 trainers_line_4772
	.globl gText_Rom_2E4480
gText_Rom_2E4480: @ 0x082E4480
	.string "カズミ$"
	.if (. - gText_Rom_2E4480) > 0x4
	.error "gText_Rom_2E4480 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4480) < 0x4
	.space 0x4 - (. - gText_Rom_2E4480)
	.endif
	.incbin "baserom.gba", 0x2e4484, 0x1c

	@ src/data/trainers.h:4834 trainers_line_4834
	.globl gText_Rom_2E44A0
gText_Rom_2E44A0: @ 0x082E44A0
	.string "コトミ$"
	.if (. - gText_Rom_2E44A0) > 0x4
	.error "gText_Rom_2E44A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E44A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E44A0)
	.endif
	.incbin "baserom.gba", 0x2e44a4, 0x1c

	@ src/data/trainers.h:4884 trainers_line_4884
	.globl gText_Rom_2E44C0
gText_Rom_2E44C0: @ 0x082E44C0
	.string "ヒヅキ$"
	.if (. - gText_Rom_2E44C0) > 0x4
	.error "gText_Rom_2E44C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E44C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E44C0)
	.endif
	.incbin "baserom.gba", 0x2e44c4, 0x1c

	@ src/data/trainers.h:4596 trainers_line_4596 (+4 aliases)
	.globl gText_Rom_2E44E0
gText_Rom_2E44E0: @ 0x082E44E0
	.string "マリア$"
	.if (. - gText_Rom_2E44E0) > 0x4
	.error "gText_Rom_2E44E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E44E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E44E0)
	.endif
	.incbin "baserom.gba", 0x2e44e4, 0x1c

	@ src/data/trainers.h:4596 trainers_line_4596 (+4 aliases)
	.globl gText_Rom_2E4500
gText_Rom_2E4500: @ 0x082E4500
	.string "マリア$"
	.if (. - gText_Rom_2E4500) > 0x4
	.error "gText_Rom_2E4500 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4500) < 0x4
	.space 0x4 - (. - gText_Rom_2E4500)
	.endif
	.incbin "baserom.gba", 0x2e4504, 0x1c

	@ src/data/trainers.h:4596 trainers_line_4596 (+4 aliases)
	.globl gText_Rom_2E4520
gText_Rom_2E4520: @ 0x082E4520
	.string "マリア$"
	.if (. - gText_Rom_2E4520) > 0x4
	.error "gText_Rom_2E4520 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4520) < 0x4
	.space 0x4 - (. - gText_Rom_2E4520)
	.endif
	.incbin "baserom.gba", 0x2e4524, 0x1c

	@ src/data/trainers.h:4596 trainers_line_4596 (+4 aliases)
	.globl gText_Rom_2E4540
gText_Rom_2E4540: @ 0x082E4540
	.string "マリア$"
	.if (. - gText_Rom_2E4540) > 0x4
	.error "gText_Rom_2E4540 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4540) < 0x4
	.space 0x4 - (. - gText_Rom_2E4540)
	.endif
	.incbin "baserom.gba", 0x2e4544, 0x1c

	@ src/data/trainers.h:5194 trainers_line_5194
	.globl gText_Rom_2E4560
gText_Rom_2E4560: @ 0x082E4560
	.string "コトネ$"
	.if (. - gText_Rom_2E4560) > 0x4
	.error "gText_Rom_2E4560 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4560) < 0x4
	.space 0x4 - (. - gText_Rom_2E4560)
	.endif
	.incbin "baserom.gba", 0x2e4564, 0x1c

	@ src/data/trainers.h:5242 trainers_line_5242
	.globl gText_Rom_2E4580
gText_Rom_2E4580: @ 0x082E4580
	.string "サチコ$"
	.if (. - gText_Rom_2E4580) > 0x4
	.error "gText_Rom_2E4580 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4580) < 0x4
	.space 0x4 - (. - gText_Rom_2E4580)
	.endif
	.incbin "baserom.gba", 0x2e4584, 0x1c

	@ src/data/trainers.h:5290 trainers_line_5290
	.globl gText_Rom_2E45A0
gText_Rom_2E45A0: @ 0x082E45A0
	.string "ミコト$"
	.if (. - gText_Rom_2E45A0) > 0x4
	.error "gText_Rom_2E45A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E45A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E45A0)
	.endif
	.incbin "baserom.gba", 0x2e45a4, 0x1c

	@ src/data/trainers.h:5338 trainers_line_5338 (+4 aliases)
	.globl gText_Rom_2E45C0
gText_Rom_2E45C0: @ 0x082E45C0
	.string "ホノカ$"
	.if (. - gText_Rom_2E45C0) > 0x4
	.error "gText_Rom_2E45C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E45C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E45C0)
	.endif
	.incbin "baserom.gba", 0x2e45c4, 0x1c

	@ src/data/trainers.h:5374 trainers_line_5374
	.globl gText_Rom_2E45E0
gText_Rom_2E45E0: @ 0x082E45E0
	.string "ホタル$"
	.if (. - gText_Rom_2E45E0) > 0x4
	.error "gText_Rom_2E45E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E45E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E45E0)
	.endif
	.incbin "baserom.gba", 0x2e45e4, 0x1c

	@ src/data/trainers.h:5338 trainers_line_5338 (+4 aliases)
	.globl gText_Rom_2E4600
gText_Rom_2E4600: @ 0x082E4600
	.string "ホノカ$"
	.if (. - gText_Rom_2E4600) > 0x4
	.error "gText_Rom_2E4600 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4600) < 0x4
	.space 0x4 - (. - gText_Rom_2E4600)
	.endif
	.incbin "baserom.gba", 0x2e4604, 0x1c

	@ src/data/trainers.h:5338 trainers_line_5338 (+4 aliases)
	.globl gText_Rom_2E4620
gText_Rom_2E4620: @ 0x082E4620
	.string "ホノカ$"
	.if (. - gText_Rom_2E4620) > 0x4
	.error "gText_Rom_2E4620 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4620) < 0x4
	.space 0x4 - (. - gText_Rom_2E4620)
	.endif
	.incbin "baserom.gba", 0x2e4624, 0x1c

	@ src/data/trainers.h:5338 trainers_line_5338 (+4 aliases)
	.globl gText_Rom_2E4640
gText_Rom_2E4640: @ 0x082E4640
	.string "ホノカ$"
	.if (. - gText_Rom_2E4640) > 0x4
	.error "gText_Rom_2E4640 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4640) < 0x4
	.space 0x4 - (. - gText_Rom_2E4640)
	.endif
	.incbin "baserom.gba", 0x2e4644, 0x1c

	@ src/data/trainers.h:5338 trainers_line_5338 (+4 aliases)
	.globl gText_Rom_2E4660
gText_Rom_2E4660: @ 0x082E4660
	.string "ホノカ$"
	.if (. - gText_Rom_2E4660) > 0x4
	.error "gText_Rom_2E4660 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4660) < 0x4
	.space 0x4 - (. - gText_Rom_2E4660)
	.endif
	.incbin "baserom.gba", 0x2e4664, 0x1c

	@ src/data/trainers.h:5614 trainers_line_5614 (+5 aliases)
	.globl gText_Rom_2E4680
gText_Rom_2E4680: @ 0x082E4680
	.string "レイカ$"
	.if (. - gText_Rom_2E4680) > 0x4
	.error "gText_Rom_2E4680 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4680) < 0x4
	.space 0x4 - (. - gText_Rom_2E4680)
	.endif
	.incbin "baserom.gba", 0x2e4684, 0x1c

	@ src/data/trainers.h:5654 trainers_line_5654
	.globl gText_Rom_2E46A0
gText_Rom_2E46A0: @ 0x082E46A0
	.string "エイカ$"
	.if (. - gText_Rom_2E46A0) > 0x4
	.error "gText_Rom_2E46A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E46A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E46A0)
	.endif
	.incbin "baserom.gba", 0x2e46a4, 0x1c

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E46C0
gText_Rom_2E46C0: @ 0x082E46C0
	.string "したっぱ$"
	.if (. - gText_Rom_2E46C0) > 0x5
	.error "gText_Rom_2E46C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E46C0) < 0x5
	.space 0x5 - (. - gText_Rom_2E46C0)
	.endif
	.incbin "baserom.gba", 0x2e46c5, 0x1b

	@ src/data/trainers.h:5614 trainers_line_5614 (+5 aliases)
	.globl gText_Rom_2E46E0
gText_Rom_2E46E0: @ 0x082E46E0
	.string "レイカ$"
	.if (. - gText_Rom_2E46E0) > 0x4
	.error "gText_Rom_2E46E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E46E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E46E0)
	.endif
	.incbin "baserom.gba", 0x2e46e4, 0x1c

	@ src/data/trainers.h:5827 trainers_line_5827
	.globl gText_Rom_2E4700
gText_Rom_2E4700: @ 0x082E4700
	.string "シオリ$"
	.if (. - gText_Rom_2E4700) > 0x4
	.error "gText_Rom_2E4700 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4700) < 0x4
	.space 0x4 - (. - gText_Rom_2E4700)
	.endif
	.incbin "baserom.gba", 0x2e4704, 0x1c

	@ src/data/trainers.h:5867 trainers_line_5867
	.globl gText_Rom_2E4720
gText_Rom_2E4720: @ 0x082E4720
	.string "カナコ$"
	.if (. - gText_Rom_2E4720) > 0x4
	.error "gText_Rom_2E4720 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4720) < 0x4
	.space 0x4 - (. - gText_Rom_2E4720)
	.endif
	.incbin "baserom.gba", 0x2e4724, 0x1c

	@ src/data/trainers.h:5614 trainers_line_5614 (+5 aliases)
	.globl gText_Rom_2E4740
gText_Rom_2E4740: @ 0x082E4740
	.string "レイカ$"
	.if (. - gText_Rom_2E4740) > 0x4
	.error "gText_Rom_2E4740 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4740) < 0x4
	.space 0x4 - (. - gText_Rom_2E4740)
	.endif
	.incbin "baserom.gba", 0x2e4744, 0x1c

	@ src/data/trainers.h:5614 trainers_line_5614 (+5 aliases)
	.globl gText_Rom_2E4760
gText_Rom_2E4760: @ 0x082E4760
	.string "レイカ$"
	.if (. - gText_Rom_2E4760) > 0x4
	.error "gText_Rom_2E4760 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4760) < 0x4
	.space 0x4 - (. - gText_Rom_2E4760)
	.endif
	.incbin "baserom.gba", 0x2e4764, 0x1c

	@ src/data/trainers.h:5614 trainers_line_5614 (+5 aliases)
	.globl gText_Rom_2E4780
gText_Rom_2E4780: @ 0x082E4780
	.string "レイカ$"
	.if (. - gText_Rom_2E4780) > 0x4
	.error "gText_Rom_2E4780 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4780) < 0x4
	.space 0x4 - (. - gText_Rom_2E4780)
	.endif
	.incbin "baserom.gba", 0x2e4784, 0x1c

	@ src/data/trainers.h:5614 trainers_line_5614 (+5 aliases)
	.globl gText_Rom_2E47A0
gText_Rom_2E47A0: @ 0x082E47A0
	.string "レイカ$"
	.if (. - gText_Rom_2E47A0) > 0x4
	.error "gText_Rom_2E47A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E47A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E47A0)
	.endif
	.incbin "baserom.gba", 0x2e47a4, 0x1c

	@ src/data/trainers.h:6074 trainers_line_6074
	.globl gText_Rom_2E47C0
gText_Rom_2E47C0: @ 0x082E47C0
	.string "メグミ$"
	.if (. - gText_Rom_2E47C0) > 0x4
	.error "gText_Rom_2E47C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E47C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E47C0)
	.endif
	.incbin "baserom.gba", 0x2e47c4, 0x1c

	@ src/data/trainers.h:6110 trainers_line_6110
	.globl gText_Rom_2E47E0
gText_Rom_2E47E0: @ 0x082E47E0
	.string "クニミ$"
	.if (. - gText_Rom_2E47E0) > 0x4
	.error "gText_Rom_2E47E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E47E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E47E0)
	.endif
	.incbin "baserom.gba", 0x2e47e4, 0x1c

	@ src/data/trainers.h:6146 trainers_line_6146
	.globl gText_Rom_2E4800
gText_Rom_2E4800: @ 0x082E4800
	.string "アサミ$"
	.if (. - gText_Rom_2E4800) > 0x4
	.error "gText_Rom_2E4800 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4800) < 0x4
	.space 0x4 - (. - gText_Rom_2E4800)
	.endif
	.incbin "baserom.gba", 0x2e4804, 0x1c

	@ src/data/trainers.h:6182 trainers_line_6182 (+4 aliases)
	.globl gText_Rom_2E4820
gText_Rom_2E4820: @ 0x082E4820
	.string "ヨリコ$"
	.if (. - gText_Rom_2E4820) > 0x4
	.error "gText_Rom_2E4820 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4820) < 0x4
	.space 0x4 - (. - gText_Rom_2E4820)
	.endif
	.incbin "baserom.gba", 0x2e4824, 0x1c

	@ src/data/trainers.h:6244 trainers_line_6244
	.globl gText_Rom_2E4840
gText_Rom_2E4840: @ 0x082E4840
	.string "マユコ$"
	.if (. - gText_Rom_2E4840) > 0x4
	.error "gText_Rom_2E4840 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4840) < 0x4
	.space 0x4 - (. - gText_Rom_2E4840)
	.endif
	.incbin "baserom.gba", 0x2e4844, 0x1c

	@ src/data/trainers.h:6280 trainers_line_6280
	.globl gText_Rom_2E4860
gText_Rom_2E4860: @ 0x082E4860
	.string "セイコ$"
	.if (. - gText_Rom_2E4860) > 0x4
	.error "gText_Rom_2E4860 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4860) < 0x4
	.space 0x4 - (. - gText_Rom_2E4860)
	.endif
	.incbin "baserom.gba", 0x2e4864, 0x1c

	@ src/data/trainers.h:6316 trainers_line_6316
	.globl gText_Rom_2E4880
gText_Rom_2E4880: @ 0x082E4880
	.string "ナオコ$"
	.if (. - gText_Rom_2E4880) > 0x4
	.error "gText_Rom_2E4880 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4880) < 0x4
	.space 0x4 - (. - gText_Rom_2E4880)
	.endif
	.incbin "baserom.gba", 0x2e4884, 0x1c

	@ src/data/trainers.h:6396 trainers_line_6396
	.globl gText_Rom_2E48A0
gText_Rom_2E48A0: @ 0x082E48A0
	.string "ハルコ$"
	.if (. - gText_Rom_2E48A0) > 0x4
	.error "gText_Rom_2E48A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E48A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E48A0)
	.endif
	.incbin "baserom.gba", 0x2e48a4, 0x1c

	@ src/data/trainers.h:6182 trainers_line_6182 (+4 aliases)
	.globl gText_Rom_2E48C0
gText_Rom_2E48C0: @ 0x082E48C0
	.string "ヨリコ$"
	.if (. - gText_Rom_2E48C0) > 0x4
	.error "gText_Rom_2E48C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E48C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E48C0)
	.endif
	.incbin "baserom.gba", 0x2e48c4, 0x1c

	@ src/data/trainers.h:6182 trainers_line_6182 (+4 aliases)
	.globl gText_Rom_2E48E0
gText_Rom_2E48E0: @ 0x082E48E0
	.string "ヨリコ$"
	.if (. - gText_Rom_2E48E0) > 0x4
	.error "gText_Rom_2E48E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E48E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E48E0)
	.endif
	.incbin "baserom.gba", 0x2e48e4, 0x1c

	@ src/data/trainers.h:6182 trainers_line_6182 (+4 aliases)
	.globl gText_Rom_2E4900
gText_Rom_2E4900: @ 0x082E4900
	.string "ヨリコ$"
	.if (. - gText_Rom_2E4900) > 0x4
	.error "gText_Rom_2E4900 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4900) < 0x4
	.space 0x4 - (. - gText_Rom_2E4900)
	.endif
	.incbin "baserom.gba", 0x2e4904, 0x1c

	@ src/data/trainers.h:6182 trainers_line_6182 (+4 aliases)
	.globl gText_Rom_2E4920
gText_Rom_2E4920: @ 0x082E4920
	.string "ヨリコ$"
	.if (. - gText_Rom_2E4920) > 0x4
	.error "gText_Rom_2E4920 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4920) < 0x4
	.space 0x4 - (. - gText_Rom_2E4920)
	.endif
	.incbin "baserom.gba", 0x2e4924, 0x1c

	@ src/data/trainers.h:6692 trainers_line_6692 (+4 aliases)
	.globl gText_Rom_2E4940
gText_Rom_2E4940: @ 0x082E4940
	.string "ミツグ$"
	.if (. - gText_Rom_2E4940) > 0x4
	.error "gText_Rom_2E4940 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4940) < 0x4
	.space 0x4 - (. - gText_Rom_2E4940)
	.endif
	.incbin "baserom.gba", 0x2e4944, 0x3c

	@ src/data/trainers.h:6780 trainers_line_6780
	.globl gText_Rom_2E4980
gText_Rom_2E4980: @ 0x082E4980
	.string "ショウイチ$"
	.if (. - gText_Rom_2E4980) > 0x6
	.error "gText_Rom_2E4980 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4980) < 0x6
	.space 0x6 - (. - gText_Rom_2E4980)
	.endif
	.incbin "baserom.gba", 0x2e4986, 0x1a

	@ src/data/trainers.h:6692 trainers_line_6692 (+4 aliases)
	.globl gText_Rom_2E49A0
gText_Rom_2E49A0: @ 0x082E49A0
	.string "ミツグ$"
	.if (. - gText_Rom_2E49A0) > 0x4
	.error "gText_Rom_2E49A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E49A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E49A0)
	.endif
	.incbin "baserom.gba", 0x2e49a4, 0x1c

	@ src/data/trainers.h:6692 trainers_line_6692 (+4 aliases)
	.globl gText_Rom_2E49C0
gText_Rom_2E49C0: @ 0x082E49C0
	.string "ミツグ$"
	.if (. - gText_Rom_2E49C0) > 0x4
	.error "gText_Rom_2E49C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E49C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E49C0)
	.endif
	.incbin "baserom.gba", 0x2e49c4, 0x1c

	@ src/data/trainers.h:6692 trainers_line_6692 (+4 aliases)
	.globl gText_Rom_2E49E0
gText_Rom_2E49E0: @ 0x082E49E0
	.string "ミツグ$"
	.if (. - gText_Rom_2E49E0) > 0x4
	.error "gText_Rom_2E49E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E49E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E49E0)
	.endif
	.incbin "baserom.gba", 0x2e49e4, 0x1c

	@ src/data/trainers.h:6692 trainers_line_6692 (+4 aliases)
	.globl gText_Rom_2E4A00
gText_Rom_2E4A00: @ 0x082E4A00
	.string "ミツグ$"
	.if (. - gText_Rom_2E4A00) > 0x4
	.error "gText_Rom_2E4A00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4A00) < 0x4
	.space 0x4 - (. - gText_Rom_2E4A00)
	.endif
	.incbin "baserom.gba", 0x2e4a04, 0x1c

	@ src/data/trainers.h:6987 trainers_line_6987 (+4 aliases)
	.globl gText_Rom_2E4A20
gText_Rom_2E4A20: @ 0x082E4A20
	.string "トシオ$"
	.if (. - gText_Rom_2E4A20) > 0x4
	.error "gText_Rom_2E4A20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4A20) < 0x4
	.space 0x4 - (. - gText_Rom_2E4A20)
	.endif
	.incbin "baserom.gba", 0x2e4a24, 0x1c

	@ src/data/trainers.h:3787 trainers_line_3787 (+5 aliases)
	.globl gText_Rom_2E4A40
gText_Rom_2E4A40: @ 0x082E4A40
	.string "ショウ$"
	.if (. - gText_Rom_2E4A40) > 0x4
	.error "gText_Rom_2E4A40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4A40) < 0x4
	.space 0x4 - (. - gText_Rom_2E4A40)
	.endif
	.incbin "baserom.gba", 0x2e4a44, 0x1c

	@ src/data/trainers.h:7071 trainers_line_7071
	.globl gText_Rom_2E4A60
gText_Rom_2E4A60: @ 0x082E4A60
	.string "モトフミ$"
	.if (. - gText_Rom_2E4A60) > 0x5
	.error "gText_Rom_2E4A60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4A60) < 0x5
	.space 0x5 - (. - gText_Rom_2E4A60)
	.endif
	.incbin "baserom.gba", 0x2e4a65, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E4A80
gText_Rom_2E4A80: @ 0x082E4A80
	.string "したっぱ$"
	.if (. - gText_Rom_2E4A80) > 0x5
	.error "gText_Rom_2E4A80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4A80) < 0x5
	.space 0x5 - (. - gText_Rom_2E4A80)
	.endif
	.incbin "baserom.gba", 0x2e4a85, 0x1b

	@ src/data/trainers.h:6987 trainers_line_6987 (+4 aliases)
	.globl gText_Rom_2E4AA0
gText_Rom_2E4AA0: @ 0x082E4AA0
	.string "トシオ$"
	.if (. - gText_Rom_2E4AA0) > 0x4
	.error "gText_Rom_2E4AA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4AA0) < 0x4
	.space 0x4 - (. - gText_Rom_2E4AA0)
	.endif
	.incbin "baserom.gba", 0x2e4aa4, 0x1c

	@ src/data/trainers.h:6987 trainers_line_6987 (+4 aliases)
	.globl gText_Rom_2E4AC0
gText_Rom_2E4AC0: @ 0x082E4AC0
	.string "トシオ$"
	.if (. - gText_Rom_2E4AC0) > 0x4
	.error "gText_Rom_2E4AC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4AC0) < 0x4
	.space 0x4 - (. - gText_Rom_2E4AC0)
	.endif
	.incbin "baserom.gba", 0x2e4ac4, 0x1c

	@ src/data/trainers.h:6987 trainers_line_6987 (+4 aliases)
	.globl gText_Rom_2E4AE0
gText_Rom_2E4AE0: @ 0x082E4AE0
	.string "トシオ$"
	.if (. - gText_Rom_2E4AE0) > 0x4
	.error "gText_Rom_2E4AE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4AE0) < 0x4
	.space 0x4 - (. - gText_Rom_2E4AE0)
	.endif
	.incbin "baserom.gba", 0x2e4ae4, 0x1c

	@ src/data/trainers.h:6987 trainers_line_6987 (+4 aliases)
	.globl gText_Rom_2E4B00
gText_Rom_2E4B00: @ 0x082E4B00
	.string "トシオ$"
	.if (. - gText_Rom_2E4B00) > 0x4
	.error "gText_Rom_2E4B00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4B00) < 0x4
	.space 0x4 - (. - gText_Rom_2E4B00)
	.endif
	.incbin "baserom.gba", 0x2e4b04, 0x1c

	@ src/data/trainers.h:7323 trainers_line_7323
	.globl gText_Rom_2E4B20
gText_Rom_2E4B20: @ 0x082E4B20
	.string "ヨウヘイ$"
	.if (. - gText_Rom_2E4B20) > 0x5
	.error "gText_Rom_2E4B20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4B20) < 0x5
	.space 0x5 - (. - gText_Rom_2E4B20)
	.endif
	.incbin "baserom.gba", 0x2e4b25, 0x1b

	@ src/data/trainers.h:2702 trainers_line_2702 (+1 aliases)
	.globl gText_Rom_2E4B40
gText_Rom_2E4B40: @ 0x082E4B40
	.string "ヒロミ$"
	.if (. - gText_Rom_2E4B40) > 0x4
	.error "gText_Rom_2E4B40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4B40) < 0x4
	.space 0x4 - (. - gText_Rom_2E4B40)
	.endif
	.incbin "baserom.gba", 0x2e4b44, 0x1c

	@ src/data/trainers.h:7395 trainers_line_7395
	.globl gText_Rom_2E4B60
gText_Rom_2E4B60: @ 0x082E4B60
	.string "タツオ$"
	.if (. - gText_Rom_2E4B60) > 0x4
	.error "gText_Rom_2E4B60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4B60) < 0x4
	.space 0x4 - (. - gText_Rom_2E4B60)
	.endif
	.incbin "baserom.gba", 0x2e4b64, 0x1c

	@ src/data/trainers.h:7443 trainers_line_7443
	.globl gText_Rom_2E4B80
gText_Rom_2E4B80: @ 0x082E4B80
	.string "テルユキ$"
	.if (. - gText_Rom_2E4B80) > 0x5
	.error "gText_Rom_2E4B80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4B80) < 0x5
	.space 0x5 - (. - gText_Rom_2E4B80)
	.endif
	.incbin "baserom.gba", 0x2e4b85, 0x1b

	@ src/data/trainers.h:7503 trainers_line_7503 (+4 aliases)
	.globl gText_Rom_2E4BA0
gText_Rom_2E4BA0: @ 0x082E4BA0
	.string "エイイチ$"
	.if (. - gText_Rom_2E4BA0) > 0x5
	.error "gText_Rom_2E4BA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4BA0) < 0x5
	.space 0x5 - (. - gText_Rom_2E4BA0)
	.endif
	.incbin "baserom.gba", 0x2e4ba5, 0x1b

	@ src/data/trainers.h:7539 trainers_line_7539
	.globl gText_Rom_2E4BC0
gText_Rom_2E4BC0: @ 0x082E4BC0
	.string "モリオ$"
	.if (. - gText_Rom_2E4BC0) > 0x4
	.error "gText_Rom_2E4BC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4BC0) < 0x4
	.space 0x4 - (. - gText_Rom_2E4BC0)
	.endif
	.incbin "baserom.gba", 0x2e4bc4, 0x1c

	@ src/data/trainers.h:7575 trainers_line_7575
	.globl gText_Rom_2E4BE0
gText_Rom_2E4BE0: @ 0x082E4BE0
	.string "クニヒコ$"
	.if (. - gText_Rom_2E4BE0) > 0x5
	.error "gText_Rom_2E4BE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4BE0) < 0x5
	.space 0x5 - (. - gText_Rom_2E4BE0)
	.endif
	.incbin "baserom.gba", 0x2e4be5, 0x1b

	@ src/data/trainers.h:7611 trainers_line_7611
	.globl gText_Rom_2E4C00
gText_Rom_2E4C00: @ 0x082E4C00
	.string "ケンイチ$"
	.if (. - gText_Rom_2E4C00) > 0x5
	.error "gText_Rom_2E4C00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4C00) < 0x5
	.space 0x5 - (. - gText_Rom_2E4C00)
	.endif
	.incbin "baserom.gba", 0x2e4c05, 0x1b

	@ src/data/trainers.h:7659 trainers_line_7659
	.globl gText_Rom_2E4C20
gText_Rom_2E4C20: @ 0x082E4C20
	.string "トシヒロ$"
	.if (. - gText_Rom_2E4C20) > 0x5
	.error "gText_Rom_2E4C20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4C20) < 0x5
	.space 0x5 - (. - gText_Rom_2E4C20)
	.endif
	.incbin "baserom.gba", 0x2e4c25, 0x1b

	@ src/data/trainers.h:7707 trainers_line_7707
	.globl gText_Rom_2E4C40
gText_Rom_2E4C40: @ 0x082E4C40
	.string "マサトシ$"
	.if (. - gText_Rom_2E4C40) > 0x5
	.error "gText_Rom_2E4C40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4C40) < 0x5
	.space 0x5 - (. - gText_Rom_2E4C40)
	.endif
	.incbin "baserom.gba", 0x2e4c45, 0x1b

	@ src/data/trainers.h:7743 trainers_line_7743 (+1 aliases)
	.globl gText_Rom_2E4C60
gText_Rom_2E4C60: @ 0x082E4C60
	.string "シノブ$"
	.if (. - gText_Rom_2E4C60) > 0x4
	.error "gText_Rom_2E4C60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4C60) < 0x4
	.space 0x4 - (. - gText_Rom_2E4C60)
	.endif
	.incbin "baserom.gba", 0x2e4c64, 0x1c

	@ src/data/trainers.h:7779 trainers_line_7779
	.globl gText_Rom_2E4C80
gText_Rom_2E4C80: @ 0x082E4C80
	.string "ケイシ$"
	.if (. - gText_Rom_2E4C80) > 0x4
	.error "gText_Rom_2E4C80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4C80) < 0x4
	.space 0x4 - (. - gText_Rom_2E4C80)
	.endif
	.incbin "baserom.gba", 0x2e4c84, 0x1c

	@ src/data/trainers.h:7815 trainers_line_7815
	.globl gText_Rom_2E4CA0
gText_Rom_2E4CA0: @ 0x082E4CA0
	.string "ガクジ$"
	.if (. - gText_Rom_2E4CA0) > 0x4
	.error "gText_Rom_2E4CA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4CA0) < 0x4
	.space 0x4 - (. - gText_Rom_2E4CA0)
	.endif
	.incbin "baserom.gba", 0x2e4ca4, 0x1c

	@ src/data/trainers.h:7851 trainers_line_7851
	.globl gText_Rom_2E4CC0
gText_Rom_2E4CC0: @ 0x082E4CC0
	.string "レツジ$"
	.if (. - gText_Rom_2E4CC0) > 0x4
	.error "gText_Rom_2E4CC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4CC0) < 0x4
	.space 0x4 - (. - gText_Rom_2E4CC0)
	.endif
	.incbin "baserom.gba", 0x2e4cc4, 0x1c

	@ src/data/trainers.h:7911 trainers_line_7911
	.globl gText_Rom_2E4CE0
gText_Rom_2E4CE0: @ 0x082E4CE0
	.string "マサヒロ$"
	.if (. - gText_Rom_2E4CE0) > 0x5
	.error "gText_Rom_2E4CE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4CE0) < 0x5
	.space 0x5 - (. - gText_Rom_2E4CE0)
	.endif
	.incbin "baserom.gba", 0x2e4ce5, 0x1b

	@ src/data/trainers.h:7947 trainers_line_7947
	.globl gText_Rom_2E4D00
gText_Rom_2E4D00: @ 0x082E4D00
	.string "ハルキ$"
	.if (. - gText_Rom_2E4D00) > 0x4
	.error "gText_Rom_2E4D00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4D00) < 0x4
	.space 0x4 - (. - gText_Rom_2E4D00)
	.endif
	.incbin "baserom.gba", 0x2e4d04, 0x1c

	@ src/data/trainers.h:7983 trainers_line_7983
	.globl gText_Rom_2E4D20
gText_Rom_2E4D20: @ 0x082E4D20
	.string "ダイスケ$"
	.if (. - gText_Rom_2E4D20) > 0x5
	.error "gText_Rom_2E4D20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4D20) < 0x5
	.space 0x5 - (. - gText_Rom_2E4D20)
	.endif
	.incbin "baserom.gba", 0x2e4d25, 0x1b

	@ src/data/trainers.h:8031 trainers_line_8031
	.globl gText_Rom_2E4D40
gText_Rom_2E4D40: @ 0x082E4D40
	.string "シンジ$"
	.if (. - gText_Rom_2E4D40) > 0x4
	.error "gText_Rom_2E4D40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4D40) < 0x4
	.space 0x4 - (. - gText_Rom_2E4D40)
	.endif
	.incbin "baserom.gba", 0x2e4d44, 0x1c

	@ src/data/trainers.h:8079 trainers_line_8079
	.globl gText_Rom_2E4D60
gText_Rom_2E4D60: @ 0x082E4D60
	.string "ゴウ$"
	.if (. - gText_Rom_2E4D60) > 0x3
	.error "gText_Rom_2E4D60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4D60) < 0x3
	.space 0x3 - (. - gText_Rom_2E4D60)
	.endif
	.incbin "baserom.gba", 0x2e4d63, 0x1d

	@ src/data/trainers.h:8115 trainers_line_8115
	.globl gText_Rom_2E4D80
gText_Rom_2E4D80: @ 0x082E4D80
	.string "シゲオ$"
	.if (. - gText_Rom_2E4D80) > 0x4
	.error "gText_Rom_2E4D80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4D80) < 0x4
	.space 0x4 - (. - gText_Rom_2E4D80)
	.endif
	.incbin "baserom.gba", 0x2e4d84, 0x1c

	@ src/data/trainers.h:8151 trainers_line_8151
	.globl gText_Rom_2E4DA0
gText_Rom_2E4DA0: @ 0x082E4DA0
	.string "ツトム$"
	.if (. - gText_Rom_2E4DA0) > 0x4
	.error "gText_Rom_2E4DA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4DA0) < 0x4
	.space 0x4 - (. - gText_Rom_2E4DA0)
	.endif
	.incbin "baserom.gba", 0x2e4da4, 0x1c

	@ src/data/trainers.h:8187 trainers_line_8187
	.globl gText_Rom_2E4DC0
gText_Rom_2E4DC0: @ 0x082E4DC0
	.string "ヒデノリ$"
	.if (. - gText_Rom_2E4DC0) > 0x5
	.error "gText_Rom_2E4DC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4DC0) < 0x5
	.space 0x5 - (. - gText_Rom_2E4DC0)
	.endif
	.incbin "baserom.gba", 0x2e4dc5, 0x1b

	@ src/data/trainers.h:8223 trainers_line_8223
	.globl gText_Rom_2E4DE0
gText_Rom_2E4DE0: @ 0x082E4DE0
	.string "トクオ$"
	.if (. - gText_Rom_2E4DE0) > 0x4
	.error "gText_Rom_2E4DE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4DE0) < 0x4
	.space 0x4 - (. - gText_Rom_2E4DE0)
	.endif
	.incbin "baserom.gba", 0x2e4de4, 0x1c

	@ src/data/trainers.h:8283 trainers_line_8283
	.globl gText_Rom_2E4E00
gText_Rom_2E4E00: @ 0x082E4E00
	.string "カツユキ$"
	.if (. - gText_Rom_2E4E00) > 0x5
	.error "gText_Rom_2E4E00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4E00) < 0x5
	.space 0x5 - (. - gText_Rom_2E4E00)
	.endif
	.incbin "baserom.gba", 0x2e4e05, 0x1b

	@ src/data/trainers.h:7503 trainers_line_7503 (+4 aliases)
	.globl gText_Rom_2E4E20
gText_Rom_2E4E20: @ 0x082E4E20
	.string "エイイチ$"
	.if (. - gText_Rom_2E4E20) > 0x5
	.error "gText_Rom_2E4E20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4E20) < 0x5
	.space 0x5 - (. - gText_Rom_2E4E20)
	.endif
	.incbin "baserom.gba", 0x2e4e25, 0x1b

	@ src/data/trainers.h:7503 trainers_line_7503 (+4 aliases)
	.globl gText_Rom_2E4E40
gText_Rom_2E4E40: @ 0x082E4E40
	.string "エイイチ$"
	.if (. - gText_Rom_2E4E40) > 0x5
	.error "gText_Rom_2E4E40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4E40) < 0x5
	.space 0x5 - (. - gText_Rom_2E4E40)
	.endif
	.incbin "baserom.gba", 0x2e4e45, 0x1b

	@ src/data/trainers.h:7503 trainers_line_7503 (+4 aliases)
	.globl gText_Rom_2E4E60
gText_Rom_2E4E60: @ 0x082E4E60
	.string "エイイチ$"
	.if (. - gText_Rom_2E4E60) > 0x5
	.error "gText_Rom_2E4E60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4E60) < 0x5
	.space 0x5 - (. - gText_Rom_2E4E60)
	.endif
	.incbin "baserom.gba", 0x2e4e65, 0x1b

	@ src/data/trainers.h:7503 trainers_line_7503 (+4 aliases)
	.globl gText_Rom_2E4E80
gText_Rom_2E4E80: @ 0x082E4E80
	.string "エイイチ$"
	.if (. - gText_Rom_2E4E80) > 0x5
	.error "gText_Rom_2E4E80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4E80) < 0x5
	.space 0x5 - (. - gText_Rom_2E4E80)
	.endif
	.incbin "baserom.gba", 0x2e4e85, 0x1b

	@ src/data/trainers.h:8499 trainers_line_8499
	.globl gText_Rom_2E4EA0
gText_Rom_2E4EA0: @ 0x082E4EA0
	.string "タイケイ$"
	.if (. - gText_Rom_2E4EA0) > 0x5
	.error "gText_Rom_2E4EA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4EA0) < 0x5
	.space 0x5 - (. - gText_Rom_2E4EA0)
	.endif
	.incbin "baserom.gba", 0x2e4ea5, 0x1b

	@ src/data/trainers.h:8535 trainers_line_8535
	.globl gText_Rom_2E4EC0
gText_Rom_2E4EC0: @ 0x082E4EC0
	.string "イワオ$"
	.if (. - gText_Rom_2E4EC0) > 0x4
	.error "gText_Rom_2E4EC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4EC0) < 0x4
	.space 0x4 - (. - gText_Rom_2E4EC0)
	.endif
	.incbin "baserom.gba", 0x2e4ec4, 0x1c

	@ src/data/trainers.h:8583 trainers_line_8583
	.globl gText_Rom_2E4EE0
gText_Rom_2E4EE0: @ 0x082E4EE0
	.string "タクマ$"
	.if (. - gText_Rom_2E4EE0) > 0x4
	.error "gText_Rom_2E4EE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4EE0) < 0x4
	.space 0x4 - (. - gText_Rom_2E4EE0)
	.endif
	.incbin "baserom.gba", 0x2e4ee4, 0x1c

	@ src/data/trainers.h:8619 trainers_line_8619
	.globl gText_Rom_2E4F00
gText_Rom_2E4F00: @ 0x082E4F00
	.string "タケノリ$"
	.if (. - gText_Rom_2E4F00) > 0x5
	.error "gText_Rom_2E4F00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4F00) < 0x5
	.space 0x5 - (. - gText_Rom_2E4F00)
	.endif
	.incbin "baserom.gba", 0x2e4f05, 0x1b

	@ src/data/trainers.h:8667 trainers_line_8667 (+4 aliases)
	.globl gText_Rom_2E4F20
gText_Rom_2E4F20: @ 0x082E4F20
	.string "ゴロウ$"
	.if (. - gText_Rom_2E4F20) > 0x4
	.error "gText_Rom_2E4F20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4F20) < 0x4
	.space 0x4 - (. - gText_Rom_2E4F20)
	.endif
	.incbin "baserom.gba", 0x2e4f24, 0x1c

	@ src/data/trainers.h:8667 trainers_line_8667 (+4 aliases)
	.globl gText_Rom_2E4F40
gText_Rom_2E4F40: @ 0x082E4F40
	.string "ゴロウ$"
	.if (. - gText_Rom_2E4F40) > 0x4
	.error "gText_Rom_2E4F40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4F40) < 0x4
	.space 0x4 - (. - gText_Rom_2E4F40)
	.endif
	.incbin "baserom.gba", 0x2e4f44, 0x1c

	@ src/data/trainers.h:8667 trainers_line_8667 (+4 aliases)
	.globl gText_Rom_2E4F60
gText_Rom_2E4F60: @ 0x082E4F60
	.string "ゴロウ$"
	.if (. - gText_Rom_2E4F60) > 0x4
	.error "gText_Rom_2E4F60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4F60) < 0x4
	.space 0x4 - (. - gText_Rom_2E4F60)
	.endif
	.incbin "baserom.gba", 0x2e4f64, 0x1c

	@ src/data/trainers.h:8667 trainers_line_8667 (+4 aliases)
	.globl gText_Rom_2E4F80
gText_Rom_2E4F80: @ 0x082E4F80
	.string "ゴロウ$"
	.if (. - gText_Rom_2E4F80) > 0x4
	.error "gText_Rom_2E4F80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4F80) < 0x4
	.space 0x4 - (. - gText_Rom_2E4F80)
	.endif
	.incbin "baserom.gba", 0x2e4f84, 0x1c

	@ src/data/trainers.h:8667 trainers_line_8667 (+4 aliases)
	.globl gText_Rom_2E4FA0
gText_Rom_2E4FA0: @ 0x082E4FA0
	.string "ゴロウ$"
	.if (. - gText_Rom_2E4FA0) > 0x4
	.error "gText_Rom_2E4FA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4FA0) < 0x4
	.space 0x4 - (. - gText_Rom_2E4FA0)
	.endif
	.incbin "baserom.gba", 0x2e4fa4, 0x1c

	@ src/data/trainers.h:8921 trainers_line_8921
	.globl gText_Rom_2E4FC0
gText_Rom_2E4FC0: @ 0x082E4FC0
	.string "カズシ$"
	.if (. - gText_Rom_2E4FC0) > 0x4
	.error "gText_Rom_2E4FC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4FC0) < 0x4
	.space 0x4 - (. - gText_Rom_2E4FC0)
	.endif
	.incbin "baserom.gba", 0x2e4fc4, 0x1c

	@ src/data/trainers.h:8969 trainers_line_8969
	.globl gText_Rom_2E4FE0
gText_Rom_2E4FE0: @ 0x082E4FE0
	.string "タダシ$"
	.if (. - gText_Rom_2E4FE0) > 0x4
	.error "gText_Rom_2E4FE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E4FE0) < 0x4
	.space 0x4 - (. - gText_Rom_2E4FE0)
	.endif
	.incbin "baserom.gba", 0x2e4fe4, 0x1c

	@ src/data/trainers.h:9005 trainers_line_9005
	.globl gText_Rom_2E5000
gText_Rom_2E5000: @ 0x082E5000
	.string "テツヒサ$"
	.if (. - gText_Rom_2E5000) > 0x5
	.error "gText_Rom_2E5000 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5000) < 0x5
	.space 0x5 - (. - gText_Rom_2E5000)
	.endif
	.incbin "baserom.gba", 0x2e5005, 0x1b

	@ src/data/trainers.h:9041 trainers_line_9041
	.globl gText_Rom_2E5020
gText_Rom_2E5020: @ 0x082E5020
	.string "ジョージ$"
	.if (. - gText_Rom_2E5020) > 0x5
	.error "gText_Rom_2E5020 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5020) < 0x5
	.space 0x5 - (. - gText_Rom_2E5020)
	.endif
	.incbin "baserom.gba", 0x2e5025, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E5040
gText_Rom_2E5040: @ 0x082E5040
	.string "したっぱ$"
	.if (. - gText_Rom_2E5040) > 0x5
	.error "gText_Rom_2E5040 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5040) < 0x5
	.space 0x5 - (. - gText_Rom_2E5040)
	.endif
	.incbin "baserom.gba", 0x2e5045, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E5060
gText_Rom_2E5060: @ 0x082E5060
	.string "したっぱ$"
	.if (. - gText_Rom_2E5060) > 0x5
	.error "gText_Rom_2E5060 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5060) < 0x5
	.space 0x5 - (. - gText_Rom_2E5060)
	.endif
	.incbin "baserom.gba", 0x2e5065, 0x1b

	@ src/data/trainers.h:9186 trainers_line_9186
	.globl gText_Rom_2E5080
gText_Rom_2E5080: @ 0x082E5080
	.string "マイク$"
	.if (. - gText_Rom_2E5080) > 0x4
	.error "gText_Rom_2E5080 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5080) < 0x4
	.space 0x4 - (. - gText_Rom_2E5080)
	.endif
	.incbin "baserom.gba", 0x2e5084, 0x1c

	@ src/data/trainers.h:9234 trainers_line_9234 (+4 aliases)
	.globl gText_Rom_2E50A0
gText_Rom_2E50A0: @ 0x082E50A0
	.string "ジョー$"
	.if (. - gText_Rom_2E50A0) > 0x4
	.error "gText_Rom_2E50A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E50A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E50A0)
	.endif
	.incbin "baserom.gba", 0x2e50a4, 0x1c

	@ src/data/trainers.h:9282 trainers_line_9282 (+4 aliases)
	.globl gText_Rom_2E50C0
gText_Rom_2E50C0: @ 0x082E50C0
	.string "テリー$"
	.if (. - gText_Rom_2E50C0) > 0x4
	.error "gText_Rom_2E50C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E50C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E50C0)
	.endif
	.incbin "baserom.gba", 0x2e50c4, 0x1c

	@ src/data/trainers.h:9282 trainers_line_9282 (+4 aliases)
	.globl gText_Rom_2E50E0
gText_Rom_2E50E0: @ 0x082E50E0
	.string "テリー$"
	.if (. - gText_Rom_2E50E0) > 0x4
	.error "gText_Rom_2E50E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E50E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E50E0)
	.endif
	.incbin "baserom.gba", 0x2e50e4, 0x1c

	@ src/data/trainers.h:9282 trainers_line_9282 (+4 aliases)
	.globl gText_Rom_2E5100
gText_Rom_2E5100: @ 0x082E5100
	.string "テリー$"
	.if (. - gText_Rom_2E5100) > 0x4
	.error "gText_Rom_2E5100 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5100) < 0x4
	.space 0x4 - (. - gText_Rom_2E5100)
	.endif
	.incbin "baserom.gba", 0x2e5104, 0x1c

	@ src/data/trainers.h:9282 trainers_line_9282 (+4 aliases)
	.globl gText_Rom_2E5120
gText_Rom_2E5120: @ 0x082E5120
	.string "テリー$"
	.if (. - gText_Rom_2E5120) > 0x4
	.error "gText_Rom_2E5120 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5120) < 0x4
	.space 0x4 - (. - gText_Rom_2E5120)
	.endif
	.incbin "baserom.gba", 0x2e5124, 0x1c

	@ src/data/trainers.h:9282 trainers_line_9282 (+4 aliases)
	.globl gText_Rom_2E5140
gText_Rom_2E5140: @ 0x082E5140
	.string "テリー$"
	.if (. - gText_Rom_2E5140) > 0x4
	.error "gText_Rom_2E5140 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5140) < 0x4
	.space 0x4 - (. - gText_Rom_2E5140)
	.endif
	.incbin "baserom.gba", 0x2e5144, 0x1c

	@ src/data/trainers.h:9570 trainers_line_9570
	.globl gText_Rom_2E5160
gText_Rom_2E5160: @ 0x082E5160
	.string "アキラ$"
	.if (. - gText_Rom_2E5160) > 0x4
	.error "gText_Rom_2E5160 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5160) < 0x4
	.space 0x4 - (. - gText_Rom_2E5160)
	.endif
	.incbin "baserom.gba", 0x2e5164, 0x1c

	@ src/data/trainers.h:9606 trainers_line_9606
	.globl gText_Rom_2E5180
gText_Rom_2E5180: @ 0x082E5180
	.string "コウタ$"
	.if (. - gText_Rom_2E5180) > 0x4
	.error "gText_Rom_2E5180 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5180) < 0x4
	.space 0x4 - (. - gText_Rom_2E5180)
	.endif
	.incbin "baserom.gba", 0x2e5184, 0x1c

	@ src/data/trainers.h:9654 trainers_line_9654
	.globl gText_Rom_2E51A0
gText_Rom_2E51A0: @ 0x082E51A0
	.string "タモツ$"
	.if (. - gText_Rom_2E51A0) > 0x4
	.error "gText_Rom_2E51A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E51A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E51A0)
	.endif
	.incbin "baserom.gba", 0x2e51a4, 0x1c

	@ src/data/trainers.h:9690 trainers_line_9690
	.globl gText_Rom_2E51C0
gText_Rom_2E51C0: @ 0x082E51C0
	.string "ジュンジ$"
	.if (. - gText_Rom_2E51C0) > 0x5
	.error "gText_Rom_2E51C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E51C0) < 0x5
	.space 0x5 - (. - gText_Rom_2E51C0)
	.endif
	.incbin "baserom.gba", 0x2e51c5, 0x1b

	@ src/data/trainers.h:9726 trainers_line_9726
	.globl gText_Rom_2E51E0
gText_Rom_2E51E0: @ 0x082E51E0
	.string "タカハル$"
	.if (. - gText_Rom_2E51E0) > 0x5
	.error "gText_Rom_2E51E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E51E0) < 0x5
	.space 0x5 - (. - gText_Rom_2E51E0)
	.endif
	.incbin "baserom.gba", 0x2e51e5, 0x1b

	@ src/data/trainers.h:9762 trainers_line_9762 (+4 aliases)
	.globl gText_Rom_2E5200
gText_Rom_2E5200: @ 0x082E5200
	.string "ノブヒコ$"
	.if (. - gText_Rom_2E5200) > 0x5
	.error "gText_Rom_2E5200 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5200) < 0x5
	.space 0x5 - (. - gText_Rom_2E5200)
	.endif
	.incbin "baserom.gba", 0x2e5205, 0x1b

	@ src/data/trainers.h:9762 trainers_line_9762 (+4 aliases)
	.globl gText_Rom_2E5220
gText_Rom_2E5220: @ 0x082E5220
	.string "ノブヒコ$"
	.if (. - gText_Rom_2E5220) > 0x5
	.error "gText_Rom_2E5220 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5220) < 0x5
	.space 0x5 - (. - gText_Rom_2E5220)
	.endif
	.incbin "baserom.gba", 0x2e5225, 0x1b

	@ src/data/trainers.h:9762 trainers_line_9762 (+4 aliases)
	.globl gText_Rom_2E5240
gText_Rom_2E5240: @ 0x082E5240
	.string "ノブヒコ$"
	.if (. - gText_Rom_2E5240) > 0x5
	.error "gText_Rom_2E5240 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5240) < 0x5
	.space 0x5 - (. - gText_Rom_2E5240)
	.endif
	.incbin "baserom.gba", 0x2e5245, 0x1b

	@ src/data/trainers.h:9762 trainers_line_9762 (+4 aliases)
	.globl gText_Rom_2E5260
gText_Rom_2E5260: @ 0x082E5260
	.string "ノブヒコ$"
	.if (. - gText_Rom_2E5260) > 0x5
	.error "gText_Rom_2E5260 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5260) < 0x5
	.space 0x5 - (. - gText_Rom_2E5260)
	.endif
	.incbin "baserom.gba", 0x2e5265, 0x1b

	@ src/data/trainers.h:9762 trainers_line_9762 (+4 aliases)
	.globl gText_Rom_2E5280
gText_Rom_2E5280: @ 0x082E5280
	.string "ノブヒコ$"
	.if (. - gText_Rom_2E5280) > 0x5
	.error "gText_Rom_2E5280 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5280) < 0x5
	.space 0x5 - (. - gText_Rom_2E5280)
	.endif
	.incbin "baserom.gba", 0x2e5285, 0x1b

	@ src/data/trainers.h:10002 trainers_line_10002
	.globl gText_Rom_2E52A0
gText_Rom_2E52A0: @ 0x082E52A0
	.string "ノリヒロ$"
	.if (. - gText_Rom_2E52A0) > 0x5
	.error "gText_Rom_2E52A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E52A0) < 0x5
	.space 0x5 - (. - gText_Rom_2E52A0)
	.endif
	.incbin "baserom.gba", 0x2e52a5, 0x1b

	@ src/data/trainers.h:10045 trainers_line_10045
	.globl gText_Rom_2E52C0
gText_Rom_2E52C0: @ 0x082E52C0
	.string "カズユキ$"
	.if (. - gText_Rom_2E52C0) > 0x5
	.error "gText_Rom_2E52C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E52C0) < 0x5
	.space 0x5 - (. - gText_Rom_2E52C0)
	.endif
	.incbin "baserom.gba", 0x2e52c5, 0x1b

	@ src/data/trainers.h:10126 trainers_line_10126
	.globl gText_Rom_2E52E0
gText_Rom_2E52E0: @ 0x082E52E0
	.string "キヨフミ$"
	.if (. - gText_Rom_2E52E0) > 0x5
	.error "gText_Rom_2E52E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E52E0) < 0x5
	.space 0x5 - (. - gText_Rom_2E52E0)
	.endif
	.incbin "baserom.gba", 0x2e52e5, 0x1b

	@ src/data/trainers.h:10162 trainers_line_10162
	.globl gText_Rom_2E5300
gText_Rom_2E5300: @ 0x082E5300
	.string "トモヒロ$"
	.if (. - gText_Rom_2E5300) > 0x5
	.error "gText_Rom_2E5300 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5300) < 0x5
	.space 0x5 - (. - gText_Rom_2E5300)
	.endif
	.incbin "baserom.gba", 0x2e5305, 0x1b

	@ src/data/trainers.h:10210 trainers_line_10210
	.globl gText_Rom_2E5320
gText_Rom_2E5320: @ 0x082E5320
	.string "マサミチ$"
	.if (. - gText_Rom_2E5320) > 0x5
	.error "gText_Rom_2E5320 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5320) < 0x5
	.space 0x5 - (. - gText_Rom_2E5320)
	.endif
	.incbin "baserom.gba", 0x2e5325, 0x1b

	@ src/data/trainers.h:10246 trainers_line_10246 (+4 aliases)
	.globl gText_Rom_2E5340
gText_Rom_2E5340: @ 0x082E5340
	.string "ヨシハル$"
	.if (. - gText_Rom_2E5340) > 0x5
	.error "gText_Rom_2E5340 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5340) < 0x5
	.space 0x5 - (. - gText_Rom_2E5340)
	.endif
	.incbin "baserom.gba", 0x2e5345, 0x1b

	@ src/data/trainers.h:10294 trainers_line_10294
	.globl gText_Rom_2E5360
gText_Rom_2E5360: @ 0x082E5360
	.string "ナツコ$"
	.if (. - gText_Rom_2E5360) > 0x4
	.error "gText_Rom_2E5360 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5360) < 0x4
	.space 0x4 - (. - gText_Rom_2E5360)
	.endif
	.incbin "baserom.gba", 0x2e5364, 0x1c

	@ src/data/trainers.h:10330 trainers_line_10330
	.globl gText_Rom_2E5380
gText_Rom_2E5380: @ 0x082E5380
	.string "ヨシヤ$"
	.if (. - gText_Rom_2E5380) > 0x4
	.error "gText_Rom_2E5380 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5380) < 0x4
	.space 0x4 - (. - gText_Rom_2E5380)
	.endif
	.incbin "baserom.gba", 0x2e5384, 0x1c

	@ src/data/trainers.h:10246 trainers_line_10246 (+4 aliases)
	.globl gText_Rom_2E53A0
gText_Rom_2E53A0: @ 0x082E53A0
	.string "ヨシハル$"
	.if (. - gText_Rom_2E53A0) > 0x5
	.error "gText_Rom_2E53A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E53A0) < 0x5
	.space 0x5 - (. - gText_Rom_2E53A0)
	.endif
	.incbin "baserom.gba", 0x2e53a5, 0x1b

	@ src/data/trainers.h:10246 trainers_line_10246 (+4 aliases)
	.globl gText_Rom_2E53C0
gText_Rom_2E53C0: @ 0x082E53C0
	.string "ヨシハル$"
	.if (. - gText_Rom_2E53C0) > 0x5
	.error "gText_Rom_2E53C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E53C0) < 0x5
	.space 0x5 - (. - gText_Rom_2E53C0)
	.endif
	.incbin "baserom.gba", 0x2e53c5, 0x1b

	@ src/data/trainers.h:10246 trainers_line_10246 (+4 aliases)
	.globl gText_Rom_2E53E0
gText_Rom_2E53E0: @ 0x082E53E0
	.string "ヨシハル$"
	.if (. - gText_Rom_2E53E0) > 0x5
	.error "gText_Rom_2E53E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E53E0) < 0x5
	.space 0x5 - (. - gText_Rom_2E53E0)
	.endif
	.incbin "baserom.gba", 0x2e53e5, 0x1b

	@ src/data/trainers.h:10246 trainers_line_10246 (+4 aliases)
	.globl gText_Rom_2E5400
gText_Rom_2E5400: @ 0x082E5400
	.string "ヨシハル$"
	.if (. - gText_Rom_2E5400) > 0x5
	.error "gText_Rom_2E5400 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5400) < 0x5
	.space 0x5 - (. - gText_Rom_2E5400)
	.endif
	.incbin "baserom.gba", 0x2e5405, 0x1b

	@ src/data/trainers.h:10582 trainers_line_10582
	.globl gText_Rom_2E5420
gText_Rom_2E5420: @ 0x082E5420
	.string "ヨウイチ$"
	.if (. - gText_Rom_2E5420) > 0x5
	.error "gText_Rom_2E5420 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5420) < 0x5
	.space 0x5 - (. - gText_Rom_2E5420)
	.endif
	.incbin "baserom.gba", 0x2e5425, 0x1b

	@ src/data/trainers.h:10618 trainers_line_10618
	.globl gText_Rom_2E5440
gText_Rom_2E5440: @ 0x082E5440
	.string "イクミ$"
	.if (. - gText_Rom_2E5440) > 0x4
	.error "gText_Rom_2E5440 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5440) < 0x4
	.space 0x4 - (. - gText_Rom_2E5440)
	.endif
	.incbin "baserom.gba", 0x2e5444, 0x1c

	@ src/data/trainers.h:10678 trainers_line_10678
	.globl gText_Rom_2E5460
gText_Rom_2E5460: @ 0x082E5460
	.string "ソウスケ$"
	.if (. - gText_Rom_2E5460) > 0x5
	.error "gText_Rom_2E5460 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5460) < 0x5
	.space 0x5 - (. - gText_Rom_2E5460)
	.endif
	.incbin "baserom.gba", 0x2e5465, 0x1b

	@ src/data/trainers.h:10738 trainers_line_10738 (+4 aliases)
	.globl gText_Rom_2E5480
gText_Rom_2E5480: @ 0x082E5480
	.string "ミキオ$"
	.if (. - gText_Rom_2E5480) > 0x4
	.error "gText_Rom_2E5480 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5480) < 0x4
	.space 0x4 - (. - gText_Rom_2E5480)
	.endif
	.incbin "baserom.gba", 0x2e5484, 0x1c

	@ src/data/trainers.h:10798 trainers_line_10798
	.globl gText_Rom_2E54A0
gText_Rom_2E54A0: @ 0x082E54A0
	.string "ヨシアキ$"
	.if (. - gText_Rom_2E54A0) > 0x5
	.error "gText_Rom_2E54A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E54A0) < 0x5
	.space 0x5 - (. - gText_Rom_2E54A0)
	.endif
	.incbin "baserom.gba", 0x2e54a5, 0x1b

	@ src/data/trainers.h:10738 trainers_line_10738 (+4 aliases)
	.globl gText_Rom_2E54C0
gText_Rom_2E54C0: @ 0x082E54C0
	.string "ミキオ$"
	.if (. - gText_Rom_2E54C0) > 0x4
	.error "gText_Rom_2E54C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E54C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E54C0)
	.endif
	.incbin "baserom.gba", 0x2e54c4, 0x1c

	@ src/data/trainers.h:10738 trainers_line_10738 (+4 aliases)
	.globl gText_Rom_2E54E0
gText_Rom_2E54E0: @ 0x082E54E0
	.string "ミキオ$"
	.if (. - gText_Rom_2E54E0) > 0x4
	.error "gText_Rom_2E54E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E54E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E54E0)
	.endif
	.incbin "baserom.gba", 0x2e54e4, 0x1c

	@ src/data/trainers.h:10738 trainers_line_10738 (+4 aliases)
	.globl gText_Rom_2E5500
gText_Rom_2E5500: @ 0x082E5500
	.string "ミキオ$"
	.if (. - gText_Rom_2E5500) > 0x4
	.error "gText_Rom_2E5500 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5500) < 0x4
	.space 0x4 - (. - gText_Rom_2E5500)
	.endif
	.incbin "baserom.gba", 0x2e5504, 0x1c

	@ src/data/trainers.h:10738 trainers_line_10738 (+4 aliases)
	.globl gText_Rom_2E5520
gText_Rom_2E5520: @ 0x082E5520
	.string "ミキオ$"
	.if (. - gText_Rom_2E5520) > 0x4
	.error "gText_Rom_2E5520 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5520) < 0x4
	.space 0x4 - (. - gText_Rom_2E5520)
	.endif
	.incbin "baserom.gba", 0x2e5524, 0x1c

	@ src/data/trainers.h:11124 trainers_line_11124
	.globl gText_Rom_2E5540
gText_Rom_2E5540: @ 0x082E5540
	.string "アキト$"
	.if (. - gText_Rom_2E5540) > 0x4
	.error "gText_Rom_2E5540 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5540) < 0x4
	.space 0x4 - (. - gText_Rom_2E5540)
	.endif
	.incbin "baserom.gba", 0x2e5544, 0x1c

	@ src/data/trainers.h:11164 trainers_line_11164
	.globl gText_Rom_2E5560
gText_Rom_2E5560: @ 0x082E5560
	.string "ヒロム$"
	.if (. - gText_Rom_2E5560) > 0x4
	.error "gText_Rom_2E5560 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5560) < 0x4
	.space 0x4 - (. - gText_Rom_2E5560)
	.endif
	.incbin "baserom.gba", 0x2e5564, 0x1c

	@ src/data/trainers.h:11200 trainers_line_11200
	.globl gText_Rom_2E5580
gText_Rom_2E5580: @ 0x082E5580
	.string "ユウヤ$"
	.if (. - gText_Rom_2E5580) > 0x4
	.error "gText_Rom_2E5580 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5580) < 0x4
	.space 0x4 - (. - gText_Rom_2E5580)
	.endif
	.incbin "baserom.gba", 0x2e5584, 0x1c

	@ src/data/trainers.h:11236 trainers_line_11236
	.globl gText_Rom_2E55A0
gText_Rom_2E55A0: @ 0x082E55A0
	.string "サトキ$"
	.if (. - gText_Rom_2E55A0) > 0x4
	.error "gText_Rom_2E55A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E55A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E55A0)
	.endif
	.incbin "baserom.gba", 0x2e55a4, 0x1c

	@ src/data/trainers.h:11272 trainers_line_11272
	.globl gText_Rom_2E55C0
gText_Rom_2E55C0: @ 0x082E55C0
	.string "テツヤ$"
	.if (. - gText_Rom_2E55C0) > 0x4
	.error "gText_Rom_2E55C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E55C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E55C0)
	.endif
	.incbin "baserom.gba", 0x2e55c4, 0x1c

	@ src/data/trainers.h:11332 trainers_line_11332
	.globl gText_Rom_2E55E0
gText_Rom_2E55E0: @ 0x082E55E0
	.string "シュウイチ$"
	.if (. - gText_Rom_2E55E0) > 0x6
	.error "gText_Rom_2E55E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E55E0) < 0x6
	.space 0x6 - (. - gText_Rom_2E55E0)
	.endif
	.incbin "baserom.gba", 0x2e55e6, 0x1a

	@ src/data/trainers.h:11380 trainers_line_11380 (+4 aliases)
	.globl gText_Rom_2E5600
gText_Rom_2E5600: @ 0x082E5600
	.string "カオル$"
	.if (. - gText_Rom_2E5600) > 0x4
	.error "gText_Rom_2E5600 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5600) < 0x4
	.space 0x4 - (. - gText_Rom_2E5600)
	.endif
	.incbin "baserom.gba", 0x2e5604, 0x1c

	@ src/data/trainers.h:11380 trainers_line_11380 (+4 aliases)
	.globl gText_Rom_2E5620
gText_Rom_2E5620: @ 0x082E5620
	.string "カオル$"
	.if (. - gText_Rom_2E5620) > 0x4
	.error "gText_Rom_2E5620 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5620) < 0x4
	.space 0x4 - (. - gText_Rom_2E5620)
	.endif
	.incbin "baserom.gba", 0x2e5624, 0x1c

	@ src/data/trainers.h:11380 trainers_line_11380 (+4 aliases)
	.globl gText_Rom_2E5640
gText_Rom_2E5640: @ 0x082E5640
	.string "カオル$"
	.if (. - gText_Rom_2E5640) > 0x4
	.error "gText_Rom_2E5640 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5640) < 0x4
	.space 0x4 - (. - gText_Rom_2E5640)
	.endif
	.incbin "baserom.gba", 0x2e5644, 0x1c

	@ src/data/trainers.h:11380 trainers_line_11380 (+4 aliases)
	.globl gText_Rom_2E5660
gText_Rom_2E5660: @ 0x082E5660
	.string "カオル$"
	.if (. - gText_Rom_2E5660) > 0x4
	.error "gText_Rom_2E5660 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5660) < 0x4
	.space 0x4 - (. - gText_Rom_2E5660)
	.endif
	.incbin "baserom.gba", 0x2e5664, 0x1c

	@ src/data/trainers.h:11380 trainers_line_11380 (+4 aliases)
	.globl gText_Rom_2E5680
gText_Rom_2E5680: @ 0x082E5680
	.string "カオル$"
	.if (. - gText_Rom_2E5680) > 0x4
	.error "gText_Rom_2E5680 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5680) < 0x4
	.space 0x4 - (. - gText_Rom_2E5680)
	.endif
	.incbin "baserom.gba", 0x2e5684, 0x1c

	@ src/data/trainers.h:11608 trainers_line_11608
	.globl gText_Rom_2E56A0
gText_Rom_2E56A0: @ 0x082E56A0
	.string "マリコ$"
	.if (. - gText_Rom_2E56A0) > 0x4
	.error "gText_Rom_2E56A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E56A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E56A0)
	.endif
	.incbin "baserom.gba", 0x2e56a4, 0x1c

	@ src/data/trainers.h:11648 trainers_line_11648
	.globl gText_Rom_2E56C0
gText_Rom_2E56C0: @ 0x082E56C0
	.string "アスカ$"
	.if (. - gText_Rom_2E56C0) > 0x4
	.error "gText_Rom_2E56C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E56C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E56C0)
	.endif
	.incbin "baserom.gba", 0x2e56c4, 0x1c

	@ src/data/trainers.h:11684 trainers_line_11684
	.globl gText_Rom_2E56E0
gText_Rom_2E56E0: @ 0x082E56E0
	.string "ミライ$"
	.if (. - gText_Rom_2E56E0) > 0x4
	.error "gText_Rom_2E56E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E56E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E56E0)
	.endif
	.incbin "baserom.gba", 0x2e56e4, 0x1c

	@ src/data/trainers.h:11720 trainers_line_11720
	.globl gText_Rom_2E5700
gText_Rom_2E5700: @ 0x082E5700
	.string "ヒカリ$"
	.if (. - gText_Rom_2E5700) > 0x4
	.error "gText_Rom_2E5700 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5700) < 0x4
	.space 0x4 - (. - gText_Rom_2E5700)
	.endif
	.incbin "baserom.gba", 0x2e5704, 0x1c

	@ src/data/trainers.h:11756 trainers_line_11756
	.globl gText_Rom_2E5720
gText_Rom_2E5720: @ 0x082E5720
	.string "オリエ$"
	.if (. - gText_Rom_2E5720) > 0x4
	.error "gText_Rom_2E5720 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5720) < 0x4
	.space 0x4 - (. - gText_Rom_2E5720)
	.endif
	.incbin "baserom.gba", 0x2e5724, 0x1c

	@ src/data/trainers.h:11816 trainers_line_11816
	.globl gText_Rom_2E5740
gText_Rom_2E5740: @ 0x082E5740
	.string "ナナコ$"
	.if (. - gText_Rom_2E5740) > 0x4
	.error "gText_Rom_2E5740 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5740) < 0x4
	.space 0x4 - (. - gText_Rom_2E5740)
	.endif
	.incbin "baserom.gba", 0x2e5744, 0x1c

	@ src/data/trainers.h:11864 trainers_line_11864 (+4 aliases)
	.globl gText_Rom_2E5760
gText_Rom_2E5760: @ 0x082E5760
	.string "シホミ$"
	.if (. - gText_Rom_2E5760) > 0x4
	.error "gText_Rom_2E5760 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5760) < 0x4
	.space 0x4 - (. - gText_Rom_2E5760)
	.endif
	.incbin "baserom.gba", 0x2e5764, 0x1c

	@ src/data/trainers.h:11864 trainers_line_11864 (+4 aliases)
	.globl gText_Rom_2E5780
gText_Rom_2E5780: @ 0x082E5780
	.string "シホミ$"
	.if (. - gText_Rom_2E5780) > 0x4
	.error "gText_Rom_2E5780 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5780) < 0x4
	.space 0x4 - (. - gText_Rom_2E5780)
	.endif
	.incbin "baserom.gba", 0x2e5784, 0x1c

	@ src/data/trainers.h:11864 trainers_line_11864 (+4 aliases)
	.globl gText_Rom_2E57A0
gText_Rom_2E57A0: @ 0x082E57A0
	.string "シホミ$"
	.if (. - gText_Rom_2E57A0) > 0x4
	.error "gText_Rom_2E57A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E57A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E57A0)
	.endif
	.incbin "baserom.gba", 0x2e57a4, 0x1c

	@ src/data/trainers.h:11864 trainers_line_11864 (+4 aliases)
	.globl gText_Rom_2E57C0
gText_Rom_2E57C0: @ 0x082E57C0
	.string "シホミ$"
	.if (. - gText_Rom_2E57C0) > 0x4
	.error "gText_Rom_2E57C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E57C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E57C0)
	.endif
	.incbin "baserom.gba", 0x2e57c4, 0x1c

	@ src/data/trainers.h:11864 trainers_line_11864 (+4 aliases)
	.globl gText_Rom_2E57E0
gText_Rom_2E57E0: @ 0x082E57E0
	.string "シホミ$"
	.if (. - gText_Rom_2E57E0) > 0x4
	.error "gText_Rom_2E57E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E57E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E57E0)
	.endif
	.incbin "baserom.gba", 0x2e57e4, 0x1c

	@ src/data/trainers.h:12104 trainers_line_12104 (+4 aliases)
	.globl gText_Rom_2E5800
gText_Rom_2E5800: @ 0x082E5800
	.string "ロバート$"
	.if (. - gText_Rom_2E5800) > 0x5
	.error "gText_Rom_2E5800 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5800) < 0x5
	.space 0x5 - (. - gText_Rom_2E5800)
	.endif
	.incbin "baserom.gba", 0x2e5805, 0x1b

	@ src/data/trainers.h:12140 trainers_line_12140
	.globl gText_Rom_2E5820
gText_Rom_2E5820: @ 0x082E5820
	.string "オルソン$"
	.if (. - gText_Rom_2E5820) > 0x5
	.error "gText_Rom_2E5820 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5820) < 0x5
	.space 0x5 - (. - gText_Rom_2E5820)
	.endif
	.incbin "baserom.gba", 0x2e5825, 0x1b

	@ src/data/trainers.h:12188 trainers_line_12188
	.globl gText_Rom_2E5840
gText_Rom_2E5840: @ 0x082E5840
	.string "スコット$"
	.if (. - gText_Rom_2E5840) > 0x5
	.error "gText_Rom_2E5840 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5840) < 0x5
	.space 0x5 - (. - gText_Rom_2E5840)
	.endif
	.incbin "baserom.gba", 0x2e5845, 0x1b

	@ src/data/trainers.h:12104 trainers_line_12104 (+4 aliases)
	.globl gText_Rom_2E5860
gText_Rom_2E5860: @ 0x082E5860
	.string "ロバート$"
	.if (. - gText_Rom_2E5860) > 0x5
	.error "gText_Rom_2E5860 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5860) < 0x5
	.space 0x5 - (. - gText_Rom_2E5860)
	.endif
	.incbin "baserom.gba", 0x2e5865, 0x1b

	@ src/data/trainers.h:12104 trainers_line_12104 (+4 aliases)
	.globl gText_Rom_2E5880
gText_Rom_2E5880: @ 0x082E5880
	.string "ロバート$"
	.if (. - gText_Rom_2E5880) > 0x5
	.error "gText_Rom_2E5880 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5880) < 0x5
	.space 0x5 - (. - gText_Rom_2E5880)
	.endif
	.incbin "baserom.gba", 0x2e5885, 0x1b

	@ src/data/trainers.h:12104 trainers_line_12104 (+4 aliases)
	.globl gText_Rom_2E58A0
gText_Rom_2E58A0: @ 0x082E58A0
	.string "ロバート$"
	.if (. - gText_Rom_2E58A0) > 0x5
	.error "gText_Rom_2E58A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E58A0) < 0x5
	.space 0x5 - (. - gText_Rom_2E58A0)
	.endif
	.incbin "baserom.gba", 0x2e58a5, 0x1b

	@ src/data/trainers.h:12104 trainers_line_12104 (+4 aliases)
	.globl gText_Rom_2E58C0
gText_Rom_2E58C0: @ 0x082E58C0
	.string "ロバート$"
	.if (. - gText_Rom_2E58C0) > 0x5
	.error "gText_Rom_2E58C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E58C0) < 0x5
	.space 0x5 - (. - gText_Rom_2E58C0)
	.endif
	.incbin "baserom.gba", 0x2e58c5, 0x1b

	@ src/data/trainers.h:12464 trainers_line_12464
	.globl gText_Rom_2E58E0
gText_Rom_2E58E0: @ 0x082E58E0
	.string "カゲツ$"
	.if (. - gText_Rom_2E58E0) > 0x4
	.error "gText_Rom_2E58E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E58E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E58E0)
	.endif
	.incbin "baserom.gba", 0x2e58e4, 0x1c

	@ src/data/trainers.h:12589 trainers_line_12589 (+1 aliases)
	.globl gText_Rom_2E5900
gText_Rom_2E5900: @ 0x082E5900
	.string "フヨウ$"
	.if (. - gText_Rom_2E5900) > 0x4
	.error "gText_Rom_2E5900 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5900) < 0x4
	.space 0x4 - (. - gText_Rom_2E5900)
	.endif
	.incbin "baserom.gba", 0x2e5904, 0x1c

	@ src/data/trainers.h:12714 trainers_line_12714 (+1 aliases)
	.globl gText_Rom_2E5920
gText_Rom_2E5920: @ 0x082E5920
	.string "プリム$"
	.if (. - gText_Rom_2E5920) > 0x4
	.error "gText_Rom_2E5920 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5920) < 0x4
	.space 0x4 - (. - gText_Rom_2E5920)
	.endif
	.incbin "baserom.gba", 0x2e5924, 0x1c

	@ src/data/trainers.h:12839 trainers_line_12839
	.globl gText_Rom_2E5940
gText_Rom_2E5940: @ 0x082E5940
	.string "ゲンジ$"
	.if (. - gText_Rom_2E5940) > 0x4
	.error "gText_Rom_2E5940 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5940) < 0x4
	.space 0x4 - (. - gText_Rom_2E5940)
	.endif
	.incbin "baserom.gba", 0x2e5944, 0x1c

	@ src/data/trainers.h:12964 trainers_line_12964 (+5 aliases)
	.globl gText_Rom_2E5960
gText_Rom_2E5960: @ 0x082E5960
	.string "ツツジ$"
	.if (. - gText_Rom_2E5960) > 0x4
	.error "gText_Rom_2E5960 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5960) < 0x4
	.space 0x4 - (. - gText_Rom_2E5960)
	.endif
	.incbin "baserom.gba", 0x2e5964, 0x1c

	@ src/data/trainers.h:13049 trainers_line_13049 (+6 aliases)
	.globl gText_Rom_2E5980
gText_Rom_2E5980: @ 0x082E5980
	.string "トウキ$"
	.if (. - gText_Rom_2E5980) > 0x4
	.error "gText_Rom_2E5980 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5980) < 0x4
	.space 0x4 - (. - gText_Rom_2E5980)
	.endif
	.incbin "baserom.gba", 0x2e5984, 0x1c

	@ src/data/trainers.h:13134 trainers_line_13134 (+5 aliases)
	.globl gText_Rom_2E59A0
gText_Rom_2E59A0: @ 0x082E59A0
	.string "テッセン$"
	.if (. - gText_Rom_2E59A0) > 0x5
	.error "gText_Rom_2E59A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E59A0) < 0x5
	.space 0x5 - (. - gText_Rom_2E59A0)
	.endif
	.incbin "baserom.gba", 0x2e59a5, 0x1b

	@ src/data/trainers.h:13238 trainers_line_13238 (+5 aliases)
	.globl gText_Rom_2E59C0
gText_Rom_2E59C0: @ 0x082E59C0
	.string "アスナ$"
	.if (. - gText_Rom_2E59C0) > 0x4
	.error "gText_Rom_2E59C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E59C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E59C0)
	.endif
	.incbin "baserom.gba", 0x2e59c4, 0x1c

	@ src/data/trainers.h:13342 trainers_line_13342 (+5 aliases)
	.globl gText_Rom_2E59E0
gText_Rom_2E59E0: @ 0x082E59E0
	.string "センリ$"
	.if (. - gText_Rom_2E59E0) > 0x4
	.error "gText_Rom_2E59E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E59E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E59E0)
	.endif
	.incbin "baserom.gba", 0x2e59e4, 0x3c

	@ src/data/trainers.h:13569 trainers_line_13569 (+5 aliases)
	.globl gText_Rom_2E5A20
gText_Rom_2E5A20: @ 0x082E5A20
	.string "フウとラン$"
	.if (. - gText_Rom_2E5A20) > 0x6
	.error "gText_Rom_2E5A20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5A20) < 0x6
	.space 0x6 - (. - gText_Rom_2E5A20)
	.endif
	.incbin "baserom.gba", 0x2e5a26, 0x1a

	@ src/data/trainers.h:13675 trainers_line_13675 (+5 aliases)
	.globl gText_Rom_2E5A40
gText_Rom_2E5A40: @ 0x082E5A40
	.string "アダン$"
	.if (. - gText_Rom_2E5A40) > 0x4
	.error "gText_Rom_2E5A40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5A40) < 0x4
	.space 0x4 - (. - gText_Rom_2E5A40)
	.endif
	.incbin "baserom.gba", 0x2e5a44, 0x1c

	@ src/data/trainers.h:13798 trainers_line_13798 (+4 aliases)
	.globl gText_Rom_2E5A60
gText_Rom_2E5A60: @ 0x082E5A60
	.string "ヒデオ$"
	.if (. - gText_Rom_2E5A60) > 0x4
	.error "gText_Rom_2E5A60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5A60) < 0x4
	.space 0x4 - (. - gText_Rom_2E5A60)
	.endif
	.incbin "baserom.gba", 0x2e5a64, 0x1c

	@ src/data/trainers.h:13834 trainers_line_13834
	.globl gText_Rom_2E5A80
gText_Rom_2E5A80: @ 0x082E5A80
	.string "ノブヒサ$"
	.if (. - gText_Rom_2E5A80) > 0x5
	.error "gText_Rom_2E5A80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5A80) < 0x5
	.space 0x5 - (. - gText_Rom_2E5A80)
	.endif
	.incbin "baserom.gba", 0x2e5a85, 0x1b

	@ src/data/trainers.h:13870 trainers_line_13870
	.globl gText_Rom_2E5AA0
gText_Rom_2E5AA0: @ 0x082E5AA0
	.string "カツトシ$"
	.if (. - gText_Rom_2E5AA0) > 0x5
	.error "gText_Rom_2E5AA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5AA0) < 0x5
	.space 0x5 - (. - gText_Rom_2E5AA0)
	.endif
	.incbin "baserom.gba", 0x2e5aa5, 0x1b

	@ src/data/trainers.h:13798 trainers_line_13798 (+4 aliases)
	.globl gText_Rom_2E5AC0
gText_Rom_2E5AC0: @ 0x082E5AC0
	.string "ヒデオ$"
	.if (. - gText_Rom_2E5AC0) > 0x4
	.error "gText_Rom_2E5AC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5AC0) < 0x4
	.space 0x4 - (. - gText_Rom_2E5AC0)
	.endif
	.incbin "baserom.gba", 0x2e5ac4, 0x1c

	@ src/data/trainers.h:13798 trainers_line_13798 (+4 aliases)
	.globl gText_Rom_2E5AE0
gText_Rom_2E5AE0: @ 0x082E5AE0
	.string "ヒデオ$"
	.if (. - gText_Rom_2E5AE0) > 0x4
	.error "gText_Rom_2E5AE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5AE0) < 0x4
	.space 0x4 - (. - gText_Rom_2E5AE0)
	.endif
	.incbin "baserom.gba", 0x2e5ae4, 0x1c

	@ src/data/trainers.h:13798 trainers_line_13798 (+4 aliases)
	.globl gText_Rom_2E5B00
gText_Rom_2E5B00: @ 0x082E5B00
	.string "ヒデオ$"
	.if (. - gText_Rom_2E5B00) > 0x4
	.error "gText_Rom_2E5B00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5B00) < 0x4
	.space 0x4 - (. - gText_Rom_2E5B00)
	.endif
	.incbin "baserom.gba", 0x2e5b04, 0x1c

	@ src/data/trainers.h:13798 trainers_line_13798 (+4 aliases)
	.globl gText_Rom_2E5B20
gText_Rom_2E5B20: @ 0x082E5B20
	.string "ヒデオ$"
	.if (. - gText_Rom_2E5B20) > 0x4
	.error "gText_Rom_2E5B20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5B20) < 0x4
	.space 0x4 - (. - gText_Rom_2E5B20)
	.endif
	.incbin "baserom.gba", 0x2e5b24, 0x1c

	@ src/data/trainers.h:14134 trainers_line_14134 (+4 aliases)
	.globl gText_Rom_2E5B40
gText_Rom_2E5B40: @ 0x082E5B40
	.string "ハツネ$"
	.if (. - gText_Rom_2E5B40) > 0x4
	.error "gText_Rom_2E5B40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5B40) < 0x4
	.space 0x4 - (. - gText_Rom_2E5B40)
	.endif
	.incbin "baserom.gba", 0x2e5b44, 0x1c

	@ src/data/trainers.h:14170 trainers_line_14170
	.globl gText_Rom_2E5B60
gText_Rom_2E5B60: @ 0x082E5B60
	.string "ミキエ$"
	.if (. - gText_Rom_2E5B60) > 0x4
	.error "gText_Rom_2E5B60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5B60) < 0x4
	.space 0x4 - (. - gText_Rom_2E5B60)
	.endif
	.incbin "baserom.gba", 0x2e5b64, 0x1c

	@ src/data/trainers.h:14134 trainers_line_14134 (+4 aliases)
	.globl gText_Rom_2E5B80
gText_Rom_2E5B80: @ 0x082E5B80
	.string "ハツネ$"
	.if (. - gText_Rom_2E5B80) > 0x4
	.error "gText_Rom_2E5B80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5B80) < 0x4
	.space 0x4 - (. - gText_Rom_2E5B80)
	.endif
	.incbin "baserom.gba", 0x2e5b84, 0x1c

	@ src/data/trainers.h:14134 trainers_line_14134 (+4 aliases)
	.globl gText_Rom_2E5BA0
gText_Rom_2E5BA0: @ 0x082E5BA0
	.string "ハツネ$"
	.if (. - gText_Rom_2E5BA0) > 0x4
	.error "gText_Rom_2E5BA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5BA0) < 0x4
	.space 0x4 - (. - gText_Rom_2E5BA0)
	.endif
	.incbin "baserom.gba", 0x2e5ba4, 0x1c

	@ src/data/trainers.h:14134 trainers_line_14134 (+4 aliases)
	.globl gText_Rom_2E5BC0
gText_Rom_2E5BC0: @ 0x082E5BC0
	.string "ハツネ$"
	.if (. - gText_Rom_2E5BC0) > 0x4
	.error "gText_Rom_2E5BC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5BC0) < 0x4
	.space 0x4 - (. - gText_Rom_2E5BC0)
	.endif
	.incbin "baserom.gba", 0x2e5bc4, 0x1c

	@ src/data/trainers.h:14134 trainers_line_14134 (+4 aliases)
	.globl gText_Rom_2E5BE0
gText_Rom_2E5BE0: @ 0x082E5BE0
	.string "ハツネ$"
	.if (. - gText_Rom_2E5BE0) > 0x4
	.error "gText_Rom_2E5BE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5BE0) < 0x4
	.space 0x4 - (. - gText_Rom_2E5BE0)
	.endif
	.incbin "baserom.gba", 0x2e5be4, 0x1c

	@ src/data/trainers.h:14410 trainers_line_14410
	.globl gText_Rom_2E5C00
gText_Rom_2E5C00: @ 0x082E5C00
	.string "マナとユイ$"
	.if (. - gText_Rom_2E5C00) > 0x6
	.error "gText_Rom_2E5C00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5C00) < 0x6
	.space 0x6 - (. - gText_Rom_2E5C00)
	.endif
	.incbin "baserom.gba", 0x2e5c06, 0x1a

	@ src/data/trainers.h:14472 trainers_line_14472 (+4 aliases)
	.globl gText_Rom_2E5C20
gText_Rom_2E5C20: @ 0x082E5C20
	.string "ミホとリコ$"
	.if (. - gText_Rom_2E5C20) > 0x6
	.error "gText_Rom_2E5C20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5C20) < 0x6
	.space 0x6 - (. - gText_Rom_2E5C20)
	.endif
	.incbin "baserom.gba", 0x2e5c26, 0x1a

	@ src/data/trainers.h:14472 trainers_line_14472 (+4 aliases)
	.globl gText_Rom_2E5C40
gText_Rom_2E5C40: @ 0x082E5C40
	.string "ミホとリコ$"
	.if (. - gText_Rom_2E5C40) > 0x6
	.error "gText_Rom_2E5C40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5C40) < 0x6
	.space 0x6 - (. - gText_Rom_2E5C40)
	.endif
	.incbin "baserom.gba", 0x2e5c46, 0x1a

	@ src/data/trainers.h:14472 trainers_line_14472 (+4 aliases)
	.globl gText_Rom_2E5C60
gText_Rom_2E5C60: @ 0x082E5C60
	.string "ミホとリコ$"
	.if (. - gText_Rom_2E5C60) > 0x6
	.error "gText_Rom_2E5C60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5C60) < 0x6
	.space 0x6 - (. - gText_Rom_2E5C60)
	.endif
	.incbin "baserom.gba", 0x2e5c66, 0x1a

	@ src/data/trainers.h:14472 trainers_line_14472 (+4 aliases)
	.globl gText_Rom_2E5C80
gText_Rom_2E5C80: @ 0x082E5C80
	.string "ミホとリコ$"
	.if (. - gText_Rom_2E5C80) > 0x6
	.error "gText_Rom_2E5C80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5C80) < 0x6
	.space 0x6 - (. - gText_Rom_2E5C80)
	.endif
	.incbin "baserom.gba", 0x2e5c86, 0x1a

	@ src/data/trainers.h:14472 trainers_line_14472 (+4 aliases)
	.globl gText_Rom_2E5CA0
gText_Rom_2E5CA0: @ 0x082E5CA0
	.string "ミホとリコ$"
	.if (. - gText_Rom_2E5CA0) > 0x6
	.error "gText_Rom_2E5CA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5CA0) < 0x6
	.space 0x6 - (. - gText_Rom_2E5CA0)
	.endif
	.incbin "baserom.gba", 0x2e5ca6, 0x1a

	@ src/data/trainers.h:14777 trainers_line_14777
	.globl gText_Rom_2E5CC0
gText_Rom_2E5CC0: @ 0x082E5CC0
	.string "ハルヒコ$"
	.if (. - gText_Rom_2E5CC0) > 0x5
	.error "gText_Rom_2E5CC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5CC0) < 0x5
	.space 0x5 - (. - gText_Rom_2E5CC0)
	.endif
	.incbin "baserom.gba", 0x2e5cc5, 0x1b

	@ src/data/trainers.h:14829 trainers_line_14829 (+4 aliases)
	.globl gText_Rom_2E5CE0
gText_Rom_2E5CE0: @ 0x082E5CE0
	.string "ミツハル$"
	.if (. - gText_Rom_2E5CE0) > 0x5
	.error "gText_Rom_2E5CE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5CE0) < 0x5
	.space 0x5 - (. - gText_Rom_2E5CE0)
	.endif
	.incbin "baserom.gba", 0x2e5ce5, 0x1b

	@ src/data/trainers.h:14867 trainers_line_14867
	.globl gText_Rom_2E5D00
gText_Rom_2E5D00: @ 0x082E5D00
	.string "ヒサシ$"
	.if (. - gText_Rom_2E5D00) > 0x4
	.error "gText_Rom_2E5D00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5D00) < 0x4
	.space 0x4 - (. - gText_Rom_2E5D00)
	.endif
	.incbin "baserom.gba", 0x2e5d04, 0x1c

	@ src/data/trainers.h:14829 trainers_line_14829 (+4 aliases)
	.globl gText_Rom_2E5D20
gText_Rom_2E5D20: @ 0x082E5D20
	.string "ミツハル$"
	.if (. - gText_Rom_2E5D20) > 0x5
	.error "gText_Rom_2E5D20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5D20) < 0x5
	.space 0x5 - (. - gText_Rom_2E5D20)
	.endif
	.incbin "baserom.gba", 0x2e5d25, 0x1b

	@ src/data/trainers.h:14829 trainers_line_14829 (+4 aliases)
	.globl gText_Rom_2E5D40
gText_Rom_2E5D40: @ 0x082E5D40
	.string "ミツハル$"
	.if (. - gText_Rom_2E5D40) > 0x5
	.error "gText_Rom_2E5D40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5D40) < 0x5
	.space 0x5 - (. - gText_Rom_2E5D40)
	.endif
	.incbin "baserom.gba", 0x2e5d45, 0x1b

	@ src/data/trainers.h:14829 trainers_line_14829 (+4 aliases)
	.globl gText_Rom_2E5D60
gText_Rom_2E5D60: @ 0x082E5D60
	.string "ミツハル$"
	.if (. - gText_Rom_2E5D60) > 0x5
	.error "gText_Rom_2E5D60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5D60) < 0x5
	.space 0x5 - (. - gText_Rom_2E5D60)
	.endif
	.incbin "baserom.gba", 0x2e5d65, 0x1b

	@ src/data/trainers.h:14829 trainers_line_14829 (+4 aliases)
	.globl gText_Rom_2E5D80
gText_Rom_2E5D80: @ 0x082E5D80
	.string "ミツハル$"
	.if (. - gText_Rom_2E5D80) > 0x5
	.error "gText_Rom_2E5D80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5D80) < 0x5
	.space 0x5 - (. - gText_Rom_2E5D80)
	.endif
	.incbin "baserom.gba", 0x2e5d85, 0x1b

	@ src/data/trainers.h:15169 trainers_line_15169
	.globl gText_Rom_2E5DA0
gText_Rom_2E5DA0: @ 0x082E5DA0
	.string "ヤスエ$"
	.if (. - gText_Rom_2E5DA0) > 0x4
	.error "gText_Rom_2E5DA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5DA0) < 0x4
	.space 0x4 - (. - gText_Rom_2E5DA0)
	.endif
	.incbin "baserom.gba", 0x2e5da4, 0x1c

	@ src/data/trainers.h:15207 trainers_line_15207
	.globl gText_Rom_2E5DC0
gText_Rom_2E5DC0: @ 0x082E5DC0
	.string "ケサコ$"
	.if (. - gText_Rom_2E5DC0) > 0x4
	.error "gText_Rom_2E5DC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5DC0) < 0x4
	.space 0x4 - (. - gText_Rom_2E5DC0)
	.endif
	.incbin "baserom.gba", 0x2e5dc4, 0x1c

	@ src/data/trainers.h:15245 trainers_line_15245
	.globl gText_Rom_2E5DE0
gText_Rom_2E5DE0: @ 0x082E5DE0
	.string "テイコ$"
	.if (. - gText_Rom_2E5DE0) > 0x4
	.error "gText_Rom_2E5DE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5DE0) < 0x4
	.space 0x4 - (. - gText_Rom_2E5DE0)
	.endif
	.incbin "baserom.gba", 0x2e5de4, 0x1c

	@ src/data/trainers.h:15311 trainers_line_15311 (+4 aliases)
	.globl gText_Rom_2E5E00
gText_Rom_2E5E00: @ 0x082E5E00
	.string "マサコ$"
	.if (. - gText_Rom_2E5E00) > 0x4
	.error "gText_Rom_2E5E00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5E00) < 0x4
	.space 0x4 - (. - gText_Rom_2E5E00)
	.endif
	.incbin "baserom.gba", 0x2e5e04, 0x1c

	@ src/data/trainers.h:15311 trainers_line_15311 (+4 aliases)
	.globl gText_Rom_2E5E20
gText_Rom_2E5E20: @ 0x082E5E20
	.string "マサコ$"
	.if (. - gText_Rom_2E5E20) > 0x4
	.error "gText_Rom_2E5E20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5E20) < 0x4
	.space 0x4 - (. - gText_Rom_2E5E20)
	.endif
	.incbin "baserom.gba", 0x2e5e24, 0x1c

	@ src/data/trainers.h:15311 trainers_line_15311 (+4 aliases)
	.globl gText_Rom_2E5E40
gText_Rom_2E5E40: @ 0x082E5E40
	.string "マサコ$"
	.if (. - gText_Rom_2E5E40) > 0x4
	.error "gText_Rom_2E5E40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5E40) < 0x4
	.space 0x4 - (. - gText_Rom_2E5E40)
	.endif
	.incbin "baserom.gba", 0x2e5e44, 0x1c

	@ src/data/trainers.h:15311 trainers_line_15311 (+4 aliases)
	.globl gText_Rom_2E5E60
gText_Rom_2E5E60: @ 0x082E5E60
	.string "マサコ$"
	.if (. - gText_Rom_2E5E60) > 0x4
	.error "gText_Rom_2E5E60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5E60) < 0x4
	.space 0x4 - (. - gText_Rom_2E5E60)
	.endif
	.incbin "baserom.gba", 0x2e5e64, 0x1c

	@ src/data/trainers.h:15311 trainers_line_15311 (+4 aliases)
	.globl gText_Rom_2E5E80
gText_Rom_2E5E80: @ 0x082E5E80
	.string "マサコ$"
	.if (. - gText_Rom_2E5E80) > 0x4
	.error "gText_Rom_2E5E80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5E80) < 0x4
	.space 0x4 - (. - gText_Rom_2E5E80)
	.endif
	.incbin "baserom.gba", 0x2e5e84, 0x1c

	@ src/data/trainers.h:15571 trainers_line_15571 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E5EA0
gText_Rom_2E5EA0: @ 0x082E5EA0
	.string "ウンショウ$"
	.if (. - gText_Rom_2E5EA0) != 0x6
	.error "gText_Rom_2E5EA0 must retain its original byte length"
	.endif
	.globl gText_Rom_2E5EA2
	.set gText_Rom_2E5EA2, gText_Rom_2E5EA0 + 0x2
	.incbin "baserom.gba", 0x2e5ea6, 0x1a

	@ src/data/trainers.h:15571 trainers_line_15571 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E5EC0
gText_Rom_2E5EC0: @ 0x082E5EC0
	.string "ウンショウ$"
	.if (. - gText_Rom_2E5EC0) != 0x6
	.error "gText_Rom_2E5EC0 must retain its original byte length"
	.endif
	.globl gText_Rom_2E5EC2
	.set gText_Rom_2E5EC2, gText_Rom_2E5EC0 + 0x2
	.incbin "baserom.gba", 0x2e5ec6, 0x1a

	@ src/data/trainers.h:15571 trainers_line_15571 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E5EE0
gText_Rom_2E5EE0: @ 0x082E5EE0
	.string "ウンショウ$"
	.if (. - gText_Rom_2E5EE0) != 0x6
	.error "gText_Rom_2E5EE0 must retain its original byte length"
	.endif
	.globl gText_Rom_2E5EE2
	.set gText_Rom_2E5EE2, gText_Rom_2E5EE0 + 0x2
	.incbin "baserom.gba", 0x2e5ee6, 0x1a

	@ src/data/trainers.h:15571 trainers_line_15571 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E5F00
gText_Rom_2E5F00: @ 0x082E5F00
	.string "ウンショウ$"
	.if (. - gText_Rom_2E5F00) != 0x6
	.error "gText_Rom_2E5F00 must retain its original byte length"
	.endif
	.globl gText_Rom_2E5F02
	.set gText_Rom_2E5F02, gText_Rom_2E5F00 + 0x2
	.incbin "baserom.gba", 0x2e5f06, 0x1a

	@ src/data/trainers.h:15571 trainers_line_15571 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E5F20
gText_Rom_2E5F20: @ 0x082E5F20
	.string "ウンショウ$"
	.if (. - gText_Rom_2E5F20) != 0x6
	.error "gText_Rom_2E5F20 must retain its original byte length"
	.endif
	.globl gText_Rom_2E5F22
	.set gText_Rom_2E5F22, gText_Rom_2E5F20 + 0x2
	.incbin "baserom.gba", 0x2e5f26, 0x1a

	@ src/data/trainers.h:15779 trainers_line_15779
	.globl gText_Rom_2E5F40
gText_Rom_2E5F40: @ 0x082E5F40
	.string "ミツヨ$"
	.if (. - gText_Rom_2E5F40) > 0x4
	.error "gText_Rom_2E5F40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5F40) < 0x4
	.space 0x4 - (. - gText_Rom_2E5F40)
	.endif
	.incbin "baserom.gba", 0x2e5f44, 0x1c

	@ src/data/trainers.h:15822 trainers_line_15822 (+4 aliases)
	.globl gText_Rom_2E5F60
gText_Rom_2E5F60: @ 0x082E5F60
	.string "ミヤコ$"
	.if (. - gText_Rom_2E5F60) > 0x4
	.error "gText_Rom_2E5F60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5F60) < 0x4
	.space 0x4 - (. - gText_Rom_2E5F60)
	.endif
	.incbin "baserom.gba", 0x2e5f64, 0x1c

	@ src/data/trainers.h:15822 trainers_line_15822 (+4 aliases)
	.globl gText_Rom_2E5F80
gText_Rom_2E5F80: @ 0x082E5F80
	.string "ミヤコ$"
	.if (. - gText_Rom_2E5F80) > 0x4
	.error "gText_Rom_2E5F80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5F80) < 0x4
	.space 0x4 - (. - gText_Rom_2E5F80)
	.endif
	.incbin "baserom.gba", 0x2e5f84, 0x1c

	@ src/data/trainers.h:15822 trainers_line_15822 (+4 aliases)
	.globl gText_Rom_2E5FA0
gText_Rom_2E5FA0: @ 0x082E5FA0
	.string "ミヤコ$"
	.if (. - gText_Rom_2E5FA0) > 0x4
	.error "gText_Rom_2E5FA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5FA0) < 0x4
	.space 0x4 - (. - gText_Rom_2E5FA0)
	.endif
	.incbin "baserom.gba", 0x2e5fa4, 0x1c

	@ src/data/trainers.h:15822 trainers_line_15822 (+4 aliases)
	.globl gText_Rom_2E5FC0
gText_Rom_2E5FC0: @ 0x082E5FC0
	.string "ミヤコ$"
	.if (. - gText_Rom_2E5FC0) > 0x4
	.error "gText_Rom_2E5FC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5FC0) < 0x4
	.space 0x4 - (. - gText_Rom_2E5FC0)
	.endif
	.incbin "baserom.gba", 0x2e5fc4, 0x1c

	@ src/data/trainers.h:15822 trainers_line_15822 (+4 aliases)
	.globl gText_Rom_2E5FE0
gText_Rom_2E5FE0: @ 0x082E5FE0
	.string "ミヤコ$"
	.if (. - gText_Rom_2E5FE0) > 0x4
	.error "gText_Rom_2E5FE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E5FE0) < 0x4
	.space 0x4 - (. - gText_Rom_2E5FE0)
	.endif
	.incbin "baserom.gba", 0x2e5fe4, 0x1c

	@ src/data/trainers.h:16062 trainers_line_16062 (+4 aliases)
	.globl gText_Rom_2E6000
gText_Rom_2E6000: @ 0x082E6000
	.string "カズキ$"
	.if (. - gText_Rom_2E6000) > 0x4
	.error "gText_Rom_2E6000 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6000) < 0x4
	.space 0x4 - (. - gText_Rom_2E6000)
	.endif
	.incbin "baserom.gba", 0x2e6004, 0x1c

	@ src/data/trainers.h:16098 trainers_line_16098
	.globl gText_Rom_2E6020
gText_Rom_2E6020: @ 0x082E6020
	.string "ケイタ$"
	.if (. - gText_Rom_2E6020) > 0x4
	.error "gText_Rom_2E6020 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6020) < 0x4
	.space 0x4 - (. - gText_Rom_2E6020)
	.endif
	.incbin "baserom.gba", 0x2e6024, 0x1c

	@ src/data/trainers.h:16146 trainers_line_16146
	.globl gText_Rom_2E6040
gText_Rom_2E6040: @ 0x082E6040
	.string "タロウ$"
	.if (. - gText_Rom_2E6040) > 0x4
	.error "gText_Rom_2E6040 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6040) < 0x4
	.space 0x4 - (. - gText_Rom_2E6040)
	.endif
	.incbin "baserom.gba", 0x2e6044, 0x1c

	@ src/data/trainers.h:16186 trainers_line_16186
	.globl gText_Rom_2E6060
gText_Rom_2E6060: @ 0x082E6060
	.string "カツオ$"
	.if (. - gText_Rom_2E6060) > 0x4
	.error "gText_Rom_2E6060 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6060) < 0x4
	.space 0x4 - (. - gText_Rom_2E6060)
	.endif
	.incbin "baserom.gba", 0x2e6064, 0x1c

	@ src/data/trainers.h:16234 trainers_line_16234
	.globl gText_Rom_2E6080
gText_Rom_2E6080: @ 0x082E6080
	.string "タケオ$"
	.if (. - gText_Rom_2E6080) > 0x4
	.error "gText_Rom_2E6080 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6080) < 0x4
	.space 0x4 - (. - gText_Rom_2E6080)
	.endif
	.incbin "baserom.gba", 0x2e6084, 0x1c

	@ src/data/trainers.h:16270 trainers_line_16270
	.globl gText_Rom_2E60A0
gText_Rom_2E60A0: @ 0x082E60A0
	.string "ヒロト$"
	.if (. - gText_Rom_2E60A0) > 0x4
	.error "gText_Rom_2E60A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E60A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E60A0)
	.endif
	.incbin "baserom.gba", 0x2e60a4, 0x1c

	@ src/data/trainers.h:16332 trainers_line_16332
	.globl gText_Rom_2E60C0
gText_Rom_2E60C0: @ 0x082E60C0
	.string "タダトシ$"
	.if (. - gText_Rom_2E60C0) > 0x5
	.error "gText_Rom_2E60C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E60C0) < 0x5
	.space 0x5 - (. - gText_Rom_2E60C0)
	.endif
	.incbin "baserom.gba", 0x2e60c5, 0x1b

	@ src/data/trainers.h:16396 trainers_line_16396
	.globl gText_Rom_2E60E0
gText_Rom_2E60E0: @ 0x082E60E0
	.string "スズカ$"
	.if (. - gText_Rom_2E60E0) > 0x4
	.error "gText_Rom_2E60E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E60E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E60E0)
	.endif
	.incbin "baserom.gba", 0x2e60e4, 0x1c

	@ src/data/trainers.h:16460 trainers_line_16460
	.globl gText_Rom_2E6100
gText_Rom_2E6100: @ 0x082E6100
	.string "マサユキ$"
	.if (. - gText_Rom_2E6100) > 0x5
	.error "gText_Rom_2E6100 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6100) < 0x5
	.space 0x5 - (. - gText_Rom_2E6100)
	.endif
	.incbin "baserom.gba", 0x2e6105, 0x1b

	@ src/data/trainers.h:16496 trainers_line_16496
	.globl gText_Rom_2E6120
gText_Rom_2E6120: @ 0x082E6120
	.string "ヨシト$"
	.if (. - gText_Rom_2E6120) > 0x4
	.error "gText_Rom_2E6120 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6120) < 0x4
	.space 0x4 - (. - gText_Rom_2E6120)
	.endif
	.incbin "baserom.gba", 0x2e6124, 0x1c

	@ src/data/trainers.h:16062 trainers_line_16062 (+4 aliases)
	.globl gText_Rom_2E6140
gText_Rom_2E6140: @ 0x082E6140
	.string "カズキ$"
	.if (. - gText_Rom_2E6140) > 0x4
	.error "gText_Rom_2E6140 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6140) < 0x4
	.space 0x4 - (. - gText_Rom_2E6140)
	.endif
	.incbin "baserom.gba", 0x2e6144, 0x1c

	@ src/data/trainers.h:16062 trainers_line_16062 (+4 aliases)
	.globl gText_Rom_2E6160
gText_Rom_2E6160: @ 0x082E6160
	.string "カズキ$"
	.if (. - gText_Rom_2E6160) > 0x4
	.error "gText_Rom_2E6160 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6160) < 0x4
	.space 0x4 - (. - gText_Rom_2E6160)
	.endif
	.incbin "baserom.gba", 0x2e6164, 0x1c

	@ src/data/trainers.h:16062 trainers_line_16062 (+4 aliases)
	.globl gText_Rom_2E6180
gText_Rom_2E6180: @ 0x082E6180
	.string "カズキ$"
	.if (. - gText_Rom_2E6180) > 0x4
	.error "gText_Rom_2E6180 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6180) < 0x4
	.space 0x4 - (. - gText_Rom_2E6180)
	.endif
	.incbin "baserom.gba", 0x2e6184, 0x1c

	@ src/data/trainers.h:16062 trainers_line_16062 (+4 aliases)
	.globl gText_Rom_2E61A0
gText_Rom_2E61A0: @ 0x082E61A0
	.string "カズキ$"
	.if (. - gText_Rom_2E61A0) > 0x4
	.error "gText_Rom_2E61A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E61A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E61A0)
	.endif
	.incbin "baserom.gba", 0x2e61a4, 0x1c

	@ src/data/trainers.h:16736 trainers_line_16736
	.globl gText_Rom_2E61C0
gText_Rom_2E61C0: @ 0x082E61C0
	.string "ヤスユキ$"
	.if (. - gText_Rom_2E61C0) > 0x5
	.error "gText_Rom_2E61C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E61C0) < 0x5
	.space 0x5 - (. - gText_Rom_2E61C0)
	.endif
	.incbin "baserom.gba", 0x2e61c5, 0x1b

	@ src/data/trainers.h:16784 trainers_line_16784
	.globl gText_Rom_2E61E0
gText_Rom_2E61E0: @ 0x082E61E0
	.string "イサム$"
	.if (. - gText_Rom_2E61E0) > 0x4
	.error "gText_Rom_2E61E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E61E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E61E0)
	.endif
	.incbin "baserom.gba", 0x2e61e4, 0x1c

	@ src/data/trainers.h:16832 trainers_line_16832
	.globl gText_Rom_2E6200
gText_Rom_2E6200: @ 0x082E6200
	.string "シンゴ$"
	.if (. - gText_Rom_2E6200) > 0x4
	.error "gText_Rom_2E6200 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6200) < 0x4
	.space 0x4 - (. - gText_Rom_2E6200)
	.endif
	.incbin "baserom.gba", 0x2e6204, 0x1c

	@ src/data/trainers.h:16880 trainers_line_16880 (+2 aliases)
	.globl gText_Rom_2E6220
gText_Rom_2E6220: @ 0x082E6220
	.string "ミクリ$"
	.if (. - gText_Rom_2E6220) > 0x4
	.error "gText_Rom_2E6220 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6220) < 0x4
	.space 0x4 - (. - gText_Rom_2E6220)
	.endif
	.incbin "baserom.gba", 0x2e6224, 0x1c

	@ src/data/trainers.h:17024 trainers_line_17024
	.globl gText_Rom_2E6240
gText_Rom_2E6240: @ 0x082E6240
	.string "カツノリ$"
	.if (. - gText_Rom_2E6240) > 0x5
	.error "gText_Rom_2E6240 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6240) < 0x5
	.space 0x5 - (. - gText_Rom_2E6240)
	.endif
	.incbin "baserom.gba", 0x2e6245, 0x1b

	@ src/data/trainers.h:17084 trainers_line_17084
	.globl gText_Rom_2E6260
gText_Rom_2E6260: @ 0x082E6260
	.string "ヨシタカ$"
	.if (. - gText_Rom_2E6260) > 0x5
	.error "gText_Rom_2E6260 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6260) < 0x5
	.space 0x5 - (. - gText_Rom_2E6260)
	.endif
	.incbin "baserom.gba", 0x2e6265, 0x1b

	@ src/data/trainers.h:17144 trainers_line_17144
	.globl gText_Rom_2E6280
gText_Rom_2E6280: @ 0x082E6280
	.string "ヒデユキ$"
	.if (. - gText_Rom_2E6280) > 0x5
	.error "gText_Rom_2E6280 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6280) < 0x5
	.space 0x5 - (. - gText_Rom_2E6280)
	.endif
	.incbin "baserom.gba", 0x2e6285, 0x1b

	@ src/data/trainers.h:17204 trainers_line_17204 (+4 aliases)
	.globl gText_Rom_2E62A0
gText_Rom_2E62A0: @ 0x082E62A0
	.string "アキヒコ$"
	.if (. - gText_Rom_2E62A0) > 0x5
	.error "gText_Rom_2E62A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E62A0) < 0x5
	.space 0x5 - (. - gText_Rom_2E62A0)
	.endif
	.incbin "baserom.gba", 0x2e62a5, 0x1b

	@ src/data/trainers.h:17264 trainers_line_17264
	.globl gText_Rom_2E62C0
gText_Rom_2E62C0: @ 0x082E62C0
	.string "トモカズ$"
	.if (. - gText_Rom_2E62C0) > 0x5
	.error "gText_Rom_2E62C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E62C0) < 0x5
	.space 0x5 - (. - gText_Rom_2E62C0)
	.endif
	.incbin "baserom.gba", 0x2e62c5, 0x1b

	@ src/data/trainers.h:17300 trainers_line_17300
	.globl gText_Rom_2E62E0
gText_Rom_2E62E0: @ 0x082E62E0
	.string "タカフミ$"
	.if (. - gText_Rom_2E62E0) > 0x5
	.error "gText_Rom_2E62E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E62E0) < 0x5
	.space 0x5 - (. - gText_Rom_2E62E0)
	.endif
	.incbin "baserom.gba", 0x2e62e5, 0x1b

	@ src/data/trainers.h:17372 trainers_line_17372
	.globl gText_Rom_2E6300
gText_Rom_2E6300: @ 0x082E6300
	.string "タカノリ$"
	.if (. - gText_Rom_2E6300) > 0x5
	.error "gText_Rom_2E6300 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6300) < 0x5
	.space 0x5 - (. - gText_Rom_2E6300)
	.endif
	.incbin "baserom.gba", 0x2e6305, 0x1b

	@ src/data/trainers.h:17408 trainers_line_17408
	.globl gText_Rom_2E6320
gText_Rom_2E6320: @ 0x082E6320
	.string "カズヒコ$"
	.if (. - gText_Rom_2E6320) > 0x5
	.error "gText_Rom_2E6320 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6320) < 0x5
	.space 0x5 - (. - gText_Rom_2E6320)
	.endif
	.incbin "baserom.gba", 0x2e6325, 0x1b

	@ src/data/trainers.h:17456 trainers_line_17456
	.globl gText_Rom_2E6340
gText_Rom_2E6340: @ 0x082E6340
	.string "イサオ$"
	.if (. - gText_Rom_2E6340) > 0x4
	.error "gText_Rom_2E6340 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6340) < 0x4
	.space 0x4 - (. - gText_Rom_2E6340)
	.endif
	.incbin "baserom.gba", 0x2e6344, 0x1c

	@ src/data/trainers.h:17492 trainers_line_17492
	.globl gText_Rom_2E6360
gText_Rom_2E6360: @ 0x082E6360
	.string "タカヒロ$"
	.if (. - gText_Rom_2E6360) > 0x5
	.error "gText_Rom_2E6360 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6360) < 0x5
	.space 0x5 - (. - gText_Rom_2E6360)
	.endif
	.incbin "baserom.gba", 0x2e6365, 0x1b

	@ src/data/trainers.h:17204 trainers_line_17204 (+4 aliases)
	.globl gText_Rom_2E6380
gText_Rom_2E6380: @ 0x082E6380
	.string "アキヒコ$"
	.if (. - gText_Rom_2E6380) > 0x5
	.error "gText_Rom_2E6380 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6380) < 0x5
	.space 0x5 - (. - gText_Rom_2E6380)
	.endif
	.incbin "baserom.gba", 0x2e6385, 0x1b

	@ src/data/trainers.h:17204 trainers_line_17204 (+4 aliases)
	.globl gText_Rom_2E63A0
gText_Rom_2E63A0: @ 0x082E63A0
	.string "アキヒコ$"
	.if (. - gText_Rom_2E63A0) > 0x5
	.error "gText_Rom_2E63A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E63A0) < 0x5
	.space 0x5 - (. - gText_Rom_2E63A0)
	.endif
	.incbin "baserom.gba", 0x2e63a5, 0x1b

	@ src/data/trainers.h:17204 trainers_line_17204 (+4 aliases)
	.globl gText_Rom_2E63C0
gText_Rom_2E63C0: @ 0x082E63C0
	.string "アキヒコ$"
	.if (. - gText_Rom_2E63C0) > 0x5
	.error "gText_Rom_2E63C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E63C0) < 0x5
	.space 0x5 - (. - gText_Rom_2E63C0)
	.endif
	.incbin "baserom.gba", 0x2e63c5, 0x1b

	@ src/data/trainers.h:17204 trainers_line_17204 (+4 aliases)
	.globl gText_Rom_2E63E0
gText_Rom_2E63E0: @ 0x082E63E0
	.string "アキヒコ$"
	.if (. - gText_Rom_2E63E0) > 0x5
	.error "gText_Rom_2E63E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E63E0) < 0x5
	.space 0x5 - (. - gText_Rom_2E63E0)
	.endif
	.incbin "baserom.gba", 0x2e63e5, 0x1b

	@ src/data/trainers.h:17816 trainers_line_17816
	.globl gText_Rom_2E6400
gText_Rom_2E6400: @ 0x082E6400
	.string "カズオ$"
	.if (. - gText_Rom_2E6400) > 0x4
	.error "gText_Rom_2E6400 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6400) < 0x4
	.space 0x4 - (. - gText_Rom_2E6400)
	.endif
	.incbin "baserom.gba", 0x2e6404, 0x1c

	@ src/data/trainers.h:17912 trainers_line_17912
	.globl gText_Rom_2E6420
gText_Rom_2E6420: @ 0x082E6420
	.string "ススム$"
	.if (. - gText_Rom_2E6420) > 0x4
	.error "gText_Rom_2E6420 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6420) < 0x4
	.space 0x4 - (. - gText_Rom_2E6420)
	.endif
	.incbin "baserom.gba", 0x2e6424, 0x1c

	@ src/data/trainers.h:17972 trainers_line_17972
	.globl gText_Rom_2E6440
gText_Rom_2E6440: @ 0x082E6440
	.string "シュンスケ$"
	.if (. - gText_Rom_2E6440) > 0x6
	.error "gText_Rom_2E6440 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6440) < 0x6
	.space 0x6 - (. - gText_Rom_2E6440)
	.endif
	.incbin "baserom.gba", 0x2e6446, 0x1a

	@ src/data/trainers.h:18020 trainers_line_18020 (+4 aliases)
	.globl gText_Rom_2E6460
gText_Rom_2E6460: @ 0x082E6460
	.string "ヒデアキ$"
	.if (. - gText_Rom_2E6460) > 0x5
	.error "gText_Rom_2E6460 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6460) < 0x5
	.space 0x5 - (. - gText_Rom_2E6460)
	.endif
	.incbin "baserom.gba", 0x2e6465, 0x1b

	@ src/data/trainers.h:18020 trainers_line_18020 (+4 aliases)
	.globl gText_Rom_2E6480
gText_Rom_2E6480: @ 0x082E6480
	.string "ヒデアキ$"
	.if (. - gText_Rom_2E6480) > 0x5
	.error "gText_Rom_2E6480 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6480) < 0x5
	.space 0x5 - (. - gText_Rom_2E6480)
	.endif
	.incbin "baserom.gba", 0x2e6485, 0x1b

	@ src/data/trainers.h:18020 trainers_line_18020 (+4 aliases)
	.globl gText_Rom_2E64A0
gText_Rom_2E64A0: @ 0x082E64A0
	.string "ヒデアキ$"
	.if (. - gText_Rom_2E64A0) > 0x5
	.error "gText_Rom_2E64A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E64A0) < 0x5
	.space 0x5 - (. - gText_Rom_2E64A0)
	.endif
	.incbin "baserom.gba", 0x2e64a5, 0x1b

	@ src/data/trainers.h:18020 trainers_line_18020 (+4 aliases)
	.globl gText_Rom_2E64C0
gText_Rom_2E64C0: @ 0x082E64C0
	.string "ヒデアキ$"
	.if (. - gText_Rom_2E64C0) > 0x5
	.error "gText_Rom_2E64C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E64C0) < 0x5
	.space 0x5 - (. - gText_Rom_2E64C0)
	.endif
	.incbin "baserom.gba", 0x2e64c5, 0x1b

	@ src/data/trainers.h:18020 trainers_line_18020 (+4 aliases)
	.globl gText_Rom_2E64E0
gText_Rom_2E64E0: @ 0x082E64E0
	.string "ヒデアキ$"
	.if (. - gText_Rom_2E64E0) > 0x5
	.error "gText_Rom_2E64E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E64E0) < 0x5
	.space 0x5 - (. - gText_Rom_2E64E0)
	.endif
	.incbin "baserom.gba", 0x2e64e5, 0x1b

	@ src/data/trainers.h:18200 trainers_line_18200 (+4 aliases)
	.globl gText_Rom_2E6500
gText_Rom_2E6500: @ 0x082E6500
	.string "ショウコ$"
	.if (. - gText_Rom_2E6500) > 0x5
	.error "gText_Rom_2E6500 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6500) < 0x5
	.space 0x5 - (. - gText_Rom_2E6500)
	.endif
	.incbin "baserom.gba", 0x2e6505, 0x1b

	@ src/data/trainers.h:18236 trainers_line_18236
	.globl gText_Rom_2E6520
gText_Rom_2E6520: @ 0x082E6520
	.string "ヒデミ$"
	.if (. - gText_Rom_2E6520) > 0x4
	.error "gText_Rom_2E6520 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6520) < 0x4
	.space 0x4 - (. - gText_Rom_2E6520)
	.endif
	.incbin "baserom.gba", 0x2e6524, 0x1c

	@ src/data/trainers.h:18200 trainers_line_18200 (+4 aliases)
	.globl gText_Rom_2E6540
gText_Rom_2E6540: @ 0x082E6540
	.string "ショウコ$"
	.if (. - gText_Rom_2E6540) > 0x5
	.error "gText_Rom_2E6540 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6540) < 0x5
	.space 0x5 - (. - gText_Rom_2E6540)
	.endif
	.incbin "baserom.gba", 0x2e6545, 0x1b

	@ src/data/trainers.h:18200 trainers_line_18200 (+4 aliases)
	.globl gText_Rom_2E6560
gText_Rom_2E6560: @ 0x082E6560
	.string "ショウコ$"
	.if (. - gText_Rom_2E6560) > 0x5
	.error "gText_Rom_2E6560 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6560) < 0x5
	.space 0x5 - (. - gText_Rom_2E6560)
	.endif
	.incbin "baserom.gba", 0x2e6565, 0x1b

	@ src/data/trainers.h:18200 trainers_line_18200 (+4 aliases)
	.globl gText_Rom_2E6580
gText_Rom_2E6580: @ 0x082E6580
	.string "ショウコ$"
	.if (. - gText_Rom_2E6580) > 0x5
	.error "gText_Rom_2E6580 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6580) < 0x5
	.space 0x5 - (. - gText_Rom_2E6580)
	.endif
	.incbin "baserom.gba", 0x2e6585, 0x1b

	@ src/data/trainers.h:18200 trainers_line_18200 (+4 aliases)
	.globl gText_Rom_2E65A0
gText_Rom_2E65A0: @ 0x082E65A0
	.string "ショウコ$"
	.if (. - gText_Rom_2E65A0) > 0x5
	.error "gText_Rom_2E65A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E65A0) < 0x5
	.space 0x5 - (. - gText_Rom_2E65A0)
	.endif
	.incbin "baserom.gba", 0x2e65a5, 0x1b

	@ src/data/trainers.h:18440 trainers_line_18440 (+4 aliases)
	.globl gText_Rom_2E65C0
gText_Rom_2E65C0: @ 0x082E65C0
	.string "ツヨシ$"
	.if (. - gText_Rom_2E65C0) > 0x4
	.error "gText_Rom_2E65C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E65C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E65C0)
	.endif
	.incbin "baserom.gba", 0x2e65c4, 0x1c

	@ src/data/trainers.h:18440 trainers_line_18440 (+4 aliases)
	.globl gText_Rom_2E65E0
gText_Rom_2E65E0: @ 0x082E65E0
	.string "ツヨシ$"
	.if (. - gText_Rom_2E65E0) > 0x4
	.error "gText_Rom_2E65E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E65E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E65E0)
	.endif
	.incbin "baserom.gba", 0x2e65e4, 0x1c

	@ src/data/trainers.h:18440 trainers_line_18440 (+4 aliases)
	.globl gText_Rom_2E6600
gText_Rom_2E6600: @ 0x082E6600
	.string "ツヨシ$"
	.if (. - gText_Rom_2E6600) > 0x4
	.error "gText_Rom_2E6600 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6600) < 0x4
	.space 0x4 - (. - gText_Rom_2E6600)
	.endif
	.incbin "baserom.gba", 0x2e6604, 0x1c

	@ src/data/trainers.h:18440 trainers_line_18440 (+4 aliases)
	.globl gText_Rom_2E6620
gText_Rom_2E6620: @ 0x082E6620
	.string "ツヨシ$"
	.if (. - gText_Rom_2E6620) > 0x4
	.error "gText_Rom_2E6620 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6620) < 0x4
	.space 0x4 - (. - gText_Rom_2E6620)
	.endif
	.incbin "baserom.gba", 0x2e6624, 0x1c

	@ src/data/trainers.h:18440 trainers_line_18440 (+4 aliases)
	.globl gText_Rom_2E6640
gText_Rom_2E6640: @ 0x082E6640
	.string "ツヨシ$"
	.if (. - gText_Rom_2E6640) > 0x4
	.error "gText_Rom_2E6640 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6640) < 0x4
	.space 0x4 - (. - gText_Rom_2E6640)
	.endif
	.incbin "baserom.gba", 0x2e6644, 0x1c

	@ src/data/trainers.h:18620 trainers_line_18620 (+4 aliases)
	.globl gText_Rom_2E6660
gText_Rom_2E6660: @ 0x082E6660
	.string "サエコ$"
	.if (. - gText_Rom_2E6660) > 0x4
	.error "gText_Rom_2E6660 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6660) < 0x4
	.space 0x4 - (. - gText_Rom_2E6660)
	.endif
	.incbin "baserom.gba", 0x2e6664, 0x1c

	@ src/data/trainers.h:18620 trainers_line_18620 (+4 aliases)
	.globl gText_Rom_2E6680
gText_Rom_2E6680: @ 0x082E6680
	.string "サエコ$"
	.if (. - gText_Rom_2E6680) > 0x4
	.error "gText_Rom_2E6680 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6680) < 0x4
	.space 0x4 - (. - gText_Rom_2E6680)
	.endif
	.incbin "baserom.gba", 0x2e6684, 0x1c

	@ src/data/trainers.h:18620 trainers_line_18620 (+4 aliases)
	.globl gText_Rom_2E66A0
gText_Rom_2E66A0: @ 0x082E66A0
	.string "サエコ$"
	.if (. - gText_Rom_2E66A0) > 0x4
	.error "gText_Rom_2E66A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E66A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E66A0)
	.endif
	.incbin "baserom.gba", 0x2e66a4, 0x1c

	@ src/data/trainers.h:18620 trainers_line_18620 (+4 aliases)
	.globl gText_Rom_2E66C0
gText_Rom_2E66C0: @ 0x082E66C0
	.string "サエコ$"
	.if (. - gText_Rom_2E66C0) > 0x4
	.error "gText_Rom_2E66C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E66C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E66C0)
	.endif
	.incbin "baserom.gba", 0x2e66c4, 0x1c

	@ src/data/trainers.h:18620 trainers_line_18620 (+4 aliases)
	.globl gText_Rom_2E66E0
gText_Rom_2E66E0: @ 0x082E66E0
	.string "サエコ$"
	.if (. - gText_Rom_2E66E0) > 0x4
	.error "gText_Rom_2E66E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E66E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E66E0)
	.endif
	.incbin "baserom.gba", 0x2e66e4, 0x1c

	@ src/data/trainers.h:18800 trainers_line_18800
	.globl gText_Rom_2E6700
gText_Rom_2E6700: @ 0x082E6700
	.string "シゲハル$"
	.if (. - gText_Rom_2E6700) > 0x5
	.error "gText_Rom_2E6700 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6700) < 0x5
	.space 0x5 - (. - gText_Rom_2E6700)
	.endif
	.incbin "baserom.gba", 0x2e6705, 0x1b

	@ src/data/trainers.h:18848 trainers_line_18848
	.globl gText_Rom_2E6720
gText_Rom_2E6720: @ 0x082E6720
	.string "フミタケ$"
	.if (. - gText_Rom_2E6720) > 0x5
	.error "gText_Rom_2E6720 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6720) < 0x5
	.space 0x5 - (. - gText_Rom_2E6720)
	.endif
	.incbin "baserom.gba", 0x2e6725, 0x1b

	@ src/data/trainers.h:18896 trainers_line_18896 (+4 aliases)
	.globl gText_Rom_2E6740
gText_Rom_2E6740: @ 0x082E6740
	.string "エイスケ$"
	.if (. - gText_Rom_2E6740) > 0x5
	.error "gText_Rom_2E6740 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6740) < 0x5
	.space 0x5 - (. - gText_Rom_2E6740)
	.endif
	.incbin "baserom.gba", 0x2e6745, 0x1b

	@ src/data/trainers.h:18932 trainers_line_18932 (+4 aliases)
	.globl gText_Rom_2E6760
gText_Rom_2E6760: @ 0x082E6760
	.string "ヤスヒロ$"
	.if (. - gText_Rom_2E6760) > 0x5
	.error "gText_Rom_2E6760 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6760) < 0x5
	.space 0x5 - (. - gText_Rom_2E6760)
	.endif
	.incbin "baserom.gba", 0x2e6765, 0x1b

	@ src/data/trainers.h:18980 trainers_line_18980
	.globl gText_Rom_2E6780
gText_Rom_2E6780: @ 0x082E6780
	.string "ショウゴ$"
	.if (. - gText_Rom_2E6780) > 0x5
	.error "gText_Rom_2E6780 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6780) < 0x5
	.space 0x5 - (. - gText_Rom_2E6780)
	.endif
	.incbin "baserom.gba", 0x2e6785, 0x1b

	@ src/data/trainers.h:18896 trainers_line_18896 (+4 aliases)
	.globl gText_Rom_2E67A0
gText_Rom_2E67A0: @ 0x082E67A0
	.string "エイスケ$"
	.if (. - gText_Rom_2E67A0) > 0x5
	.error "gText_Rom_2E67A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E67A0) < 0x5
	.space 0x5 - (. - gText_Rom_2E67A0)
	.endif
	.incbin "baserom.gba", 0x2e67a5, 0x1b

	@ src/data/trainers.h:18896 trainers_line_18896 (+4 aliases)
	.globl gText_Rom_2E67C0
gText_Rom_2E67C0: @ 0x082E67C0
	.string "エイスケ$"
	.if (. - gText_Rom_2E67C0) > 0x5
	.error "gText_Rom_2E67C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E67C0) < 0x5
	.space 0x5 - (. - gText_Rom_2E67C0)
	.endif
	.incbin "baserom.gba", 0x2e67c5, 0x1b

	@ src/data/trainers.h:18896 trainers_line_18896 (+4 aliases)
	.globl gText_Rom_2E67E0
gText_Rom_2E67E0: @ 0x082E67E0
	.string "エイスケ$"
	.if (. - gText_Rom_2E67E0) > 0x5
	.error "gText_Rom_2E67E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E67E0) < 0x5
	.space 0x5 - (. - gText_Rom_2E67E0)
	.endif
	.incbin "baserom.gba", 0x2e67e5, 0x1b

	@ src/data/trainers.h:18896 trainers_line_18896 (+4 aliases)
	.globl gText_Rom_2E6800
gText_Rom_2E6800: @ 0x082E6800
	.string "エイスケ$"
	.if (. - gText_Rom_2E6800) > 0x5
	.error "gText_Rom_2E6800 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6800) < 0x5
	.space 0x5 - (. - gText_Rom_2E6800)
	.endif
	.incbin "baserom.gba", 0x2e6805, 0x1b

	@ src/data/trainers.h:19172 trainers_line_19172
	.globl gText_Rom_2E6820
gText_Rom_2E6820: @ 0x082E6820
	.string "キヌエ$"
	.if (. - gText_Rom_2E6820) > 0x4
	.error "gText_Rom_2E6820 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6820) < 0x4
	.space 0x4 - (. - gText_Rom_2E6820)
	.endif
	.incbin "baserom.gba", 0x2e6824, 0x1c

	@ src/data/trainers.h:19208 trainers_line_19208
	.globl gText_Rom_2E6840
gText_Rom_2E6840: @ 0x082E6840
	.string "ユヅル$"
	.if (. - gText_Rom_2E6840) > 0x4
	.error "gText_Rom_2E6840 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6840) < 0x4
	.space 0x4 - (. - gText_Rom_2E6840)
	.endif
	.incbin "baserom.gba", 0x2e6844, 0x1c

	@ src/data/trainers.h:19256 trainers_line_19256
	.globl gText_Rom_2E6860
gText_Rom_2E6860: @ 0x082E6860
	.string "ミカコ$"
	.if (. - gText_Rom_2E6860) > 0x4
	.error "gText_Rom_2E6860 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6860) < 0x4
	.space 0x4 - (. - gText_Rom_2E6860)
	.endif
	.incbin "baserom.gba", 0x2e6864, 0x1c

	@ src/data/trainers.h:19292 trainers_line_19292 (+4 aliases)
	.globl gText_Rom_2E6880
gText_Rom_2E6880: @ 0x082E6880
	.string "ナツミ$"
	.if (. - gText_Rom_2E6880) > 0x4
	.error "gText_Rom_2E6880 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6880) < 0x4
	.space 0x4 - (. - gText_Rom_2E6880)
	.endif
	.incbin "baserom.gba", 0x2e6884, 0x1c

	@ src/data/trainers.h:19328 trainers_line_19328
	.globl gText_Rom_2E68A0
gText_Rom_2E68A0: @ 0x082E68A0
	.string "チサト$"
	.if (. - gText_Rom_2E68A0) > 0x4
	.error "gText_Rom_2E68A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E68A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E68A0)
	.endif
	.incbin "baserom.gba", 0x2e68a4, 0x1c

	@ src/data/trainers.h:19292 trainers_line_19292 (+4 aliases)
	.globl gText_Rom_2E68C0
gText_Rom_2E68C0: @ 0x082E68C0
	.string "ナツミ$"
	.if (. - gText_Rom_2E68C0) > 0x4
	.error "gText_Rom_2E68C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E68C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E68C0)
	.endif
	.incbin "baserom.gba", 0x2e68c4, 0x1c

	@ src/data/trainers.h:19292 trainers_line_19292 (+4 aliases)
	.globl gText_Rom_2E68E0
gText_Rom_2E68E0: @ 0x082E68E0
	.string "ナツミ$"
	.if (. - gText_Rom_2E68E0) > 0x4
	.error "gText_Rom_2E68E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E68E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E68E0)
	.endif
	.incbin "baserom.gba", 0x2e68e4, 0x1c

	@ src/data/trainers.h:19292 trainers_line_19292 (+4 aliases)
	.globl gText_Rom_2E6900
gText_Rom_2E6900: @ 0x082E6900
	.string "ナツミ$"
	.if (. - gText_Rom_2E6900) > 0x4
	.error "gText_Rom_2E6900 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6900) < 0x4
	.space 0x4 - (. - gText_Rom_2E6900)
	.endif
	.incbin "baserom.gba", 0x2e6904, 0x1c

	@ src/data/trainers.h:19292 trainers_line_19292 (+4 aliases)
	.globl gText_Rom_2E6920
gText_Rom_2E6920: @ 0x082E6920
	.string "ナツミ$"
	.if (. - gText_Rom_2E6920) > 0x4
	.error "gText_Rom_2E6920 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6920) < 0x4
	.space 0x4 - (. - gText_Rom_2E6920)
	.endif
	.incbin "baserom.gba", 0x2e6924, 0x1c

	@ src/data/trainers.h:19520 trainers_line_19520 (+4 aliases)
	.globl gText_Rom_2E6940
gText_Rom_2E6940: @ 0x082E6940
	.string "タケル$"
	.if (. - gText_Rom_2E6940) > 0x4
	.error "gText_Rom_2E6940 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6940) < 0x4
	.space 0x4 - (. - gText_Rom_2E6940)
	.endif
	.incbin "baserom.gba", 0x2e6944, 0x1c

	@ src/data/trainers.h:19520 trainers_line_19520 (+4 aliases)
	.globl gText_Rom_2E6960
gText_Rom_2E6960: @ 0x082E6960
	.string "タケル$"
	.if (. - gText_Rom_2E6960) > 0x4
	.error "gText_Rom_2E6960 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6960) < 0x4
	.space 0x4 - (. - gText_Rom_2E6960)
	.endif
	.incbin "baserom.gba", 0x2e6964, 0x1c

	@ src/data/trainers.h:19520 trainers_line_19520 (+4 aliases)
	.globl gText_Rom_2E6980
gText_Rom_2E6980: @ 0x082E6980
	.string "タケル$"
	.if (. - gText_Rom_2E6980) > 0x4
	.error "gText_Rom_2E6980 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6980) < 0x4
	.space 0x4 - (. - gText_Rom_2E6980)
	.endif
	.incbin "baserom.gba", 0x2e6984, 0x1c

	@ src/data/trainers.h:19520 trainers_line_19520 (+4 aliases)
	.globl gText_Rom_2E69A0
gText_Rom_2E69A0: @ 0x082E69A0
	.string "タケル$"
	.if (. - gText_Rom_2E69A0) > 0x4
	.error "gText_Rom_2E69A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E69A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E69A0)
	.endif
	.incbin "baserom.gba", 0x2e69a4, 0x1c

	@ src/data/trainers.h:19520 trainers_line_19520 (+4 aliases)
	.globl gText_Rom_2E69C0
gText_Rom_2E69C0: @ 0x082E69C0
	.string "タケル$"
	.if (. - gText_Rom_2E69C0) > 0x4
	.error "gText_Rom_2E69C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E69C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E69C0)
	.endif
	.incbin "baserom.gba", 0x2e69c4, 0x1c

	@ src/data/trainers.h:19786 trainers_line_19786
	.globl gText_Rom_2E69E0
gText_Rom_2E69E0: @ 0x082E69E0
	.string "タツマ$"
	.if (. - gText_Rom_2E69E0) > 0x4
	.error "gText_Rom_2E69E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E69E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E69E0)
	.endif
	.incbin "baserom.gba", 0x2e69e4, 0x1c

	@ src/data/trainers.h:19829 trainers_line_19829
	.globl gText_Rom_2E6A00
gText_Rom_2E6A00: @ 0x082E6A00
	.string "キヨヒコ$"
	.if (. - gText_Rom_2E6A00) > 0x5
	.error "gText_Rom_2E6A00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6A00) < 0x5
	.space 0x5 - (. - gText_Rom_2E6A00)
	.endif
	.incbin "baserom.gba", 0x2e6a05, 0x1b

	@ src/data/trainers.h:19865 trainers_line_19865
	.globl gText_Rom_2E6A20
gText_Rom_2E6A20: @ 0x082E6A20
	.string "タクミ$"
	.if (. - gText_Rom_2E6A20) > 0x4
	.error "gText_Rom_2E6A20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6A20) < 0x4
	.space 0x4 - (. - gText_Rom_2E6A20)
	.endif
	.incbin "baserom.gba", 0x2e6a24, 0x1c

	@ src/data/trainers.h:19913 trainers_line_19913
	.globl gText_Rom_2E6A40
gText_Rom_2E6A40: @ 0x082E6A40
	.string "シュンペイ$"
	.if (. - gText_Rom_2E6A40) > 0x6
	.error "gText_Rom_2E6A40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6A40) < 0x6
	.space 0x6 - (. - gText_Rom_2E6A40)
	.endif
	.incbin "baserom.gba", 0x2e6a46, 0x1a

	@ src/data/trainers.h:19949 trainers_line_19949
	.globl gText_Rom_2E6A60
gText_Rom_2E6A60: @ 0x082E6A60
	.string "エイジ$"
	.if (. - gText_Rom_2E6A60) > 0x4
	.error "gText_Rom_2E6A60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6A60) < 0x4
	.space 0x4 - (. - gText_Rom_2E6A60)
	.endif
	.incbin "baserom.gba", 0x2e6a64, 0x1c

	@ src/data/trainers.h:20009 trainers_line_20009
	.globl gText_Rom_2E6A80
gText_Rom_2E6A80: @ 0x082E6A80
	.string "ミツアキ$"
	.if (. - gText_Rom_2E6A80) > 0x5
	.error "gText_Rom_2E6A80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6A80) < 0x5
	.space 0x5 - (. - gText_Rom_2E6A80)
	.endif
	.incbin "baserom.gba", 0x2e6a85, 0x1b

	@ src/data/trainers.h:20045 trainers_line_20045
	.globl gText_Rom_2E6AA0
gText_Rom_2E6AA0: @ 0x082E6AA0
	.string "ナオヒロ$"
	.if (. - gText_Rom_2E6AA0) > 0x5
	.error "gText_Rom_2E6AA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6AA0) < 0x5
	.space 0x5 - (. - gText_Rom_2E6AA0)
	.endif
	.incbin "baserom.gba", 0x2e6aa5, 0x1b

	@ src/data/trainers.h:20093 trainers_line_20093
	.globl gText_Rom_2E6AC0
gText_Rom_2E6AC0: @ 0x082E6AC0
	.string "ジョウタ$"
	.if (. - gText_Rom_2E6AC0) > 0x5
	.error "gText_Rom_2E6AC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6AC0) < 0x5
	.space 0x5 - (. - gText_Rom_2E6AC0)
	.endif
	.incbin "baserom.gba", 0x2e6ac5, 0x1b

	@ src/data/trainers.h:20141 trainers_line_20141
	.globl gText_Rom_2E6AE0
gText_Rom_2E6AE0: @ 0x082E6AE0
	.string "モリカズ$"
	.if (. - gText_Rom_2E6AE0) > 0x5
	.error "gText_Rom_2E6AE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6AE0) < 0x5
	.space 0x5 - (. - gText_Rom_2E6AE0)
	.endif
	.incbin "baserom.gba", 0x2e6ae5, 0x1b

	@ src/data/trainers.h:20189 trainers_line_20189 (+4 aliases)
	.globl gText_Rom_2E6B00
gText_Rom_2E6B00: @ 0x082E6B00
	.string "ツバサ$"
	.if (. - gText_Rom_2E6B00) > 0x4
	.error "gText_Rom_2E6B00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6B00) < 0x4
	.space 0x4 - (. - gText_Rom_2E6B00)
	.endif
	.incbin "baserom.gba", 0x2e6b04, 0x1c

	@ src/data/trainers.h:20225 trainers_line_20225
	.globl gText_Rom_2E6B20
gText_Rom_2E6B20: @ 0x082E6B20
	.string "アキマサ$"
	.if (. - gText_Rom_2E6B20) > 0x5
	.error "gText_Rom_2E6B20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6B20) < 0x5
	.space 0x5 - (. - gText_Rom_2E6B20)
	.endif
	.incbin "baserom.gba", 0x2e6b25, 0x1b

	@ src/data/trainers.h:20285 trainers_line_20285
	.globl gText_Rom_2E6B40
gText_Rom_2E6B40: @ 0x082E6B40
	.string "タイシ$"
	.if (. - gText_Rom_2E6B40) > 0x4
	.error "gText_Rom_2E6B40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6B40) < 0x4
	.space 0x4 - (. - gText_Rom_2E6B40)
	.endif
	.incbin "baserom.gba", 0x2e6b44, 0x1c

	@ src/data/trainers.h:20189 trainers_line_20189 (+4 aliases)
	.globl gText_Rom_2E6B60
gText_Rom_2E6B60: @ 0x082E6B60
	.string "ツバサ$"
	.if (. - gText_Rom_2E6B60) > 0x4
	.error "gText_Rom_2E6B60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6B60) < 0x4
	.space 0x4 - (. - gText_Rom_2E6B60)
	.endif
	.incbin "baserom.gba", 0x2e6b64, 0x1c

	@ src/data/trainers.h:20189 trainers_line_20189 (+4 aliases)
	.globl gText_Rom_2E6B80
gText_Rom_2E6B80: @ 0x082E6B80
	.string "ツバサ$"
	.if (. - gText_Rom_2E6B80) > 0x4
	.error "gText_Rom_2E6B80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6B80) < 0x4
	.space 0x4 - (. - gText_Rom_2E6B80)
	.endif
	.incbin "baserom.gba", 0x2e6b84, 0x1c

	@ src/data/trainers.h:20189 trainers_line_20189 (+4 aliases)
	.globl gText_Rom_2E6BA0
gText_Rom_2E6BA0: @ 0x082E6BA0
	.string "ツバサ$"
	.if (. - gText_Rom_2E6BA0) > 0x4
	.error "gText_Rom_2E6BA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6BA0) < 0x4
	.space 0x4 - (. - gText_Rom_2E6BA0)
	.endif
	.incbin "baserom.gba", 0x2e6ba4, 0x1c

	@ src/data/trainers.h:20189 trainers_line_20189 (+4 aliases)
	.globl gText_Rom_2E6BC0
gText_Rom_2E6BC0: @ 0x082E6BC0
	.string "ツバサ$"
	.if (. - gText_Rom_2E6BC0) > 0x4
	.error "gText_Rom_2E6BC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6BC0) < 0x4
	.space 0x4 - (. - gText_Rom_2E6BC0)
	.endif
	.incbin "baserom.gba", 0x2e6bc4, 0x1c

	@ src/data/trainers.h:20525 trainers_line_20525
	.globl gText_Rom_2E6BE0
gText_Rom_2E6BE0: @ 0x082E6BE0
	.string "マサツグ$"
	.if (. - gText_Rom_2E6BE0) > 0x5
	.error "gText_Rom_2E6BE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6BE0) < 0x5
	.space 0x5 - (. - gText_Rom_2E6BE0)
	.endif
	.incbin "baserom.gba", 0x2e6be5, 0x1b

	@ src/data/trainers.h:20573 trainers_line_20573
	.globl gText_Rom_2E6C00
gText_Rom_2E6C00: @ 0x082E6C00
	.string "トシアキ$"
	.if (. - gText_Rom_2E6C00) > 0x5
	.error "gText_Rom_2E6C00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6C00) < 0x5
	.space 0x5 - (. - gText_Rom_2E6C00)
	.endif
	.incbin "baserom.gba", 0x2e6c05, 0x1b

	@ src/data/trainers.h:20609 trainers_line_20609
	.globl gText_Rom_2E6C20
gText_Rom_2E6C20: @ 0x082E6C20
	.string "ヒロノブ$"
	.if (. - gText_Rom_2E6C20) > 0x5
	.error "gText_Rom_2E6C20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6C20) < 0x5
	.space 0x5 - (. - gText_Rom_2E6C20)
	.endif
	.incbin "baserom.gba", 0x2e6c25, 0x1b

	@ src/data/trainers.h:20645 trainers_line_20645
	.globl gText_Rom_2E6C40
gText_Rom_2E6C40: @ 0x082E6C40
	.string "シロウ$"
	.if (. - gText_Rom_2E6C40) > 0x4
	.error "gText_Rom_2E6C40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6C40) < 0x4
	.space 0x4 - (. - gText_Rom_2E6C40)
	.endif
	.incbin "baserom.gba", 0x2e6c44, 0x1c

	@ src/data/trainers.h:20693 trainers_line_20693
	.globl gText_Rom_2E6C60
gText_Rom_2E6C60: @ 0x082E6C60
	.string "ココロ$"
	.if (. - gText_Rom_2E6C60) > 0x4
	.error "gText_Rom_2E6C60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6C60) < 0x4
	.space 0x4 - (. - gText_Rom_2E6C60)
	.endif
	.incbin "baserom.gba", 0x2e6c64, 0x1c

	@ src/data/trainers.h:20751 trainers_line_20751
	.globl gText_Rom_2E6C80
gText_Rom_2E6C80: @ 0x082E6C80
	.string "マミ$"
	.if (. - gText_Rom_2E6C80) > 0x3
	.error "gText_Rom_2E6C80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6C80) < 0x3
	.space 0x3 - (. - gText_Rom_2E6C80)
	.endif
	.incbin "baserom.gba", 0x2e6c83, 0x1d

	@ src/data/trainers.h:20785 trainers_line_20785 (+4 aliases)
	.globl gText_Rom_2E6CA0
gText_Rom_2E6CA0: @ 0x082E6CA0
	.string "キンジ$"
	.if (. - gText_Rom_2E6CA0) > 0x4
	.error "gText_Rom_2E6CA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6CA0) < 0x4
	.space 0x4 - (. - gText_Rom_2E6CA0)
	.endif
	.incbin "baserom.gba", 0x2e6ca4, 0x1c

	@ src/data/trainers.h:20864 trainers_line_20864
	.globl gText_Rom_2E6CC0
gText_Rom_2E6CC0: @ 0x082E6CC0
	.string "ムラマサ$"
	.if (. - gText_Rom_2E6CC0) > 0x5
	.error "gText_Rom_2E6CC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6CC0) < 0x5
	.space 0x5 - (. - gText_Rom_2E6CC0)
	.endif
	.incbin "baserom.gba", 0x2e6cc5, 0x1b

	@ src/data/trainers.h:20785 trainers_line_20785 (+4 aliases)
	.globl gText_Rom_2E6CE0
gText_Rom_2E6CE0: @ 0x082E6CE0
	.string "キンジ$"
	.if (. - gText_Rom_2E6CE0) > 0x4
	.error "gText_Rom_2E6CE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6CE0) < 0x4
	.space 0x4 - (. - gText_Rom_2E6CE0)
	.endif
	.incbin "baserom.gba", 0x2e6ce4, 0x1c

	@ src/data/trainers.h:20785 trainers_line_20785 (+4 aliases)
	.globl gText_Rom_2E6D00
gText_Rom_2E6D00: @ 0x082E6D00
	.string "キンジ$"
	.if (. - gText_Rom_2E6D00) > 0x4
	.error "gText_Rom_2E6D00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6D00) < 0x4
	.space 0x4 - (. - gText_Rom_2E6D00)
	.endif
	.incbin "baserom.gba", 0x2e6d04, 0x1c

	@ src/data/trainers.h:20785 trainers_line_20785 (+4 aliases)
	.globl gText_Rom_2E6D20
gText_Rom_2E6D20: @ 0x082E6D20
	.string "キンジ$"
	.if (. - gText_Rom_2E6D20) > 0x4
	.error "gText_Rom_2E6D20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6D20) < 0x4
	.space 0x4 - (. - gText_Rom_2E6D20)
	.endif
	.incbin "baserom.gba", 0x2e6d24, 0x1c

	@ src/data/trainers.h:20785 trainers_line_20785 (+4 aliases)
	.globl gText_Rom_2E6D40
gText_Rom_2E6D40: @ 0x082E6D40
	.string "キンジ$"
	.if (. - gText_Rom_2E6D40) > 0x4
	.error "gText_Rom_2E6D40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6D40) < 0x4
	.space 0x4 - (. - gText_Rom_2E6D40)
	.endif
	.incbin "baserom.gba", 0x2e6d44, 0x1c

	@ src/data/trainers.h:7743 trainers_line_7743 (+1 aliases)
	.globl gText_Rom_2E6D60
gText_Rom_2E6D60: @ 0x082E6D60
	.string "シノブ$"
	.if (. - gText_Rom_2E6D60) > 0x4
	.error "gText_Rom_2E6D60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6D60) < 0x4
	.space 0x4 - (. - gText_Rom_2E6D60)
	.endif
	.incbin "baserom.gba", 0x2e6d64, 0x1c

	@ src/data/trainers.h:21326 trainers_line_21326
	.globl gText_Rom_2E6D80
gText_Rom_2E6D80: @ 0x082E6D80
	.string "ミサト$"
	.if (. - gText_Rom_2E6D80) > 0x4
	.error "gText_Rom_2E6D80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6D80) < 0x4
	.space 0x4 - (. - gText_Rom_2E6D80)
	.endif
	.incbin "baserom.gba", 0x2e6d84, 0x1c

	@ src/data/trainers.h:21362 trainers_line_21362 (+4 aliases)
	.globl gText_Rom_2E6DA0
gText_Rom_2E6DA0: @ 0x082E6DA0
	.string "ユリカ$"
	.if (. - gText_Rom_2E6DA0) > 0x4
	.error "gText_Rom_2E6DA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6DA0) < 0x4
	.space 0x4 - (. - gText_Rom_2E6DA0)
	.endif
	.incbin "baserom.gba", 0x2e6da4, 0x1c

	@ src/data/trainers.h:21410 trainers_line_21410
	.globl gText_Rom_2E6DC0
gText_Rom_2E6DC0: @ 0x082E6DC0
	.string "フウカ$"
	.if (. - gText_Rom_2E6DC0) > 0x4
	.error "gText_Rom_2E6DC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6DC0) < 0x4
	.space 0x4 - (. - gText_Rom_2E6DC0)
	.endif
	.incbin "baserom.gba", 0x2e6dc4, 0x1c

	@ src/data/trainers.h:21446 trainers_line_21446
	.globl gText_Rom_2E6DE0
gText_Rom_2E6DE0: @ 0x082E6DE0
	.string "ヒイナ$"
	.if (. - gText_Rom_2E6DE0) > 0x4
	.error "gText_Rom_2E6DE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6DE0) < 0x4
	.space 0x4 - (. - gText_Rom_2E6DE0)
	.endif
	.incbin "baserom.gba", 0x2e6de4, 0x1c

	@ src/data/trainers.h:21362 trainers_line_21362 (+4 aliases)
	.globl gText_Rom_2E6E00
gText_Rom_2E6E00: @ 0x082E6E00
	.string "ユリカ$"
	.if (. - gText_Rom_2E6E00) > 0x4
	.error "gText_Rom_2E6E00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6E00) < 0x4
	.space 0x4 - (. - gText_Rom_2E6E00)
	.endif
	.incbin "baserom.gba", 0x2e6e04, 0x1c

	@ src/data/trainers.h:21362 trainers_line_21362 (+4 aliases)
	.globl gText_Rom_2E6E20
gText_Rom_2E6E20: @ 0x082E6E20
	.string "ユリカ$"
	.if (. - gText_Rom_2E6E20) > 0x4
	.error "gText_Rom_2E6E20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6E20) < 0x4
	.space 0x4 - (. - gText_Rom_2E6E20)
	.endif
	.incbin "baserom.gba", 0x2e6e24, 0x1c

	@ src/data/trainers.h:21362 trainers_line_21362 (+4 aliases)
	.globl gText_Rom_2E6E40
gText_Rom_2E6E40: @ 0x082E6E40
	.string "ユリカ$"
	.if (. - gText_Rom_2E6E40) > 0x4
	.error "gText_Rom_2E6E40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6E40) < 0x4
	.space 0x4 - (. - gText_Rom_2E6E40)
	.endif
	.incbin "baserom.gba", 0x2e6e44, 0x1c

	@ src/data/trainers.h:21362 trainers_line_21362 (+4 aliases)
	.globl gText_Rom_2E6E60
gText_Rom_2E6E60: @ 0x082E6E60
	.string "ユリカ$"
	.if (. - gText_Rom_2E6E60) > 0x4
	.error "gText_Rom_2E6E60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6E60) < 0x4
	.space 0x4 - (. - gText_Rom_2E6E60)
	.endif
	.incbin "baserom.gba", 0x2e6e64, 0x1c

	@ src/data/trainers.h:21674 trainers_line_21674 (+4 aliases)
	.globl gText_Rom_2E6E80
gText_Rom_2E6E80: @ 0x082E6E80
	.string "マドカ$"
	.if (. - gText_Rom_2E6E80) > 0x4
	.error "gText_Rom_2E6E80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6E80) < 0x4
	.space 0x4 - (. - gText_Rom_2E6E80)
	.endif
	.incbin "baserom.gba", 0x2e6e84, 0x3c

	@ src/data/trainers.h:21765 trainers_line_21765
	.globl gText_Rom_2E6EC0
gText_Rom_2E6EC0: @ 0x082E6EC0
	.string "ウキエ$"
	.if (. - gText_Rom_2E6EC0) > 0x4
	.error "gText_Rom_2E6EC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6EC0) < 0x4
	.space 0x4 - (. - gText_Rom_2E6EC0)
	.endif
	.incbin "baserom.gba", 0x2e6ec4, 0x1c

	@ src/data/trainers.h:21674 trainers_line_21674 (+4 aliases)
	.globl gText_Rom_2E6EE0
gText_Rom_2E6EE0: @ 0x082E6EE0
	.string "マドカ$"
	.if (. - gText_Rom_2E6EE0) > 0x4
	.error "gText_Rom_2E6EE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6EE0) < 0x4
	.space 0x4 - (. - gText_Rom_2E6EE0)
	.endif
	.incbin "baserom.gba", 0x2e6ee4, 0x1c

	@ src/data/trainers.h:21674 trainers_line_21674 (+4 aliases)
	.globl gText_Rom_2E6F00
gText_Rom_2E6F00: @ 0x082E6F00
	.string "マドカ$"
	.if (. - gText_Rom_2E6F00) > 0x4
	.error "gText_Rom_2E6F00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6F00) < 0x4
	.space 0x4 - (. - gText_Rom_2E6F00)
	.endif
	.incbin "baserom.gba", 0x2e6f04, 0x1c

	@ src/data/trainers.h:21674 trainers_line_21674 (+4 aliases)
	.globl gText_Rom_2E6F20
gText_Rom_2E6F20: @ 0x082E6F20
	.string "マドカ$"
	.if (. - gText_Rom_2E6F20) > 0x4
	.error "gText_Rom_2E6F20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6F20) < 0x4
	.space 0x4 - (. - gText_Rom_2E6F20)
	.endif
	.incbin "baserom.gba", 0x2e6f24, 0x1c

	@ src/data/trainers.h:21674 trainers_line_21674 (+4 aliases)
	.globl gText_Rom_2E6F40
gText_Rom_2E6F40: @ 0x082E6F40
	.string "マドカ$"
	.if (. - gText_Rom_2E6F40) > 0x4
	.error "gText_Rom_2E6F40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6F40) < 0x4
	.space 0x4 - (. - gText_Rom_2E6F40)
	.endif
	.incbin "baserom.gba", 0x2e6f44, 0x1c

	@ src/data/trainers.h:22018 trainers_line_22018
	.globl gText_Rom_2E6F60
gText_Rom_2E6F60: @ 0x082E6F60
	.string "ナツキ$"
	.if (. - gText_Rom_2E6F60) > 0x4
	.error "gText_Rom_2E6F60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6F60) < 0x4
	.space 0x4 - (. - gText_Rom_2E6F60)
	.endif
	.incbin "baserom.gba", 0x2e6f64, 0x1c

	@ src/data/trainers.h:22066 trainers_line_22066
	.globl gText_Rom_2E6F80
gText_Rom_2E6F80: @ 0x082E6F80
	.string "マユカ$"
	.if (. - gText_Rom_2E6F80) > 0x4
	.error "gText_Rom_2E6F80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6F80) < 0x4
	.space 0x4 - (. - gText_Rom_2E6F80)
	.endif
	.incbin "baserom.gba", 0x2e6f84, 0x1c

	@ src/data/trainers.h:22102 trainers_line_22102
	.globl gText_Rom_2E6FA0
gText_Rom_2E6FA0: @ 0x082E6FA0
	.string "ミズハ$"
	.if (. - gText_Rom_2E6FA0) > 0x4
	.error "gText_Rom_2E6FA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6FA0) < 0x4
	.space 0x4 - (. - gText_Rom_2E6FA0)
	.endif
	.incbin "baserom.gba", 0x2e6fa4, 0x1c

	@ src/data/trainers.h:22138 trainers_line_22138
	.globl gText_Rom_2E6FC0
gText_Rom_2E6FC0: @ 0x082E6FC0
	.string "マサミ$"
	.if (. - gText_Rom_2E6FC0) > 0x4
	.error "gText_Rom_2E6FC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6FC0) < 0x4
	.space 0x4 - (. - gText_Rom_2E6FC0)
	.endif
	.incbin "baserom.gba", 0x2e6fc4, 0x1c

	@ src/data/trainers.h:22186 trainers_line_22186
	.globl gText_Rom_2E6FE0
gText_Rom_2E6FE0: @ 0x082E6FE0
	.string "ノリカ$"
	.if (. - gText_Rom_2E6FE0) > 0x4
	.error "gText_Rom_2E6FE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E6FE0) < 0x4
	.space 0x4 - (. - gText_Rom_2E6FE0)
	.endif
	.incbin "baserom.gba", 0x2e6fe4, 0x1c

	@ src/data/trainers.h:22222 trainers_line_22222
	.globl gText_Rom_2E7000
gText_Rom_2E7000: @ 0x082E7000
	.string "チヒロ$"
	.if (. - gText_Rom_2E7000) > 0x4
	.error "gText_Rom_2E7000 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7000) < 0x4
	.space 0x4 - (. - gText_Rom_2E7000)
	.endif
	.incbin "baserom.gba", 0x2e7004, 0x1c

	@ src/data/trainers.h:22270 trainers_line_22270
	.globl gText_Rom_2E7020
gText_Rom_2E7020: @ 0x082E7020
	.string "クミコ$"
	.if (. - gText_Rom_2E7020) > 0x4
	.error "gText_Rom_2E7020 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7020) < 0x4
	.space 0x4 - (. - gText_Rom_2E7020)
	.endif
	.incbin "baserom.gba", 0x2e7024, 0x1c

	@ src/data/trainers.h:22306 trainers_line_22306
	.globl gText_Rom_2E7040
gText_Rom_2E7040: @ 0x082E7040
	.string "エツコ$"
	.if (. - gText_Rom_2E7040) > 0x4
	.error "gText_Rom_2E7040 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7040) < 0x4
	.space 0x4 - (. - gText_Rom_2E7040)
	.endif
	.incbin "baserom.gba", 0x2e7044, 0x1c

	@ src/data/trainers.h:22366 trainers_line_22366 (+4 aliases)
	.globl gText_Rom_2E7060
gText_Rom_2E7060: @ 0x082E7060
	.string "ナギサ$"
	.if (. - gText_Rom_2E7060) > 0x4
	.error "gText_Rom_2E7060 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7060) < 0x4
	.space 0x4 - (. - gText_Rom_2E7060)
	.endif
	.incbin "baserom.gba", 0x2e7064, 0x1c

	@ src/data/trainers.h:22402 trainers_line_22402
	.globl gText_Rom_2E7080
gText_Rom_2E7080: @ 0x082E7080
	.string "アキエ$"
	.if (. - gText_Rom_2E7080) > 0x4
	.error "gText_Rom_2E7080 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7080) < 0x4
	.space 0x4 - (. - gText_Rom_2E7080)
	.endif
	.incbin "baserom.gba", 0x2e7084, 0x1c

	@ src/data/trainers.h:22438 trainers_line_22438
	.globl gText_Rom_2E70A0
gText_Rom_2E70A0: @ 0x082E70A0
	.string "ケイコ$"
	.if (. - gText_Rom_2E70A0) > 0x4
	.error "gText_Rom_2E70A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E70A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E70A0)
	.endif
	.incbin "baserom.gba", 0x2e70a4, 0x1c

	@ src/data/trainers.h:22474 trainers_line_22474
	.globl gText_Rom_2E70C0
gText_Rom_2E70C0: @ 0x082E70C0
	.string "サイカ$"
	.if (. - gText_Rom_2E70C0) > 0x4
	.error "gText_Rom_2E70C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E70C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E70C0)
	.endif
	.incbin "baserom.gba", 0x2e70c4, 0x1c

	@ src/data/trainers.h:22510 trainers_line_22510
	.globl gText_Rom_2E70E0
gText_Rom_2E70E0: @ 0x082E70E0
	.string "シズエ$"
	.if (. - gText_Rom_2E70E0) > 0x4
	.error "gText_Rom_2E70E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E70E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E70E0)
	.endif
	.incbin "baserom.gba", 0x2e70e4, 0x1c

	@ src/data/trainers.h:22558 trainers_line_22558
	.globl gText_Rom_2E7100
gText_Rom_2E7100: @ 0x082E7100
	.string "テルミ$"
	.if (. - gText_Rom_2E7100) > 0x4
	.error "gText_Rom_2E7100 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7100) < 0x4
	.space 0x4 - (. - gText_Rom_2E7100)
	.endif
	.incbin "baserom.gba", 0x2e7104, 0x1c

	@ src/data/trainers.h:22594 trainers_line_22594
	.globl gText_Rom_2E7120
gText_Rom_2E7120: @ 0x082E7120
	.string "フミエ$"
	.if (. - gText_Rom_2E7120) > 0x4
	.error "gText_Rom_2E7120 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7120) < 0x4
	.space 0x4 - (. - gText_Rom_2E7120)
	.endif
	.incbin "baserom.gba", 0x2e7124, 0x1c

	@ src/data/trainers.h:22642 trainers_line_22642
	.globl gText_Rom_2E7140
gText_Rom_2E7140: @ 0x082E7140
	.string "ミサキ$"
	.if (. - gText_Rom_2E7140) > 0x4
	.error "gText_Rom_2E7140 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7140) < 0x4
	.space 0x4 - (. - gText_Rom_2E7140)
	.endif
	.incbin "baserom.gba", 0x2e7144, 0x1c

	@ src/data/trainers.h:22678 trainers_line_22678
	.globl gText_Rom_2E7160
gText_Rom_2E7160: @ 0x082E7160
	.string "マリエ$"
	.if (. - gText_Rom_2E7160) > 0x4
	.error "gText_Rom_2E7160 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7160) < 0x4
	.space 0x4 - (. - gText_Rom_2E7160)
	.endif
	.incbin "baserom.gba", 0x2e7164, 0x1c

	@ src/data/trainers.h:22714 trainers_line_22714
	.globl gText_Rom_2E7180
gText_Rom_2E7180: @ 0x082E7180
	.string "ミユキ$"
	.if (. - gText_Rom_2E7180) > 0x4
	.error "gText_Rom_2E7180 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7180) < 0x4
	.space 0x4 - (. - gText_Rom_2E7180)
	.endif
	.incbin "baserom.gba", 0x2e7184, 0x1c

	@ src/data/trainers.h:22750 trainers_line_22750
	.globl gText_Rom_2E71A0
gText_Rom_2E71A0: @ 0x082E71A0
	.string "イクコ$"
	.if (. - gText_Rom_2E71A0) > 0x4
	.error "gText_Rom_2E71A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E71A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E71A0)
	.endif
	.incbin "baserom.gba", 0x2e71a4, 0x1c

	@ src/data/trainers.h:22798 trainers_line_22798
	.globl gText_Rom_2E71C0
gText_Rom_2E71C0: @ 0x082E71C0
	.string "リカコ$"
	.if (. - gText_Rom_2E71C0) > 0x4
	.error "gText_Rom_2E71C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E71C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E71C0)
	.endif
	.incbin "baserom.gba", 0x2e71c4, 0x1c

	@ src/data/trainers.h:22834 trainers_line_22834
	.globl gText_Rom_2E71E0
gText_Rom_2E71E0: @ 0x082E71E0
	.string "ハルミ$"
	.if (. - gText_Rom_2E71E0) > 0x4
	.error "gText_Rom_2E71E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E71E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E71E0)
	.endif
	.incbin "baserom.gba", 0x2e71e4, 0x1c

	@ src/data/trainers.h:22882 trainers_line_22882
	.globl gText_Rom_2E7200
gText_Rom_2E7200: @ 0x082E7200
	.string "タカコ$"
	.if (. - gText_Rom_2E7200) > 0x4
	.error "gText_Rom_2E7200 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7200) < 0x4
	.space 0x4 - (. - gText_Rom_2E7200)
	.endif
	.incbin "baserom.gba", 0x2e7204, 0x1c

	@ src/data/trainers.h:22930 trainers_line_22930
	.globl gText_Rom_2E7220
gText_Rom_2E7220: @ 0x082E7220
	.string "ソノコ$"
	.if (. - gText_Rom_2E7220) > 0x4
	.error "gText_Rom_2E7220 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7220) < 0x4
	.space 0x4 - (. - gText_Rom_2E7220)
	.endif
	.incbin "baserom.gba", 0x2e7224, 0x1c

	@ src/data/trainers.h:22978 trainers_line_22978
	.globl gText_Rom_2E7240
gText_Rom_2E7240: @ 0x082E7240
	.string "クニコ$"
	.if (. - gText_Rom_2E7240) > 0x4
	.error "gText_Rom_2E7240 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7240) < 0x4
	.space 0x4 - (. - gText_Rom_2E7240)
	.endif
	.incbin "baserom.gba", 0x2e7244, 0x1c

	@ src/data/trainers.h:22366 trainers_line_22366 (+4 aliases)
	.globl gText_Rom_2E7260
gText_Rom_2E7260: @ 0x082E7260
	.string "ナギサ$"
	.if (. - gText_Rom_2E7260) > 0x4
	.error "gText_Rom_2E7260 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7260) < 0x4
	.space 0x4 - (. - gText_Rom_2E7260)
	.endif
	.incbin "baserom.gba", 0x2e7264, 0x1c

	@ src/data/trainers.h:22366 trainers_line_22366 (+4 aliases)
	.globl gText_Rom_2E7280
gText_Rom_2E7280: @ 0x082E7280
	.string "ナギサ$"
	.if (. - gText_Rom_2E7280) > 0x4
	.error "gText_Rom_2E7280 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7280) < 0x4
	.space 0x4 - (. - gText_Rom_2E7280)
	.endif
	.incbin "baserom.gba", 0x2e7284, 0x1c

	@ src/data/trainers.h:22366 trainers_line_22366 (+4 aliases)
	.globl gText_Rom_2E72A0
gText_Rom_2E72A0: @ 0x082E72A0
	.string "ナギサ$"
	.if (. - gText_Rom_2E72A0) > 0x4
	.error "gText_Rom_2E72A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E72A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E72A0)
	.endif
	.incbin "baserom.gba", 0x2e72a4, 0x1c

	@ src/data/trainers.h:22366 trainers_line_22366 (+4 aliases)
	.globl gText_Rom_2E72C0
gText_Rom_2E72C0: @ 0x082E72C0
	.string "ナギサ$"
	.if (. - gText_Rom_2E72C0) > 0x4
	.error "gText_Rom_2E72C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E72C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E72C0)
	.endif
	.incbin "baserom.gba", 0x2e72c4, 0x1c

	@ src/data/trainers.h:23194 trainers_line_23194
	.globl gText_Rom_2E72E0
gText_Rom_2E72E0: @ 0x082E72E0
	.string "チカコ$"
	.if (. - gText_Rom_2E72E0) > 0x4
	.error "gText_Rom_2E72E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E72E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E72E0)
	.endif
	.incbin "baserom.gba", 0x2e72e4, 0x1c

	@ src/data/trainers.h:23256 trainers_line_23256
	.globl gText_Rom_2E7300
gText_Rom_2E7300: @ 0x082E7300
	.string "アイミ$"
	.if (. - gText_Rom_2E7300) > 0x4
	.error "gText_Rom_2E7300 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7300) < 0x4
	.space 0x4 - (. - gText_Rom_2E7300)
	.endif
	.incbin "baserom.gba", 0x2e7304, 0x1c

	@ src/data/trainers.h:23318 trainers_line_23318
	.globl gText_Rom_2E7320
gText_Rom_2E7320: @ 0x082E7320
	.string "ヒロコ$"
	.if (. - gText_Rom_2E7320) > 0x4
	.error "gText_Rom_2E7320 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7320) < 0x4
	.space 0x4 - (. - gText_Rom_2E7320)
	.endif
	.incbin "baserom.gba", 0x2e7324, 0x1c

	@ src/data/trainers.h:23366 trainers_line_23366
	.globl gText_Rom_2E7340
gText_Rom_2E7340: @ 0x082E7340
	.string "サツキ$"
	.if (. - gText_Rom_2E7340) > 0x4
	.error "gText_Rom_2E7340 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7340) < 0x4
	.space 0x4 - (. - gText_Rom_2E7340)
	.endif
	.incbin "baserom.gba", 0x2e7344, 0x1c

	@ src/data/trainers.h:23414 trainers_line_23414
	.globl gText_Rom_2E7360
gText_Rom_2E7360: @ 0x082E7360
	.string "トモコ$"
	.if (. - gText_Rom_2E7360) > 0x4
	.error "gText_Rom_2E7360 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7360) < 0x4
	.space 0x4 - (. - gText_Rom_2E7360)
	.endif
	.incbin "baserom.gba", 0x2e7364, 0x1c

	@ src/data/trainers.h:23462 trainers_line_23462 (+4 aliases)
	.globl gText_Rom_2E7380
gText_Rom_2E7380: @ 0x082E7380
	.string "コズエ$"
	.if (. - gText_Rom_2E7380) > 0x4
	.error "gText_Rom_2E7380 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7380) < 0x4
	.space 0x4 - (. - gText_Rom_2E7380)
	.endif
	.incbin "baserom.gba", 0x2e7384, 0x1c

	@ src/data/trainers.h:23522 trainers_line_23522
	.globl gText_Rom_2E73A0
gText_Rom_2E73A0: @ 0x082E73A0
	.string "ヨシキヨ$"
	.if (. - gText_Rom_2E73A0) > 0x5
	.error "gText_Rom_2E73A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E73A0) < 0x5
	.space 0x5 - (. - gText_Rom_2E73A0)
	.endif
	.incbin "baserom.gba", 0x2e73a5, 0x1b

	@ src/data/trainers.h:23565 trainers_line_23565
	.globl gText_Rom_2E73C0
gText_Rom_2E73C0: @ 0x082E73C0
	.string "ミズキ$"
	.if (. - gText_Rom_2E73C0) > 0x4
	.error "gText_Rom_2E73C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E73C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E73C0)
	.endif
	.incbin "baserom.gba", 0x2e73c4, 0x1c

	@ src/data/trainers.h:23462 trainers_line_23462 (+4 aliases)
	.globl gText_Rom_2E73E0
gText_Rom_2E73E0: @ 0x082E73E0
	.string "コズエ$"
	.if (. - gText_Rom_2E73E0) > 0x4
	.error "gText_Rom_2E73E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E73E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E73E0)
	.endif
	.incbin "baserom.gba", 0x2e73e4, 0x1c

	@ src/data/trainers.h:23462 trainers_line_23462 (+4 aliases)
	.globl gText_Rom_2E7400
gText_Rom_2E7400: @ 0x082E7400
	.string "コズエ$"
	.if (. - gText_Rom_2E7400) > 0x4
	.error "gText_Rom_2E7400 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7400) < 0x4
	.space 0x4 - (. - gText_Rom_2E7400)
	.endif
	.incbin "baserom.gba", 0x2e7404, 0x1c

	@ src/data/trainers.h:23462 trainers_line_23462 (+4 aliases)
	.globl gText_Rom_2E7420
gText_Rom_2E7420: @ 0x082E7420
	.string "コズエ$"
	.if (. - gText_Rom_2E7420) > 0x4
	.error "gText_Rom_2E7420 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7420) < 0x4
	.space 0x4 - (. - gText_Rom_2E7420)
	.endif
	.incbin "baserom.gba", 0x2e7424, 0x1c

	@ src/data/trainers.h:23462 trainers_line_23462 (+4 aliases)
	.globl gText_Rom_2E7440
gText_Rom_2E7440: @ 0x082E7440
	.string "コズエ$"
	.if (. - gText_Rom_2E7440) > 0x4
	.error "gText_Rom_2E7440 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7440) < 0x4
	.space 0x4 - (. - gText_Rom_2E7440)
	.endif
	.incbin "baserom.gba", 0x2e7444, 0x1c

	@ src/data/trainers.h:23853 trainers_line_23853 (+5 aliases)
	.globl gText_Rom_2E7460
gText_Rom_2E7460: @ 0x082E7460
	.string "クミとルミ$"
	.if (. - gText_Rom_2E7460) > 0x6
	.error "gText_Rom_2E7460 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7460) < 0x6
	.space 0x6 - (. - gText_Rom_2E7460)
	.endif
	.incbin "baserom.gba", 0x2e7466, 0x1a

	@ src/data/trainers.h:23853 trainers_line_23853 (+5 aliases)
	.globl gText_Rom_2E7480
gText_Rom_2E7480: @ 0x082E7480
	.string "クミとルミ$"
	.if (. - gText_Rom_2E7480) > 0x6
	.error "gText_Rom_2E7480 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7480) < 0x6
	.space 0x6 - (. - gText_Rom_2E7480)
	.endif
	.incbin "baserom.gba", 0x2e7486, 0x1a

	@ src/data/trainers.h:23949 trainers_line_23949 (+1 aliases)
	.globl gText_Rom_2E74A0
gText_Rom_2E74A0: @ 0x082E74A0
	.string "ナオとミオ$"
	.if (. - gText_Rom_2E74A0) > 0x6
	.error "gText_Rom_2E74A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E74A0) < 0x6
	.space 0x6 - (. - gText_Rom_2E74A0)
	.endif
	.incbin "baserom.gba", 0x2e74a6, 0x1a

	@ src/data/trainers.h:23997 trainers_line_23997
	.globl gText_Rom_2E74C0
gText_Rom_2E74C0: @ 0x082E74C0
	.string "ミウとユキ$"
	.if (. - gText_Rom_2E74C0) > 0x6
	.error "gText_Rom_2E74C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E74C0) < 0x6
	.space 0x6 - (. - gText_Rom_2E74C0)
	.endif
	.incbin "baserom.gba", 0x2e74c6, 0x1a

	@ src/data/trainers.h:23853 trainers_line_23853 (+5 aliases)
	.globl gText_Rom_2E74E0
gText_Rom_2E74E0: @ 0x082E74E0
	.string "クミとルミ$"
	.if (. - gText_Rom_2E74E0) > 0x6
	.error "gText_Rom_2E74E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E74E0) < 0x6
	.space 0x6 - (. - gText_Rom_2E74E0)
	.endif
	.incbin "baserom.gba", 0x2e74e6, 0x1a

	@ src/data/trainers.h:23949 trainers_line_23949 (+1 aliases)
	.globl gText_Rom_2E7500
gText_Rom_2E7500: @ 0x082E7500
	.string "ナオとミオ$"
	.if (. - gText_Rom_2E7500) > 0x6
	.error "gText_Rom_2E7500 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7500) < 0x6
	.space 0x6 - (. - gText_Rom_2E7500)
	.endif
	.incbin "baserom.gba", 0x2e7506, 0x1a

	@ src/data/trainers.h:23853 trainers_line_23853 (+5 aliases)
	.globl gText_Rom_2E7520
gText_Rom_2E7520: @ 0x082E7520
	.string "クミとルミ$"
	.if (. - gText_Rom_2E7520) > 0x6
	.error "gText_Rom_2E7520 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7520) < 0x6
	.space 0x6 - (. - gText_Rom_2E7520)
	.endif
	.incbin "baserom.gba", 0x2e7526, 0x1a

	@ src/data/trainers.h:23853 trainers_line_23853 (+5 aliases)
	.globl gText_Rom_2E7540
gText_Rom_2E7540: @ 0x082E7540
	.string "クミとルミ$"
	.if (. - gText_Rom_2E7540) > 0x6
	.error "gText_Rom_2E7540 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7540) < 0x6
	.space 0x6 - (. - gText_Rom_2E7540)
	.endif
	.incbin "baserom.gba", 0x2e7546, 0x1a

	@ src/data/trainers.h:23853 trainers_line_23853 (+5 aliases)
	.globl gText_Rom_2E7560
gText_Rom_2E7560: @ 0x082E7560
	.string "クミとルミ$"
	.if (. - gText_Rom_2E7560) > 0x6
	.error "gText_Rom_2E7560 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7560) < 0x6
	.space 0x6 - (. - gText_Rom_2E7560)
	.endif
	.incbin "baserom.gba", 0x2e7566, 0x1a

	@ src/data/trainers.h:24323 trainers_line_24323
	.globl gText_Rom_2E7580
gText_Rom_2E7580: @ 0x082E7580
	.string "タツロウ$"
	.if (. - gText_Rom_2E7580) > 0x5
	.error "gText_Rom_2E7580 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7580) < 0x5
	.space 0x5 - (. - gText_Rom_2E7580)
	.endif
	.incbin "baserom.gba", 0x2e7585, 0x1b

	@ src/data/trainers.h:24371 trainers_line_24371
	.globl gText_Rom_2E75A0
gText_Rom_2E75A0: @ 0x082E75A0
	.string "カツヤ$"
	.if (. - gText_Rom_2E75A0) > 0x4
	.error "gText_Rom_2E75A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E75A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E75A0)
	.endif
	.incbin "baserom.gba", 0x2e75a4, 0x1c

	@ src/data/trainers.h:24407 trainers_line_24407 (+4 aliases)
	.globl gText_Rom_2E75C0
gText_Rom_2E75C0: @ 0x082E75C0
	.string "ジロウ$"
	.if (. - gText_Rom_2E75C0) > 0x4
	.error "gText_Rom_2E75C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E75C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E75C0)
	.endif
	.incbin "baserom.gba", 0x2e75c4, 0x1c

	@ src/data/trainers.h:24455 trainers_line_24455
	.globl gText_Rom_2E75E0
gText_Rom_2E75E0: @ 0x082E75E0
	.string "タツヒコ$"
	.if (. - gText_Rom_2E75E0) > 0x5
	.error "gText_Rom_2E75E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E75E0) < 0x5
	.space 0x5 - (. - gText_Rom_2E75E0)
	.endif
	.incbin "baserom.gba", 0x2e75e5, 0x1b

	@ src/data/trainers.h:24515 trainers_line_24515
	.globl gText_Rom_2E7600
gText_Rom_2E7600: @ 0x082E7600
	.string "ユウサク$"
	.if (. - gText_Rom_2E7600) > 0x5
	.error "gText_Rom_2E7600 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7600) < 0x5
	.space 0x5 - (. - gText_Rom_2E7600)
	.endif
	.incbin "baserom.gba", 0x2e7605, 0x1b

	@ src/data/trainers.h:24563 trainers_line_24563
	.globl gText_Rom_2E7620
gText_Rom_2E7620: @ 0x082E7620
	.string "ダイキ$"
	.if (. - gText_Rom_2E7620) > 0x4
	.error "gText_Rom_2E7620 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7620) < 0x4
	.space 0x4 - (. - gText_Rom_2E7620)
	.endif
	.incbin "baserom.gba", 0x2e7624, 0x1c

	@ src/data/trainers.h:24623 trainers_line_24623
	.globl gText_Rom_2E7640
gText_Rom_2E7640: @ 0x082E7640
	.string "ヒデフミ$"
	.if (. - gText_Rom_2E7640) > 0x5
	.error "gText_Rom_2E7640 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7640) < 0x5
	.space 0x5 - (. - gText_Rom_2E7640)
	.endif
	.incbin "baserom.gba", 0x2e7645, 0x1b

	@ src/data/trainers.h:24407 trainers_line_24407 (+4 aliases)
	.globl gText_Rom_2E7660
gText_Rom_2E7660: @ 0x082E7660
	.string "ジロウ$"
	.if (. - gText_Rom_2E7660) > 0x4
	.error "gText_Rom_2E7660 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7660) < 0x4
	.space 0x4 - (. - gText_Rom_2E7660)
	.endif
	.incbin "baserom.gba", 0x2e7664, 0x1c

	@ src/data/trainers.h:24407 trainers_line_24407 (+4 aliases)
	.globl gText_Rom_2E7680
gText_Rom_2E7680: @ 0x082E7680
	.string "ジロウ$"
	.if (. - gText_Rom_2E7680) > 0x4
	.error "gText_Rom_2E7680 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7680) < 0x4
	.space 0x4 - (. - gText_Rom_2E7680)
	.endif
	.incbin "baserom.gba", 0x2e7684, 0x1c

	@ src/data/trainers.h:24407 trainers_line_24407 (+4 aliases)
	.globl gText_Rom_2E76A0
gText_Rom_2E76A0: @ 0x082E76A0
	.string "ジロウ$"
	.if (. - gText_Rom_2E76A0) > 0x4
	.error "gText_Rom_2E76A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E76A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E76A0)
	.endif
	.incbin "baserom.gba", 0x2e76a4, 0x1c

	@ src/data/trainers.h:24407 trainers_line_24407 (+4 aliases)
	.globl gText_Rom_2E76C0
gText_Rom_2E76C0: @ 0x082E76C0
	.string "ジロウ$"
	.if (. - gText_Rom_2E76C0) > 0x4
	.error "gText_Rom_2E76C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E76C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E76C0)
	.endif
	.incbin "baserom.gba", 0x2e76c4, 0x1c

	@ src/data/trainers.h:24911 trainers_line_24911
	.globl gText_Rom_2E76E0
gText_Rom_2E76E0: @ 0x082E76E0
	.string "テルヨシ$"
	.if (. - gText_Rom_2E76E0) > 0x5
	.error "gText_Rom_2E76E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E76E0) < 0x5
	.space 0x5 - (. - gText_Rom_2E76E0)
	.endif
	.incbin "baserom.gba", 0x2e76e5, 0x1b

	@ src/data/trainers.h:24947 trainers_line_24947
	.globl gText_Rom_2E7700
gText_Rom_2E7700: @ 0x082E7700
	.string "ミネコ$"
	.if (. - gText_Rom_2E7700) > 0x4
	.error "gText_Rom_2E7700 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7700) < 0x4
	.space 0x4 - (. - gText_Rom_2E7700)
	.endif
	.incbin "baserom.gba", 0x2e7704, 0x1c

	@ src/data/trainers.h:25013 trainers_line_25013
	.globl gText_Rom_2E7720
gText_Rom_2E7720: @ 0x082E7720
	.string "ミワ$"
	.if (. - gText_Rom_2E7720) > 0x3
	.error "gText_Rom_2E7720 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7720) < 0x3
	.space 0x3 - (. - gText_Rom_2E7720)
	.endif
	.incbin "baserom.gba", 0x2e7723, 0x1d

	@ src/data/trainers.h:25051 trainers_line_25051
	.globl gText_Rom_2E7740
gText_Rom_2E7740: @ 0x082E7740
	.string "シンスケ$"
	.if (. - gText_Rom_2E7740) > 0x5
	.error "gText_Rom_2E7740 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7740) < 0x5
	.space 0x5 - (. - gText_Rom_2E7740)
	.endif
	.incbin "baserom.gba", 0x2e7745, 0x1b

	@ src/data/trainers.h:25094 trainers_line_25094
	.globl gText_Rom_2E7760
gText_Rom_2E7760: @ 0x082E7760
	.string "カオルコ$"
	.if (. - gText_Rom_2E7760) > 0x5
	.error "gText_Rom_2E7760 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7760) < 0x5
	.space 0x5 - (. - gText_Rom_2E7760)
	.endif
	.incbin "baserom.gba", 0x2e7765, 0x1b

	@ src/data/trainers.h:25137 trainers_line_25137
	.globl gText_Rom_2E7780
gText_Rom_2E7780: @ 0x082E7780
	.string "イッケイ$"
	.if (. - gText_Rom_2E7780) > 0x5
	.error "gText_Rom_2E7780 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7780) < 0x5
	.space 0x5 - (. - gText_Rom_2E7780)
	.endif
	.incbin "baserom.gba", 0x2e7785, 0x1b

	@ src/data/trainers.h:25185 trainers_line_25185
	.globl gText_Rom_2E77A0
gText_Rom_2E77A0: @ 0x082E77A0
	.string "ナオヤ$"
	.if (. - gText_Rom_2E77A0) > 0x4
	.error "gText_Rom_2E77A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E77A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E77A0)
	.endif
	.incbin "baserom.gba", 0x2e77a4, 0x1c

	@ src/data/trainers.h:25233 trainers_line_25233
	.globl gText_Rom_2E77C0
gText_Rom_2E77C0: @ 0x082E77C0
	.string "リツコ$"
	.if (. - gText_Rom_2E77C0) > 0x4
	.error "gText_Rom_2E77C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E77C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E77C0)
	.endif
	.incbin "baserom.gba", 0x2e77c4, 0x1c

	@ src/data/trainers.h:25278 trainers_line_25278
	.globl gText_Rom_2E77E0
gText_Rom_2E77E0: @ 0x082E77E0
	.string "タマキ$"
	.if (. - gText_Rom_2E77E0) > 0x4
	.error "gText_Rom_2E77E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E77E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E77E0)
	.endif
	.incbin "baserom.gba", 0x2e77e4, 0x1c

	@ src/data/trainers.h:25326 trainers_line_25326
	.globl gText_Rom_2E7800
gText_Rom_2E7800: @ 0x082E7800
	.string "ジュンヤ$"
	.if (. - gText_Rom_2E7800) > 0x5
	.error "gText_Rom_2E7800 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7800) < 0x5
	.space 0x5 - (. - gText_Rom_2E7800)
	.endif
	.incbin "baserom.gba", 0x2e7805, 0x1b

	@ src/data/trainers.h:25362 trainers_line_25362
	.globl gText_Rom_2E7820
gText_Rom_2E7820: @ 0x082E7820
	.string "シゲヨシ$"
	.if (. - gText_Rom_2E7820) > 0x5
	.error "gText_Rom_2E7820 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7820) < 0x5
	.space 0x5 - (. - gText_Rom_2E7820)
	.endif
	.incbin "baserom.gba", 0x2e7825, 0x1b

	@ src/data/trainers.h:25410 trainers_line_25410 (+4 aliases)
	.globl gText_Rom_2E7840
gText_Rom_2E7840: @ 0x082E7840
	.string "モトキ$"
	.if (. - gText_Rom_2E7840) > 0x4
	.error "gText_Rom_2E7840 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7840) < 0x4
	.space 0x4 - (. - gText_Rom_2E7840)
	.endif
	.incbin "baserom.gba", 0x2e7844, 0x1c

	@ src/data/trainers.h:25458 trainers_line_25458
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E7860
gText_Rom_2E7860: @ 0x082E7860
	.string "トシノブ$"
	.if (. - gText_Rom_2E7860) != 0x5
	.error "gText_Rom_2E7860 must retain its original byte length"
	.endif
	.globl gText_Rom_2E7861
	.set gText_Rom_2E7861, gText_Rom_2E7860 + 0x1
	.incbin "baserom.gba", 0x2e7865, 0x1b

	@ src/data/trainers.h:25506 trainers_line_25506 (+2 aliases)
	.globl gText_Rom_2E7880
gText_Rom_2E7880: @ 0x082E7880
	.string "ホムラ$"
	.if (. - gText_Rom_2E7880) > 0x4
	.error "gText_Rom_2E7880 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7880) < 0x4
	.space 0x4 - (. - gText_Rom_2E7880)
	.endif
	.incbin "baserom.gba", 0x2e7884, 0x1c

	@ src/data/trainers.h:25410 trainers_line_25410 (+4 aliases)
	.globl gText_Rom_2E78A0
gText_Rom_2E78A0: @ 0x082E78A0
	.string "モトキ$"
	.if (. - gText_Rom_2E78A0) > 0x4
	.error "gText_Rom_2E78A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E78A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E78A0)
	.endif
	.incbin "baserom.gba", 0x2e78a4, 0x1c

	@ src/data/trainers.h:25410 trainers_line_25410 (+4 aliases)
	.globl gText_Rom_2E78C0
gText_Rom_2E78C0: @ 0x082E78C0
	.string "モトキ$"
	.if (. - gText_Rom_2E78C0) > 0x4
	.error "gText_Rom_2E78C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E78C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E78C0)
	.endif
	.incbin "baserom.gba", 0x2e78c4, 0x1c

	@ src/data/trainers.h:25410 trainers_line_25410 (+4 aliases)
	.globl gText_Rom_2E78E0
gText_Rom_2E78E0: @ 0x082E78E0
	.string "モトキ$"
	.if (. - gText_Rom_2E78E0) > 0x4
	.error "gText_Rom_2E78E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E78E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E78E0)
	.endif
	.incbin "baserom.gba", 0x2e78e4, 0x1c

	@ src/data/trainers.h:25410 trainers_line_25410 (+4 aliases)
	.globl gText_Rom_2E7900
gText_Rom_2E7900: @ 0x082E7900
	.string "モトキ$"
	.if (. - gText_Rom_2E7900) > 0x4
	.error "gText_Rom_2E7900 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7900) < 0x4
	.space 0x4 - (. - gText_Rom_2E7900)
	.endif
	.incbin "baserom.gba", 0x2e7904, 0x1c

