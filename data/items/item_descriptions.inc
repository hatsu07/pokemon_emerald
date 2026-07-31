@------------------------------------------------------------------------------
@ Item descriptions
@ ROM: 0x0855A9D0 - 0x0855C3BE
@ ROM: 0x0855CDDB - 0x0855CEE7
@------------------------------------------------------------------------------

@ src/data/items.h:240 items_line_240
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55A9D0
gText_Rom_55A9D0: @ 0x0855A9D0
	.string "ポケモンを かならず\nつかまえることが できる\nさいこうの ボール"
	.byte EOS
	.if (. - gText_Rom_55A9D0) != 0x22
	.error "gText_Rom_55A9D0 must retain its original byte length"
	.endif
	.globl gText_Rom_55A9EE
	.set gText_Rom_55A9EE, gText_Rom_55A9D0 + 0x1e

	@ src/data/items.h:224 items_line_224
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55A9F2
gText_Rom_55A9F2: @ 0x0855A9F2
	.string "スーパーボール より\nつかまえ やすくなった\nとても すごい ボール"
	.byte EOS
	.if (. - gText_Rom_55A9F2) != 0x23
	.error "gText_Rom_55A9F2 must retain its original byte length"
	.endif
	.globl gText_Rom_55AA11
	.set gText_Rom_55AA11, gText_Rom_55A9F2 + 0x1f

	@ src/data/items.h:208 items_line_208
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AA15
gText_Rom_55AA15: @ 0x0855AA15
	.string "モンスターボール より\nつかまえ やすくなった\nこうせいのうの ボール"
	.byte EOS
	.if (. - gText_Rom_55AA15) != 0x24
	.error "gText_Rom_55AA15 must retain its original byte length"
	.endif
	.globl gText_Rom_55AA35
	.set gText_Rom_55AA35, gText_Rom_55AA15 + 0x20

	@ src/data/items.h:193 items_line_193
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AA39
gText_Rom_55AA39: @ 0x0855AA39
	.string "やせい ポケモンを\nつかまえるための どうぐ"
	.byte EOS
	.if (. - gText_Rom_55AA39) != 0x17
	.error "gText_Rom_55AA39 must retain its original byte length"
	.endif
	.globl gText_Rom_55AA4C
	.set gText_Rom_55AA4C, gText_Rom_55AA39 + 0x13

	@ src/data/items.h:549 items_line_549
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AA50
gText_Rom_55AA50: @ 0x0855AA50
	.string "サファリゾーンで のみ\nつかうことが できる\nとくしゅな ボール"
	.byte EOS
	.if (. - gText_Rom_55AA50) != 0x21
	.error "gText_Rom_55AA50 must retain its original byte length"
	.endif
	.globl gText_Rom_55AA6D
	.set gText_Rom_55AA6D, gText_Rom_55AA50 + 0x1d

	@ src/data/items.h:288 items_line_288
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AA71
gText_Rom_55AA71: @ 0x0855AA71
	.string "みずと むしタイプの\nポケモンが つかまえ\nやすくなる ボール"
	.byte EOS
	.if (. - gText_Rom_55AA71) != 0x20
	.error "gText_Rom_55AA71 must retain its original byte length"
	.endif
	.globl gText_Rom_55AA8D
	.set gText_Rom_55AA8D, gText_Rom_55AA71 + 0x1c

	@ src/data/items.h:320 items_line_320
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AA91
gText_Rom_55AA91: @ 0x0855AA91
	.string "かいていに いる\nポケモンが つかまえ\nやすくなる ボール"
	.byte EOS
	.if (. - gText_Rom_55AA91) != 0x1e
	.error "gText_Rom_55AA91 must retain its original byte length"
	.endif
	.globl gText_Rom_55AAAB
	.set gText_Rom_55AAAB, gText_Rom_55AA91 + 0x1a

	@ src/data/items.h:304 items_line_304
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AAAF
gText_Rom_55AAAF: @ 0x0855AAAF
	.string "つかまえる ポケモンが\nよわいほど つかまえ\nやすくなる ボール"
	.byte EOS
	.if (. - gText_Rom_55AAAF) != 0x21
	.error "gText_Rom_55AAAF must retain its original byte length"
	.endif
	.globl gText_Rom_55AACC
	.set gText_Rom_55AACC, gText_Rom_55AAAF + 0x1d

	@ src/data/items.h:384 items_line_384
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AAD0
gText_Rom_55AAD0: @ 0x0855AAD0
	.string "つかまえた ことが ある\nポケモンが つかまえ\nやすくなる ボール"
	.byte EOS
	.if (. - gText_Rom_55AAD0) != 0x22
	.error "gText_Rom_55AAD0 must retain its original byte length"
	.endif
	.globl gText_Rom_55AAEE
	.set gText_Rom_55AAEE, gText_Rom_55AAD0 + 0x1e

	@ src/data/items.h:352 items_line_352
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AAF2
gText_Rom_55AAF2: @ 0x0855AAF2
	.string "ターンすうが かかれば\nかかるほど つかまえ\nやすくなる ボール"
	.byte EOS
	.if (. - gText_Rom_55AAF2) != 0x21
	.error "gText_Rom_55AAF2 must retain its original byte length"
	.endif
	.globl gText_Rom_55AB0F
	.set gText_Rom_55AB0F, gText_Rom_55AAF2 + 0x1d

	@ src/data/items.h:400 items_line_400
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AB13
gText_Rom_55AB13: @ 0x0855AB13
	.string "つかまえた ポケモンが\nなつき やすくなる\nいごこちの いい ボール"
	.byte EOS
	.if (. - gText_Rom_55AB13) != 0x23
	.error "gText_Rom_55AB13 must retain its original byte length"
	.endif
	.globl gText_Rom_55AB32
	.set gText_Rom_55AB32, gText_Rom_55AB13 + 0x1f

	@ src/data/items.h:256 items_line_256
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AB36
gText_Rom_55AB36: @ 0x0855AB36
	.string "なにかの きねんに\nつくられた めずらしい\nモンスターボール"
	.byte EOS
	.if (. - gText_Rom_55AB36) != 0x1f
	.error "gText_Rom_55AB36 must retain its original byte length"
	.endif
	.globl gText_Rom_55AB4C
	.set gText_Rom_55AB4C, gText_Rom_55AB36 + 0x16
	.globl gText_Rom_55AB51
	.set gText_Rom_55AB51, gText_Rom_55AB36 + 0x1b

	@ src/data/items.h:632 items_line_632
	.globl gText_Rom_55AB55
gText_Rom_55AB55: @ 0x0855AB55
	.string "ポケモンの たいりょくを\n20 かいふくする"
	.byte EOS
	.if (. - gText_Rom_55AB55) > 0x17
	.error "gText_Rom_55AB55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AB55) < 0x17
	.space 0x17 - (. - gText_Rom_55AB55)
	.endif

	@ src/data/items.h:946 items_line_946
	.globl gText_Rom_55AB6C
gText_Rom_55AB6C: @ 0x0855AB6C
	.string "どく じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gText_Rom_55AB6C) > 0x11
	.error "gText_Rom_55AB6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AB6C) < 0x11
	.space 0x11 - (. - gText_Rom_55AB6C)
	.endif

	@ src/data/items.h:988 items_line_988
	.globl gText_Rom_55AB7D
gText_Rom_55AB7D: @ 0x0855AB7D
	.string "やけど じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gText_Rom_55AB7D) > 0x12
	.error "gText_Rom_55AB7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AB7D) < 0x12
	.space 0x12 - (. - gText_Rom_55AB7D)
	.endif

	@ src/data/items.h:1012 items_line_1012
	.globl gText_Rom_55AB8F
gText_Rom_55AB8F: @ 0x0855AB8F
	.string "こおり じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gText_Rom_55AB8F) > 0x12
	.error "gText_Rom_55AB8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AB8F) < 0x12
	.space 0x12 - (. - gText_Rom_55AB8F)
	.endif

	@ src/data/items.h:1036 items_line_1036
	.globl gText_Rom_55ABA1
gText_Rom_55ABA1: @ 0x0855ABA1
	.string "ねむり じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gText_Rom_55ABA1) > 0x12
	.error "gText_Rom_55ABA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55ABA1) < 0x12
	.space 0x12 - (. - gText_Rom_55ABA1)
	.endif

	@ src/data/items.h:964 items_line_964
	.globl gText_Rom_55ABB3
gText_Rom_55ABB3: @ 0x0855ABB3
	.string "まひ じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gText_Rom_55ABB3) > 0x11
	.error "gText_Rom_55ABB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55ABB3) < 0x11
	.space 0x11 - (. - gText_Rom_55ABB3)
	.endif

	@ src/data/items.h:716 items_line_716
	.globl gText_Rom_55ABC4
gText_Rom_55ABC4: @ 0x0855ABC4
	.string "ポケモンの たいりょくと\nじょうたい いじょうを\nぜんかいふくする"
	.byte EOS
	.if (. - gText_Rom_55ABC4) > 0x22
	.error "gText_Rom_55ABC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55ABC4) < 0x22
	.space 0x22 - (. - gText_Rom_55ABC4)
	.endif

	@ src/data/items.h:697 items_line_697
	.globl gText_Rom_55ABE6
gText_Rom_55ABE6: @ 0x0855ABE6
	.string "ポケモンの たいりょくを\nぜんかいふくする"
	.byte EOS
	.if (. - gText_Rom_55ABE6) > 0x16
	.error "gText_Rom_55ABE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55ABE6) < 0x16
	.space 0x16 - (. - gText_Rom_55ABE6)
	.endif
	.incbin "baserom.gba", 0x55abfc, 0x2f

	@ src/data/items.h:22 sFullHealDesc
	.globl gText_Rom_55AC2B
gText_Rom_55AC2B: @ 0x0855AC2B
	.string "じょうたい いじょうを\nすべて かいふくする"
	.byte EOS
	.if (. - gText_Rom_55AC2B) > 0x17
	.error "gText_Rom_55AC2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AC2B) < 0x17
	.space 0x17 - (. - gText_Rom_55AC2B)
	.endif

	@ src/data/items.h:735 items_line_735
	.globl gText_Rom_55AC42
gText_Rom_55AC42: @ 0x0855AC42
	.string "ひんし じょうたいから\nたいりょく はんぶんまで\nかいふくする"
	.byte EOS
	.if (. - gText_Rom_55AC42) > 0x20
	.error "gText_Rom_55AC42 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AC42) < 0x20
	.space 0x20 - (. - gText_Rom_55AC42)
	.endif

	@ src/data/items.h:29 sMaxReviveDesc
	.globl gText_Rom_55AC62
gText_Rom_55AC62: @ 0x0855AC62
	.string "ひんし じょうたいから\nたいりょくを\nぜんかいふくする"
	.byte EOS
	.if (. - gText_Rom_55AC62) > 0x1c
	.error "gText_Rom_55AC62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AC62) < 0x1c
	.space 0x1c - (. - gText_Rom_55AC62)
	.endif
	.incbin "baserom.gba", 0x55ac7e, 0x68

	@ src/data/items.h:843 items_line_843
	.globl gText_Rom_55ACE6
