	@ src/data/moves_info.h:48 moves_info_line_48
	.globl gText_Rom_2EACCC
gText_Rom_2EACCC: @ 0x082EACCC
	.string "はたく$"
	.if (. - gText_Rom_2EACCC) > 0x4
	.error "gText_Rom_2EACCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACCC) < 0x4
	.space 0x4 - (. - gText_Rom_2EACCC)
	.endif
	.incbin "baserom.gba", 0x2eacd0, 0x4

	@ src/data/moves_info.h:69 moves_info_line_69
	.globl gText_Rom_2EACD4
gText_Rom_2EACD4: @ 0x082EACD4
	.string "からてチョップ$"
	.if (. - gText_Rom_2EACD4) > 0x8
	.error "gText_Rom_2EACD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACD4) < 0x8
	.space 0x8 - (. - gText_Rom_2EACD4)
	.endif

	@ src/data/moves_info.h:91 moves_info_line_91
	.globl gText_Rom_2EACDC
gText_Rom_2EACDC: @ 0x082EACDC
	.string "おうふくビンタ$"
	.if (. - gText_Rom_2EACDC) > 0x8
	.error "gText_Rom_2EACDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACDC) < 0x8
	.space 0x8 - (. - gText_Rom_2EACDC)
	.endif

	@ src/data/moves_info.h:113 moves_info_line_113
	.globl gText_Rom_2EACE4
gText_Rom_2EACE4: @ 0x082EACE4
	.string "れんぞくパンチ$"
	.if (. - gText_Rom_2EACE4) > 0x8
	.error "gText_Rom_2EACE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACE4) < 0x8
	.space 0x8 - (. - gText_Rom_2EACE4)
	.endif

	@ src/data/moves_info.h:135 moves_info_line_135
	.globl gText_Rom_2EACEC
gText_Rom_2EACEC: @ 0x082EACEC
	.string "メガトンパンチ$"
	.if (. - gText_Rom_2EACEC) > 0x8
	.error "gText_Rom_2EACEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACEC) < 0x8
	.space 0x8 - (. - gText_Rom_2EACEC)
	.endif

	@ src/data/moves_info.h:157 moves_info_line_157
	.globl gText_Rom_2EACF4
gText_Rom_2EACF4: @ 0x082EACF4
	.string "ネコにこばん$"
	.if (. - gText_Rom_2EACF4) > 0x7
	.error "gText_Rom_2EACF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACF4) < 0x7
	.space 0x7 - (. - gText_Rom_2EACF4)
	.endif
	.incbin "baserom.gba", 0x2eacfb, 0x1

	@ src/data/moves_info.h:179 moves_info_line_179
	.globl gText_Rom_2EACFC
gText_Rom_2EACFC: @ 0x082EACFC
	.string "ほのおのパンチ$"
	.if (. - gText_Rom_2EACFC) > 0x8
	.error "gText_Rom_2EACFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACFC) < 0x8
	.space 0x8 - (. - gText_Rom_2EACFC)
	.endif

	@ src/data/moves_info.h:205 moves_info_line_205
	.globl gText_Rom_2EAD04
gText_Rom_2EAD04: @ 0x082EAD04
	.string "れいとうパンチ$"
	.if (. - gText_Rom_2EAD04) > 0x8
	.error "gText_Rom_2EAD04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD04) < 0x8
	.space 0x8 - (. - gText_Rom_2EAD04)
	.endif

	@ src/data/moves_info.h:231 moves_info_line_231
	.globl gText_Rom_2EAD0C
gText_Rom_2EAD0C: @ 0x082EAD0C
	.string "かみなりパンチ$"
	.if (. - gText_Rom_2EAD0C) > 0x8
	.error "gText_Rom_2EAD0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD0C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAD0C)
	.endif

	@ src/data/moves_info.h:257 moves_info_line_257
	.globl gText_Rom_2EAD14
