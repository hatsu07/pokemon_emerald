	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:898 Route110_TrickHousePuzzle5_Text_WroteSecretCodeLockOpened
	.globl gText_Rom_23F851
gText_Rom_23F851: @ 0x0823F851
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま てんさい」\p…… …… ……\pかぎの はずれる おとがした!{EOS}"
	.if (. - gText_Rom_23F851) > 0x43
	.error "gText_Rom_23F851 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F851) < 0x43
	.space 0x43 - (. - gText_Rom_23F851)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:901 Route110_TrickHousePuzzle5_Text_Mechadoll1Intro
	.globl gText_Rom_23F894
gText_Rom_23F894: @ 0x0823F894
	.string "カタカタ…\nワガハイ ハ からくりニンギョウ 1ゴウ!\pからくりニンギョウ 5ゴウノ トコロマデ\nツヅケテ くいずニ セイカイ スレバ\lあいことばニ タドリツケルゾ!{EOS}"
	.if (. - gText_Rom_23F894) > 0x54
	.error "gText_Rom_23F894 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F894) < 0x54
	.space 0x54 - (. - gText_Rom_23F894)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:904 Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz1
	.globl gText_Rom_23F8E8
gText_Rom_23F8E8: @ 0x0823F8E8
	.string "からくりニンギョウ 1ゴウ くいず!\pこのなかで 110ばんどうろに\nいない ポケモンは どれ?{EOS}"
	.if (. - gText_Rom_23F8E8) > 0x31
	.error "gText_Rom_23F8E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F8E8) < 0x31
	.space 0x31 - (. - gText_Rom_23F8E8)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:907 Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz2
	.globl gText_Rom_23F919
gText_Rom_23F919: @ 0x0823F919
	.string "からくりニンギョウ 1ゴウ くいず!\pこのなかで みずタイプが はいってない\nポケモンは どれ?{EOS}"
	.if (. - gText_Rom_23F919) > 0x31
	.error "gText_Rom_23F919 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F919) < 0x31
	.space 0x31 - (. - gText_Rom_23F919)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:910 Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz3
	.globl gText_Rom_23F94A
gText_Rom_23F94A: @ 0x0823F94A
	.string "からくりニンギョウ 1ゴウ くいず!\pこのなかで きゅうけつを\nつかえない ポケモンは どれ?{EOS}"
	.if (. - gText_Rom_23F94A) > 0x30
	.error "gText_Rom_23F94A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F94A) < 0x30
	.space 0x30 - (. - gText_Rom_23F94A)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:913 Route110_TrickHousePuzzle5_Text_CorrectGoThrough
	.globl gText_Rom_23F97A
gText_Rom_23F97A: @ 0x0823F97A
	.string "オメデトウ セイカイ デース!\nサキヘ ドウゾ!{EOS}"
	.if (. - gText_Rom_23F97A) > 0x19
	.error "gText_Rom_23F97A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F97A) < 0x19
	.space 0x19 - (. - gText_Rom_23F97A)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:916 Route110_TrickHousePuzzle5_Text_DisappointmentError
	.globl gText_Rom_23F993
gText_Rom_23F993: @ 0x0823F993
	.string "ザンネン!\nマチガイ デーーース!{EOS}"
	.if (. - gText_Rom_23F993) > 0x12
	.error "gText_Rom_23F993 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F993) < 0x12
	.space 0x12 - (. - gText_Rom_23F993)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:919 Route110_TrickHousePuzzle5_Text_Wahahahaha
	.globl gText_Rom_23F9A5
gText_Rom_23F9A5: @ 0x0823F9A5
	.string "ワハハハハ! ワハハハハ! カタカタ!{EOS}"
	.if (. - gText_Rom_23F9A5) > 0x14
	.error "gText_Rom_23F9A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F9A5) < 0x14
	.space 0x14 - (. - gText_Rom_23F9A5)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:922 Route110_TrickHousePuzzle5_Text_WaitForNextChallenge
	.globl gText_Rom_23F9B9
gText_Rom_23F9B9: @ 0x0823F9B9
	.string "マタノ ちゃれんじ オマチシテマース!{EOS}"
	.if (. - gText_Rom_23F9B9) > 0x14
	.error "gText_Rom_23F9B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F9B9) < 0x14
	.space 0x14 - (. - gText_Rom_23F9B9)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:925 Route110_TrickHousePuzzle5_Text_Mechadoll2Intro
	.globl gText_Rom_23F9CD