gText_Rom_55ACE6: @ 0x0855ACE6
	.string "えいよう まんてん\nポケモンの たいりょくを\n100 かいふくする"
	.byte EOS
	.if (. - gText_Rom_55ACE6) > 0x22
	.error "gText_Rom_55ACE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55ACE6) < 0x22
	.space 0x22 - (. - gText_Rom_55ACE6)
	.endif
	.incbin "baserom.gba", 0x55ad08, 0x46

	@ src/data/items.h:908 items_line_908
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AD4E
gText_Rom_55AD4E: @ 0x0855AD4E
	.string "すごく にがい こな\nじょうたい いじょうを\nすべて かいふくする"
	.byte EOS
	.if (. - gText_Rom_55AD4E) != 0x22
	.error "gText_Rom_55AD4E must retain its original byte length"
	.endif
	.globl gText_Rom_55AD59
	.set gText_Rom_55AD59, gText_Rom_55AD4E + 0xb

	@ src/data/items.h:927 items_line_927
	.globl gText_Rom_55AD70
gText_Rom_55AD70: @ 0x0855AD70
	.string "とても にがい くさ\nひんし じょうたいから\nふっかつする"
	.byte EOS
	.if (. - gText_Rom_55AD70) > 0x1e
	.error "gText_Rom_55AD70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AD70) < 0x1e
	.space 0x1e - (. - gText_Rom_55AD70)
	.endif

	@ src/data/items.h:1071 items_line_1071
	.globl gText_Rom_55AD8E
gText_Rom_55AD8E: @ 0x0855AD8E
	.string "1つの わざの\nわざポイントを\n10 かいふくする"
	.byte EOS
	.if (. - gText_Rom_55AD8E) > 0x1a
	.error "gText_Rom_55AD8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AD8E) < 0x1a
	.space 0x1a - (. - gText_Rom_55AD8E)
	.endif

	@ src/data/items.h:1091 items_line_1091
	.globl gText_Rom_55ADA8
gText_Rom_55ADA8: @ 0x0855ADA8
	.string "1つの わざの\nわざポイントを\nぜんかいふくする"
	.byte EOS
	.if (. - gText_Rom_55ADA8) > 0x19
	.error "gText_Rom_55ADA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55ADA8) < 0x19
	.space 0x19 - (. - gText_Rom_55ADA8)
	.endif

	@ src/data/items.h:1111 items_line_1111
	.globl gText_Rom_55ADC1
gText_Rom_55ADC1: @ 0x0855ADC1
	.string "すべての わざの\nわざポイントを\n10 かいふくする"
	.byte EOS
	.if (. - gText_Rom_55ADC1) > 0x1b
	.error "gText_Rom_55ADC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55ADC1) < 0x1b
	.space 0x1b - (. - gText_Rom_55ADC1)
	.endif

	@ src/data/items.h:1131 items_line_1131
	.globl gText_Rom_55ADDC
gText_Rom_55ADDC: @ 0x0855ADDC
	.string "ポケモン 1ぴきの\nすべての わざポイントを\nぜんかいふくする"
	.byte EOS
	.if (. - gText_Rom_55ADDC) > 0x20
	.error "gText_Rom_55ADDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55ADDC) < 0x20
	.space 0x20 - (. - gText_Rom_55ADDC)
	.endif

	@ src/data/items.h:1262 items_line_1262
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55ADFC
gText_Rom_55ADFC: @ 0x0855ADFC
	.string "フエンの めいぶつ\nじょうたい いじょうを\nすべて かいふくする"
	.byte EOS
	.if (. - gText_Rom_55ADFC) != 0x21
	.error "gText_Rom_55ADFC must retain its original byte length"
	.endif
	.globl gText_Rom_55AE06
	.set gText_Rom_55AE06, gText_Rom_55ADFC + 0xa

	@ src/data/items.h:2162 items_line_2162
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AE1D
gText_Rom_55AE1D: @ 0x0855AE1D
	.string "ガラスで できた ふえ\nねむり じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gText_Rom_55AE1D) != 0x1e
	.error "gText_Rom_55AE1D must retain its original byte length"
	.endif
	.globl gText_Rom_55AE29
	.set gText_Rom_55AE29, gText_Rom_55AE1D + 0xc

	@ src/data/items.h:2182 items_line_2182
	.globl gText_Rom_55AE3B
gText_Rom_55AE3B: @ 0x0855AE3B
	.string "ガラスで できた ふえ\nこんらん じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gText_Rom_55AE3B) > 0x1f
	.error "gText_Rom_55AE3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AE3B) < 0x1f
	.space 0x1f - (. - gText_Rom_55AE3B)
	.endif

	@ src/data/items.h:2202 items_line_2202
	.globl gText_Rom_55AE5A
gText_Rom_55AE5A: @ 0x0855AE5A
	.string "ガラスで できた ふえ\nメロメロ じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gText_Rom_55AE5A) > 0x1f
	.error "gText_Rom_55AE5A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AE5A) < 0x1f
	.space 0x1f - (. - gText_Rom_55AE5A)
	.endif

	@ src/data/items.h:2225 items_line_2225
	.globl gText_Rom_55AE79
gText_Rom_55AE79: @ 0x0855AE79
	.string "ガラスで できた ふえ\nやせい ポケモンと\nそうぐう しにくくなる"
	.byte EOS
	.if (. - gText_Rom_55AE79) > 0x22
	.error "gText_Rom_55AE79 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AE79) < 0x22
	.space 0x22 - (. - gText_Rom_55AE79)
	.endif

	@ src/data/items.h:2244 items_line_2244
	.globl gText_Rom_55AE9B
gText_Rom_55AE9B: @ 0x0855AE9B
	.string "ガラスで できた ふえ\nやせい ポケモンと\nそうぐう しやすくなる"
	.byte EOS
	.if (. - gText_Rom_55AE9B) > 0x22
	.error "gText_Rom_55AE9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AE9B) < 0x22
	.space 0x22 - (. - gText_Rom_55AE9B)
	.endif

	@ src/data/items.h:1152 items_line_1152
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AEBD
gText_Rom_55AEBD: @ 0x0855AEBD
	.string "きのみ 100パーセント\nポケモンの たいりょくを\n20 かいふくする"
	.byte EOS
	.if (. - gText_Rom_55AEBD) != 0x24
	.error "gText_Rom_55AEBD must retain its original byte length"
	.endif
	.globl gText_Rom_55AECA
	.set gText_Rom_55AECA, gText_Rom_55AEBD + 0xd

	@ src/data/items.h:1172 items_line_1172
	.globl gText_Rom_55AEE1
gText_Rom_55AEE1: @ 0x0855AEE1
	.string "ひんししている ポケモン\nすべてを せいじょうな\nじょうたいに する"
	.byte EOS
	.if (. - gText_Rom_55AEE1) > 0x23
	.error "gText_Rom_55AEE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AEE1) < 0x23
	.space 0x23 - (. - gText_Rom_55AEE1)
	.endif

	@ src/data/items.h:2901 items_line_2901
	.globl gText_Rom_55AF04
gText_Rom_55AF04: @ 0x0855AF04
	.string "あさせのほらあなで\nみつけた しお"
	.byte EOS
	.if (. - gText_Rom_55AF04) > 0x12
	.error "gText_Rom_55AF04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AF04) < 0x12
	.space 0x12 - (. - gText_Rom_55AF04)
	.endif

	@ src/data/items.h:2917 items_line_2917
	.globl gText_Rom_55AF16
gText_Rom_55AF16: @ 0x0855AF16
	.string "あさせのほらあなで\nみつけた かいがら"
	.byte EOS
	.if (. - gText_Rom_55AF16) > 0x14
	.error "gText_Rom_55AF16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AF16) < 0x14
	.space 0x14 - (. - gText_Rom_55AF16)
	.endif

	@ src/data/items.h:60 sShardsDesc
	.globl gText_Rom_55AF2A
gText_Rom_55AF2A: @ 0x0855AF2A
	.string "むかしに つくられた\nどうぐの かけら らしい\nやすく うれる"
	.byte EOS
	.if (. - gText_Rom_55AF2A) > 0x20
	.error "gText_Rom_55AF2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AF2A) < 0x20
	.space 0x20 - (. - gText_Rom_55AF2A)
	.endif

	@ src/data/items.h:60 sShardsDesc
	.globl gText_Rom_55AF4A
gText_Rom_55AF4A: @ 0x0855AF4A
	.string "むかしに つくられた\nどうぐの かけら らしい\nやすく うれる"
	.byte EOS
	.if (. - gText_Rom_55AF4A) > 0x20
	.error "gText_Rom_55AF4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AF4A) < 0x20
	.space 0x20 - (. - gText_Rom_55AF4A)
	.endif

	@ src/data/items.h:60 sShardsDesc
	.globl gText_Rom_55AF6A
gText_Rom_55AF6A: @ 0x0855AF6A
	.string "むかしに つくられた\nどうぐの かけら らしい\nやすく うれる"
	.byte EOS
	.if (. - gText_Rom_55AF6A) > 0x20
	.error "gText_Rom_55AF6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AF6A) < 0x20
	.space 0x20 - (. - gText_Rom_55AF6A)
	.endif

	@ src/data/items.h:60 sShardsDesc
	.globl gText_Rom_55AF8A
gText_Rom_55AF8A: @ 0x0855AF8A
	.string "むかしに つくられた\nどうぐの かけら らしい\nやすく うれる"
	.byte EOS
	.if (. - gText_Rom_55AF8A) > 0x20
	.error "gText_Rom_55AF8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AF8A) < 0x20
	.space 0x20 - (. - gText_Rom_55AF8A)
	.endif

	@ src/data/items.h:1364 items_line_1364
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AFAA
gText_Rom_55AFAA: @ 0x0855AFAA
	.string "たいりょくの\nきそポイントを あげる"
	.byte EOS
	.if (. - gText_Rom_55AFAA) != 0x13
	.error "gText_Rom_55AFAA must retain its original byte length"
	.endif
	.globl gText_Rom_55AFB9
	.set gText_Rom_55AFB9, gText_Rom_55AFAA + 0xf

	@ src/data/items.h:1381 items_line_1381
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AFBD
gText_Rom_55AFBD: @ 0x0855AFBD
	.string "こうげきの\nきそポイントを あげる"
	.byte EOS
	.if (. - gText_Rom_55AFBD) != 0x12
	.error "gText_Rom_55AFBD must retain its original byte length"
	.endif
	.globl gText_Rom_55AFCB
	.set gText_Rom_55AFCB, gText_Rom_55AFBD + 0xe

	@ src/data/items.h:1398 items_line_1398
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AFCF
gText_Rom_55AFCF: @ 0x0855AFCF
	.string "ぼうぎょの\nきそポイントを あげる"
	.byte EOS
	.if (. - gText_Rom_55AFCF) != 0x12
	.error "gText_Rom_55AFCF must retain its original byte length"
	.endif
	.globl gText_Rom_55AFDD
	.set gText_Rom_55AFDD, gText_Rom_55AFCF + 0xe

	@ src/data/items.h:1450 items_line_1450
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AFE1
gText_Rom_55AFE1: @ 0x0855AFE1
	.string "すばやさの\nきそポイントを あげる"
	.byte EOS
	.if (. - gText_Rom_55AFE1) != 0x12
	.error "gText_Rom_55AFE1 must retain its original byte length"
	.endif
	.globl gText_Rom_55AFEF
	.set gText_Rom_55AFEF, gText_Rom_55AFE1 + 0xe

	@ src/data/items.h:1415 items_line_1415
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AFF3
gText_Rom_55AFF3: @ 0x0855AFF3
	.string "とくこうの\nきそポイントを あげる"
	.byte EOS
	.if (. - gText_Rom_55AFF3) != 0x12
	.error "gText_Rom_55AFF3 must retain its original byte length"
	.endif
	.globl gText_Rom_55B001
	.set gText_Rom_55B001, gText_Rom_55AFF3 + 0xe

	@ src/data/items.h:2026 items_line_2026
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B005
gText_Rom_55B005: @ 0x0855B005
	.string "ポケモンの レベルを\n1 あげる"
	.byte EOS
	.if (. - gText_Rom_55B005) != 0x11
	.error "gText_Rom_55B005 must retain its original byte length"
	.endif
	.globl gText_Rom_55B012
	.set gText_Rom_55B012, gText_Rom_55B005 + 0xd

	@ src/data/items.h:1473 items_line_1473
	.globl gText_Rom_55B016