gText_Rom_2EAD14: @ 0x082EAD14
	.string "ひっかく$"
	.if (. - gText_Rom_2EAD14) > 0x5
	.error "gText_Rom_2EAD14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD14) < 0x5
	.space 0x5 - (. - gText_Rom_2EAD14)
	.endif
	.incbin "baserom.gba", 0x2ead19, 0x3

	@ src/data/moves_info.h:277 moves_info_line_277
	.globl gText_Rom_2EAD1C
gText_Rom_2EAD1C: @ 0x082EAD1C
	.string "はさむ$"
	.if (. - gText_Rom_2EAD1C) > 0x4
	.error "gText_Rom_2EAD1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD1C) < 0x4
	.space 0x4 - (. - gText_Rom_2EAD1C)
	.endif
	.incbin "baserom.gba", 0x2ead20, 0x4

	@ src/data/moves_info.h:297 moves_info_line_297
	.globl gText_Rom_2EAD24
gText_Rom_2EAD24: @ 0x082EAD24
	.string "ハサミギロチン$"
	.if (. - gText_Rom_2EAD24) > 0x8
	.error "gText_Rom_2EAD24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD24) < 0x8
	.space 0x8 - (. - gText_Rom_2EAD24)
	.endif

	@ src/data/moves_info.h:318 moves_info_line_318
	.globl gText_Rom_2EAD2C
gText_Rom_2EAD2C: @ 0x082EAD2C
	.string "かまいたち$"
	.if (. - gText_Rom_2EAD2C) > 0x6
	.error "gText_Rom_2EAD2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD2C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAD2C)
	.endif
	.incbin "baserom.gba", 0x2ead32, 0x2

	@ src/data/moves_info.h:348 moves_info_line_348
	.globl gText_Rom_2EAD34
gText_Rom_2EAD34: @ 0x082EAD34
	.string "つるぎのまい$"
	.if (. - gText_Rom_2EAD34) > 0x7
	.error "gText_Rom_2EAD34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD34) < 0x7
	.space 0x7 - (. - gText_Rom_2EAD34)
	.endif
	.incbin "baserom.gba", 0x2ead3b, 0x1

	@ src/data/moves_info.h:377 moves_info_line_377
	.globl gText_Rom_2EAD3C
gText_Rom_2EAD3C: @ 0x082EAD3C
	.string "いあいぎり$"
	.if (. - gText_Rom_2EAD3C) > 0x6
	.error "gText_Rom_2EAD3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD3C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAD3C)
	.endif
	.incbin "baserom.gba", 0x2ead42, 0x2

	@ src/data/moves_info.h:398 moves_info_line_398
	.globl gText_Rom_2EAD44
gText_Rom_2EAD44: @ 0x082EAD44
	.string "かぜおこし$"
	.if (. - gText_Rom_2EAD44) > 0x6
	.error "gText_Rom_2EAD44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD44) < 0x6
	.space 0x6 - (. - gText_Rom_2EAD44)
	.endif
	.incbin "baserom.gba", 0x2ead4a, 0x2

	@ src/data/moves_info.h:420 moves_info_line_420
	.globl gText_Rom_2EAD4C
gText_Rom_2EAD4C: @ 0x082EAD4C
	.string "つばさでうつ$"
	.if (. - gText_Rom_2EAD4C) > 0x7
	.error "gText_Rom_2EAD4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD4C) < 0x7
	.space 0x7 - (. - gText_Rom_2EAD4C)
	.endif
	.incbin "baserom.gba", 0x2ead53, 0x1

	@ src/data/moves_info.h:440 moves_info_line_440
	.globl gText_Rom_2EAD54
gText_Rom_2EAD54: @ 0x082EAD54
	.string "ふきとばし$"
	.if (. - gText_Rom_2EAD54) > 0x6
	.error "gText_Rom_2EAD54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD54) < 0x6
	.space 0x6 - (. - gText_Rom_2EAD54)
	.endif
	.incbin "baserom.gba", 0x2ead5a, 0x2

	@ src/data/moves_info.h:478 moves_info_line_478
	.globl gText_Rom_2EAD5C
