@------------------------------------------------------------------------------
@ Move name table fragments from numbered rodata files
@ Sources: 26 through 65, plus the move-name portion of 66
@ End address: 0x082EB7DC (exclusive)
@------------------------------------------------------------------------------

@==============================================================================
@ Source: data/text/rodata/moves/26_move_data.inc
@==============================================================================

	.globl gMoveNames
gMoveNames: @ 0x082EACC4

gMoveName_None:
	.string "ー"
	.byte EOS
	.space 8 - (. - gMoveName_None), 0xFF

	@ src/data/moves_info.h:48 moves_info_line_48
	.globl gText_Rom_2EACCC
gText_Rom_2EACCC: @ 0x082EACCC
	.string "はたく"
	.byte EOS
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
	.string "からてチョップ"
	.byte EOS
	.if (. - gText_Rom_2EACD4) > 0x8
	.error "gText_Rom_2EACD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACD4) < 0x8
	.space 0x8 - (. - gText_Rom_2EACD4)
	.endif

	@ src/data/moves_info.h:91 moves_info_line_91
	.globl gText_Rom_2EACDC
gText_Rom_2EACDC: @ 0x082EACDC
	.string "おうふくビンタ"
	.byte EOS
	.if (. - gText_Rom_2EACDC) > 0x8
	.error "gText_Rom_2EACDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACDC) < 0x8
	.space 0x8 - (. - gText_Rom_2EACDC)
	.endif

	@ src/data/moves_info.h:113 moves_info_line_113
	.globl gText_Rom_2EACE4
gText_Rom_2EACE4: @ 0x082EACE4
	.string "れんぞくパンチ"
	.byte EOS
	.if (. - gText_Rom_2EACE4) > 0x8
	.error "gText_Rom_2EACE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACE4) < 0x8
	.space 0x8 - (. - gText_Rom_2EACE4)
	.endif

	@ src/data/moves_info.h:135 moves_info_line_135
	.globl gText_Rom_2EACEC
gText_Rom_2EACEC: @ 0x082EACEC
	.string "メガトンパンチ"
	.byte EOS
	.if (. - gText_Rom_2EACEC) > 0x8
	.error "gText_Rom_2EACEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACEC) < 0x8
	.space 0x8 - (. - gText_Rom_2EACEC)
	.endif

	@ src/data/moves_info.h:157 moves_info_line_157
	.globl gText_Rom_2EACF4
gText_Rom_2EACF4: @ 0x082EACF4
	.string "ネコにこばん"
	.byte EOS
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
	.string "ほのおのパンチ"
	.byte EOS
	.if (. - gText_Rom_2EACFC) > 0x8
	.error "gText_Rom_2EACFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACFC) < 0x8
	.space 0x8 - (. - gText_Rom_2EACFC)
	.endif

	@ src/data/moves_info.h:205 moves_info_line_205
	.globl gText_Rom_2EAD04
gText_Rom_2EAD04: @ 0x082EAD04
	.string "れいとうパンチ"
	.byte EOS
	.if (. - gText_Rom_2EAD04) > 0x8
	.error "gText_Rom_2EAD04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD04) < 0x8
	.space 0x8 - (. - gText_Rom_2EAD04)
	.endif

	@ src/data/moves_info.h:231 moves_info_line_231
	.globl gText_Rom_2EAD0C
gText_Rom_2EAD0C: @ 0x082EAD0C
	.string "かみなりパンチ"
	.byte EOS
	.if (. - gText_Rom_2EAD0C) > 0x8
	.error "gText_Rom_2EAD0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD0C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAD0C)
	.endif

	@ src/data/moves_info.h:257 moves_info_line_257
	.globl gText_Rom_2EAD14
gText_Rom_2EAD14: @ 0x082EAD14
	.string "ひっかく"
	.byte EOS
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
	.string "はさむ"
	.byte EOS
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
	.string "ハサミギロチン"
	.byte EOS
	.if (. - gText_Rom_2EAD24) > 0x8
	.error "gText_Rom_2EAD24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD24) < 0x8
	.space 0x8 - (. - gText_Rom_2EAD24)
	.endif

	@ src/data/moves_info.h:318 moves_info_line_318
	.globl gText_Rom_2EAD2C
gText_Rom_2EAD2C: @ 0x082EAD2C
	.string "かまいたち"
	.byte EOS
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
	.string "つるぎのまい"
	.byte EOS
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
	.string "いあいぎり"
	.byte EOS
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
	.string "かぜおこし"
	.byte EOS
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
	.string "つばさでうつ"
	.byte EOS
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
	.string "ふきとばし"
	.byte EOS
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
	.string "そらをとぶ"
	.byte EOS
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
	.string "しめつける"
	.byte EOS
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
	.string "たたきつける"
	.byte EOS
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
	.string "つるのムチ"
	.byte EOS
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
	.string "ふみつけ"
	.byte EOS
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
	.string "にどげり"
	.byte EOS
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
	.string "メガトンキック"
	.byte EOS
	.if (. - gText_Rom_2EAD8C) > 0x8
	.error "gText_Rom_2EAD8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD8C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAD8C)
	.endif

	@ src/data/moves_info.h:648 moves_info_line_648
	.globl gText_Rom_2EAD94
gText_Rom_2EAD94: @ 0x082EAD94
	.string "とびげり"
	.byte EOS
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
	.string "まわしげり"
	.byte EOS
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
	.string "すなかけ"
	.byte EOS
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
	.string "ずつき"
	.byte EOS
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
	.string "つのでつく"
	.byte EOS
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
	.string "みだれづき"
	.byte EOS
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
	.string "つのドリル"
	.byte EOS
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
	.string "たいあたり"
	.byte EOS
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
	.string "のしかかり"
	.byte EOS
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
	.string "まきつく"
	.byte EOS
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
	.string "とっしん"
	.byte EOS
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
	.string "あばれる"
	.byte EOS
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
	.string "すてみタックル"
	.byte EOS
	.if (. - gText_Rom_2EADF4) > 0x8
	.error "gText_Rom_2EADF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADF4) < 0x8
	.space 0x8 - (. - gText_Rom_2EADF4)
	.endif

	@ src/data/moves_info.h:964 moves_info_line_964
	.globl gText_Rom_2EADFC
gText_Rom_2EADFC: @ 0x082EADFC
	.string "しっぽをふる"
	.byte EOS
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
	.string "どくばり"
	.byte EOS
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
	.string "ダブルニードル"
	.byte EOS
	.if (. - gText_Rom_2EAE0C) > 0x8
	.error "gText_Rom_2EAE0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE0C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAE0C)
	.endif

	@ src/data/moves_info.h:1038 moves_info_line_1038
	.globl gText_Rom_2EAE14
gText_Rom_2EAE14: @ 0x082EAE14
	.string "ミサイルばり"
	.byte EOS
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
	.string "にらみつける"
	.byte EOS
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
	.string "かみつく"
	.byte EOS
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
	.string "なきごえ"
	.byte EOS
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
	.string "ほえる"
	.byte EOS
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
	.string "うたう"
	.byte EOS
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
	.string "ちょうおんぱ"
	.byte EOS
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
	.string "ソニックブーム"
	.byte EOS
	.if (. - gText_Rom_2EAE4C) > 0x8
	.error "gText_Rom_2EAE4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE4C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAE4C)
	.endif

	@ src/data/moves_info.h:1239 moves_info_line_1239
	.globl gText_Rom_2EAE54
gText_Rom_2EAE54: @ 0x082EAE54
	.string "かなしばり"
	.byte EOS
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
	.string "ようかいえき"
	.byte EOS
	.if (. - gText_Rom_2EAE5C) != 0x7
	.error "gText_Rom_2EAE5C must retain its original byte length"
	.endif
	.globl gText_Rom_2EAE5F
	.set gText_Rom_2EAE5F, gText_Rom_2EAE5C + 0x3
	.incbin "baserom.gba", 0x2eae63, 0x1

	@ src/data/moves_info.h:1293 moves_info_line_1293
	.globl gText_Rom_2EAE64
gText_Rom_2EAE64: @ 0x082EAE64
	.string "ひのこ"
	.byte EOS
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
	.string "かえんほうしゃ"
	.byte EOS
	.if (. - gText_Rom_2EAE6C) > 0x8
	.error "gText_Rom_2EAE6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE6C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAE6C)
	.endif


@==============================================================================
@ Source: data/text/rodata/battle/27_battle_data.inc
@==============================================================================

	@ src/battle_debug.c:412 battle_debug_line_412 (+1 aliases)
	.globl gText_Rom_2EAE74
gText_Rom_2EAE74: @ 0x082EAE74
	.string "しろいきり"
	.byte EOS
	.if (. - gText_Rom_2EAE74) > 0x6
	.error "gText_Rom_2EAE74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE74) < 0x6
	.space 0x6 - (. - gText_Rom_2EAE74)
	.endif
	.incbin "baserom.gba", 0x2eae7a, 0x2


@==============================================================================
@ Source: data/text/rodata/moves/28_move_data.inc
@==============================================================================

	@ src/data/moves_info.h:1364 moves_info_line_1364
	.globl gText_Rom_2EAE7C
gText_Rom_2EAE7C: @ 0x082EAE7C
	.string "みずでっぽう"
	.byte EOS
	.if (. - gText_Rom_2EAE7C) > 0x7
	.error "gText_Rom_2EAE7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE7C) < 0x7
	.space 0x7 - (. - gText_Rom_2EAE7C)
	.endif
	.incbin "baserom.gba", 0x2eae83, 0x1

	@ src/data/moves_info.h:1383 moves_info_line_1383
	.globl gText_Rom_2EAE84
gText_Rom_2EAE84: @ 0x082EAE84
	.string "ハイドロポンプ"
	.byte EOS
	.if (. - gText_Rom_2EAE84) > 0x8
	.error "gText_Rom_2EAE84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE84) < 0x8
	.space 0x8 - (. - gText_Rom_2EAE84)
	.endif

	@ src/data/moves_info.h:1403 moves_info_line_1403
	.globl gText_Rom_2EAE8C
gText_Rom_2EAE8C: @ 0x082EAE8C
	.string "なみのり"
	.byte EOS
	.if (. - gText_Rom_2EAE8C) > 0x5
	.error "gText_Rom_2EAE8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE8C) < 0x5
	.space 0x5 - (. - gText_Rom_2EAE8C)
	.endif
	.incbin "baserom.gba", 0x2eae91, 0x3

	@ src/data/moves_info.h:1425 moves_info_line_1425
	.globl gText_Rom_2EAE94
gText_Rom_2EAE94: @ 0x082EAE94
	.string "れいとうビーム"
	.byte EOS
	.if (. - gText_Rom_2EAE94) > 0x8
	.error "gText_Rom_2EAE94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE94) < 0x8
	.space 0x8 - (. - gText_Rom_2EAE94)
	.endif

	@ src/data/moves_info.h:1451 moves_info_line_1451
	.globl gText_Rom_2EAE9C