gText_Rom_55B016: @ 0x0855B016
	.string "わざポイントの\nさいだいちが あがる"
	.byte EOS
	.if (. - gText_Rom_55B016) > 0x13
	.error "gText_Rom_55B016 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B016) < 0x13
	.space 0x13 - (. - gText_Rom_55B016)
	.endif

	@ src/data/items.h:1432 items_line_1432
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B029
gText_Rom_55B029: @ 0x0855B029
	.string "とくぼうの\nきそポイントを あげる"
	.byte EOS
	.if (. - gText_Rom_55B029) != 0x12
	.error "gText_Rom_55B029 must retain its original byte length"
	.endif
	.globl gText_Rom_55B037
	.set gText_Rom_55B037, gText_Rom_55B029 + 0xe

	@ src/data/items.h:1491 items_line_1491
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B03B
gText_Rom_55B03B: @ 0x0855B03B
	.string "わざポイントを\nさいだいちまで あげる"
	.byte EOS
	.if (. - gText_Rom_55B03B) != 0x14
	.error "gText_Rom_55B03B must retain its original byte length"
	.endif
	.globl gText_Rom_55B04B
	.set gText_Rom_55B04B, gText_Rom_55B03B + 0x10

	@ src/data/items.h:2571 items_line_2571
	.globl gText_Rom_55B04F
gText_Rom_55B04F: @ 0x0855B04F
	.string "せんとうで つかうと\nみかたの のうりょくを\nさげられなくする"
	.byte EOS
	.if (. - gText_Rom_55B04F) > 0x20
	.error "gText_Rom_55B04F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B04F) < 0x20
	.space 0x20 - (. - gText_Rom_55B04F)
	.endif

	@ src/data/items.h:2551 items_line_2551
	.globl gText_Rom_55B06F
gText_Rom_55B06F: @ 0x0855B06F
	.string "つかった せんとうちゅう\nあいての きゅうしょに\nあたりやすくなる"
	.byte EOS
	.if (. - gText_Rom_55B06F) > 0x22
	.error "gText_Rom_55B06F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B06F) < 0x22
	.space 0x22 - (. - gText_Rom_55B06F)
	.endif
	.incbin "baserom.gba", 0x55b091, 0x82

	@ src/data/items.h:25 sPokeDollDesc
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B113
gText_Rom_55B113: @ 0x0855B113
	.string "そうぐうした やせいの\nポケモンから かならず\nにげることが できる"
	.byte EOS
	.if (. - gText_Rom_55B113) != 0x23
	.error "gText_Rom_55B113 must retain its original byte length"
	.endif
	.globl gText_Rom_55B132
	.set gText_Rom_55B132, gText_Rom_55B113 + 0x1f

	@ src/data/items.h:25 sPokeDollDesc
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B136
gText_Rom_55B136: @ 0x0855B136
	.string "そうぐうした やせいの\nポケモンから かならず\nにげることが できる"
	.byte EOS
	.if (. - gText_Rom_55B136) != 0x23
	.error "gText_Rom_55B136 must retain its original byte length"
	.endif
	.globl gText_Rom_55B155
	.set gText_Rom_55B155, gText_Rom_55B136 + 0x1f

	@ src/data/items.h:2283 items_line_2283
	.globl gText_Rom_55B159
gText_Rom_55B159: @ 0x0855B159
	.string "200ぽ すすむ あいだ\nよわい ポケモンと\nそうぐう しなくなる"
	.byte EOS
	.if (. - gText_Rom_55B159) > 0x22
	.error "gText_Rom_55B159 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B159) < 0x22
	.space 0x22 - (. - gText_Rom_55B159)
	.endif

	@ src/data/items.h:2301 items_line_2301
	.globl gText_Rom_55B17B
gText_Rom_55B17B: @ 0x0855B17B
	.string "250ぽ すすむ あいだ\nよわい ポケモンと\nそうぐう しなくなる"
	.byte EOS
	.if (. - gText_Rom_55B17B) > 0x22
	.error "gText_Rom_55B17B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B17B) < 0x22
	.space 0x22 - (. - gText_Rom_55B17B)
	.endif

	@ src/data/items.h:2374 items_line_2374
	.globl gText_Rom_55B19D
gText_Rom_55B19D: @ 0x0855B19D
	.string "どうくつや ダンジョンを\nぬけだせる"
	.byte EOS
	.if (. - gText_Rom_55B19D) > 0x13
	.error "gText_Rom_55B19D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B19D) < 0x13
	.space 0x13 - (. - gText_Rom_55B19D)
	.endif

	@ src/data/items.h:2265 items_line_2265
	.globl gText_Rom_55B1B0
gText_Rom_55B1B0: @ 0x0855B1B0
	.string "100ぽ すすむ あいだ\nよわい ポケモンと\nそうぐう しなくなる"
	.byte EOS
	.if (. - gText_Rom_55B1B0) > 0x22
	.error "gText_Rom_55B1B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B1B0) < 0x22
	.space 0x22 - (. - gText_Rom_55B1B0)
	.endif

	@ src/data/items.h:75 sEvolutionStoneDesc
	.globl gText_Rom_55B1D2
gText_Rom_55B1D2: @ 0x0855B1D2
	.string "とくていの ポケモンを\nしんかさせる"
	.byte EOS
	.if (. - gText_Rom_55B1D2) > 0x13
	.error "gText_Rom_55B1D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B1D2) < 0x13
	.space 0x13 - (. - gText_Rom_55B1D2)
	.endif

	@ src/data/items.h:75 sEvolutionStoneDesc
	.globl gText_Rom_55B1E5
gText_Rom_55B1E5: @ 0x0855B1E5
	.string "とくていの ポケモンを\nしんかさせる"
	.byte EOS
	.if (. - gText_Rom_55B1E5) > 0x13
	.error "gText_Rom_55B1E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B1E5) < 0x13
	.space 0x13 - (. - gText_Rom_55B1E5)
	.endif

	@ src/data/items.h:75 sEvolutionStoneDesc
	.globl gText_Rom_55B1F8
gText_Rom_55B1F8: @ 0x0855B1F8
	.string "とくていの ポケモンを\nしんかさせる"
	.byte EOS
	.if (. - gText_Rom_55B1F8) > 0x13
	.error "gText_Rom_55B1F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B1F8) < 0x13
	.space 0x13 - (. - gText_Rom_55B1F8)
	.endif

	@ src/data/items.h:75 sEvolutionStoneDesc
	.globl gText_Rom_55B20B
gText_Rom_55B20B: @ 0x0855B20B
	.string "とくていの ポケモンを\nしんかさせる"
	.byte EOS
	.if (. - gText_Rom_55B20B) > 0x13
	.error "gText_Rom_55B20B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B20B) < 0x13
	.space 0x13 - (. - gText_Rom_55B20B)
	.endif

	@ src/data/items.h:75 sEvolutionStoneDesc
	.globl gText_Rom_55B21E
gText_Rom_55B21E: @ 0x0855B21E
	.string "とくていの ポケモンを\nしんかさせる"
	.byte EOS
	.if (. - gText_Rom_55B21E) > 0x13
	.error "gText_Rom_55B21E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B21E) < 0x13
	.space 0x13 - (. - gText_Rom_55B21E)
	.endif

	@ src/data/items.h:75 sEvolutionStoneDesc
	.globl gText_Rom_55B231
gText_Rom_55B231: @ 0x0855B231
	.string "とくていの ポケモンを\nしんかさせる"
	.byte EOS
	.if (. - gText_Rom_55B231) > 0x13
	.error "gText_Rom_55B231 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B231) < 0x13
	.space 0x13 - (. - gText_Rom_55B231)
	.endif

	@ src/data/items.h:2735 items_line_2735
	.globl gText_Rom_55B244
gText_Rom_55B244: @ 0x0855B244
	.string "ふつうの キノコ\nやすく うれる"
	.byte EOS
	.if (. - gText_Rom_55B244) > 0x11
	.error "gText_Rom_55B244 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B244) < 0x11
	.space 0x11 - (. - gText_Rom_55B244)
	.endif

	@ src/data/items.h:57 sBigMushroomDesc
	.globl gText_Rom_55B255
gText_Rom_55B255: @ 0x0855B255
	.string "めずらしい キノコ\nたかく うれる"
	.byte EOS
	.if (. - gText_Rom_55B255) > 0x12
	.error "gText_Rom_55B255 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B255) < 0x12
	.space 0x12 - (. - gText_Rom_55B255)
	.endif

	@ src/data/items.h:2785 items_line_2785
	.globl gText_Rom_55B267
gText_Rom_55B267: @ 0x0855B267
	.string "きれいな しんじゅ\nやすく うれる"
	.byte EOS
	.if (. - gText_Rom_55B267) > 0x12
	.error "gText_Rom_55B267 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B267) < 0x12
	.space 0x12 - (. - gText_Rom_55B267)
	.endif

	@ src/data/items.h:2801 items_line_2801
	.globl gText_Rom_55B279
gText_Rom_55B279: @ 0x0855B279
	.string "とても きれいな\nおおつぶの しんじゅ\nたかく うれる"
	.byte EOS
	.if (. - gText_Rom_55B279) > 0x1c
	.error "gText_Rom_55B279 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B279) < 0x1c
	.space 0x1c - (. - gText_Rom_55B279)
	.endif

	@ src/data/items.h:2843 items_line_2843
	.globl gText_Rom_55B295
gText_Rom_55B295: @ 0x0855B295
	.string "あかくて きれいな すな\nたかく うれる"
	.byte EOS
	.if (. - gText_Rom_55B295) > 0x15
	.error "gText_Rom_55B295 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B295) < 0x15
	.space 0x15 - (. - gText_Rom_55B295)
	.endif

	@ src/data/items.h:2859 items_line_2859
	.globl gText_Rom_55B2AA
gText_Rom_55B2AA: @ 0x0855B2AA
	.string "あかくて きれいな\nほうせきの かけら\nとても たかく うれる"
	.byte EOS
	.if (. - gText_Rom_55B2AA) > 0x20
	.error "gText_Rom_55B2AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B2AA) < 0x20
	.space 0x20 - (. - gText_Rom_55B2AA)
	.endif

	@ src/data/items.h:2696 items_line_2696
	.globl gText_Rom_55B2CA