gText_Rom_2EAD5C: @ 0x082EAD5C
	.string "そらをとぶ$"
	.if (. - gText_Rom_2EAD5C) > 0x6
	.error "gText_Rom_2EAD5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD5C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAD5C)
	.endif
	.incbin "baserom.gba", 0x2ead62, 0x2

	@ src/data/moves_info.h:504 moves_info_line_504
	.globl gText_Rom_2EAD64
gText_Rom_2EAD64: @ 0x082EAD64
	.string "しめつける$"
	.if (. - gText_Rom_2EAD64) > 0x6
	.error "gText_Rom_2EAD64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD64) < 0x6
	.space 0x6 - (. - gText_Rom_2EAD64)
	.endif
	.incbin "baserom.gba", 0x2ead6a, 0x2

	@ src/data/moves_info.h:530 moves_info_line_530
	.globl gText_Rom_2EAD6C
gText_Rom_2EAD6C: @ 0x082EAD6C
	.string "たたきつける$"
	.if (. - gText_Rom_2EAD6C) > 0x7
	.error "gText_Rom_2EAD6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD6C) < 0x7
	.space 0x7 - (. - gText_Rom_2EAD6C)
	.endif
	.incbin "baserom.gba", 0x2ead73, 0x1

	@ src/data/moves_info.h:552 moves_info_line_552
	.globl gText_Rom_2EAD74
gText_Rom_2EAD74: @ 0x082EAD74
	.string "つるのムチ$"
	.if (. - gText_Rom_2EAD74) > 0x6
	.error "gText_Rom_2EAD74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD74) < 0x6
	.space 0x6 - (. - gText_Rom_2EAD74)
	.endif
	.incbin "baserom.gba", 0x2ead7a, 0x2

	@ src/data/moves_info.h:578 moves_info_line_578
	.globl gText_Rom_2EAD7C
gText_Rom_2EAD7C: @ 0x082EAD7C
	.string "ふみつけ$"
	.if (. - gText_Rom_2EAD7C) > 0x5
	.error "gText_Rom_2EAD7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD7C) < 0x5
	.space 0x5 - (. - gText_Rom_2EAD7C)
	.endif
	.incbin "baserom.gba", 0x2ead81, 0x3

	@ src/data/moves_info.h:605 moves_info_line_605
	.globl gText_Rom_2EAD84
gText_Rom_2EAD84: @ 0x082EAD84
	.string "にどげり$"
	.if (. - gText_Rom_2EAD84) > 0x5
	.error "gText_Rom_2EAD84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD84) < 0x5
	.space 0x5 - (. - gText_Rom_2EAD84)
	.endif
	.incbin "baserom.gba", 0x2ead89, 0x3

	@ src/data/moves_info.h:627 moves_info_line_627
	.globl gText_Rom_2EAD8C
gText_Rom_2EAD8C: @ 0x082EAD8C
	.string "メガトンキック$"
	.if (. - gText_Rom_2EAD8C) > 0x8
	.error "gText_Rom_2EAD8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD8C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAD8C)
	.endif

	@ src/data/moves_info.h:648 moves_info_line_648
	.globl gText_Rom_2EAD94
gText_Rom_2EAD94: @ 0x082EAD94
	.string "とびげり$"
	.if (. - gText_Rom_2EAD94) > 0x5
	.error "gText_Rom_2EAD94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD94) < 0x5
	.space 0x5 - (. - gText_Rom_2EAD94)
	.endif
	.incbin "baserom.gba", 0x2ead99, 0x3

	@ src/data/moves_info.h:676 moves_info_line_676
	.globl gText_Rom_2EAD9C
gText_Rom_2EAD9C: @ 0x082EAD9C
	.string "まわしげり$"
	.if (. - gText_Rom_2EAD9C) > 0x6
	.error "gText_Rom_2EAD9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD9C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAD9C)
	.endif
	.incbin "baserom.gba", 0x2eada2, 0x2

	@ src/data/moves_info.h:702 moves_info_line_702
	.globl gText_Rom_2EADA4