gText_Rom_2EAE9C: @ 0x082EAE9C
	.string "ふぶき"
	.byte EOS
	.if (. - gText_Rom_2EAE9C) > 0x4
	.error "gText_Rom_2EAE9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE9C) < 0x4
	.space 0x4 - (. - gText_Rom_2EAE9C)
	.endif
	.incbin "baserom.gba", 0x2eaea0, 0x4

	@ src/data/moves_info.h:1477 moves_info_line_1477
	.globl gText_Rom_2EAEA4
gText_Rom_2EAEA4: @ 0x082EAEA4
	.string "サイケこうせん"
	.byte EOS
	.if (. - gText_Rom_2EAEA4) > 0x8
	.error "gText_Rom_2EAEA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEA4) < 0x8
	.space 0x8 - (. - gText_Rom_2EAEA4)
	.endif

	@ src/data/moves_info.h:1501 moves_info_line_1501
	.globl gText_Rom_2EAEAC
gText_Rom_2EAEAC: @ 0x082EAEAC
	.string "バブルこうせん"
	.byte EOS
	.if (. - gText_Rom_2EAEAC) > 0x8
	.error "gText_Rom_2EAEAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEAC) < 0x8
	.space 0x8 - (. - gText_Rom_2EAEAC)
	.endif

	@ src/data/moves_info.h:1525 moves_info_line_1525
	.globl gText_Rom_2EAEB4
gText_Rom_2EAEB4: @ 0x082EAEB4
	.string "オーロラビーム"
	.byte EOS
	.if (. - gText_Rom_2EAEB4) > 0x8
	.error "gText_Rom_2EAEB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEB4) < 0x8
	.space 0x8 - (. - gText_Rom_2EAEB4)
	.endif

	@ src/data/moves_info.h:1549 moves_info_line_1549
	.globl gText_Rom_2EAEBC
gText_Rom_2EAEBC: @ 0x082EAEBC
	.string "はかいこうせん"
	.byte EOS
	.if (. - gText_Rom_2EAEBC) > 0x8
	.error "gText_Rom_2EAEBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEBC) < 0x8
	.space 0x8 - (. - gText_Rom_2EAEBC)
	.endif

	@ src/data/moves_info.h:1574 moves_info_line_1574
	.globl gText_Rom_2EAEC4
gText_Rom_2EAEC4: @ 0x082EAEC4
	.string "つつく"
	.byte EOS
	.if (. - gText_Rom_2EAEC4) > 0x4
	.error "gText_Rom_2EAEC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEC4) < 0x4
	.space 0x4 - (. - gText_Rom_2EAEC4)
	.endif
	.incbin "baserom.gba", 0x2eaec8, 0x4

	@ src/data/moves_info.h:1594 moves_info_line_1594
	.globl gText_Rom_2EAECC
gText_Rom_2EAECC: @ 0x082EAECC
	.string "ドリルくちばし"
	.byte EOS
	.if (. - gText_Rom_2EAECC) > 0x8
	.error "gText_Rom_2EAECC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAECC) < 0x8
	.space 0x8 - (. - gText_Rom_2EAECC)
	.endif

	@ src/data/moves_info.h:1615 moves_info_line_1615
	.globl gText_Rom_2EAED4
gText_Rom_2EAED4: @ 0x082EAED4
	.string "じごくぐるま"
	.byte EOS
	.if (. - gText_Rom_2EAED4) > 0x7
	.error "gText_Rom_2EAED4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAED4) < 0x7
	.space 0x7 - (. - gText_Rom_2EAED4)
	.endif
	.incbin "baserom.gba", 0x2eaedb, 0x1

	@ src/data/moves_info.h:1637 moves_info_line_1637
	.globl gText_Rom_2EAEDC
gText_Rom_2EAEDC: @ 0x082EAEDC
	.string "けたぐり"
	.byte EOS
	.if (. - gText_Rom_2EAEDC) > 0x5
	.error "gText_Rom_2EAEDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEDC) < 0x5
	.space 0x5 - (. - gText_Rom_2EAEDC)
	.endif
	.incbin "baserom.gba", 0x2eaee1, 0x3

	@ src/data/moves_info.h:1666 moves_info_line_1666
	.globl gText_Rom_2EAEE4
gText_Rom_2EAEE4: @ 0x082EAEE4
	.string "カウンター"
	.byte EOS
	.if (. - gText_Rom_2EAEE4) > 0x6
	.error "gText_Rom_2EAEE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEE4) < 0x6
	.space 0x6 - (. - gText_Rom_2EAEE4)
	.endif
	.incbin "baserom.gba", 0x2eaeea, 0x2

	@ src/data/moves_info.h:1698 moves_info_line_1698
	.globl gText_Rom_2EAEEC
gText_Rom_2EAEEC: @ 0x082EAEEC
	.string "ちきゅうなげ"
	.byte EOS
	.if (. - gText_Rom_2EAEEC) > 0x7
	.error "gText_Rom_2EAEEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEEC) < 0x7
	.space 0x7 - (. - gText_Rom_2EAEEC)
	.endif
	.incbin "baserom.gba", 0x2eaef3, 0x1

	@ src/data/moves_info.h:1720 moves_info_line_1720
	.globl gText_Rom_2EAEF4
gText_Rom_2EAEF4: @ 0x082EAEF4
	.string "かいりき"
	.byte EOS
	.if (. - gText_Rom_2EAEF4) > 0x5
	.error "gText_Rom_2EAEF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEF4) < 0x5
	.space 0x5 - (. - gText_Rom_2EAEF4)
	.endif
	.incbin "baserom.gba", 0x2eaef9, 0x3

	@ src/data/moves_info.h:1741 moves_info_line_1741
	.globl gText_Rom_2EAEFC
gText_Rom_2EAEFC: @ 0x082EAEFC
	.string "すいとる"
	.byte EOS
	.if (. - gText_Rom_2EAEFC) > 0x5
	.error "gText_Rom_2EAEFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEFC) < 0x5
	.space 0x5 - (. - gText_Rom_2EAEFC)
	.endif
	.incbin "baserom.gba", 0x2eaf01, 0x3

	@ src/data/moves_info.h:1763 moves_info_line_1763
	.globl gText_Rom_2EAF04
gText_Rom_2EAF04: @ 0x082EAF04
	.string "メガドレイン"
	.byte EOS
	.if (. - gText_Rom_2EAF04) > 0x7
	.error "gText_Rom_2EAF04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF04) < 0x7
	.space 0x7 - (. - gText_Rom_2EAF04)
	.endif
	.incbin "baserom.gba", 0x2eaf0b, 0x1

	@ src/data/moves_info.h:1786 moves_info_line_1786
	.globl gText_Rom_2EAF0C
gText_Rom_2EAF0C: @ 0x082EAF0C
	.string "やどりぎのタネ"
	.byte EOS
	.if (. - gText_Rom_2EAF0C) > 0x8
	.error "gText_Rom_2EAF0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF0C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAF0C)
	.endif

	@ src/data/moves_info.h:1808 moves_info_line_1808
	.globl gText_Rom_2EAF14
gText_Rom_2EAF14: @ 0x082EAF14
	.string "せいちょう"
	.byte EOS
	.if (. - gText_Rom_2EAF14) > 0x6
	.error "gText_Rom_2EAF14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF14) < 0x6
	.space 0x6 - (. - gText_Rom_2EAF14)
	.endif
	.incbin "baserom.gba", 0x2eaf1a, 0x2

	@ src/data/moves_info.h:1837 moves_info_line_1837
	.globl gText_Rom_2EAF1C
gText_Rom_2EAF1C: @ 0x082EAF1C
	.string "はっぱカッター"
	.byte EOS
	.if (. - gText_Rom_2EAF1C) > 0x8
	.error "gText_Rom_2EAF1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF1C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAF1C)
	.endif

	@ src/data/moves_info.h:1859 moves_info_line_1859
	.globl gText_Rom_2EAF24
gText_Rom_2EAF24: @ 0x082EAF24
	.string "ソーラービーム"
	.byte EOS
	.if (. - gText_Rom_2EAF24) > 0x8
	.error "gText_Rom_2EAF24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF24) < 0x8
	.space 0x8 - (. - gText_Rom_2EAF24)
	.endif

	@ src/data/moves_info.h:1882 moves_info_line_1882
	.globl gText_Rom_2EAF2C
gText_Rom_2EAF2C: @ 0x082EAF2C
	.string "どくのこな"
	.byte EOS
	.if (. - gText_Rom_2EAF2C) > 0x6
	.error "gText_Rom_2EAF2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF2C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAF2C)
	.endif
	.incbin "baserom.gba", 0x2eaf32, 0x2

	@ src/data/moves_info.h:1906 moves_info_line_1906
	.globl gText_Rom_2EAF34
gText_Rom_2EAF34: @ 0x082EAF34
	.string "しびれごな"
	.byte EOS
	.if (. - gText_Rom_2EAF34) > 0x6
	.error "gText_Rom_2EAF34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF34) < 0x6
	.space 0x6 - (. - gText_Rom_2EAF34)
	.endif
	.incbin "baserom.gba", 0x2eaf3a, 0x2

	@ src/data/moves_info.h:1930 moves_info_line_1930
	.globl gText_Rom_2EAF3C
gText_Rom_2EAF3C: @ 0x082EAF3C
	.string "ねむりごな"
	.byte EOS
	.if (. - gText_Rom_2EAF3C) > 0x6
	.error "gText_Rom_2EAF3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF3C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAF3C)
	.endif
	.incbin "baserom.gba", 0x2eaf42, 0x2

	@ src/data/moves_info.h:1954 moves_info_line_1954
	.globl gText_Rom_2EAF44
gText_Rom_2EAF44: @ 0x082EAF44
	.string "はなびらのまい"
	.byte EOS
	.if (. - gText_Rom_2EAF44) > 0x8
	.error "gText_Rom_2EAF44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF44) < 0x8
	.space 0x8 - (. - gText_Rom_2EAF44)
	.endif

	@ src/data/moves_info.h:1987 moves_info_line_1987
	.globl gText_Rom_2EAF4C
gText_Rom_2EAF4C: @ 0x082EAF4C
	.string "いとをはく"
	.byte EOS
	.if (. - gText_Rom_2EAF4C) > 0x6
	.error "gText_Rom_2EAF4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF4C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAF4C)
	.endif
	.incbin "baserom.gba", 0x2eaf52, 0x2

	@ src/data/moves_info.h:2012 moves_info_line_2012
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EAF54
gText_Rom_2EAF54: @ 0x082EAF54
	.string "りゅうのいかり"
	.byte EOS
	.if (. - gText_Rom_2EAF54) != 0x8
	.error "gText_Rom_2EAF54 must retain its original byte length"
	.endif
	.globl gText_Rom_2EAF58
	.set gText_Rom_2EAF58, gText_Rom_2EAF54 + 0x4

	@ src/data/moves_info.h:2034 moves_info_line_2034
	.globl gText_Rom_2EAF5C