gText_Rom_55B2CA: @ 0x0855B2CA
	.string "じゅんきん せい\nたかく うれる"
	.byte EOS
	.if (. - gText_Rom_55B2CA) > 0x11
	.error "gText_Rom_55B2CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B2CA) < 0x11
	.space 0x11 - (. - gText_Rom_55B2CA)
	.endif

	@ src/data/items.h:2989 items_line_2989
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B2DB
gText_Rom_55B2DB: @ 0x0855B2DB
	.string "きれいな ウロコ\nマニアの あいだで\nにんきが たかい"
	.byte EOS
	.if (. - gText_Rom_55B2DB) != 0x1c
	.error "gText_Rom_55B2DB must retain its original byte length"
	.endif
	.globl gText_Rom_55B2F3
	.set gText_Rom_55B2F3, gText_Rom_55B2DB + 0x18

	@ src/data/items.h:3870 items_line_3870
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B2F7
gText_Rom_55B2F7: @ 0x0855B2F7
	.string "ジグザグマの すがたが\nプリントされた びんせん\nポケモンに もたせる"
	.byte EOS
	.if (. - gText_Rom_55B2F7) != 0x24
	.error "gText_Rom_55B2F7 must retain its original byte length"
	.endif
	.globl gText_Rom_55B310
	.set gText_Rom_55B310, gText_Rom_55B2F7 + 0x19
	.globl gText_Rom_55B316
	.set gText_Rom_55B316, gText_Rom_55B2F7 + 0x1f

	@ src/data/items.h:3888 items_line_3888
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B31B
gText_Rom_55B31B: @ 0x0855B31B
	.string "キャモメの すがたが\nプリントされた びんせん\nポケモンに もたせる"
	.byte EOS
	.if (. - gText_Rom_55B31B) != 0x23
	.error "gText_Rom_55B31B must retain its original byte length"
	.endif
	.globl gText_Rom_55B333
	.set gText_Rom_55B333, gText_Rom_55B31B + 0x18
	.globl gText_Rom_55B339
	.set gText_Rom_55B339, gText_Rom_55B31B + 0x1e

	@ src/data/items.h:3906 items_line_3906
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B33E
gText_Rom_55B33E: @ 0x0855B33E
	.string "ピカチュウの すがたが\nプリントされた びんせん\nポケモンに もたせる"
	.byte EOS
	.if (. - gText_Rom_55B33E) != 0x24
	.error "gText_Rom_55B33E must retain its original byte length"
	.endif
	.globl gText_Rom_55B357
	.set gText_Rom_55B357, gText_Rom_55B33E + 0x19
	.globl gText_Rom_55B35D
	.set gText_Rom_55B35D, gText_Rom_55B33E + 0x1f

	@ src/data/items.h:3924 items_line_3924
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B362
gText_Rom_55B362: @ 0x0855B362
	.string "コイルの すがたが\nプリントされた びんせん\nポケモンに もたせる"
	.byte EOS
	.if (. - gText_Rom_55B362) != 0x22
	.error "gText_Rom_55B362 must retain its original byte length"
	.endif
	.globl gText_Rom_55B379
	.set gText_Rom_55B379, gText_Rom_55B362 + 0x17
	.globl gText_Rom_55B37F
	.set gText_Rom_55B37F, gText_Rom_55B362 + 0x1d

	@ src/data/items.h:3942 items_line_3942
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B384
gText_Rom_55B384: @ 0x0855B384
	.string "ナマケロの すがたが\nプリントされた びんせん\nポケモンに もたせる"
	.byte EOS
	.if (. - gText_Rom_55B384) != 0x23
	.error "gText_Rom_55B384 must retain its original byte length"
	.endif
	.globl gText_Rom_55B39C
	.set gText_Rom_55B39C, gText_Rom_55B384 + 0x18
	.globl gText_Rom_55B3A2
	.set gText_Rom_55B3A2, gText_Rom_55B384 + 0x1e

	@ src/data/items.h:3960 items_line_3960
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B3A7
gText_Rom_55B3A7: @ 0x0855B3A7
	.string "ホエルコの すがたが\nプリントされた びんせん\nポケモンに もたせる"
	.byte EOS
	.if (. - gText_Rom_55B3A7) != 0x23
	.error "gText_Rom_55B3A7 must retain its original byte length"
	.endif
	.globl gText_Rom_55B3BF
	.set gText_Rom_55B3BF, gText_Rom_55B3A7 + 0x18
	.globl gText_Rom_55B3C5
	.set gText_Rom_55B3C5, gText_Rom_55B3A7 + 0x1e

	@ src/data/items.h:72 sBeadMailDesc
	.globl gText_Rom_55B3CA
gText_Rom_55B3CA: @ 0x0855B3CA
	.string "もたせた ポケモンの\nにがおえがでる びんせん"
	.byte EOS
	.if (. - gText_Rom_55B3CA) > 0x18
	.error "gText_Rom_55B3CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B3CA) < 0x18
	.space 0x18 - (. - gText_Rom_55B3CA)
	.endif

	@ src/data/items.h:3993 items_line_3993
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B3E2
gText_Rom_55B3E2: @ 0x0855B3E2
	.string "ヨマワルの すがたが\nプリントされた びんせん\nポケモンに もたせる"
	.byte EOS
	.if (. - gText_Rom_55B3E2) != 0x23
	.error "gText_Rom_55B3E2 must retain its original byte length"
	.endif
	.globl gText_Rom_55B3FA
	.set gText_Rom_55B3FA, gText_Rom_55B3E2 + 0x18
	.globl gText_Rom_55B400
	.set gText_Rom_55B400, gText_Rom_55B3E2 + 0x1e

	@ src/data/items.h:4011 items_line_4011
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B405
gText_Rom_55B405: @ 0x0855B405
	.string "キレイハナの すがたが\nプリントされた びんせん\nポケモンに もたせる"
	.byte EOS
	.if (. - gText_Rom_55B405) != 0x24
	.error "gText_Rom_55B405 must retain its original byte length"
	.endif
	.globl gText_Rom_55B41E
	.set gText_Rom_55B41E, gText_Rom_55B405 + 0x19
	.globl gText_Rom_55B424
	.set gText_Rom_55B424, gText_Rom_55B405 + 0x1f

	@ src/data/items.h:72 sBeadMailDesc
	.globl gText_Rom_55B429
gText_Rom_55B429: @ 0x0855B429
	.string "もたせた ポケモンの\nにがおえがでる びんせん"
	.byte EOS
	.if (. - gText_Rom_55B429) > 0x18
	.error "gText_Rom_55B429 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B429) < 0x18
	.space 0x18 - (. - gText_Rom_55B429)
	.endif

	@ src/data/items.h:4044 items_line_4044
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B441
gText_Rom_55B441: @ 0x0855B441
	.string "ごうかな もようが\nプリントされた びんせん\nポケモンに もたせる"
	.byte EOS
	.if (. - gText_Rom_55B441) != 0x22
	.error "gText_Rom_55B441 must retain its original byte length"
	.endif
	.globl gText_Rom_55B458
	.set gText_Rom_55B458, gText_Rom_55B441 + 0x17
	.globl gText_Rom_55B45E
	.set gText_Rom_55B45E, gText_Rom_55B441 + 0x1d

	@ src/data/items.h:4062 items_line_4062
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B463
gText_Rom_55B463: @ 0x0855B463
	.string "3ひきの ポケモンが\nプリントされた びんせん\nポケモンに もたせる"
	.byte EOS
	.if (. - gText_Rom_55B463) != 0x23
	.error "gText_Rom_55B463 must retain its original byte length"
	.endif
	.globl gText_Rom_55B47B
	.set gText_Rom_55B47B, gText_Rom_55B463 + 0x18
	.globl gText_Rom_55B481
	.set gText_Rom_55B481, gText_Rom_55B463 + 0x1e

	@ src/data/items.h:10884 items_line_10884
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B486
gText_Rom_55B486: @ 0x0855B486
	.string "もたせると じぶんで\nまひ じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gText_Rom_55B486) != 0x1c
	.error "gText_Rom_55B486 must retain its original byte length"
	.endif
	.globl gText_Rom_55B491
	.set gText_Rom_55B491, gText_Rom_55B486 + 0xb

	@ src/data/items.h:10904 items_line_10904
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B4A2
gText_Rom_55B4A2: @ 0x0855B4A2
	.string "もたせると じぶんで\nねむり じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gText_Rom_55B4A2) != 0x1d
	.error "gText_Rom_55B4A2 must retain its original byte length"
	.endif
	.globl gText_Rom_55B4AD
	.set gText_Rom_55B4AD, gText_Rom_55B4A2 + 0xb

	@ src/data/items.h:10924 items_line_10924
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B4BF
gText_Rom_55B4BF: @ 0x0855B4BF
	.string "もたせると じぶんで\nどく じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gText_Rom_55B4BF) != 0x1c
	.error "gText_Rom_55B4BF must retain its original byte length"
	.endif
	.globl gText_Rom_55B4CA
	.set gText_Rom_55B4CA, gText_Rom_55B4BF + 0xb

	@ src/data/items.h:10944 items_line_10944
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B4DB
gText_Rom_55B4DB: @ 0x0855B4DB
	.string "もたせると じぶんで\nやけど じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gText_Rom_55B4DB) != 0x1d
	.error "gText_Rom_55B4DB must retain its original byte length"
	.endif
	.globl gText_Rom_55B4E6
	.set gText_Rom_55B4E6, gText_Rom_55B4DB + 0xb

	@ src/data/items.h:10964 items_line_10964
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B4F8
gText_Rom_55B4F8: @ 0x0855B4F8
	.string "もたせると じぶんで\nこおり じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gText_Rom_55B4F8) != 0x1d
	.error "gText_Rom_55B4F8 must retain its original byte length"
	.endif
	.globl gText_Rom_55B503
	.set gText_Rom_55B503, gText_Rom_55B4F8 + 0xb

	@ src/data/items.h:10985 items_line_10985
	.globl gText_Rom_55B515
gText_Rom_55B515: @ 0x0855B515
	.string "もたせると じぶんで\nわざポイントを\n10 かいふくする"
	.byte EOS
	.if (. - gText_Rom_55B515) > 0x1d
	.error "gText_Rom_55B515 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B515) < 0x1d
	.space 0x1d - (. - gText_Rom_55B515)
	.endif

	@ src/data/items.h:11006 items_line_11006
	.globl gText_Rom_55B532
gText_Rom_55B532: @ 0x0855B532
	.string "もたせると じぶんで\nたいりょくを\n10 かいふくする"
	.byte EOS
	.if (. - gText_Rom_55B532) > 0x1c
	.error "gText_Rom_55B532 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B532) < 0x1c
	.space 0x1c - (. - gText_Rom_55B532)
	.endif

	@ src/data/items.h:11026 items_line_11026
	.globl gText_Rom_55B54E
gText_Rom_55B54E: @ 0x0855B54E
	.string "もたせると じぶんで\nこんらん じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gText_Rom_55B54E) > 0x1e
	.error "gText_Rom_55B54E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B54E) < 0x1e
	.space 0x1e - (. - gText_Rom_55B54E)
	.endif
	.incbin "baserom.gba", 0x55b56c, 0x1e

	@ src/data/items.h:11075 items_line_11075
	.globl gText_Rom_55B58A
gText_Rom_55B58A: @ 0x0855B58A
	.string "もたせると じぶんで\nたいりょくを\n30 かいふくする"
	.byte EOS
	.if (. - gText_Rom_55B58A) > 0x1c
	.error "gText_Rom_55B58A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B58A) < 0x1c
	.space 0x1c - (. - gText_Rom_55B58A)
	.endif

	@ src/data/items.h:138 sFigyBerryDesc
	.globl gText_Rom_55B5A6
gText_Rom_55B5A6: @ 0x0855B5A6
	.string "もたせると たいりょくを\nかいふく できるが\nこんらんする ことがある"
	.byte EOS
	.if (. - gText_Rom_55B5A6) > 0x24
	.error "gText_Rom_55B5A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B5A6) < 0x24
	.space 0x24 - (. - gText_Rom_55B5A6)
	.endif

	@ src/data/items.h:138 sFigyBerryDesc
	.globl gText_Rom_55B5CA