gText_Rom_2EADA4: @ 0x082EADA4
	.string "すなかけ$"
	.if (. - gText_Rom_2EADA4) > 0x5
	.error "gText_Rom_2EADA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADA4) < 0x5
	.space 0x5 - (. - gText_Rom_2EADA4)
	.endif
	.incbin "baserom.gba", 0x2eada9, 0x3

	@ src/data/moves_info.h:728 moves_info_line_728
	.globl gText_Rom_2EADAC
gText_Rom_2EADAC: @ 0x082EADAC
	.string "ずつき$"
	.if (. - gText_Rom_2EADAC) > 0x4
	.error "gText_Rom_2EADAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADAC) < 0x4
	.space 0x4 - (. - gText_Rom_2EADAC)
	.endif
	.incbin "baserom.gba", 0x2eadb0, 0x4

	@ src/data/moves_info.h:753 moves_info_line_753
	.globl gText_Rom_2EADB4
gText_Rom_2EADB4: @ 0x082EADB4
	.string "つのでつく$"
	.if (. - gText_Rom_2EADB4) > 0x6
	.error "gText_Rom_2EADB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADB4) < 0x6
	.space 0x6 - (. - gText_Rom_2EADB4)
	.endif
	.incbin "baserom.gba", 0x2eadba, 0x2

	@ src/data/moves_info.h:773 moves_info_line_773
	.globl gText_Rom_2EADBC
gText_Rom_2EADBC: @ 0x082EADBC
	.string "みだれづき$"
	.if (. - gText_Rom_2EADBC) > 0x6
	.error "gText_Rom_2EADBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADBC) < 0x6
	.space 0x6 - (. - gText_Rom_2EADBC)
	.endif
	.incbin "baserom.gba", 0x2eadc2, 0x2

	@ src/data/moves_info.h:794 moves_info_line_794
	.globl gText_Rom_2EADC4
gText_Rom_2EADC4: @ 0x082EADC4
	.string "つのドリル$"
	.if (. - gText_Rom_2EADC4) > 0x6
	.error "gText_Rom_2EADC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADC4) < 0x6
	.space 0x6 - (. - gText_Rom_2EADC4)
	.endif
	.incbin "baserom.gba", 0x2eadca, 0x2

	@ src/data/moves_info.h:815 moves_info_line_815
	.globl gText_Rom_2EADCC
gText_Rom_2EADCC: @ 0x082EADCC
	.string "たいあたり$"
	.if (. - gText_Rom_2EADCC) > 0x6
	.error "gText_Rom_2EADCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADCC) < 0x6
	.space 0x6 - (. - gText_Rom_2EADCC)
	.endif
	.incbin "baserom.gba", 0x2eadd2, 0x2

	@ src/data/moves_info.h:841 moves_info_line_841
	.globl gText_Rom_2EADD4
gText_Rom_2EADD4: @ 0x082EADD4
	.string "のしかかり$"
	.if (. - gText_Rom_2EADD4) > 0x6
	.error "gText_Rom_2EADD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADD4) < 0x6
	.space 0x6 - (. - gText_Rom_2EADD4)
	.endif
	.incbin "baserom.gba", 0x2eadda, 0x2

	@ src/data/moves_info.h:868 moves_info_line_868
	.globl gText_Rom_2EADDC
gText_Rom_2EADDC: @ 0x082EADDC
	.string "まきつく$"
	.if (. - gText_Rom_2EADDC) > 0x5
	.error "gText_Rom_2EADDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADDC) < 0x5
	.space 0x5 - (. - gText_Rom_2EADDC)
	.endif
	.incbin "baserom.gba", 0x2eade1, 0x3

	@ src/data/moves_info.h:894 moves_info_line_894
	.globl gText_Rom_2EADE4