gText_Rom_2EAF5C: @ 0x082EAF5C
	.string "ほのおのうず"
	.byte EOS
	.if (. - gText_Rom_2EAF5C) > 0x7
	.error "gText_Rom_2EAF5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF5C) < 0x7
	.space 0x7 - (. - gText_Rom_2EAF5C)
	.endif
	.incbin "baserom.gba", 0x2eaf63, 0x1

	@ src/data/moves_info.h:2059 moves_info_line_2059
	.globl gText_Rom_2EAF64
gText_Rom_2EAF64: @ 0x082EAF64
	.string "でんきショック"
	.byte EOS
	.if (. - gText_Rom_2EAF64) > 0x8
	.error "gText_Rom_2EAF64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF64) < 0x8
	.space 0x8 - (. - gText_Rom_2EAF64)
	.endif

	@ src/data/moves_info.h:2082 moves_info_line_2082
	.globl gText_Rom_2EAF6C
gText_Rom_2EAF6C: @ 0x082EAF6C
	.string "10まんボルト"
	.byte EOS
	.if (. - gText_Rom_2EAF6C) > 0x8
	.error "gText_Rom_2EAF6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF6C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAF6C)
	.endif

	@ src/data/moves_info.h:2106 moves_info_line_2106
	.globl gText_Rom_2EAF74
gText_Rom_2EAF74: @ 0x082EAF74
	.string "でんじは"
	.byte EOS
	.if (. - gText_Rom_2EAF74) > 0x5
	.error "gText_Rom_2EAF74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF74) < 0x5
	.space 0x5 - (. - gText_Rom_2EAF74)
	.endif
	.incbin "baserom.gba", 0x2eaf79, 0x3

	@ src/data/moves_info.h:2129 moves_info_line_2129 (+1 aliases)
	.globl gText_Rom_2EAF7C
gText_Rom_2EAF7C: @ 0x082EAF7C
	.string "かみなり"
	.byte EOS
	.if (. - gText_Rom_2EAF7C) > 0x5
	.error "gText_Rom_2EAF7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF7C) < 0x5
	.space 0x5 - (. - gText_Rom_2EAF7C)
	.endif
	.incbin "baserom.gba", 0x2eaf81, 0x3

	@ src/data/moves_info.h:2156 moves_info_line_2156
	.globl gText_Rom_2EAF84
gText_Rom_2EAF84: @ 0x082EAF84
	.string "いわおとし"
	.byte EOS
	.if (. - gText_Rom_2EAF84) > 0x6
	.error "gText_Rom_2EAF84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF84) < 0x6
	.space 0x6 - (. - gText_Rom_2EAF84)
	.endif
	.incbin "baserom.gba", 0x2eaf8a, 0x2

	@ src/data/moves_info.h:2175 moves_info_line_2175
	.globl gText_Rom_2EAF8C
gText_Rom_2EAF8C: @ 0x082EAF8C
	.string "じしん"
	.byte EOS
	.if (. - gText_Rom_2EAF8C) > 0x4
	.error "gText_Rom_2EAF8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF8C) < 0x4
	.space 0x4 - (. - gText_Rom_2EAF8C)
	.endif
	.incbin "baserom.gba", 0x2eaf90, 0x4

	@ src/data/moves_info.h:2198 moves_info_line_2198
	.globl gText_Rom_2EAF94
gText_Rom_2EAF94: @ 0x082EAF94
	.string "じわれ"
	.byte EOS
	.if (. - gText_Rom_2EAF94) > 0x4
	.error "gText_Rom_2EAF94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF94) < 0x4
	.space 0x4 - (. - gText_Rom_2EAF94)
	.endif
	.incbin "baserom.gba", 0x2eaf98, 0x4

	@ src/data/moves_info.h:2220 moves_info_line_2220
	.globl gText_Rom_2EAF9C
gText_Rom_2EAF9C: @ 0x082EAF9C
	.string "あなをほる"
	.byte EOS
	.if (. - gText_Rom_2EAF9C) > 0x6
	.error "gText_Rom_2EAF9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF9C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAF9C)
	.endif
	.incbin "baserom.gba", 0x2eafa2, 0x2

	@ src/data/moves_info.h:2252 moves_info_line_2252
	.globl gText_Rom_2EAFA4
gText_Rom_2EAFA4: @ 0x082EAFA4
	.string "どくどく"
	.byte EOS
	.if (. - gText_Rom_2EAFA4) > 0x5
	.error "gText_Rom_2EAFA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFA4) < 0x5
	.space 0x5 - (. - gText_Rom_2EAFA4)
	.endif
	.incbin "baserom.gba", 0x2eafa9, 0x3

	@ src/data/moves_info.h:2276 moves_info_line_2276
	.globl gText_Rom_2EAFAC
gText_Rom_2EAFAC: @ 0x082EAFAC
	.string "ねんりき"
	.byte EOS
	.if (. - gText_Rom_2EAFAC) > 0x5
	.error "gText_Rom_2EAFAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFAC) < 0x5
	.space 0x5 - (. - gText_Rom_2EAFAC)
	.endif
	.incbin "baserom.gba", 0x2eafb1, 0x3

	@ src/data/moves_info.h:2299 moves_info_line_2299
	.globl gText_Rom_2EAFB4
gText_Rom_2EAFB4: @ 0x082EAFB4
	.string "サイコキネシス"
	.byte EOS
	.if (. - gText_Rom_2EAFB4) > 0x8
	.error "gText_Rom_2EAFB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFB4) < 0x8
	.space 0x8 - (. - gText_Rom_2EAFB4)
	.endif

	@ src/data/moves_info.h:2324 moves_info_line_2324
	.globl gText_Rom_2EAFBC
gText_Rom_2EAFBC: @ 0x082EAFBC
	.string "さいみんじゅつ"
	.byte EOS
	.if (. - gText_Rom_2EAFBC) > 0x8
	.error "gText_Rom_2EAFBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFBC) < 0x8
	.space 0x8 - (. - gText_Rom_2EAFBC)
	.endif

	@ src/data/moves_info.h:2347 moves_info_line_2347
	.globl gText_Rom_2EAFC4
gText_Rom_2EAFC4: @ 0x082EAFC4
	.string "ヨガのポーズ"
	.byte EOS
	.if (. - gText_Rom_2EAFC4) > 0x7
	.error "gText_Rom_2EAFC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFC4) < 0x7
	.space 0x7 - (. - gText_Rom_2EAFC4)
	.endif
	.incbin "baserom.gba", 0x2eafcb, 0x1

	@ src/data/moves_info.h:2375 moves_info_line_2375
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EAFCC
gText_Rom_2EAFCC: @ 0x082EAFCC
	.string "こうそくいどう"
	.byte EOS
	.if (. - gText_Rom_2EAFCC) != 0x8
	.error "gText_Rom_2EAFCC must retain its original byte length"
	.endif
	.globl gText_Rom_2EAFD0
	.set gText_Rom_2EAFD0, gText_Rom_2EAFCC + 0x4

	@ src/data/moves_info.h:2403 moves_info_line_2403
	.globl gText_Rom_2EAFD4
gText_Rom_2EAFD4: @ 0x082EAFD4
	.string "でんこうせっか"
	.byte EOS
	.if (. - gText_Rom_2EAFD4) > 0x8
	.error "gText_Rom_2EAFD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFD4) < 0x8
	.space 0x8 - (. - gText_Rom_2EAFD4)
	.endif


@==============================================================================
@ Source: data/text/rodata/battle/29_battle_data.inc
@==============================================================================

	@ src/battle_debug.c:363 battle_debug_line_363 (+1 aliases)
	.globl gText_Rom_2EAFDC
gText_Rom_2EAFDC: @ 0x082EAFDC
	.string "いかり"
	.byte EOS
	.if (. - gText_Rom_2EAFDC) > 0x4
	.error "gText_Rom_2EAFDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFDC) < 0x4
	.space 0x4 - (. - gText_Rom_2EAFDC)
	.endif
	.incbin "baserom.gba", 0x2eafe0, 0x4


@==============================================================================
@ Source: data/text/rodata/moves/30_move_data.inc
@==============================================================================

	@ src/data/moves_info.h:2448 moves_info_line_2448
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EAFE4
gText_Rom_2EAFE4: @ 0x082EAFE4
	.string "テレポート"
	.byte EOS
	.if (. - gText_Rom_2EAFE4) != 0x6
	.error "gText_Rom_2EAFE4 must retain its original byte length"
	.endif
	.globl gText_Rom_2EAFE5
	.set gText_Rom_2EAFE5, gText_Rom_2EAFE4 + 0x1
	.incbin "baserom.gba", 0x2eafea, 0x2

	@ src/data/moves_info.h:2470 moves_info_line_2470
	.globl gText_Rom_2EAFEC
gText_Rom_2EAFEC: @ 0x082EAFEC
	.string "ナイトヘッド"
	.byte EOS
	.if (. - gText_Rom_2EAFEC) > 0x7
	.error "gText_Rom_2EAFEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFEC) < 0x7
	.space 0x7 - (. - gText_Rom_2EAFEC)
	.endif
	.incbin "baserom.gba", 0x2eaff3, 0x1

	@ src/data/moves_info.h:2490 moves_info_line_2490
	.globl gText_Rom_2EAFF4
gText_Rom_2EAFF4: @ 0x082EAFF4
	.string "ものまね"
	.byte EOS
	.if (. - gText_Rom_2EAFF4) > 0x5
	.error "gText_Rom_2EAFF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFF4) < 0x5
	.space 0x5 - (. - gText_Rom_2EAFF4)
	.endif
	.incbin "baserom.gba", 0x2eaff9, 0x3

	@ src/data/moves_info.h:2519 moves_info_line_2519
	.globl gText_Rom_2EAFFC
gText_Rom_2EAFFC: @ 0x082EAFFC
	.string "いやなおと"
	.byte EOS
	.if (. - gText_Rom_2EAFFC) > 0x6
	.error "gText_Rom_2EAFFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFFC) < 0x6
	.space 0x6 - (. - gText_Rom_2EAFFC)
	.endif
	.incbin "baserom.gba", 0x2eb002, 0x2

	@ src/data/moves_info.h:2547 moves_info_line_2547
	.globl gText_Rom_2EB004
gText_Rom_2EB004: @ 0x082EB004
	.string "かげぶんしん"
	.byte EOS
	.if (. - gText_Rom_2EB004) > 0x7
	.error "gText_Rom_2EB004 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB004) < 0x7
	.space 0x7 - (. - gText_Rom_2EB004)
	.endif
	.incbin "baserom.gba", 0x2eb00b, 0x1

	@ src/data/moves_info.h:2575 moves_info_line_2575
	.globl gText_Rom_2EB00C