gText_Rom_55B5CA: @ 0x0855B5CA
	.string "もたせると たいりょくを\nかいふく できるが\nこんらんする ことがある"
	.byte EOS
	.if (. - gText_Rom_55B5CA) > 0x24
	.error "gText_Rom_55B5CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B5CA) < 0x24
	.space 0x24 - (. - gText_Rom_55B5CA)
	.endif

	@ src/data/items.h:138 sFigyBerryDesc
	.globl gText_Rom_55B5EE
gText_Rom_55B5EE: @ 0x0855B5EE
	.string "もたせると たいりょくを\nかいふく できるが\nこんらんする ことがある"
	.byte EOS
	.if (. - gText_Rom_55B5EE) > 0x24
	.error "gText_Rom_55B5EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B5EE) < 0x24
	.space 0x24 - (. - gText_Rom_55B5EE)
	.endif

	@ src/data/items.h:138 sFigyBerryDesc
	.globl gText_Rom_55B612
gText_Rom_55B612: @ 0x0855B612
	.string "もたせると たいりょくを\nかいふく できるが\nこんらんする ことがある"
	.byte EOS
	.if (. - gText_Rom_55B612) > 0x24
	.error "gText_Rom_55B612 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B612) < 0x24
	.space 0x24 - (. - gText_Rom_55B612)
	.endif

	@ src/data/items.h:138 sFigyBerryDesc
	.globl gText_Rom_55B636
gText_Rom_55B636: @ 0x0855B636
	.string "もたせると たいりょくを\nかいふく できるが\nこんらんする ことがある"
	.byte EOS
	.if (. - gText_Rom_55B636) > 0x24
	.error "gText_Rom_55B636 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B636) < 0x24
	.space 0x24 - (. - gText_Rom_55B636)
	.endif

	@ src/data/items.h:11175 items_line_11175
	.globl gText_Rom_55B65A
gText_Rom_55B65A: @ 0x0855B65A
	.string "ポロックの ざいりょう\nつちのなかに うめると\nズリが そだつ"
	.byte EOS
	.if (. - gText_Rom_55B65A) > 0x20
	.error "gText_Rom_55B65A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B65A) < 0x20
	.space 0x20 - (. - gText_Rom_55B65A)
	.endif

	@ src/data/items.h:11192 items_line_11192
	.globl gText_Rom_55B67A
gText_Rom_55B67A: @ 0x0855B67A
	.string "ポロックの ざいりょう\nつちのなかに うめると\nブリーが そだつ"
	.byte EOS
	.if (. - gText_Rom_55B67A) > 0x21
	.error "gText_Rom_55B67A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B67A) < 0x21
	.space 0x21 - (. - gText_Rom_55B67A)
	.endif

	@ src/data/items.h:11209 items_line_11209
	.globl gText_Rom_55B69B
gText_Rom_55B69B: @ 0x0855B69B
	.string "ポロックの ざいりょう\nつちのなかに うめると\nナナが そだつ"
	.byte EOS
	.if (. - gText_Rom_55B69B) > 0x20
	.error "gText_Rom_55B69B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B69B) < 0x20
	.space 0x20 - (. - gText_Rom_55B69B)
	.endif

	@ src/data/items.h:11226 items_line_11226
	.globl gText_Rom_55B6BB
gText_Rom_55B6BB: @ 0x0855B6BB
	.string "ポロックの ざいりょう\nつちのなかに うめると\nセシナが そだつ"
	.byte EOS
	.if (. - gText_Rom_55B6BB) > 0x21
	.error "gText_Rom_55B6BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B6BB) < 0x21
	.space 0x21 - (. - gText_Rom_55B6BB)
	.endif

	@ src/data/items.h:11243 items_line_11243
	.globl gText_Rom_55B6DC
gText_Rom_55B6DC: @ 0x0855B6DC
	.string "ポロックの ざいりょう\nつちのなかに うめると\nパイルが そだつ"
	.byte EOS
	.if (. - gText_Rom_55B6DC) > 0x21
	.error "gText_Rom_55B6DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B6DC) < 0x21
	.space 0x21 - (. - gText_Rom_55B6DC)
	.endif

	@ src/data/items.h:11260 items_line_11260
	.globl gText_Rom_55B6FD
gText_Rom_55B6FD: @ 0x0855B6FD
	.string "ポケモンが ちょっと\nなつくが HPの\nきそポイントが さがる"
	.byte EOS
	.if (. - gText_Rom_55B6FD) > 0x20
	.error "gText_Rom_55B6FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B6FD) < 0x20
	.space 0x20 - (. - gText_Rom_55B6FD)
	.endif

	@ src/data/items.h:11278 items_line_11278
	.globl gText_Rom_55B71D
gText_Rom_55B71D: @ 0x0855B71D
	.string "ポケモンが ちょっと\nなつくが こうげきの\nきそポイントが さがる"
	.byte EOS
	.if (. - gText_Rom_55B71D) > 0x22
	.error "gText_Rom_55B71D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B71D) < 0x22
	.space 0x22 - (. - gText_Rom_55B71D)
	.endif

	@ src/data/items.h:11296 items_line_11296
	.globl gText_Rom_55B73F
gText_Rom_55B73F: @ 0x0855B73F
	.string "ポケモンが ちょっと\nなつくが ぼうぎょの\nきそポイントが さがる"
	.byte EOS
	.if (. - gText_Rom_55B73F) > 0x22
	.error "gText_Rom_55B73F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B73F) < 0x22
	.space 0x22 - (. - gText_Rom_55B73F)
	.endif

	@ src/data/items.h:11314 items_line_11314
	.globl gText_Rom_55B761
gText_Rom_55B761: @ 0x0855B761
	.string "ポケモンが ちょっと\nなつくが とくこうの\nきそポイントが さがる"
	.byte EOS
	.if (. - gText_Rom_55B761) > 0x22
	.error "gText_Rom_55B761 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B761) < 0x22
	.space 0x22 - (. - gText_Rom_55B761)
	.endif

	@ src/data/items.h:11332 items_line_11332
	.globl gText_Rom_55B783
gText_Rom_55B783: @ 0x0855B783
	.string "ポケモンが ちょっと\nなつくが とくぼうの\nきそポイントが さがる"
	.byte EOS
	.if (. - gText_Rom_55B783) > 0x22
	.error "gText_Rom_55B783 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B783) < 0x22
	.space 0x22 - (. - gText_Rom_55B783)
	.endif

	@ src/data/items.h:11350 items_line_11350
	.globl gText_Rom_55B7A5
gText_Rom_55B7A5: @ 0x0855B7A5
	.string "ポケモンが ちょっと\nなつくが すばやさの\nきそポイントが さがる"
	.byte EOS
	.if (. - gText_Rom_55B7A5) > 0x22
	.error "gText_Rom_55B7A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B7A5) < 0x22
	.space 0x22 - (. - gText_Rom_55B7A5)
	.endif

	@ src/data/items.h:11368 items_line_11368
	.globl gText_Rom_55B7C7
gText_Rom_55B7C7: @ 0x0855B7C7
	.string "ポロックの ざいりょう\nつちのなかに うめると\nモコシが そだつ"
	.byte EOS
	.if (. - gText_Rom_55B7C7) > 0x21
	.error "gText_Rom_55B7C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B7C7) < 0x21
	.space 0x21 - (. - gText_Rom_55B7C7)
	.endif

	@ src/data/items.h:11385 items_line_11385
	.globl gText_Rom_55B7E8
gText_Rom_55B7E8: @ 0x0855B7E8
	.string "ポロックの ざいりょう\nつちのなかに うめると\nゴスが そだつ"
	.byte EOS
	.if (. - gText_Rom_55B7E8) > 0x20
	.error "gText_Rom_55B7E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B7E8) < 0x20
	.space 0x20 - (. - gText_Rom_55B7E8)
	.endif

	@ src/data/items.h:11402 items_line_11402
	.globl gText_Rom_55B808
gText_Rom_55B808: @ 0x0855B808
	.string "ポロックの ざいりょう\nつちのなかに うめると\nラブタが そだつ"
	.byte EOS
	.if (. - gText_Rom_55B808) > 0x21
	.error "gText_Rom_55B808 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B808) < 0x21
	.space 0x21 - (. - gText_Rom_55B808)
	.endif

	@ src/data/items.h:11419 items_line_11419
	.globl gText_Rom_55B829
gText_Rom_55B829: @ 0x0855B829
	.string "ポロックの ざいりょう\nつちのなかに うめると\nノメルが そだつ"
	.byte EOS
	.if (. - gText_Rom_55B829) > 0x21
	.error "gText_Rom_55B829 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B829) < 0x21
	.space 0x21 - (. - gText_Rom_55B829)
	.endif

	@ src/data/items.h:11436 items_line_11436
	.globl gText_Rom_55B84A
gText_Rom_55B84A: @ 0x0855B84A
	.string "ポロックの ざいりょう\nつちのなかに うめると\nノワキが そだつ"
	.byte EOS
	.if (. - gText_Rom_55B84A) > 0x21
	.error "gText_Rom_55B84A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B84A) < 0x21
	.space 0x21 - (. - gText_Rom_55B84A)
	.endif

	@ src/data/items.h:11453 items_line_11453
	.globl gText_Rom_55B86B
gText_Rom_55B86B: @ 0x0855B86B
	.string "ポロックの ざいりょう\nつちのなかに うめると\nシーヤが そだつ"
	.byte EOS
	.if (. - gText_Rom_55B86B) > 0x21
	.error "gText_Rom_55B86B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B86B) < 0x21
	.space 0x21 - (. - gText_Rom_55B86B)
	.endif

	@ src/data/items.h:11470 items_line_11470
	.globl gText_Rom_55B88C
gText_Rom_55B88C: @ 0x0855B88C
	.string "ポロックの ざいりょう\nつちのなかに うめると\nカイスが そだつ"
	.byte EOS
	.if (. - gText_Rom_55B88C) > 0x21
	.error "gText_Rom_55B88C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B88C) < 0x21
	.space 0x21 - (. - gText_Rom_55B88C)
	.endif

	@ src/data/items.h:11487 items_line_11487
	.globl gText_Rom_55B8AD
gText_Rom_55B8AD: @ 0x0855B8AD
	.string "ポロックの ざいりょう\nつちのなかに うめると\nドリが そだつ"
	.byte EOS
	.if (. - gText_Rom_55B8AD) > 0x20
	.error "gText_Rom_55B8AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B8AD) < 0x20
	.space 0x20 - (. - gText_Rom_55B8AD)
	.endif

	@ src/data/items.h:11504 items_line_11504
	.globl gText_Rom_55B8CD
gText_Rom_55B8CD: @ 0x0855B8CD
	.string "ポロックの ざいりょう\nつちのなかに うめると\nベリブが そだつ"
	.byte EOS
	.if (. - gText_Rom_55B8CD) > 0x21
	.error "gText_Rom_55B8CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B8CD) < 0x21
	.space 0x21 - (. - gText_Rom_55B8CD)
	.endif

	@ src/data/items.h:11865 items_line_11865
	.globl gText_Rom_55B8EE
gText_Rom_55B8EE: @ 0x0855B8EE
	.string "もたせると ピンチのとき\nこうげきりょくが あがる"
	.byte EOS
	.if (. - gText_Rom_55B8EE) > 0x1a
	.error "gText_Rom_55B8EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B8EE) < 0x1a
	.space 0x1a - (. - gText_Rom_55B8EE)
	.endif

	@ src/data/items.h:11883 items_line_11883
	.globl gText_Rom_55B908
