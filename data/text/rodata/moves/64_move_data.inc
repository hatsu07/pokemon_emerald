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