gText_Rom_2EB00C: @ 0x082EB00C
	.string "じこさいせい"
	.byte EOS
	.if (. - gText_Rom_2EB00C) > 0x7
	.error "gText_Rom_2EB00C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB00C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB00C)
	.endif
	.incbin "baserom.gba", 0x2eb013, 0x1

	@ src/data/moves_info.h:2606 moves_info_line_2606
	.globl gText_Rom_2EB014
gText_Rom_2EB014: @ 0x082EB014
	.string "かたくなる"
	.byte EOS
	.if (. - gText_Rom_2EB014) > 0x6
	.error "gText_Rom_2EB014 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB014) < 0x6
	.space 0x6 - (. - gText_Rom_2EB014)
	.endif
	.incbin "baserom.gba", 0x2eb01a, 0x2


@==============================================================================
@ Source: data/text/rodata/battle/31_battle_data.inc
@==============================================================================

	@ src/battle_debug.c:380 battle_debug_line_380 (+1 aliases)
	.globl gText_Rom_2EB01C
gText_Rom_2EB01C: @ 0x082EB01C
	.string "ちいさくなる"
	.byte EOS
	.if (. - gText_Rom_2EB01C) > 0x7
	.error "gText_Rom_2EB01C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB01C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB01C)
	.endif
	.incbin "baserom.gba", 0x2eb023, 0x1


@==============================================================================
@ Source: data/text/rodata/moves/32_move_data.inc
@==============================================================================

	@ src/data/moves_info.h:2662 moves_info_line_2662
	.globl gText_Rom_2EB024
gText_Rom_2EB024: @ 0x082EB024
	.string "えんまく"
	.byte EOS
	.if (. - gText_Rom_2EB024) > 0x5
	.error "gText_Rom_2EB024 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB024) < 0x5
	.space 0x5 - (. - gText_Rom_2EB024)
	.endif
	.incbin "baserom.gba", 0x2eb029, 0x3

	@ src/data/moves_info.h:2688 moves_info_line_2688
	.globl gText_Rom_2EB02C
gText_Rom_2EB02C: @ 0x082EB02C
	.string "あやしいひかり"
	.byte EOS
	.if (. - gText_Rom_2EB02C) > 0x8
	.error "gText_Rom_2EB02C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB02C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB02C)
	.endif

	@ src/data/moves_info.h:2710 moves_info_line_2710
	.globl gText_Rom_2EB034
gText_Rom_2EB034: @ 0x082EB034
	.string "からにこもる"
	.byte EOS
	.if (. - gText_Rom_2EB034) > 0x7
	.error "gText_Rom_2EB034 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB034) < 0x7
	.space 0x7 - (. - gText_Rom_2EB034)
	.endif
	.incbin "baserom.gba", 0x2eb03b, 0x1


@==============================================================================
@ Source: data/text/rodata/battle/33_battle_data.inc
@==============================================================================

	@ src/battle_debug.c:362 battle_debug_line_362 (+1 aliases)
	.globl gText_Rom_2EB03C
gText_Rom_2EB03C: @ 0x082EB03C
	.string "まるくなる"
	.byte EOS
	.if (. - gText_Rom_2EB03C) > 0x6
	.error "gText_Rom_2EB03C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB03C) < 0x6
	.space 0x6 - (. - gText_Rom_2EB03C)
	.endif
	.incbin "baserom.gba", 0x2eb042, 0x2


@==============================================================================
@ Source: data/text/rodata/moves/34_move_data.inc
@==============================================================================

	@ src/data/moves_info.h:2766 moves_info_line_2766
	.globl gText_Rom_2EB044
gText_Rom_2EB044: @ 0x082EB044
	.string "バリアー"
	.byte EOS
	.if (. - gText_Rom_2EB044) > 0x5
	.error "gText_Rom_2EB044 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB044) < 0x5
	.space 0x5 - (. - gText_Rom_2EB044)
	.endif
	.incbin "baserom.gba", 0x2eb049, 0x3


@==============================================================================
@ Source: data/text/rodata/battle/35_battle_data.inc
@==============================================================================

	@ src/battle_debug.c:410 battle_debug_line_410 (+1 aliases)
	.globl gText_Rom_2EB04C
gText_Rom_2EB04C: @ 0x082EB04C
	.string "ひかりのかべ"
	.byte EOS
	.if (. - gText_Rom_2EB04C) > 0x7
	.error "gText_Rom_2EB04C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB04C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB04C)
	.endif
	.incbin "baserom.gba", 0x2eb053, 0x1


@==============================================================================
@ Source: data/text/rodata/moves/36_move_data.inc
@==============================================================================

	@ src/data/moves_info.h:2818 moves_info_line_2818
	.globl gText_Rom_2EB054
gText_Rom_2EB054: @ 0x082EB054
	.string "くろいきり"
	.byte EOS
	.if (. - gText_Rom_2EB054) > 0x6
	.error "gText_Rom_2EB054 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB054) < 0x6
	.space 0x6 - (. - gText_Rom_2EB054)
	.endif
	.incbin "baserom.gba", 0x2eb05a, 0x2


@==============================================================================
@ Source: data/text/rodata/battle/37_battle_data.inc
@==============================================================================

	@ src/battle_debug.c:409 battle_debug_line_409 (+1 aliases)
	.globl gText_Rom_2EB05C
gText_Rom_2EB05C: @ 0x082EB05C
	.string "リフレクター"
	.byte EOS
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
	.string "きあいだめ"
	.byte EOS
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
	.string "がまん"
	.byte EOS
	.if (. - gText_Rom_2EB06C) > 0x4
	.error "gText_Rom_2EB06C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB06C) < 0x4
	.space 0x4 - (. - gText_Rom_2EB06C)
	.endif
	.incbin "baserom.gba", 0x2eb070, 0x4


@==============================================================================
@ Source: data/text/rodata/moves/38_move_data.inc
@==============================================================================

	@ src/data/moves_info.h:2922 moves_info_line_2922
	.globl gText_Rom_2EB074
gText_Rom_2EB074: @ 0x082EB074
	.string "ゆびをふる"
	.byte EOS
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
	.string "オウムがえし"
	.byte EOS
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
	.string "じばく"
	.byte EOS
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
	.string "タマゴばくだん"
	.byte EOS
	.if (. - gText_Rom_2EB08C) > 0x8
	.error "gText_Rom_2EB08C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB08C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB08C)
	.endif

	@ src/data/moves_info.h:3025 moves_info_line_3025
	.globl gText_Rom_2EB094
gText_Rom_2EB094: @ 0x082EB094
	.string "したでなめる"
	.byte EOS
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
	.string "スモッグ"
	.byte EOS
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
	.string "ヘドロこうげき"
	.byte EOS
	.if (. - gText_Rom_2EB0A4) != 0x8
	.error "gText_Rom_2EB0A4 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB0A7
	.set gText_Rom_2EB0A7, gText_Rom_2EB0A4 + 0x3

	@ src/data/moves_info.h:3096 moves_info_line_3096
	.globl gText_Rom_2EB0AC
gText_Rom_2EB0AC: @ 0x082EB0AC
	.string "ホネこんぼう"
	.byte EOS
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
	.string "だいもんじ"
	.byte EOS
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
	.string "たきのぼり"
	.byte EOS
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
	.string "からではさむ"
	.byte EOS
	.if (. - gText_Rom_2EB0C4) != 0x7
	.error "gText_Rom_2EB0C4 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB0C7
	.set gText_Rom_2EB0C7, gText_Rom_2EB0C4 + 0x3
	.incbin "baserom.gba", 0x2eb0cb, 0x1

	@ src/data/moves_info.h:3196 moves_info_line_3196
	.globl gText_Rom_2EB0CC
gText_Rom_2EB0CC: @ 0x082EB0CC
	.string "スピードスター"
	.byte EOS
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
	.string "ロケットずつき"
	.byte EOS
	.if (. - gText_Rom_2EB0D4) != 0x8
	.error "gText_Rom_2EB0D4 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB0D8
	.set gText_Rom_2EB0D8, gText_Rom_2EB0D4 + 0x4

	@ src/data/moves_info.h:3248 moves_info_line_3248
	.globl gText_Rom_2EB0DC
gText_Rom_2EB0DC: @ 0x082EB0DC
	.string "とげキャノン"
	.byte EOS
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
	.string "からみつく"
	.byte EOS
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
	.string "ドわすれ"
	.byte EOS
	.if (. - gText_Rom_2EB0EC) != 0x5
	.error "gText_Rom_2EB0EC must retain its original byte length"
	.endif
	.globl gText_Rom_2EB0ED
	.set gText_Rom_2EB0ED, gText_Rom_2EB0EC + 0x1
	.incbin "baserom.gba", 0x2eb0f1, 0x3

	@ src/data/moves_info.h:3321 moves_info_line_3321
	.globl gText_Rom_2EB0F4
gText_Rom_2EB0F4: @ 0x082EB0F4
	.string "スプーンまげ"
	.byte EOS
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
	.string "タマゴうみ"
	.byte EOS
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
	.string "とびひざげり"
	.byte EOS
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
	.string "へびにらみ"
	.byte EOS
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
	.string "ゆめくい"
	.byte EOS
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
	.string "どくガス"
	.byte EOS
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
	.string "たまなげ"
	.byte EOS
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
	.string "きゅうけつ"
	.byte EOS
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
	.string "あくまのキッス"
	.byte EOS
	.if (. - gText_Rom_2EB134) > 0x8
	.error "gText_Rom_2EB134 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB134) < 0x8
	.space 0x8 - (. - gText_Rom_2EB134)
	.endif

	@ src/data/moves_info.h:3546 moves_info_line_3546
	.globl gText_Rom_2EB13C
gText_Rom_2EB13C: @ 0x082EB13C
	.string "ゴッドバード"
	.byte EOS
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
	.string "へんしん"
	.byte EOS
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
	.string "ピヨピヨパンチ"
	.byte EOS
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
	.string "キノコのほうし"
	.byte EOS
	.if (. - gText_Rom_2EB15C) != 0x8
	.error "gText_Rom_2EB15C must retain its original byte length"
	.endif
	.globl gText_Rom_2EB160
	.set gText_Rom_2EB160, gText_Rom_2EB15C + 0x4

	@ src/data/moves_info.h:3682 moves_info_line_3682
	.globl gText_Rom_2EB164
gText_Rom_2EB164: @ 0x082EB164
	.string "フラッシュ"
	.byte EOS
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
	.string "サイコウェーブ"
	.byte EOS
	.if (. - gText_Rom_2EB16C) > 0x8
	.error "gText_Rom_2EB16C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB16C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB16C)
	.endif

	@ src/data/moves_info.h:3728 moves_info_line_3728
	.globl gText_Rom_2EB174
gText_Rom_2EB174: @ 0x082EB174
	.string "はねる"
	.byte EOS
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
	.string "とける"
	.byte EOS
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
	.string "クラブハンマー"
	.byte EOS
	.if (. - gText_Rom_2EB184) > 0x8
	.error "gText_Rom_2EB184 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB184) < 0x8
	.space 0x8 - (. - gText_Rom_2EB184)
	.endif

	@ src/data/moves_info.h:3801 moves_info_line_3801
	.globl gText_Rom_2EB18C