gText_Rom_55B908: @ 0x0855B908
	.string "もたせると ピンチのとき\nぼうぎょりょくが あがる"
	.byte EOS
	.if (. - gText_Rom_55B908) > 0x1a
	.error "gText_Rom_55B908 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B908) < 0x1a
	.space 0x1a - (. - gText_Rom_55B908)
	.endif

	@ src/data/items.h:11901 items_line_11901
	.globl gText_Rom_55B922
gText_Rom_55B922: @ 0x0855B922
	.string "もたせると ピンチのとき\nすばやさが あがる"
	.byte EOS
	.if (. - gText_Rom_55B922) > 0x17
	.error "gText_Rom_55B922 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B922) < 0x17
	.space 0x17 - (. - gText_Rom_55B922)
	.endif

	@ src/data/items.h:11919 items_line_11919
	.globl gText_Rom_55B939
gText_Rom_55B939: @ 0x0855B939
	.string "もたせると ピンチのとき\nとくこうが あがる"
	.byte EOS
	.if (. - gText_Rom_55B939) > 0x17
	.error "gText_Rom_55B939 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B939) < 0x17
	.space 0x17 - (. - gText_Rom_55B939)
	.endif

	@ src/data/items.h:11937 items_line_11937
	.globl gText_Rom_55B950
gText_Rom_55B950: @ 0x0855B950
	.string "もたせると ピンチのとき\nとくぼうが あがる"
	.byte EOS
	.if (. - gText_Rom_55B950) > 0x17
	.error "gText_Rom_55B950 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B950) < 0x17
	.space 0x17 - (. - gText_Rom_55B950)
	.endif

	@ src/data/items.h:11955 items_line_11955
	.globl gText_Rom_55B967
gText_Rom_55B967: @ 0x0855B967
	.string "もたせると ピンチのとき\nてきの きゅうしょに\nあたり やすくなる"
	.byte EOS
	.if (. - gText_Rom_55B967) > 0x22
	.error "gText_Rom_55B967 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B967) < 0x22
	.space 0x22 - (. - gText_Rom_55B967)
	.endif

	@ src/data/items.h:11974 items_line_11974
	.globl gText_Rom_55B989
gText_Rom_55B989: @ 0x0855B989
	.string "もたせると ピンチのとき\nのうりょくの どれか\n1つが ぐーんと あがる"
	.byte EOS
	.if (. - gText_Rom_55B989) > 0x25
	.error "gText_Rom_55B989 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B989) < 0x25
	.space 0x25 - (. - gText_Rom_55B989)
	.endif

	@ src/data/items.h:12119 items_line_12119
	.globl gText_Rom_55B9AE
gText_Rom_55B9AE: @ 0x0855B9AE
	.string "ポロックの ざいりょう\nつちのなかに うめると\nなぞな みが そだつ"
	.byte EOS
	.if (. - gText_Rom_55B9AE) > 0x23
	.error "gText_Rom_55B9AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B9AE) < 0x23
	.space 0x23 - (. - gText_Rom_55B9AE)
	.endif

	@ src/data/items.h:9609 items_line_9609
	.globl gText_Rom_55B9D1
gText_Rom_55B9D1: @ 0x0855B9D1
	.string "もたせると ひかりが\nあいてを まどわして\nめいちゅうりつを さげる"
	.byte EOS
	.if (. - gText_Rom_55B9D1) > 0x23
	.error "gText_Rom_55B9D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B9D1) < 0x23
	.space 0x23 - (. - gText_Rom_55B9D1)
	.endif

	@ src/data/items.h:9633 items_line_9633
	.globl gText_Rom_55B9F4
gText_Rom_55B9F4: @ 0x0855B9F4
	.string "ポケモンに もたせると\nさがった のうりょくを\nもとにもどす"
	.byte EOS
	.if (. - gText_Rom_55B9F4) > 0x1f
	.error "gText_Rom_55B9F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B9F4) < 0x1f
	.space 0x1f - (. - gText_Rom_55B9F4)
	.endif
	.incbin "baserom.gba", 0x55ba13, 0x20

	@ src/data/items.h:9660 items_line_9660
	.globl gText_Rom_55BA33
gText_Rom_55BA33: @ 0x0855BA33
	.string "もたせた ポケモンが\nけいけんちを\nわけて もらえる"
	.byte EOS
	.if (. - gText_Rom_55BA33) > 0x1b
	.error "gText_Rom_55BA33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BA33) < 0x1b
	.space 0x1b - (. - gText_Rom_55BA33)
	.endif

	@ src/data/items.h:9686 items_line_9686
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55BA4E
gText_Rom_55BA4E: @ 0x0855BA4E
	.string "ポケモンに もたせると\nせんせい こうげきが\nたまに できる"
	.byte EOS
	.if (. - gText_Rom_55BA4E) != 0x1f
	.error "gText_Rom_55BA4E must retain its original byte length"
	.endif
	.globl gText_Rom_55BA69
	.set gText_Rom_55BA69, gText_Rom_55BA4E + 0x1b
	.incbin "baserom.gba", 0x55ba6d, 0x42

	@ src/data/items.h:9190 items_line_9190
	.globl gText_Rom_55BAAF
gText_Rom_55BAAF: @ 0x0855BAAF
	.string "こうげきの いりょくが\nあがるが おなじ\nわざしか だせなくなる"
	.byte EOS
	.if (. - gText_Rom_55BAAF) > 0x21
	.error "gText_Rom_55BAAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BAAF) < 0x21
	.space 0x21 - (. - gText_Rom_55BAAF)
	.endif

	@ src/data/items.h:134 sKingsRockDesc
	.globl gText_Rom_55BAD0
gText_Rom_55BAD0: @ 0x0855BAD0
	.string "ポケモンに もたせると\nダメージを うけた\nあいてが たまに ひるむ"
	.byte EOS
	.if (. - gText_Rom_55BAD0) > 0x23
	.error "gText_Rom_55BAD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BAD0) < 0x23
	.space 0x23 - (. - gText_Rom_55BAD0)
	.endif

	@ src/data/items.h:9058 items_line_9058
	.globl gText_Rom_55BAF3
gText_Rom_55BAF3: @ 0x0855BAF3
	.string "ポケモンに もたせると\nむしタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gText_Rom_55BAF3) > 0x20
	.error "gText_Rom_55BAF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BAF3) < 0x20
	.space 0x20 - (. - gText_Rom_55BAF3)
	.endif

	@ src/data/items.h:126 sLuckIncenseDesc
	.globl gText_Rom_55BB13
gText_Rom_55BB13: @ 0x0855BB13
	.string "もたせた ポケモンが\nせんとうに でると\nおかねが 2ばいもらえる"
	.byte EOS
	.if (. - gText_Rom_55BB13) > 0x22
	.error "gText_Rom_55BB13 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BB13) < 0x22
	.space 0x22 - (. - gText_Rom_55BB13)
	.endif
	.incbin "baserom.gba", 0x55bb35, 0x47

	@ src/data/items.h:8332 items_line_8332
	.globl gText_Rom_55BB7C
gText_Rom_55BB7C: @ 0x0855BB7C
	.string "するどく ひかる キバ\nパールルに もたせると\nとくこうが あがる"
	.byte EOS
	.if (. - gText_Rom_55BB7C) > 0x22
	.error "gText_Rom_55BB7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BB7C) < 0x22
	.space 0x22 - (. - gText_Rom_55BB7C)
	.endif

	@ src/data/items.h:8312 items_line_8312
	.globl gText_Rom_55BB9E
gText_Rom_55BB9E: @ 0x0855BB9E
	.string "にぶく ひかる ウロコ\nパールルに もたせると\nとくぼうが あがる"
	.byte EOS
	.if (. - gText_Rom_55BB9E) > 0x22
	.error "gText_Rom_55BB9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BB9E) < 0x22
	.space 0x22 - (. - gText_Rom_55BB9E)
	.endif

	@ src/data/items.h:9823 items_line_9823
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55BBC0
gText_Rom_55BBC0: @ 0x0855BBC0
	.string "そうぐうした やせいの\nポケモンから かならず\nにげられる"
	.byte EOS
	.if (. - gText_Rom_55BBC0) != 0x1e
	.error "gText_Rom_55BBC0 must retain its original byte length"
	.endif
	.globl gText_Rom_55BBDA
	.set gText_Rom_55BBDA, gText_Rom_55BBC0 + 0x1a

	@ src/data/items.h:4671 items_line_4671
	.globl gText_Rom_55BBDE
gText_Rom_55BBDE: @ 0x0855BBDE
	.string "もたせた ポケモンが\nしんか しなくなる\nふしぎな いし"
	.byte EOS
	.if (. - gText_Rom_55BBDE) > 0x1d
	.error "gText_Rom_55BBDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BBDE) < 0x1d
	.space 0x1d - (. - gText_Rom_55BBDE)
	.endif

	@ src/data/items.h:9848 items_line_9848
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55BBFB
gText_Rom_55BBFB: @ 0x0855BBFB
	.string "ポケモンに もたせると\nたまに ひんしを\nふせぐことが できる"
	.byte EOS
	.if (. - gText_Rom_55BBFB) != 0x20
	.error "gText_Rom_55BBFB must retain its original byte length"
	.endif
	.globl gText_Rom_55BC17
	.set gText_Rom_55BC17, gText_Rom_55BBFB + 0x1c

	@ src/data/items.h:9866 items_line_9866
	.globl gText_Rom_55BC1B
gText_Rom_55BC1B: @ 0x0855BC1B
	.string "もたせた ポケモンの\nけいけんちが いつもより\nおおめに もらえる"
	.byte EOS
	.if (. - gText_Rom_55BC1B) > 0x22
	.error "gText_Rom_55BC1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BC1B) < 0x22
	.space 0x22 - (. - gText_Rom_55BC1B)
	.endif

	@ src/data/items.h:9891 items_line_9891
	.globl gText_Rom_55BC3D
gText_Rom_55BC3D: @ 0x0855BC3D
	.string "ポケモンに もたせると\nきゅうしょに\nあたり やすくなる"
	.byte EOS
	.if (. - gText_Rom_55BC3D) > 0x1d
	.error "gText_Rom_55BC3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BC3D) < 0x1d
	.space 0x1d - (. - gText_Rom_55BC3D)
	.endif

	@ src/data/items.h:9162 items_line_9162
	.globl gText_Rom_55BC5A
gText_Rom_55BC5A: @ 0x0855BC5A
	.string "ポケモンに もたせると\nはがねタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gText_Rom_55BC5A) > 0x21
	.error "gText_Rom_55BC5A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BC5A) < 0x21
	.space 0x21 - (. - gText_Rom_55BC5A)
	.endif

	@ src/data/items.h:9917 items_line_9917
	.globl gText_Rom_55BC7B
gText_Rom_55BC7B: @ 0x0855BC7B
	.string "もたせると たいりょくが\nせんとうの あいだ\nすこしずつ かいふくする"
	.byte EOS
	.if (. - gText_Rom_55BC7B) > 0x24
	.error "gText_Rom_55BC7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BC7B) < 0x24
	.space 0x24 - (. - gText_Rom_55BC7B)
	.endif

	@ src/data/items.h:4348 items_line_4348
	.globl gText_Rom_55BC9F
gText_Rom_55BC9F: @ 0x0855BC9F
	.string "ドラゴンタイプの\nポケモンが もっている\nふしぎな ウロコ"
	.byte EOS
	.if (. - gText_Rom_55BC9F) > 0x1e
	.error "gText_Rom_55BC9F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BC9F) < 0x1e
	.space 0x1e - (. - gText_Rom_55BC9F)
	.endif
	.incbin "baserom.gba", 0x55bcbd, 0x23

	@ src/data/items.h:9001 items_line_9001
	.globl gText_Rom_55BCE0