gText_Rom_23F9CD: @ 0x0823F9CD
	.string "カタカタ…\nワガハイ ハ からくりニンギョウ 2ゴウ!\l1ゴウノ くいずハ ヤサシスギルヨ!{EOS}"
	.if (. - gText_Rom_23F9CD) > 0x2f
	.error "gText_Rom_23F9CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F9CD) < 0x2f
	.space 0x2f - (. - gText_Rom_23F9CD)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:928 Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz1
	.globl gText_Rom_23F9FC
gText_Rom_23F9FC: @ 0x0823F9FC
	.string "からくりニンギョウ 2ゴウ くいず!\pミツルくんが パパから かしてもらった\nポケモンは なんだった?{EOS}"
	.if (. - gText_Rom_23F9FC) > 0x34
	.error "gText_Rom_23F9FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F9FC) < 0x34
	.space 0x34 - (. - gText_Rom_23F9FC)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:931 Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz2
	.globl gText_Rom_23FA30
gText_Rom_23FA30: @ 0x0823FA30
	.string "からくりニンギョウ 2ゴウ くいず!\pオダマキはかせを おいかけていた\nポケモンは なんだった?{EOS}"
	.if (. - gText_Rom_23FA30) > 0x31
	.error "gText_Rom_23FA30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FA30) < 0x31
	.space 0x31 - (. - gText_Rom_23FA30)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:934 Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz3
	.globl gText_Rom_23FA61
gText_Rom_23FA61: @ 0x0823FA61
	.string "からくりニンギョウ 2ゴウ くいず!\pトウカのもりで アクアだんが\nたたかわせた ポケモンは なんだった?{EOS}"
	.if (. - gText_Rom_23FA61) > 0x36
	.error "gText_Rom_23FA61 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FA61) < 0x36
	.space 0x36 - (. - gText_Rom_23FA61)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:937 Route110_TrickHousePuzzle5_Text_Mechadoll3Intro
	.globl gText_Rom_23FA97
gText_Rom_23FA97: @ 0x0823FA97
	.string "カタカタ…\nワガハイ ハ からくりニンギョウ 3ゴウ!\lオカネニハ ウルサイノダ!{EOS}"
	.if (. - gText_Rom_23FA97) > 0x2a
	.error "gText_Rom_23FA97 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FA97) < 0x2a
	.space 0x2a - (. - gText_Rom_23FA97)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:940 Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz1
	.globl gText_Rom_23FAC1
gText_Rom_23FAC1: @ 0x0823FAC1
	.string "からくりニンギョウ 3ゴウ くいず!\pハーバーメール 3つ かうのと\nやけどなおし 1つ かうのと\lどっちが たかい?{EOS}"
	.if (. - gText_Rom_23FAC1) > 0x3c
	.error "gText_Rom_23FAC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FAC1) < 0x3c
	.space 0x3c - (. - gText_Rom_23FAC1)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:943 Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz2
	.globl gText_Rom_23FAFD
gText_Rom_23FAFD: @ 0x0823FAFD
	.string "からくりニンギョウ 3ゴウ くいず!\pスーパーボールを うって\nキズぐすりを かうと いくら のこる?{EOS}"
	.if (. - gText_Rom_23FAFD) > 0x34
	.error "gText_Rom_23FAFD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FAFD) < 0x34
	.space 0x34 - (. - gText_Rom_23FAFD)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:946 Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz3
	.globl gText_Rom_23FB31
gText_Rom_23FB31: @ 0x0823FB31
	.string "からくりニンギョウ 3ゴウ くいず!\pむしよけスプレーと サイコソーダを かうと\nいいキズぐすり より たかくなる?{EOS}"
	.if (. - gText_Rom_23FB31) > 0x3b
	.error "gText_Rom_23FB31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FB31) < 0x3b
	.space 0x3b - (. - gText_Rom_23FB31)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:949 Route110_TrickHousePuzzle5_Text_Mechadoll4Intro
	.globl gText_Rom_23FB6C
gText_Rom_23FB6C: @ 0x0823FB6C
	.string "カタカタ…\nからくりニンギョウ 4ゴウ ヨーン!\lウツクシイ ワタシノ くいず イクワヨ!{EOS}"
	.if (. - gText_Rom_23FB6C) > 0x2e
	.error "gText_Rom_23FB6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FB6C) < 0x2e
	.space 0x2e - (. - gText_Rom_23FB6C)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:952 Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz1
	.globl gText_Rom_23FB9A
gText_Rom_23FB9A: @ 0x0823FB9A
	.string "からくりニンギョウ 4ゴウ くいずヨ!\pうみのいえには だんせいと じょせい\nどちらが おおい?{EOS}"
	.if (. - gText_Rom_23FB9A) > 0x31
	.error "gText_Rom_23FB9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FB9A) < 0x31
	.space 0x31 - (. - gText_Rom_23FB9A)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:955 Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz2
	.globl gText_Rom_23FBCB