gText_Rom_2EB18C: @ 0x082EB18C
	.string "だいばくはつ"
	.byte EOS
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
	.string "みだれひっかき"
	.byte EOS
	.if (. - gText_Rom_2EB194) > 0x8
	.error "gText_Rom_2EB194 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB194) < 0x8
	.space 0x8 - (. - gText_Rom_2EB194)
	.endif

	@ src/data/moves_info.h:3845 moves_info_line_3845
	.globl gText_Rom_2EB19C
gText_Rom_2EB19C: @ 0x082EB19C
	.string "ホネブーメラン"
	.byte EOS
	.if (. - gText_Rom_2EB19C) > 0x8
	.error "gText_Rom_2EB19C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB19C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB19C)
	.endif

	@ src/data/moves_info.h:3866 moves_info_line_3866
	.globl gText_Rom_2EB1A4
gText_Rom_2EB1A4: @ 0x082EB1A4
	.string "ねむる"
	.byte EOS
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
	.string "いわなだれ"
	.byte EOS
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
	.string "ひっさつまえば"
	.byte EOS
	.if (. - gText_Rom_2EB1B4) > 0x8
	.error "gText_Rom_2EB1B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB1B4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB1B4)
	.endif

	@ src/data/moves_info.h:3943 moves_info_line_3943
	.globl gText_Rom_2EB1BC
gText_Rom_2EB1BC: @ 0x082EB1BC
	.string "かくばる"
	.byte EOS
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
	.string "テクスチャー"
	.byte EOS
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
	.string "トライアタック"
	.byte EOS
	.if (. - gText_Rom_2EB1CC) > 0x8
	.error "gText_Rom_2EB1CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB1CC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB1CC)
	.endif

	@ src/data/moves_info.h:4021 moves_info_line_4021
	.globl gText_Rom_2EB1D4
gText_Rom_2EB1D4: @ 0x082EB1D4
	.string "いかりのまえば"
	.byte EOS
	.if (. - gText_Rom_2EB1D4) > 0x8
	.error "gText_Rom_2EB1D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB1D4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB1D4)
	.endif

	@ src/data/moves_info.h:4044 moves_info_line_4044
	.globl gText_Rom_2EB1DC
gText_Rom_2EB1DC: @ 0x082EB1DC
	.string "きりさく"
	.byte EOS
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
	.string "みがわり"
	.byte EOS
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
	.string "わるあがき"
	.byte EOS
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
	.string "スケッチ"
	.byte EOS
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
	.string "トリプルキック"
	.byte EOS
	.if (. - gText_Rom_2EB1FC) > 0x8
	.error "gText_Rom_2EB1FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB1FC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB1FC)
	.endif


@==============================================================================
@ Source: data/text/rodata/battle/39_battle_data.inc
@==============================================================================

	@ src/battle_main.c:379 battle_main_line_379 (+1 aliases)
	.globl gText_Rom_2EB204
gText_Rom_2EB204: @ 0x082EB204
	.string "どろぼう"
	.byte EOS
	.if (. - gText_Rom_2EB204) > 0x5
	.error "gText_Rom_2EB204 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB204) < 0x5
	.space 0x5 - (. - gText_Rom_2EB204)
	.endif
	.incbin "baserom.gba", 0x2eb209, 0x3


@==============================================================================
@ Source: data/text/rodata/moves/40_move_data.inc
@==============================================================================

	@ src/data/moves_info.h:4217 moves_info_line_4217
	.globl gText_Rom_2EB20C
gText_Rom_2EB20C: @ 0x082EB20C
	.string "クモのす"
	.byte EOS
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
	.string "こころのめ"
	.byte EOS
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
	.string "あくむ"
	.byte EOS
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
	.string "かえんぐるま"
	.byte EOS
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
	.string "いびき"
	.byte EOS
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
	.string "のろい"
	.byte EOS
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
	.string "じたばた"
	.byte EOS
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
	.string "テクスチャー2"
	.byte EOS
	.if (. - gText_Rom_2EB244) > 0x8
	.error "gText_Rom_2EB244 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB244) < 0x8
	.space 0x8 - (. - gText_Rom_2EB244)
	.endif

	@ src/data/moves_info.h:4413 moves_info_line_4413
	.globl gText_Rom_2EB24C
gText_Rom_2EB24C: @ 0x082EB24C
	.string "エアロブラスト"
	.byte EOS
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
	.string "わたほうし"
	.byte EOS
	.if (. - gText_Rom_2EB254) != 0x6
	.error "gText_Rom_2EB254 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB256
	.set gText_Rom_2EB256, gText_Rom_2EB254 + 0x2
	.incbin "baserom.gba", 0x2eb25a, 0x2

	@ src/data/moves_info.h:4462 moves_info_line_4462
	.globl gText_Rom_2EB25C
gText_Rom_2EB25C: @ 0x082EB25C
	.string "きしかいせい"
	.byte EOS
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
	.string "うらみ"
	.byte EOS
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
	.string "こなゆき"
	.byte EOS
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
	.string "まもる"
	.byte EOS
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
	.string "マッハパンチ"
	.byte EOS
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
	.string "こわいかお"
	.byte EOS
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
	.string "だましうち"
	.byte EOS
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
	.string "てんしのキッス"
	.byte EOS
	.if (. - gText_Rom_2EB294) > 0x8
	.error "gText_Rom_2EB294 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB294) < 0x8
	.space 0x8 - (. - gText_Rom_2EB294)
	.endif

	@ src/data/moves_info.h:4653 moves_info_line_4653
	.globl gText_Rom_2EB29C
gText_Rom_2EB29C: @ 0x082EB29C
	.string "はらだいこ"
	.byte EOS
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
	.string "ヘドロばくだん"
	.byte EOS
	.if (. - gText_Rom_2EB2A4) > 0x8
	.error "gText_Rom_2EB2A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2A4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB2A4)
	.endif

	@ src/data/moves_info.h:4706 moves_info_line_4706
	.globl gText_Rom_2EB2AC
gText_Rom_2EB2AC: @ 0x082EB2AC
	.string "どろかけ"
	.byte EOS
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
	.string "オクタンほう"
	.byte EOS
	.if (. - gText_Rom_2EB2B4) > 0x7
	.error "gText_Rom_2EB2B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2B4) < 0x7
	.space 0x7 - (. - gText_Rom_2EB2B4)
	.endif
	.incbin "baserom.gba", 0x2eb2bb, 0x1


@==============================================================================
@ Source: data/text/rodata/battle/41_battle_data.inc
@==============================================================================

	@ src/battle_debug.c:400 battle_debug_line_400 (+1 aliases)
	.globl gText_Rom_2EB2BC
gText_Rom_2EB2BC: @ 0x082EB2BC
	.string "まきびし"
	.byte EOS
	.if (. - gText_Rom_2EB2BC) > 0x5
	.error "gText_Rom_2EB2BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2BC) < 0x5
	.space 0x5 - (. - gText_Rom_2EB2BC)
	.endif
	.incbin "baserom.gba", 0x2eb2c1, 0x3


@==============================================================================
@ Source: data/text/rodata/moves/42_move_data.inc
@==============================================================================

	@ src/data/moves_info.h:4783 moves_info_line_4783
	.globl gText_Rom_2EB2C4
gText_Rom_2EB2C4: @ 0x082EB2C4
	.string "でんじほう"
	.byte EOS
	.if (. - gText_Rom_2EB2C4) > 0x6
	.error "gText_Rom_2EB2C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2C4) < 0x6
	.space 0x6 - (. - gText_Rom_2EB2C4)
	.endif
	.incbin "baserom.gba", 0x2eb2ca, 0x2


@==============================================================================
@ Source: data/text/rodata/battle/43_battle_data.inc
@==============================================================================

	@ src/battle_debug.c:367 battle_debug_line_367 (+1 aliases)
	.globl gText_Rom_2EB2CC
gText_Rom_2EB2CC: @ 0x082EB2CC
	.string "みやぶる"
	.byte EOS
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
	.string "みちづれ"
	.byte EOS
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
	.string "ほろびのうた"
	.byte EOS
	.if (. - gText_Rom_2EB2DC) > 0x7
	.error "gText_Rom_2EB2DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2DC) < 0x7
	.space 0x7 - (. - gText_Rom_2EB2DC)
	.endif
	.incbin "baserom.gba", 0x2eb2e3, 0x1


@==============================================================================
@ Source: data/text/rodata/moves/44_move_data.inc
@==============================================================================

	@ src/data/moves_info.h:4883 moves_info_line_4883
	.globl gText_Rom_2EB2E4
gText_Rom_2EB2E4: @ 0x082EB2E4
	.string "こごえるかぜ"
	.byte EOS
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
	.string "みきり"
	.byte EOS
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
	.string "ボーンラッシュ"
	.byte EOS
	.if (. - gText_Rom_2EB2F4) > 0x8
	.error "gText_Rom_2EB2F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2F4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB2F4)
	.endif


@==============================================================================
@ Source: data/text/rodata/battle/45_battle_data.inc
@==============================================================================

	@ src/battle_debug.c:378 battle_debug_line_378 (+1 aliases)
	.globl gText_Rom_2EB2FC
gText_Rom_2EB2FC: @ 0x082EB2FC
	.string "ロックオン"
	.byte EOS
	.if (. - gText_Rom_2EB2FC) > 0x6
	.error "gText_Rom_2EB2FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2FC) < 0x6
	.space 0x6 - (. - gText_Rom_2EB2FC)
	.endif
	.incbin "baserom.gba", 0x2eb302, 0x2


@==============================================================================
@ Source: data/text/rodata/moves/46_move_data.inc
@==============================================================================

	@ src/data/moves_info.h:4983 moves_info_line_4983
	.globl gText_Rom_2EB304
gText_Rom_2EB304: @ 0x082EB304
	.string "げきりん"
	.byte EOS
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
	.string "すなあらし"
	.byte EOS
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
	.string "ギガドレイン"
	.byte EOS
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
	.string "こらえる"
	.byte EOS
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
	.string "あまえる"
	.byte EOS
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
	.string "ころがる"
	.byte EOS
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
	.string "みねうち"
	.byte EOS
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
	.string "いばる"
	.byte EOS
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
	.string "ミルクのみ"
	.byte EOS
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
	.string "スパーク"
	.byte EOS
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
	.string "れんぞくぎり"
	.byte EOS
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
	.string "はがねのつばさ"
	.byte EOS
	.if (. - gText_Rom_2EB35C) > 0x8
	.error "gText_Rom_2EB35C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB35C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB35C)
	.endif

	@ src/data/moves_info.h:5291 moves_info_line_5291
	.globl gText_Rom_2EB364