gText_Rom_55BCE0: @ 0x0855BCE0
	.string "ポケモンに もたせると\nじめんタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gText_Rom_55BCE0) > 0x21
	.error "gText_Rom_55BCE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BCE0) < 0x21
	.space 0x21 - (. - gText_Rom_55BCE0)
	.endif
	.incbin "baserom.gba", 0x55bd01, 0x40

	@ src/data/items.h:9136 items_line_9136
	.globl gText_Rom_55BD41
gText_Rom_55BD41: @ 0x0855BD41
	.string "ポケモンに もたせると\nあくタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gText_Rom_55BD41) > 0x20
	.error "gText_Rom_55BD41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BD41) < 0x20
	.space 0x20 - (. - gText_Rom_55BD41)
	.endif

	@ src/data/items.h:8960 items_line_8960
	.globl gText_Rom_55BD61
gText_Rom_55BD61: @ 0x0855BD61
	.string "ポケモンに もたせると\nかくとうタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gText_Rom_55BD61) > 0x22
	.error "gText_Rom_55BD61 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BD61) < 0x22
	.space 0x22 - (. - gText_Rom_55BD61)
	.endif

	@ src/data/items.h:8903 items_line_8903
	.globl gText_Rom_55BD83
gText_Rom_55BD83: @ 0x0855BD83
	.string "ポケモンに もたせると\nでんきタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gText_Rom_55BD83) > 0x21
	.error "gText_Rom_55BD83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BD83) < 0x21
	.space 0x21 - (. - gText_Rom_55BD83)
	.endif

	@ src/data/items.h:8883 items_line_8883
	.globl gText_Rom_55BDA4
gText_Rom_55BDA4: @ 0x0855BDA4
	.string "ポケモンに もたせると\nみずタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gText_Rom_55BDA4) > 0x20
	.error "gText_Rom_55BDA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BDA4) < 0x20
	.space 0x20 - (. - gText_Rom_55BDA4)
	.endif

	@ src/data/items.h:9021 items_line_9021
	.globl gText_Rom_55BDC4
gText_Rom_55BDC4: @ 0x0855BDC4
	.string "ポケモンに もたせると\nひこうタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gText_Rom_55BDC4) > 0x21
	.error "gText_Rom_55BDC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BDC4) < 0x21
	.space 0x21 - (. - gText_Rom_55BDC4)
	.endif

	@ src/data/items.h:8980 items_line_8980
	.globl gText_Rom_55BDE5
gText_Rom_55BDE5: @ 0x0855BDE5
	.string "ポケモンに もたせると\nどくタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gText_Rom_55BDE5) > 0x20
	.error "gText_Rom_55BDE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BDE5) < 0x20
	.space 0x20 - (. - gText_Rom_55BDE5)
	.endif

	@ src/data/items.h:8940 items_line_8940
	.globl gText_Rom_55BE05
gText_Rom_55BE05: @ 0x0855BE05
	.string "ポケモンに もたせると\nこおりタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gText_Rom_55BE05) > 0x21
	.error "gText_Rom_55BE05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BE05) < 0x21
	.space 0x21 - (. - gText_Rom_55BE05)
	.endif

	@ src/data/items.h:9095 items_line_9095
	.globl gText_Rom_55BE26
gText_Rom_55BE26: @ 0x0855BE26
	.string "ポケモンに もたせると\nゴーストタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gText_Rom_55BE26) > 0x22
	.error "gText_Rom_55BE26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BE26) < 0x22
	.space 0x22 - (. - gText_Rom_55BE26)
	.endif
	.incbin "baserom.gba", 0x55be48, 0x22

	@ src/data/items.h:8863 items_line_8863
	.globl gText_Rom_55BE6A
gText_Rom_55BE6A: @ 0x0855BE6A
	.string "ポケモンに もたせると\nほのおタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gText_Rom_55BE6A) > 0x21
	.error "gText_Rom_55BE6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BE6A) < 0x21
	.space 0x21 - (. - gText_Rom_55BE6A)
	.endif

	@ src/data/items.h:9115 items_line_9115
	.globl gText_Rom_55BE8B
gText_Rom_55BE8B: @ 0x0855BE8B
	.string "ポケモンに もたせると\nドラゴンタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gText_Rom_55BE8B) > 0x22
	.error "gText_Rom_55BE8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BE8B) < 0x22
	.space 0x22 - (. - gText_Rom_55BE8B)
	.endif

	@ src/data/items.h:8837 items_line_8837
	.globl gText_Rom_55BEAD
gText_Rom_55BEAD: @ 0x0855BEAD
	.string "ポケモンに もたせると\nノーマルタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gText_Rom_55BEAD) > 0x22
	.error "gText_Rom_55BEAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BEAD) < 0x22
	.space 0x22 - (. - gText_Rom_55BEAD)
	.endif

	@ src/data/items.h:4366 items_line_4366
	.globl gText_Rom_55BECF
gText_Rom_55BECF: @ 0x0855BECF
	.string "ふしぎな はこ\nシルフ カンパニーせい"
	.byte EOS
	.if (. - gText_Rom_55BECF) > 0x14
	.error "gText_Rom_55BECF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BECF) < 0x14
	.space 0x14 - (. - gText_Rom_55BECF)
	.endif

	@ src/data/items.h:9942 items_line_9942
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55BEE3
gText_Rom_55BEE3: @ 0x0855BEE3
	.string "もたせると てきに\nダメージを あたえたとき\nたいりょくが かいふく"
	.byte EOS
	.if (. - gText_Rom_55BEE3) != 0x23
	.error "gText_Rom_55BEE3 must retain its original byte length"
	.endif
	.globl gText_Rom_55BF01
	.set gText_Rom_55BF01, gText_Rom_55BEE3 + 0x1e
	.incbin "baserom.gba", 0x55bf06, 0x6a

	@ src/data/items.h:8278 items_line_8278
	.globl gText_Rom_55BF70
gText_Rom_55BF70: @ 0x0855BF70
	.string "メタモンに もたせると\nぼうぎょが あがる"
	.byte EOS
	.if (. - gText_Rom_55BF70) > 0x16
	.error "gText_Rom_55BF70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BF70) < 0x16
	.space 0x16 - (. - gText_Rom_55BF70)
	.endif

	@ src/data/items.h:8241 items_line_8241
	.globl gText_Rom_55BF86
gText_Rom_55BF86: @ 0x0855BF86
	.string "カラカラや ガラガラに\nもたせると こうげきの\nいりょくが あがる"
	.byte EOS
	.if (. - gText_Rom_55BF86) > 0x22
	.error "gText_Rom_55BF86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BF86) < 0x22
	.space 0x22 - (. - gText_Rom_55BF86)
	.endif

	@ src/data/items.h:8223 items_line_8223
	.globl gText_Rom_55BFA8
gText_Rom_55BFA8: @ 0x0855BFA8
	.string "カモネギに もたせると\nきゅうしょに\nあたりやすくなる"
	.byte EOS
	.if (. - gText_Rom_55BFA8) > 0x1c
	.error "gText_Rom_55BFA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BFA8) < 0x1c
	.space 0x1c - (. - gText_Rom_55BFA8)
	.endif

	@ src/data/items.h:8595 items_line_8595
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55BFC4
gText_Rom_55BFC4: @ 0x0855BFC4
	.string "もたせて コンテストに\nさんかすると いつもより\nかっこよく みられる"
	.byte EOS
	.if (. - gText_Rom_55BFC4) != 0x24
	.error "gText_Rom_55BFC4 must retain its original byte length"
	.endif
	.globl gText_Rom_55BFE4
	.set gText_Rom_55BFE4, gText_Rom_55BFC4 + 0x20

	@ src/data/items.h:8613 items_line_8613
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55BFE8
gText_Rom_55BFE8: @ 0x0855BFE8
	.string "もたせて コンテストに\nさんかすると いつもより\nうつくしく みられる"
	.byte EOS
	.if (. - gText_Rom_55BFE8) != 0x24
	.error "gText_Rom_55BFE8 must retain its original byte length"
	.endif
	.globl gText_Rom_55C008
	.set gText_Rom_55C008, gText_Rom_55BFE8 + 0x20

	@ src/data/items.h:8631 items_line_8631
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C00C
gText_Rom_55C00C: @ 0x0855C00C
	.string "もたせて コンテストに\nさんかすると いつもより\nかわいく みられる"
	.byte EOS
	.if (. - gText_Rom_55C00C) != 0x23
	.error "gText_Rom_55C00C must retain its original byte length"
	.endif
	.globl gText_Rom_55C02B
	.set gText_Rom_55C02B, gText_Rom_55C00C + 0x1f

	@ src/data/items.h:8649 items_line_8649
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C02F
gText_Rom_55C02F: @ 0x0855C02F
	.string "もたせて コンテストに\nさんかすると いつもより\nかしこく みられる"
	.byte EOS
	.if (. - gText_Rom_55C02F) != 0x23
	.error "gText_Rom_55C02F must retain its original byte length"
	.endif
	.globl gText_Rom_55C04E
	.set gText_Rom_55C04E, gText_Rom_55C02F + 0x1f

	@ src/data/items.h:8667 items_line_8667
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C052
gText_Rom_55C052: @ 0x0855C052
	.string "もたせて コンテストに\nさんかすると いつもより\nたくましく みられる"
	.byte EOS
	.if (. - gText_Rom_55C052) != 0x24
	.error "gText_Rom_55C052 must retain its original byte length"
	.endif
	.globl gText_Rom_55C072
	.set gText_Rom_55C072, gText_Rom_55C052 + 0x20

	@ src/data/items.h:13801 items_line_13801
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C076
gText_Rom_55C076: @ 0x0855C076
	.string "2ばい いじょうの\nはやさで いどう できる\nおりたたみの じてんしゃ"
	.byte EOS
	.if (. - gText_Rom_55C076) != 0x24
	.error "gText_Rom_55C076 must retain its original byte length"
	.endif
	.globl gText_Rom_55C094
	.set gText_Rom_55C094, gText_Rom_55C076 + 0x1e

	@ src/data/items.h:13985 items_line_13985
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C09A
gText_Rom_55C09A: @ 0x0855C09A
	.string "てにいれた コインを\n9999まい まで\nもつことが できる"
	.byte EOS
	.if (. - gText_Rom_55C09A) != 0x1f
	.error "gText_Rom_55C09A must retain its original byte length"
	.endif
	.globl gText_Rom_55C0B5
	.set gText_Rom_55C0B5, gText_Rom_55C09A + 0x1b

	@ src/data/items.h:13886 items_line_13886
	.globl gText_Rom_55C0B9
gText_Rom_55C0B9: @ 0x0855C0B9
	.string "みえない どうぐに\nはんのうして\nおとで おしえて くれる"
	.byte EOS
	.if (. - gText_Rom_55C0B9) > 0x1e
	.error "gText_Rom_55C0B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C0B9) < 0x1e
	.space 0x1e - (. - gText_Rom_55C0B9)
	.endif

	@ src/data/items.h:13835 items_line_13835
	.globl gText_Rom_55C0D7
