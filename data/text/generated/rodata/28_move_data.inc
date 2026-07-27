	@ src/data/moves_info.h:1364 moves_info_line_1364
	.globl gText_Rom_2EAE7C
gText_Rom_2EAE7C: @ 0x082EAE7C
	.string "みずでっぽう$"
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
	.string "ハイドロポンプ$"
	.if (. - gText_Rom_2EAE84) > 0x8
	.error "gText_Rom_2EAE84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE84) < 0x8
	.space 0x8 - (. - gText_Rom_2EAE84)
	.endif

	@ src/data/moves_info.h:1403 moves_info_line_1403
	.globl gText_Rom_2EAE8C
gText_Rom_2EAE8C: @ 0x082EAE8C
	.string "なみのり$"
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
	.string "れいとうビーム$"
	.if (. - gText_Rom_2EAE94) > 0x8
	.error "gText_Rom_2EAE94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE94) < 0x8
	.space 0x8 - (. - gText_Rom_2EAE94)
	.endif

	@ src/data/moves_info.h:1451 moves_info_line_1451
	.globl gText_Rom_2EAE9C
gText_Rom_2EAE9C: @ 0x082EAE9C
	.string "ふぶき$"
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
	.string "サイケこうせん$"
	.if (. - gText_Rom_2EAEA4) > 0x8
	.error "gText_Rom_2EAEA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEA4) < 0x8
	.space 0x8 - (. - gText_Rom_2EAEA4)
	.endif

	@ src/data/moves_info.h:1501 moves_info_line_1501
	.globl gText_Rom_2EAEAC
gText_Rom_2EAEAC: @ 0x082EAEAC
	.string "バブルこうせん$"
	.if (. - gText_Rom_2EAEAC) > 0x8
	.error "gText_Rom_2EAEAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEAC) < 0x8
	.space 0x8 - (. - gText_Rom_2EAEAC)
	.endif

	@ src/data/moves_info.h:1525 moves_info_line_1525
	.globl gText_Rom_2EAEB4
gText_Rom_2EAEB4: @ 0x082EAEB4
	.string "オーロラビーム$"
	.if (. - gText_Rom_2EAEB4) > 0x8
	.error "gText_Rom_2EAEB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEB4) < 0x8
	.space 0x8 - (. - gText_Rom_2EAEB4)
	.endif

	@ src/data/moves_info.h:1549 moves_info_line_1549
	.globl gText_Rom_2EAEBC
gText_Rom_2EAEBC: @ 0x082EAEBC
	.string "はかいこうせん$"
	.if (. - gText_Rom_2EAEBC) > 0x8
	.error "gText_Rom_2EAEBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEBC) < 0x8
	.space 0x8 - (. - gText_Rom_2EAEBC)
	.endif

	@ src/data/moves_info.h:1574 moves_info_line_1574
	.globl gText_Rom_2EAEC4
gText_Rom_2EAEC4: @ 0x082EAEC4
	.string "つつく$"
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
	.string "ドリルくちばし$"
	.if (. - gText_Rom_2EAECC) > 0x8
	.error "gText_Rom_2EAECC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAECC) < 0x8
	.space 0x8 - (. - gText_Rom_2EAECC)
	.endif

	@ src/data/moves_info.h:1615 moves_info_line_1615
	.globl gText_Rom_2EAED4
gText_Rom_2EAED4: @ 0x082EAED4
	.string "じごくぐるま$"
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
	.string "けたぐり$"
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
	.string "カウンター$"
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
	.string "ちきゅうなげ$"
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
	.string "かいりき$"
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
	.string "すいとる$"
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
	.string "メガドレイン$"
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
	.string "やどりぎのタネ$"
	.if (. - gText_Rom_2EAF0C) > 0x8
	.error "gText_Rom_2EAF0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF0C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAF0C)
	.endif

	@ src/data/moves_info.h:1808 moves_info_line_1808
	.globl gText_Rom_2EAF14
gText_Rom_2EAF14: @ 0x082EAF14
	.string "せいちょう$"
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
	.string "はっぱカッター$"
	.if (. - gText_Rom_2EAF1C) > 0x8
	.error "gText_Rom_2EAF1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF1C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAF1C)
	.endif

	@ src/data/moves_info.h:1859 moves_info_line_1859
	.globl gText_Rom_2EAF24