gText_Rom_2EB364: @ 0x082EB364
	.string "くろいまなざし"
	.byte EOS
	.if (. - gText_Rom_2EB364) > 0x8
	.error "gText_Rom_2EB364 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB364) < 0x8
	.space 0x8 - (. - gText_Rom_2EB364)
	.endif


@==============================================================================
@ Source: data/text/rodata/battle/47_battle_data.inc
@==============================================================================

	@ src/battle_debug.c:459 battle_debug_line_459 (+3 aliases)
	.globl gText_Rom_2EB36C
gText_Rom_2EB36C: @ 0x082EB36C
	.string "メロメロ"
	.byte EOS
	.if (. - gText_Rom_2EB36C) > 0x5
	.error "gText_Rom_2EB36C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB36C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB36C)
	.endif
	.incbin "baserom.gba", 0x2eb371, 0x3


@==============================================================================
@ Source: data/text/rodata/moves/48_move_data.inc
@==============================================================================

	@ src/data/moves_info.h:5337 moves_info_line_5337
	.globl gText_Rom_2EB374
gText_Rom_2EB374: @ 0x082EB374
	.string "ねごと"
	.byte EOS
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
	.string "いやしのすず"
	.byte EOS
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
	.string "おんがえし"
	.byte EOS
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
	.string "プレゼント"
	.byte EOS
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
	.string "やつあたり"
	.byte EOS
	.if (. - gText_Rom_2EB394) > 0x6
	.error "gText_Rom_2EB394 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB394) < 0x6
	.space 0x6 - (. - gText_Rom_2EB394)
	.endif
	.incbin "baserom.gba", 0x2eb39a, 0x2


@==============================================================================
@ Source: data/text/rodata/battle/49_battle_data.inc
@==============================================================================

	@ src/battle_debug.c:411 battle_debug_line_411 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB39C
gText_Rom_2EB39C: @ 0x082EB39C
	.string "しんぴのまもり"
	.byte EOS
	.if (. - gText_Rom_2EB39C) != 0x8
	.error "gText_Rom_2EB39C must retain its original byte length"
	.endif
	.globl gText_Rom_2EB3A0
	.set gText_Rom_2EB3A0, gText_Rom_2EB39C + 0x4


@==============================================================================
@ Source: data/text/rodata/moves/50_move_data.inc
@==============================================================================

	@ src/data/moves_info.h:5480 moves_info_line_5480
	.globl gText_Rom_2EB3A4
gText_Rom_2EB3A4: @ 0x082EB3A4
	.string "いたみわけ"
	.byte EOS
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
	.string "せいなるほのお"
	.byte EOS
	.if (. - gText_Rom_2EB3AC) != 0x8
	.error "gText_Rom_2EB3AC must retain its original byte length"
	.endif
	.globl gText_Rom_2EB3B0
	.set gText_Rom_2EB3B0, gText_Rom_2EB3AC + 0x4

	@ src/data/moves_info.h:5526 moves_info_line_5526
	.globl gText_Rom_2EB3B4
gText_Rom_2EB3B4: @ 0x082EB3B4
	.string "マグニチュード"
	.byte EOS
	.if (. - gText_Rom_2EB3B4) > 0x8
	.error "gText_Rom_2EB3B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB3B4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB3B4)
	.endif

	@ src/data/moves_info.h:5547 moves_info_line_5547
	.globl gText_Rom_2EB3BC
gText_Rom_2EB3BC: @ 0x082EB3BC
	.string "ばくれつパンチ"
	.byte EOS
	.if (. - gText_Rom_2EB3BC) > 0x8
	.error "gText_Rom_2EB3BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB3BC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB3BC)
	.endif

	@ src/data/moves_info.h:5573 moves_info_line_5573
	.globl gText_Rom_2EB3C4
gText_Rom_2EB3C4: @ 0x082EB3C4
	.string "メガホーン"
	.byte EOS
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
	.string "りゅうのいぶき"
	.byte EOS
	.if (. - gText_Rom_2EB3CC) > 0x8
	.error "gText_Rom_2EB3CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB3CC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB3CC)
	.endif

	@ src/data/moves_info.h:5619 moves_info_line_5619
	.globl gText_Rom_2EB3D4
gText_Rom_2EB3D4: @ 0x082EB3D4
	.string "バトンタッチ"
	.byte EOS
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
	.string "アンコール"
	.byte EOS
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
	.string "おいうち"
	.byte EOS
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
	.string "こうそくスピン"
	.byte EOS
	.if (. - gText_Rom_2EB3EC) > 0x8
	.error "gText_Rom_2EB3EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB3EC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB3EC)
	.endif

	@ src/data/moves_info.h:5717 moves_info_line_5717
	.globl gText_Rom_2EB3F4
gText_Rom_2EB3F4: @ 0x082EB3F4
	.string "あまいかおり"
	.byte EOS
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
	.string "アイアンテール"
	.byte EOS
	.if (. - gText_Rom_2EB3FC) > 0x8
	.error "gText_Rom_2EB3FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB3FC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB3FC)
	.endif

	@ src/data/moves_info.h:5769 moves_info_line_5769
	.globl gText_Rom_2EB404
gText_Rom_2EB404: @ 0x082EB404
	.string "メタルクロー"
	.byte EOS
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
	.string "あてみなげ"
	.byte EOS
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
	.string "あさのひざし"
	.byte EOS
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
	.string "こうごうせい"
	.byte EOS
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
	.string "つきのひかり"
	.byte EOS
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
	.string "めざめるパワー"
	.byte EOS
	.if (. - gText_Rom_2EB42C) > 0x8
	.error "gText_Rom_2EB42C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB42C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB42C)
	.endif

	@ src/data/moves_info.h:5912 moves_info_line_5912
	.globl gText_Rom_2EB434
gText_Rom_2EB434: @ 0x082EB434
	.string "クロスチョップ"
	.byte EOS
	.if (. - gText_Rom_2EB434) > 0x8
	.error "gText_Rom_2EB434 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB434) < 0x8
	.space 0x8 - (. - gText_Rom_2EB434)
	.endif

	@ src/data/moves_info.h:5934 moves_info_line_5934
	.globl gText_Rom_2EB43C
gText_Rom_2EB43C: @ 0x082EB43C
	.string "たつまき"
	.byte EOS
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
	.string "あまごい"
	.byte EOS
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
	.string "にほんばれ"
	.byte EOS
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
	.string "かみくだく"
	.byte EOS
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
	.string "ミラーコート"
	.byte EOS
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
	.string "じこあんじ"
	.byte EOS
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
	.string "しんそく"
	.byte EOS
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
	.string "げんしのちから"
	.byte EOS
	.if (. - gText_Rom_2EB474) != 0x8
	.error "gText_Rom_2EB474 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB478
	.set gText_Rom_2EB478, gText_Rom_2EB474 + 0x4

	@ src/data/moves_info.h:6143 moves_info_line_6143
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB47C
gText_Rom_2EB47C: @ 0x082EB47C
	.string "シャドーボール"
	.byte EOS
	.if (. - gText_Rom_2EB47C) != 0x8
	.error "gText_Rom_2EB47C must retain its original byte length"
	.endif
	.globl gText_Rom_2EB480
	.set gText_Rom_2EB480, gText_Rom_2EB47C + 0x4

	@ src/data/moves_info.h:6169 moves_info_line_6169
	.globl gText_Rom_2EB484
gText_Rom_2EB484: @ 0x082EB484
	.string "みらいよち"
	.byte EOS
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
	.string "いわくだき"
	.byte EOS
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
	.string "うずしお"
	.byte EOS
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
	.string "ふくろだたき"
	.byte EOS
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
	.string "ねこだまし"
	.byte EOS
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
	.string "さわぐ"
	.byte EOS
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
	.string "たくわえる"
	.byte EOS
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
	.string "はきだす"
	.byte EOS
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
	.string "のみこむ"
	.byte EOS
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
	.string "ねっぷう"
	.byte EOS
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
	.string "あられ"
	.byte EOS
	.if (. - gText_Rom_2EB4D4) > 0x4
	.error "gText_Rom_2EB4D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB4D4) < 0x4
	.space 0x4 - (. - gText_Rom_2EB4D4)
	.endif
	.incbin "baserom.gba", 0x2eb4d8, 0x4


@==============================================================================
@ Source: data/text/rodata/battle/51_battle_data.inc
@==============================================================================

	@ src/battle_debug.c:360 battle_debug_line_360 (+1 aliases)
	.globl gText_Rom_2EB4DC
gText_Rom_2EB4DC: @ 0x082EB4DC
	.string "いちゃもん"
	.byte EOS
	.if (. - gText_Rom_2EB4DC) > 0x6
	.error "gText_Rom_2EB4DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB4DC) < 0x6
	.space 0x6 - (. - gText_Rom_2EB4DC)
	.endif
	.incbin "baserom.gba", 0x2eb4e2, 0x2


@==============================================================================
@ Source: data/text/rodata/moves/52_move_data.inc
@==============================================================================

	@ src/data/moves_info.h:6475 moves_info_line_6475
	.globl gText_Rom_2EB4E4
gText_Rom_2EB4E4: @ 0x082EB4E4
	.string "おだてる"
	.byte EOS
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
	.string "おにび"
	.byte EOS
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
	.string "おきみやげ"
	.byte EOS
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
	.string "からげんき"
	.byte EOS
	.if (. - gText_Rom_2EB4FC) != 0x6
	.error "gText_Rom_2EB4FC must retain its original byte length"
	.endif
	.globl gText_Rom_2EB4FE
	.set gText_Rom_2EB4FE, gText_Rom_2EB4FC + 0x2
	.incbin "baserom.gba", 0x2eb502, 0x2

	@ src/data/moves_info.h:6571 moves_info_line_6571
	.globl gText_Rom_2EB504
gText_Rom_2EB504: @ 0x082EB504
	.string "きあいパンチ"
	.byte EOS
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
	.string "きつけ"
	.byte EOS
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
	.string "このゆびとまれ"
	.byte EOS
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
	.string "しぜんのちから"
	.byte EOS
	.if (. - gText_Rom_2EB51C) != 0x8
	.error "gText_Rom_2EB51C must retain its original byte length"
	.endif
	.globl gText_Rom_2EB520
	.set gText_Rom_2EB520, gText_Rom_2EB51C + 0x4


@==============================================================================
@ Source: data/text/rodata/battle/53_battle_data.inc
@==============================================================================

	@ src/battle_debug.c:381 battle_debug_line_381 (+1 aliases)
	.globl gText_Rom_2EB524
gText_Rom_2EB524: @ 0x082EB524
	.string "じゅうでん"
	.byte EOS
	.if (. - gText_Rom_2EB524) > 0x6
	.error "gText_Rom_2EB524 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB524) < 0x6
	.space 0x6 - (. - gText_Rom_2EB524)
	.endif
	.incbin "baserom.gba", 0x2eb52a, 0x2