gText_Rom_55C0D7: @ 0x0855C0D7
	.string "ポケモンを つるどうぐ\nみずべで つかうと\nポケモンが つれる"
	.byte EOS
	.if (. - gText_Rom_55C0D7) > 0x20
	.error "gText_Rom_55C0D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C0D7) < 0x20
	.space 0x20 - (. - gText_Rom_55C0D7)
	.endif

	@ src/data/items.h:13852 items_line_13852
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C0F7
gText_Rom_55C0F7: @ 0x0855C0F7
	.string "ポケモンを つるどうぐ\nなかなかの つりざおと\nいわれている"
	.byte EOS
	.if (. - gText_Rom_55C0F7) != 0x1f
	.error "gText_Rom_55C0F7 must retain its original byte length"
	.endif
	.globl gText_Rom_55C112
	.set gText_Rom_55C112, gText_Rom_55C0F7 + 0x1b

	@ src/data/items.h:13869 items_line_13869
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C116
gText_Rom_55C116: @ 0x0855C116
	.string "ポケモンを つるどうぐ\nさいこうの つりざおと\nいわれている"
	.byte EOS
	.if (. - gText_Rom_55C116) != 0x1f
	.error "gText_Rom_55C116 must retain its original byte length"
	.endif
	.globl gText_Rom_55C131
	.set gText_Rom_55C131, gText_Rom_55C116 + 0x1b

	@ src/data/items.h:14131 items_line_14131
	.globl gText_Rom_55C135
gText_Rom_55C135: @ 0x0855C135
	.string "れんらくせんに\nのるとき ひつよう"
	.byte EOS
	.if (. - gText_Rom_55C135) > 0x12
	.error "gText_Rom_55C135 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C135) < 0x12
	.space 0x12 - (. - gText_Rom_55C135)
	.endif

	@ src/data/items.h:14409 items_line_14409
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C147
gText_Rom_55C147: @ 0x0855C147
	.string "ポケモンコンテストに\nさんかする ことができる"
	.byte EOS
	.if (. - gText_Rom_55C147) != 0x18
	.error "gText_Rom_55C147 must retain its original byte length"
	.endif
	.globl gText_Rom_55C15B
	.set gText_Rom_55C15B, gText_Rom_55C147 + 0x14

	@ src/data/items.h:14017 items_line_14017
	.globl gText_Rom_55C15F
gText_Rom_55C15F: @ 0x0855C15F
	.string "みずを かける どうぐ\nつちに うめた きのみを\nすくすく そだてる"
	.byte EOS
	.if (. - gText_Rom_55C15F) > 0x23
	.error "gText_Rom_55C15F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C15F) < 0x23
	.space 0x23 - (. - gText_Rom_55C15F)
	.endif

	@ src/data/items.h:14226 items_line_14226
	.globl gText_Rom_55C182
gText_Rom_55C182: @ 0x0855C182
	.string "デボンで つくられた\nなにかの パーツが\nはいっている にもつ"
	.byte EOS
	.if (. - gText_Rom_55C182) > 0x20
	.error "gText_Rom_55C182 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C182) < 0x20
	.space 0x20 - (. - gText_Rom_55C182)
	.endif

	@ src/data/items.h:14065 items_line_14065
	.globl gText_Rom_55C1A2
gText_Rom_55C1A2: @ 0x0855C1A2
	.string "つもった かざんばいを\nあつめるための ふくろ"
	.byte EOS
	.if (. - gText_Rom_55C1A2) > 0x18
	.error "gText_Rom_55C1A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C1A2) < 0x18
	.space 0x18 - (. - gText_Rom_55C1A2)
	.endif

	@ src/data/items.h:14275 items_line_14275
	.globl gText_Rom_55C1BA
gText_Rom_55C1BA: @ 0x0855C1BA
	.string "キンセツの ちかにある\nニューキンセツに\nはいる ための カギ"
	.byte EOS
	.if (. - gText_Rom_55C1BA) > 0x20
	.error "gText_Rom_55C1BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C1BA) < 0x20
	.space 0x20 - (. - gText_Rom_55C1BA)
	.endif

	@ src/data/items.h:13818 items_line_13818
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C1DA
gText_Rom_55C1DA: @ 0x0855C1DA
	.string "ジャンプや ウイリーの\nアクションが できる\nおりたたみの じてんしゃ"
	.byte EOS
	.if (. - gText_Rom_55C1DA) != 0x24
	.error "gText_Rom_55C1DA must retain its original byte length"
	.endif
	.globl gText_Rom_55C1F8
	.set gText_Rom_55C1F8, gText_Rom_55C1DA + 0x1e

	@ src/data/items.h:14049 items_line_14049
	.globl gText_Rom_55C1FE
gText_Rom_55C1FE: @ 0x0855C1FE
	.string "きのみブレンダーで\nつくった ポロックを\nほぞんする いれもの"
	.byte EOS
	.if (. - gText_Rom_55C1FE) > 0x20
	.error "gText_Rom_55C1FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C1FE) < 0x20
	.space 0x20 - (. - gText_Rom_55C1FE)
	.endif

	@ src/data/items.h:14210 items_line_14210
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C21E
gText_Rom_55C21E: @ 0x0855C21E
	.string "デボンしゃちょう から\nあずかった てがみ"
	.byte EOS
	.if (. - gText_Rom_55C21E) != 0x16
	.error "gText_Rom_55C21E must retain its original byte length"
	.endif
	.globl gText_Rom_55C230
	.set gText_Rom_55C230, gText_Rom_55C21E + 0x12

	@ src/data/items.h:14146 items_line_14146
	.globl gText_Rom_55C234
gText_Rom_55C234: @ 0x0855C234
	.string "みなみのことうへ いく\nふねの チケット"
	.byte EOS
	.if (. - gText_Rom_55C234) > 0x15
	.error "gText_Rom_55C234 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C234) < 0x15
	.space 0x15 - (. - gText_Rom_55C234)
	.endif

	@ src/data/items.h:5564 items_line_5564
	.globl gText_Rom_55C249
gText_Rom_55C249: @ 0x0855C249
	.string "おおむかしの ちからが\nこめられている という\nあかく かがやく たま"
	.byte EOS
	.if (. - gText_Rom_55C249) > 0x24
	.error "gText_Rom_55C249 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C249) < 0x24
	.space 0x24 - (. - gText_Rom_55C249)
	.endif

	@ src/data/items.h:5581 items_line_5581
	.globl gText_Rom_55C26D
gText_Rom_55C26D: @ 0x0855C26D
	.string "おおむかしの ちからが\nこめられている という\nあおく かがやく たま"
	.byte EOS
	.if (. - gText_Rom_55C26D) > 0x24
	.error "gText_Rom_55C26D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C26D) < 0x24
	.space 0x24 - (. - gText_Rom_55C26D)
	.endif

	@ src/data/items.h:14291 items_line_14291
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C291
gText_Rom_55C291: @ 0x0855C291
	.string "すてられぶねの なかで\nみつけた どうぐ"
	.byte EOS
	.if (. - gText_Rom_55C291) != 0x15
	.error "gText_Rom_55C291 must retain its original byte length"
	.endif
	.globl gText_Rom_55C2A2
	.set gText_Rom_55C2A2, gText_Rom_55C291 + 0x11

	@ src/data/items.h:14243 items_line_14243
	.globl gText_Rom_55C2A6
gText_Rom_55C2A6: @ 0x0855C2A6
	.string "さばくの すなあらしから\nめを まもってくれる\nすてきな ゴーグル"
	.byte EOS
	.if (. - gText_Rom_55C2A6) > 0x22
	.error "gText_Rom_55C2A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C2A6) < 0x22
	.space 0x22 - (. - gText_Rom_55C2A6)
	.endif

	@ src/data/items.h:14377 items_line_14377
	.globl gText_Rom_55C2C8
gText_Rom_55C2C8: @ 0x0855C2C8
	.string "りゅうせいのたきに\nおちていた いんせき"
	.byte EOS
	.if (. - gText_Rom_55C2C8) > 0x15
	.error "gText_Rom_55C2C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C2C8) < 0x15
	.space 0x15 - (. - gText_Rom_55C2C8)
	.endif

	@ src/data/items.h:146 sKeyToRoomDesc
	.globl gText_Rom_55C2DD
gText_Rom_55C2DD: @ 0x0855C2DD
	.string "すてられぶねの へやに\nはいる ための カギ"
	.byte EOS
	.if (. - gText_Rom_55C2DD) > 0x17
	.error "gText_Rom_55C2DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C2DD) < 0x17
	.space 0x17 - (. - gText_Rom_55C2DD)
	.endif

	@ src/data/items.h:146 sKeyToRoomDesc
	.globl gText_Rom_55C2F4
gText_Rom_55C2F4: @ 0x0855C2F4
	.string "すてられぶねの へやに\nはいる ための カギ"
	.byte EOS
	.if (. - gText_Rom_55C2F4) > 0x17
	.error "gText_Rom_55C2F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C2F4) < 0x17
	.space 0x17 - (. - gText_Rom_55C2F4)
	.endif

	@ src/data/items.h:146 sKeyToRoomDesc
	.globl gText_Rom_55C30B
gText_Rom_55C30B: @ 0x0855C30B
	.string "すてられぶねの へやに\nはいる ための カギ"
	.byte EOS
	.if (. - gText_Rom_55C30B) > 0x17
	.error "gText_Rom_55C30B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C30B) < 0x17
	.space 0x17 - (. - gText_Rom_55C30B)
	.endif

	@ src/data/items.h:146 sKeyToRoomDesc
	.globl gText_Rom_55C322
gText_Rom_55C322: @ 0x0855C322
	.string "すてられぶねの へやに\nはいる ための カギ"
	.byte EOS
	.if (. - gText_Rom_55C322) > 0x17
	.error "gText_Rom_55C322 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C322) < 0x17
	.space 0x17 - (. - gText_Rom_55C322)
	.endif

	@ src/data/items.h:14306 items_line_14306
	.globl gText_Rom_55C339
gText_Rom_55C339: @ 0x0855C339
	.string "すてられぶねの そうこに\nはいる ための カギ"
	.byte EOS
	.if (. - gText_Rom_55C339) > 0x18
	.error "gText_Rom_55C339 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C339) < 0x18
	.space 0x18 - (. - gText_Rom_55C339)
	.endif

	@ src/data/items.h:64 sRootFossilDesc
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C351
gText_Rom_55C351: @ 0x0855C351
	.string "おおむかし かいていで\nくらしていた ポケモンの\nカセキと いわれている"
	.byte EOS
	.if (. - gText_Rom_55C351) != 0x25
	.error "gText_Rom_55C351 must retain its original byte length"
	.endif
	.globl gText_Rom_55C372
	.set gText_Rom_55C372, gText_Rom_55C351 + 0x21

	@ src/data/items.h:64 sRootFossilDesc
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C376
gText_Rom_55C376: @ 0x0855C376
	.string "おおむかし かいていで\nくらしていた ポケモンの\nカセキと いわれている"
	.byte EOS
	.if (. - gText_Rom_55C376) != 0x25
	.error "gText_Rom_55C376 must retain its original byte length"
	.endif
	.globl gText_Rom_55C397
	.set gText_Rom_55C397, gText_Rom_55C376 + 0x21

	@ src/data/items.h:14259 items_line_14259
	.globl gText_Rom_55C39B
gText_Rom_55C39B: @ 0x0855C39B
	.string "みえない ポケモンに\nはんのうして おとをだす\nデボンの とくせいひん"
	.byte EOS
	.if (. - gText_Rom_55C39B) > 0x24
	.error "gText_Rom_55C39B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C39B) < 0x24
	.space 0x24 - (. - gText_Rom_55C39B)
	.endif