gText_Rom_2EAF24: @ 0x082EAF24
	.string "ソーラービーム$"
	.if (. - gText_Rom_2EAF24) > 0x8
	.error "gText_Rom_2EAF24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF24) < 0x8
	.space 0x8 - (. - gText_Rom_2EAF24)
	.endif

	@ src/data/moves_info.h:1882 moves_info_line_1882
	.globl gText_Rom_2EAF2C
gText_Rom_2EAF2C: @ 0x082EAF2C
	.string "どくのこな$"
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
	.string "しびれごな$"
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
	.string "ねむりごな$"
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
	.string "はなびらのまい$"
	.if (. - gText_Rom_2EAF44) > 0x8
	.error "gText_Rom_2EAF44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF44) < 0x8
	.space 0x8 - (. - gText_Rom_2EAF44)
	.endif

	@ src/data/moves_info.h:1987 moves_info_line_1987
	.globl gText_Rom_2EAF4C
gText_Rom_2EAF4C: @ 0x082EAF4C
	.string "いとをはく$"
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
	.string "りゅうのいかり$"
	.if (. - gText_Rom_2EAF54) != 0x8
	.error "gText_Rom_2EAF54 must retain its original byte length"
	.endif
	.globl gText_Rom_2EAF58
	.set gText_Rom_2EAF58, gText_Rom_2EAF54 + 0x4

	@ src/data/moves_info.h:2034 moves_info_line_2034
	.globl gText_Rom_2EAF5C
gText_Rom_2EAF5C: @ 0x082EAF5C
	.string "ほのおのうず$"
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
	.string "でんきショック$"
	.if (. - gText_Rom_2EAF64) > 0x8
	.error "gText_Rom_2EAF64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF64) < 0x8
	.space 0x8 - (. - gText_Rom_2EAF64)
	.endif

	@ src/data/moves_info.h:2082 moves_info_line_2082
	.globl gText_Rom_2EAF6C
gText_Rom_2EAF6C: @ 0x082EAF6C
	.string "10まんボルト$"
	.if (. - gText_Rom_2EAF6C) > 0x8
	.error "gText_Rom_2EAF6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF6C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAF6C)
	.endif

	@ src/data/moves_info.h:2106 moves_info_line_2106
	.globl gText_Rom_2EAF74
gText_Rom_2EAF74: @ 0x082EAF74
	.string "でんじは$"
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
	.string "かみなり$"
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
	.string "いわおとし$"
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
	.string "じしん$"
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
	.string "じわれ$"
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
	.string "あなをほる$"
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
	.string "どくどく$"
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
	.string "ねんりき$"
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
	.string "サイコキネシス$"
	.if (. - gText_Rom_2EAFB4) > 0x8
	.error "gText_Rom_2EAFB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFB4) < 0x8
	.space 0x8 - (. - gText_Rom_2EAFB4)
	.endif

	@ src/data/moves_info.h:2324 moves_info_line_2324
	.globl gText_Rom_2EAFBC
gText_Rom_2EAFBC: @ 0x082EAFBC
	.string "さいみんじゅつ$"
	.if (. - gText_Rom_2EAFBC) > 0x8
	.error "gText_Rom_2EAFBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFBC) < 0x8
	.space 0x8 - (. - gText_Rom_2EAFBC)
	.endif

	@ src/data/moves_info.h:2347 moves_info_line_2347
	.globl gText_Rom_2EAFC4
gText_Rom_2EAFC4: @ 0x082EAFC4
	.string "ヨガのポーズ$"
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
	.string "こうそくいどう$"
	.if (. - gText_Rom_2EAFCC) != 0x8
	.error "gText_Rom_2EAFCC must retain its original byte length"
	.endif
	.globl gText_Rom_2EAFD0
	.set gText_Rom_2EAFD0, gText_Rom_2EAFCC + 0x4

	@ src/data/moves_info.h:2403 moves_info_line_2403
	.globl gText_Rom_2EAFD4
gText_Rom_2EAFD4: @ 0x082EAFD4
	.string "でんこうせっか$"
	.if (. - gText_Rom_2EAFD4) > 0x8
	.error "gText_Rom_2EAFD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFD4) < 0x8
	.space 0x8 - (. - gText_Rom_2EAFD4)
	.endif

