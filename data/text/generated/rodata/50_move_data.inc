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