@==============================================================================
@ Source: data/text/rodata/moves/54_move_data.inc
@==============================================================================

	@ src/data/moves_info.h:6710 moves_info_line_6710
	.globl gText_Rom_2EB52C
gText_Rom_2EB52C: @ 0x082EB52C
	.string "ちょうはつ"
	.byte EOS
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
	.string "てだすけ"
	.byte EOS
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
	.string "トリック"
	.byte EOS
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
	.string "なりきり"
	.byte EOS
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
	.string "ねがいごと"
	.byte EOS
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
	.string "ねこのて"
	.byte EOS
	.if (. - gText_Rom_2EB554) > 0x5
	.error "gText_Rom_2EB554 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB554) < 0x5
	.space 0x5 - (. - gText_Rom_2EB554)
	.endif
	.incbin "baserom.gba", 0x2eb559, 0x3


@==============================================================================
@ Source: data/text/rodata/battle/55_battle_data.inc
@==============================================================================

	@ src/battle_debug.c:382 battle_debug_line_382 (+1 aliases)
	.globl gText_Rom_2EB55C
gText_Rom_2EB55C: @ 0x082EB55C
	.string "ねをはる"
	.byte EOS
	.if (. - gText_Rom_2EB55C) > 0x5
	.error "gText_Rom_2EB55C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB55C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB55C)
	.endif
	.incbin "baserom.gba", 0x2eb561, 0x3


@==============================================================================
@ Source: data/text/rodata/moves/56_move_data.inc
@==============================================================================

	@ src/data/moves_info.h:6888 moves_info_line_6888
	.globl gText_Rom_2EB564
gText_Rom_2EB564: @ 0x082EB564
	.string "ばかぢから"
	.byte EOS
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
	.string "マジックコート"
	.byte EOS
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
	.string "リサイクル"
	.byte EOS
	.if (. - gText_Rom_2EB574) != 0x6
	.error "gText_Rom_2EB574 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB575
	.set gText_Rom_2EB575, gText_Rom_2EB574 + 0x1
	.incbin "baserom.gba", 0x2eb57a, 0x2

	@ src/data/moves_info.h:6962 moves_info_line_6962
	.globl gText_Rom_2EB57C
gText_Rom_2EB57C: @ 0x082EB57C
	.string "リベンジ"
	.byte EOS
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
	.string "かわらわり"
	.byte EOS
	.if (. - gText_Rom_2EB584) > 0x6
	.error "gText_Rom_2EB584 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB584) < 0x6
	.space 0x6 - (. - gText_Rom_2EB584)
	.endif
	.incbin "baserom.gba", 0x2eb58a, 0x2


@==============================================================================
@ Source: data/text/rodata/battle/57_battle_data.inc
@==============================================================================

	@ src/battle_debug.c:383 battle_debug_line_383 (+1 aliases)
	.globl gText_Rom_2EB58C
gText_Rom_2EB58C: @ 0x082EB58C
	.string "あくび"
	.byte EOS
	.if (. - gText_Rom_2EB58C) > 0x4
	.error "gText_Rom_2EB58C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB58C) < 0x4
	.space 0x4 - (. - gText_Rom_2EB58C)
	.endif
	.incbin "baserom.gba", 0x2eb590, 0x4


@==============================================================================
@ Source: data/text/rodata/moves/58_move_data.inc
@==============================================================================

	@ src/data/moves_info.h:7031 moves_info_line_7031
	.globl gText_Rom_2EB594
gText_Rom_2EB594: @ 0x082EB594
	.string "はたきおとす"
	.byte EOS
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
	.string "がむしゃら"
	.byte EOS
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
	.string "ふんか"
	.byte EOS
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
	.string "スキルスワップ"
	.byte EOS
	.if (. - gText_Rom_2EB5AC) > 0x8
	.error "gText_Rom_2EB5AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5AC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB5AC)
	.endif


@==============================================================================
@ Source: data/text/rodata/battle/59_battle_data.inc
@==============================================================================

	@ src/battle_debug.c:384 battle_debug_line_384 (+1 aliases)
	.globl gText_Rom_2EB5B4
gText_Rom_2EB5B4: @ 0x082EB5B4
	.string "ふういん"
	.byte EOS
	.if (. - gText_Rom_2EB5B4) > 0x5
	.error "gText_Rom_2EB5B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5B4) < 0x5
	.space 0x5 - (. - gText_Rom_2EB5B4)
	.endif
	.incbin "baserom.gba", 0x2eb5b9, 0x3


@==============================================================================
@ Source: data/text/rodata/moves/60_move_data.inc
@==============================================================================

	@ src/data/moves_info.h:7142 moves_info_line_7142
	.globl gText_Rom_2EB5BC
gText_Rom_2EB5BC: @ 0x082EB5BC
	.string "リフレッシュ"
	.byte EOS
	.if (. - gText_Rom_2EB5BC) > 0x7
	.error "gText_Rom_2EB5BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5BC) < 0x7
	.space 0x7 - (. - gText_Rom_2EB5BC)
	.endif
	.incbin "baserom.gba", 0x2eb5c3, 0x1


@==============================================================================
@ Source: data/text/rodata/battle/61_battle_data.inc
@==============================================================================

	@ src/battle_debug.c:385 battle_debug_line_385 (+1 aliases)
	.globl gText_Rom_2EB5C4
gText_Rom_2EB5C4: @ 0x082EB5C4
	.string "おんねん"
	.byte EOS
	.if (. - gText_Rom_2EB5C4) > 0x5
	.error "gText_Rom_2EB5C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5C4) < 0x5
	.space 0x5 - (. - gText_Rom_2EB5C4)
	.endif
	.incbin "baserom.gba", 0x2eb5c9, 0x3


@==============================================================================
@ Source: data/text/rodata/moves/62_move_data.inc
@==============================================================================

	@ src/data/moves_info.h:7190 moves_info_line_7190
	.globl gText_Rom_2EB5CC
gText_Rom_2EB5CC: @ 0x082EB5CC
	.string "よこどり"
	.byte EOS
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
	.string "ひみつのちから"
	.byte EOS
	.if (. - gText_Rom_2EB5D4) != 0x8
	.error "gText_Rom_2EB5D4 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB5D8
	.set gText_Rom_2EB5D8, gText_Rom_2EB5D4 + 0x4

	@ src/data/moves_info.h:7242 moves_info_line_7242
	.globl gText_Rom_2EB5DC
gText_Rom_2EB5DC: @ 0x082EB5DC
	.string "ダイビング"
	.byte EOS
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
	.string "つっぱり"
	.byte EOS
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
	.string "ほごしょく"
	.byte EOS
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
	.string "ほたるび"
	.byte EOS
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
	.string "ラスターパージ"
	.byte EOS
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
	.string "ミストボール"
	.byte EOS
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
	.string "フェザーダンス"
	.byte EOS
	.if (. - gText_Rom_2EB60C) != 0x8
	.error "gText_Rom_2EB60C must retain its original byte length"
	.endif
	.globl gText_Rom_2EB610
	.set gText_Rom_2EB610, gText_Rom_2EB60C + 0x4

	@ src/data/moves_info.h:7419 moves_info_line_7419
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB614
gText_Rom_2EB614: @ 0x082EB614
	.string "フラフラダンス"
	.byte EOS
	.if (. - gText_Rom_2EB614) != 0x8
	.error "gText_Rom_2EB614 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB618
	.set gText_Rom_2EB618, gText_Rom_2EB614 + 0x4

	@ src/data/moves_info.h:7442 moves_info_line_7442
	.globl gText_Rom_2EB61C
gText_Rom_2EB61C: @ 0x082EB61C
	.string "ブレイズキック"
	.byte EOS
	.if (. - gText_Rom_2EB61C) > 0x8
	.error "gText_Rom_2EB61C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB61C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB61C)
	.endif


@==============================================================================
@ Source: data/text/rodata/battle/63_battle_data.inc
@==============================================================================

	@ src/battle_debug.c:371 battle_debug_line_371 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB624
gText_Rom_2EB624: @ 0x082EB624
	.string "どろあそび"
	.byte EOS
	.if (. - gText_Rom_2EB624) != 0x6
	.error "gText_Rom_2EB624 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB626
	.set gText_Rom_2EB626, gText_Rom_2EB624 + 0x2
	.incbin "baserom.gba", 0x2eb62a, 0x2


@==============================================================================
@ Source: data/text/rodata/moves/64_move_data.inc
@==============================================================================

	@ src/data/moves_info.h:7493 moves_info_line_7493
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB62C
gText_Rom_2EB62C: @ 0x082EB62C
	.string "アイスボール"
	.byte EOS
	.if (. - gText_Rom_2EB62C) != 0x7
	.error "gText_Rom_2EB62C must retain its original byte length"
	.endif
	.globl gText_Rom_2EB62F
	.set gText_Rom_2EB62F, gText_Rom_2EB62C + 0x3
	.incbin "baserom.gba", 0x2eb633, 0x1

	@ src/data/moves_info.h:7516 moves_info_line_7516
	.globl gText_Rom_2EB634
gText_Rom_2EB634: @ 0x082EB634
	.string "ニードルアーム"
	.byte EOS
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
	.string "なまける"
	.byte EOS
	.if (. - gText_Rom_2EB63C) != 0x5
	.error "gText_Rom_2EB63C must retain its original byte length"
	.endif
	.globl gText_Rom_2EB63D
	.set gText_Rom_2EB63D, gText_Rom_2EB63C + 0x1
	.incbin "baserom.gba", 0x2eb641, 0x3

	@ src/data/moves_info.h:7567 moves_info_line_7567
	.globl gText_Rom_2EB644
gText_Rom_2EB644: @ 0x082EB644
	.string "ハイパーボイス"
	.byte EOS
	.if (. - gText_Rom_2EB644) > 0x8
	.error "gText_Rom_2EB644 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB644) < 0x8
	.space 0x8 - (. - gText_Rom_2EB644)
	.endif

	@ src/data/moves_info.h:7589 moves_info_line_7589
	.globl gText_Rom_2EB64C
gText_Rom_2EB64C: @ 0x082EB64C
	.string "どくどくのキバ"
	.byte EOS
	.if (. - gText_Rom_2EB64C) > 0x8
	.error "gText_Rom_2EB64C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB64C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB64C)
	.endif

	@ src/data/moves_info.h:7614 moves_info_line_7614
	.globl gText_Rom_2EB654
gText_Rom_2EB654: @ 0x082EB654
	.string "ブレイククロー"
	.byte EOS
	.if (. - gText_Rom_2EB654) > 0x8
	.error "gText_Rom_2EB654 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB654) < 0x8
	.space 0x8 - (. - gText_Rom_2EB654)
	.endif

	@ src/data/moves_info.h:7640 moves_info_line_7640
	.globl gText_Rom_2EB65C
gText_Rom_2EB65C: @ 0x082EB65C
	.string "ブラストバーン"
	.byte EOS
	.if (. - gText_Rom_2EB65C) > 0x8
	.error "gText_Rom_2EB65C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB65C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB65C)
	.endif

	@ src/data/moves_info.h:7664 moves_info_line_7664
	.globl gText_Rom_2EB664