gText_Rom_2EADE4: @ 0x082EADE4
	.string "とっしん$"
	.if (. - gText_Rom_2EADE4) > 0x5
	.error "gText_Rom_2EADE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADE4) < 0x5
	.space 0x5 - (. - gText_Rom_2EADE4)
	.endif
	.incbin "baserom.gba", 0x2eade9, 0x3

	@ src/data/moves_info.h:916 moves_info_line_916
	.globl gText_Rom_2EADEC
gText_Rom_2EADEC: @ 0x082EADEC
	.string "あばれる$"
	.if (. - gText_Rom_2EADEC) > 0x5
	.error "gText_Rom_2EADEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADEC) < 0x5
	.space 0x5 - (. - gText_Rom_2EADEC)
	.endif
	.incbin "baserom.gba", 0x2eadf1, 0x3

	@ src/data/moves_info.h:942 moves_info_line_942
	.globl gText_Rom_2EADF4
gText_Rom_2EADF4: @ 0x082EADF4
	.string "すてみタックル$"
	.if (. - gText_Rom_2EADF4) > 0x8
	.error "gText_Rom_2EADF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADF4) < 0x8
	.space 0x8 - (. - gText_Rom_2EADF4)
	.endif

	@ src/data/moves_info.h:964 moves_info_line_964
	.globl gText_Rom_2EADFC
gText_Rom_2EADFC: @ 0x082EADFC
	.string "しっぽをふる$"
	.if (. - gText_Rom_2EADFC) > 0x7
	.error "gText_Rom_2EADFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADFC) < 0x7
	.space 0x7 - (. - gText_Rom_2EADFC)
	.endif
	.incbin "baserom.gba", 0x2eae03, 0x1

	@ src/data/moves_info.h:989 moves_info_line_989
	.globl gText_Rom_2EAE04
gText_Rom_2EAE04: @ 0x082EAE04
	.string "どくばり$"
	.if (. - gText_Rom_2EAE04) > 0x5
	.error "gText_Rom_2EAE04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE04) < 0x5
	.space 0x5 - (. - gText_Rom_2EAE04)
	.endif
	.incbin "baserom.gba", 0x2eae09, 0x3

	@ src/data/moves_info.h:1012 moves_info_line_1012
	.globl gText_Rom_2EAE0C
gText_Rom_2EAE0C: @ 0x082EAE0C
	.string "ダブルニードル$"
	.if (. - gText_Rom_2EAE0C) > 0x8
	.error "gText_Rom_2EAE0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE0C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAE0C)
	.endif

	@ src/data/moves_info.h:1038 moves_info_line_1038
	.globl gText_Rom_2EAE14
gText_Rom_2EAE14: @ 0x082EAE14
	.string "ミサイルばり$"
	.if (. - gText_Rom_2EAE14) > 0x7
	.error "gText_Rom_2EAE14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE14) < 0x7
	.space 0x7 - (. - gText_Rom_2EAE14)
	.endif
	.incbin "baserom.gba", 0x2eae1b, 0x1

	@ src/data/moves_info.h:1058 moves_info_line_1058
	.globl gText_Rom_2EAE1C
gText_Rom_2EAE1C: @ 0x082EAE1C
	.string "にらみつける$"
	.if (. - gText_Rom_2EAE1C) > 0x7
	.error "gText_Rom_2EAE1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE1C) < 0x7
	.space 0x7 - (. - gText_Rom_2EAE1C)
	.endif
	.incbin "baserom.gba", 0x2eae23, 0x1

	@ src/data/moves_info.h:1083 moves_info_line_1083
	.globl gText_Rom_2EAE24
gText_Rom_2EAE24: @ 0x082EAE24
	.string "かみつく$"
	.if (. - gText_Rom_2EAE24) > 0x5
	.error "gText_Rom_2EAE24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE24) < 0x5
	.space 0x5 - (. - gText_Rom_2EAE24)
	.endif
	.incbin "baserom.gba", 0x2eae29, 0x3

	@ src/data/moves_info.h:1109 moves_info_line_1109 (+1 aliases)
	.globl gText_Rom_2EAE2C