gText_Rom_23FBCB: @ 0x0823FBCB
	.string "からくりニンギョウ 4ゴウ くいずヨ!\pフエンタウンに いる\nおじいさんと おばあさん どっちがおおい?{EOS}"
	.if (. - gText_Rom_23FBCB) > 0x35
	.error "gText_Rom_23FBCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FBCB) < 0x35
	.space 0x35 - (. - gText_Rom_23FBCB)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:958 Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz3
	.globl gText_Rom_23FC00
gText_Rom_23FC00: @ 0x0823FC00
	.string "からくりニンギョウ 4ゴウ くいずヨ!\pポケモン トレーナーズ スクールに\nおんなのこの せいとは なんにん いた?{EOS}"
	.if (. - gText_Rom_23FC00) > 0x3b
	.error "gText_Rom_23FC00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FC00) < 0x3b
	.space 0x3b - (. - gText_Rom_23FC00)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:961 Route110_TrickHousePuzzle5_Text_Mechadoll5Intro
	.globl gText_Rom_23FC3B
gText_Rom_23FC3B: @ 0x0823FC3B
	.string "カタカタ…\nワガハイ ハ からくりニンギョウ 5ゴウ!\lダイオウノ サイコウ ケッサク!{EOS}"
	.if (. - gText_Rom_23FC3B) > 0x2d
	.error "gText_Rom_23FC3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FC3B) < 0x2d
	.space 0x2d - (. - gText_Rom_23FC3B)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:964 Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz1
	.globl gText_Rom_23FC68
gText_Rom_23FC68: @ 0x0823FC68
	.string "からくりニンギョウ 5ゴウ くいず!\pカイナシティの だいすきクラブに\nポケモンは なんひき いた?{EOS}"
	.if (. - gText_Rom_23FC68) > 0x33
	.error "gText_Rom_23FC68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FC68) < 0x33
	.space 0x33 - (. - gText_Rom_23FC68)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:967 Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz2
	.globl gText_Rom_23FC9B
gText_Rom_23FC9B: @ 0x0823FC9B
	.string "からくりニンギョウ 5ゴウ くいず!\pヒワマキシティに ある ツリーハウス\nぜんぶで いくつ?{EOS}"
	.if (. - gText_Rom_23FC9B) > 0x30
	.error "gText_Rom_23FC9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FC9B) < 0x30
	.space 0x30 - (. - gText_Rom_23FC9B)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:970 Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz3
	.globl gText_Rom_23FCCB
gText_Rom_23FCCB: @ 0x0823FCCB
	.string "からくりニンギョウ 5ゴウ くいず!\pサイクリングロードの うえに\nトライアスリートは なんにん いた?{EOS}"
	.if (. - gText_Rom_23FCCB) > 0x35
	.error "gText_Rom_23FCCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FCCB) < 0x35
	.space 0x35 - (. - gText_Rom_23FCCB)
	.endif
	@ Embedded ROM bytes: file offset 0x23FD00, size 0x7F
	.byte 0x03, 0x0B, 0xFD, 0x23, 0x08, 0x04, 0x0F, 0xFD, 0x23, 0x08, 0x00, 0x25, 0xC9, 0x00, 0x02, 0x00
	.byte 0x40, 0x00, 0x40, 0x19, 0xFD, 0x23, 0x08, 0x00, 0x00, 0x25, 0xCA, 0x00, 0x02, 0x69, 0x21, 0xB0
	.byte 0x40, 0x00, 0x00, 0x06, 0x01, 0x2F, 0xFD, 0x23, 0x08, 0x05, 0xAC, 0xD1, 0x23, 0x08, 0x02, 0x16
	.byte 0xB0, 0x40, 0x01, 0x00, 0x05, 0xB6, 0xD1, 0x23, 0x08, 0x02, 0x5C, 0x00, 0x31, 0x02, 0x00, 0x00
	.byte 0xC1, 0xFD, 0x23, 0x08, 0xE5, 0xFD, 0x23, 0x08, 0x0F, 0x00, 0xF6, 0xFD, 0x23, 0x08, 0x09, 0x06
	.byte 0x02, 0x5C, 0x00, 0x97, 0x01, 0x00, 0x00, 0x1C, 0xFE, 0x23, 0x08, 0x3D, 0xFE, 0x23, 0x08, 0x0F
	.byte 0x00, 0x47, 0xFE, 0x23, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0x2A, 0x02, 0x00, 0x00, 0x65, 0xFE
	.byte 0x23, 0x08, 0x7E, 0xFE, 0x23, 0x08, 0x0F, 0x00, 0x97, 0xFE, 0x23, 0x08, 0x09, 0x06, 0x02