gText_Rom_2EB664: @ 0x082EB664
	.string "ハイドロカノン"
	.byte EOS
	.if (. - gText_Rom_2EB664) > 0x8
	.error "gText_Rom_2EB664 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB664) < 0x8
	.space 0x8 - (. - gText_Rom_2EB664)
	.endif

	@ src/data/moves_info.h:7688 moves_info_line_7688
	.globl gText_Rom_2EB66C
gText_Rom_2EB66C: @ 0x082EB66C
	.string "コメットパンチ"
	.byte EOS
	.if (. - gText_Rom_2EB66C) > 0x8
	.error "gText_Rom_2EB66C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB66C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB66C)
	.endif

	@ src/data/moves_info.h:7716 moves_info_line_7716
	.globl gText_Rom_2EB674
gText_Rom_2EB674: @ 0x082EB674
	.string "おどろかす"
	.byte EOS
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
	.string "ウェザーボール"
	.byte EOS
	.if (. - gText_Rom_2EB67C) != 0x8
	.error "gText_Rom_2EB67C must retain its original byte length"
	.endif
	.globl gText_Rom_2EB680
	.set gText_Rom_2EB680, gText_Rom_2EB67C + 0x4

	@ src/data/moves_info.h:7764 moves_info_line_7764
	.globl gText_Rom_2EB684
gText_Rom_2EB684: @ 0x082EB684
	.string "アロマセラピー"
	.byte EOS
	.if (. - gText_Rom_2EB684) > 0x8
	.error "gText_Rom_2EB684 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB684) < 0x8
	.space 0x8 - (. - gText_Rom_2EB684)
	.endif

	@ src/data/moves_info.h:7789 moves_info_line_7789
	.globl gText_Rom_2EB68C
gText_Rom_2EB68C: @ 0x082EB68C
	.string "うそなき"
	.byte EOS
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
	.string "エアカッター"
	.byte EOS
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
	.string "オーバーヒート"
	.byte EOS
	.if (. - gText_Rom_2EB69C) > 0x8
	.error "gText_Rom_2EB69C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB69C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB69C)
	.endif

	@ src/data/moves_info.h:7864 moves_info_line_7864
	.globl gText_Rom_2EB6A4
gText_Rom_2EB6A4: @ 0x082EB6A4
	.string "かぎわける"
	.byte EOS
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
	.string "がんせきふうじ"
	.byte EOS
	.if (. - gText_Rom_2EB6AC) > 0x8
	.error "gText_Rom_2EB6AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB6AC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB6AC)
	.endif

	@ src/data/moves_info.h:7912 moves_info_line_7912
	.globl gText_Rom_2EB6B4
gText_Rom_2EB6B4: @ 0x082EB6B4
	.string "ぎんいろのかぜ"
	.byte EOS
	.if (. - gText_Rom_2EB6B4) > 0x8
	.error "gText_Rom_2EB6B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB6B4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB6B4)
	.endif

	@ src/data/moves_info.h:7943 moves_info_line_7943
	.globl gText_Rom_2EB6BC
gText_Rom_2EB6BC: @ 0x082EB6BC
	.string "きんぞくおん"
	.byte EOS
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
	.string "くさぶえ"
	.byte EOS
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
	.string "くすぐる"
	.byte EOS
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
	.string "コスモパワー"
	.byte EOS
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
	.string "しおふき"
	.byte EOS
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
	.string "シグナルビーム"
	.byte EOS
	.if (. - gText_Rom_2EB6E4) > 0x8
	.error "gText_Rom_2EB6E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB6E4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB6E4)
	.endif

	@ src/data/moves_info.h:8097 moves_info_line_8097
	.globl gText_Rom_2EB6EC
gText_Rom_2EB6EC: @ 0x082EB6EC
	.string "シャドーパンチ"
	.byte EOS
	.if (. - gText_Rom_2EB6EC) > 0x8
	.error "gText_Rom_2EB6EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB6EC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB6EC)
	.endif

	@ src/data/moves_info.h:8119 moves_info_line_8119
	.globl gText_Rom_2EB6F4
gText_Rom_2EB6F4: @ 0x082EB6F4
	.string "じんつうりき"
	.byte EOS
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
	.string "スカイアッパー"
	.byte EOS
	.if (. - gText_Rom_2EB6FC) > 0x8
	.error "gText_Rom_2EB6FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB6FC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB6FC)
	.endif

	@ src/data/moves_info.h:8167 moves_info_line_8167
	.globl gText_Rom_2EB704
gText_Rom_2EB704: @ 0x082EB704
	.string "すなじごく"
	.byte EOS
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
	.string "ぜったいれいど"
	.byte EOS
	.if (. - gText_Rom_2EB70C) > 0x8
	.error "gText_Rom_2EB70C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB70C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB70C)
	.endif

	@ src/data/moves_info.h:8213 moves_info_line_8213
	.globl gText_Rom_2EB714
gText_Rom_2EB714: @ 0x082EB714
	.string "だくりゅう"
	.byte EOS
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
	.string "タネマシンガン"
	.byte EOS
	.if (. - gText_Rom_2EB71C) > 0x8
	.error "gText_Rom_2EB71C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB71C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB71C)
	.endif

	@ src/data/moves_info.h:8260 moves_info_line_8260
	.globl gText_Rom_2EB724
gText_Rom_2EB724: @ 0x082EB724
	.string "つばめがえし"
	.byte EOS
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
	.string "つららばり"
	.byte EOS
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
	.string "てっぺき"
	.byte EOS
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
	.string "とおせんぼう"
	.byte EOS
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
	.string "とおぼえ"
	.byte EOS
	.if (. - gText_Rom_2EB744) != 0x5
	.error "gText_Rom_2EB744 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB745
	.set gText_Rom_2EB745, gText_Rom_2EB744 + 0x1
	.incbin "baserom.gba", 0x2eb749, 0x3

	@ src/data/moves_info.h:8382 moves_info_line_8382
	.globl gText_Rom_2EB74C
gText_Rom_2EB74C: @ 0x082EB74C
	.string "ドラゴンクロー"
	.byte EOS
	.if (. - gText_Rom_2EB74C) > 0x8
	.error "gText_Rom_2EB74C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB74C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB74C)
	.endif

	@ src/data/moves_info.h:8403 moves_info_line_8403
	.globl gText_Rom_2EB754
gText_Rom_2EB754: @ 0x082EB754
	.string "ハードプラント"
	.byte EOS
	.if (. - gText_Rom_2EB754) > 0x8
	.error "gText_Rom_2EB754 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB754) < 0x8
	.space 0x8 - (. - gText_Rom_2EB754)
	.endif

	@ src/data/moves_info.h:8428 moves_info_line_8428
	.globl gText_Rom_2EB75C
gText_Rom_2EB75C: @ 0x082EB75C
	.string "ビルドアップ"
	.byte EOS
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
	.string "とびはねる"
	.byte EOS
	.if (. - gText_Rom_2EB764) != 0x6
	.error "gText_Rom_2EB764 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB766
	.set gText_Rom_2EB766, gText_Rom_2EB764 + 0x2
	.incbin "baserom.gba", 0x2eb76a, 0x2

	@ src/data/moves_info.h:8487 moves_info_line_8487
	.globl gText_Rom_2EB76C
gText_Rom_2EB76C: @ 0x082EB76C
	.string "マッドショット"
	.byte EOS
	.if (. - gText_Rom_2EB76C) > 0x8
	.error "gText_Rom_2EB76C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB76C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB76C)
	.endif

	@ src/data/moves_info.h:8511 moves_info_line_8511
	.globl gText_Rom_2EB774
gText_Rom_2EB774: @ 0x082EB774
	.string "ポイズンテール"
	.byte EOS
	.if (. - gText_Rom_2EB774) > 0x8
	.error "gText_Rom_2EB774 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB774) < 0x8
	.space 0x8 - (. - gText_Rom_2EB774)
	.endif

	@ src/data/moves_info.h:8537 moves_info_line_8537
	.globl gText_Rom_2EB77C
gText_Rom_2EB77C: @ 0x082EB77C
	.string "ほしがる"
	.byte EOS
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
	.string "ボルテッカー"
	.byte EOS
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
	.string "マジカルリーフ"
	.byte EOS
	.if (. - gText_Rom_2EB78C) != 0x8
	.error "gText_Rom_2EB78C must retain its original byte length"
	.endif
	.globl gText_Rom_2EB790
	.set gText_Rom_2EB790, gText_Rom_2EB78C + 0x4


@==============================================================================
@ Source: data/text/rodata/battle/65_battle_data.inc
@==============================================================================

	@ src/battle_debug.c:372 battle_debug_line_372 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB794
gText_Rom_2EB794: @ 0x082EB794
	.string "みずあそび"
	.byte EOS
	.if (. - gText_Rom_2EB794) != 0x6
	.error "gText_Rom_2EB794 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB796
	.set gText_Rom_2EB796, gText_Rom_2EB794 + 0x2
	.incbin "baserom.gba", 0x2eb79a, 0x2


@==============================================================================
@ Source: data/text/rodata/moves/66_move_data.inc (move-name portion only)
@==============================================================================

	@ src/data/moves_info.h:8635 moves_info_line_8635
	.globl gText_Rom_2EB79C
gText_Rom_2EB79C: @ 0x082EB79C
	.string "めいそう"
	.byte EOS
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
	.string "リーフブレード"
	.byte EOS
	.if (. - gText_Rom_2EB7A4) > 0x8
	.error "gText_Rom_2EB7A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB7A4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB7A4)
	.endif

	@ src/data/moves_info.h:8687 moves_info_line_8687
	.globl gText_Rom_2EB7AC
gText_Rom_2EB7AC: @ 0x082EB7AC
	.string "りゅうのまい"
	.byte EOS
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
	.string "ロックブラスト"
	.byte EOS
	.if (. - gText_Rom_2EB7B4) > 0x8
	.error "gText_Rom_2EB7B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB7B4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB7B4)
	.endif

	@ src/data/moves_info.h:8738 moves_info_line_8738
	.globl gText_Rom_2EB7BC
gText_Rom_2EB7BC: @ 0x082EB7BC
	.string "でんげきは"
	.byte EOS
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
	.string "みずのはどう"
	.byte EOS
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
	.string "はめつのねがい"
	.byte EOS
	.if (. - gText_Rom_2EB7CC) > 0x8
	.error "gText_Rom_2EB7CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB7CC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB7CC)
	.endif

	@ src/data/moves_info.h:8805 moves_info_line_8805
	.globl gText_Rom_2EB7D4
gText_Rom_2EB7D4: @ 0x082EB7D4
	.string "サイコブースト"
	.byte EOS
	.if (. - gText_Rom_2EB7D4) > 0x8
	.error "gText_Rom_2EB7D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB7D4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB7D4)
	.endif