gText_Rom_2EAE2C: @ 0x082EAE2C
	.string "なきごえ$"
	.if (. - gText_Rom_2EAE2C) > 0x5
	.error "gText_Rom_2EAE2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE2C) < 0x5
	.space 0x5 - (. - gText_Rom_2EAE2C)
	.endif
	.incbin "baserom.gba", 0x2eae31, 0x3

	@ src/data/moves_info.h:1136 moves_info_line_1136
	.globl gText_Rom_2EAE34
gText_Rom_2EAE34: @ 0x082EAE34
	.string "ほえる$"
	.if (. - gText_Rom_2EAE34) > 0x4
	.error "gText_Rom_2EAE34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE34) < 0x4
	.space 0x4 - (. - gText_Rom_2EAE34)
	.endif
	.incbin "baserom.gba", 0x2eae38, 0x4

	@ src/data/moves_info.h:1169 moves_info_line_1169
	.globl gText_Rom_2EAE3C
gText_Rom_2EAE3C: @ 0x082EAE3C
	.string "うたう$"
	.if (. - gText_Rom_2EAE3C) > 0x4
	.error "gText_Rom_2EAE3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE3C) < 0x4
	.space 0x4 - (. - gText_Rom_2EAE3C)
	.endif
	.incbin "baserom.gba", 0x2eae40, 0x4

	@ src/data/moves_info.h:1194 moves_info_line_1194
	.globl gText_Rom_2EAE44
gText_Rom_2EAE44: @ 0x082EAE44
	.string "ちょうおんぱ$"
	.if (. - gText_Rom_2EAE44) > 0x7
	.error "gText_Rom_2EAE44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE44) < 0x7
	.space 0x7 - (. - gText_Rom_2EAE44)
	.endif
	.incbin "baserom.gba", 0x2eae4b, 0x1

	@ src/data/moves_info.h:1218 moves_info_line_1218
	.globl gText_Rom_2EAE4C
gText_Rom_2EAE4C: @ 0x082EAE4C
	.string "ソニックブーム$"
	.if (. - gText_Rom_2EAE4C) > 0x8
	.error "gText_Rom_2EAE4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE4C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAE4C)
	.endif

	@ src/data/moves_info.h:1239 moves_info_line_1239
	.globl gText_Rom_2EAE54
gText_Rom_2EAE54: @ 0x082EAE54
	.string "かなしばり$"
	.if (. - gText_Rom_2EAE54) > 0x6
	.error "gText_Rom_2EAE54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE54) < 0x6
	.space 0x6 - (. - gText_Rom_2EAE54)
	.endif
	.incbin "baserom.gba", 0x2eae5a, 0x2

	@ src/data/moves_info.h:1268 moves_info_line_1268
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EAE5C
gText_Rom_2EAE5C: @ 0x082EAE5C
	.string "ようかいえき$"
	.if (. - gText_Rom_2EAE5C) != 0x7
	.error "gText_Rom_2EAE5C must retain its original byte length"
	.endif
	.globl gText_Rom_2EAE5F
	.set gText_Rom_2EAE5F, gText_Rom_2EAE5C + 0x3
	.incbin "baserom.gba", 0x2eae63, 0x1

	@ src/data/moves_info.h:1293 moves_info_line_1293
	.globl gText_Rom_2EAE64
gText_Rom_2EAE64: @ 0x082EAE64
	.string "ひのこ$"
	.if (. - gText_Rom_2EAE64) > 0x4
	.error "gText_Rom_2EAE64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE64) < 0x4
	.space 0x4 - (. - gText_Rom_2EAE64)
	.endif
	.incbin "baserom.gba", 0x2eae68, 0x4

	@ src/data/moves_info.h:1316 moves_info_line_1316
	.globl gText_Rom_2EAE6C
gText_Rom_2EAE6C: @ 0x082EAE6C
	.string "かえんほうしゃ$"
	.if (. - gText_Rom_2EAE6C) > 0x8
	.error "gText_Rom_2EAE6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE6C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAE6C)
	.endif

