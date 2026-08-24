	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:898 Route110_TrickHousePuzzle5_Text_WroteSecretCodeLockOpened
	.globl Route110_TrickHousePuzzle5_Text_WroteSecretCodeLockOpened
Route110_TrickHousePuzzle5_Text_WroteSecretCodeLockOpened: @ 0x0823F851
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま てんさい」\p…… …… ……\pかぎの はずれる おとがした!{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_WroteSecretCodeLockOpened) > 0x43
	.error "Route110_TrickHousePuzzle5_Text_WroteSecretCodeLockOpened may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_WroteSecretCodeLockOpened) < 0x43
	.space 0x43 - (. - Route110_TrickHousePuzzle5_Text_WroteSecretCodeLockOpened)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:901 Route110_TrickHousePuzzle5_Text_Mechadoll1Intro
	.globl Route110_TrickHousePuzzle5_Text_Mechadoll1Intro
Route110_TrickHousePuzzle5_Text_Mechadoll1Intro: @ 0x0823F894
	.string "カタカタ…\nワガハイ ハ からくりニンギョウ 1ゴウ!\pからくりニンギョウ 5ゴウノ トコロマデ\nツヅケテ くいずニ セイカイ スレバ\lあいことばニ タドリツケルゾ!{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll1Intro) > 0x54
	.error "Route110_TrickHousePuzzle5_Text_Mechadoll1Intro may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll1Intro) < 0x54
	.space 0x54 - (. - Route110_TrickHousePuzzle5_Text_Mechadoll1Intro)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:904 Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz1
	.globl Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz1
Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz1: @ 0x0823F8E8
	.string "からくりニンギョウ 1ゴウ くいず!\pこのなかで 110ばんどうろに\nいない ポケモンは どれ?{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz1) > 0x31
	.error "Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz1 may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz1) < 0x31
	.space 0x31 - (. - Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz1)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:907 Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz2
	.globl Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz2
Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz2: @ 0x0823F919
	.string "からくりニンギョウ 1ゴウ くいず!\pこのなかで みずタイプが はいってない\nポケモンは どれ?{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz2) > 0x31
	.error "Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz2 may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz2) < 0x31
	.space 0x31 - (. - Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz2)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:910 Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz3
	.globl Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz3
Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz3: @ 0x0823F94A
	.string "からくりニンギョウ 1ゴウ くいず!\pこのなかで きゅうけつを\nつかえない ポケモンは どれ?{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz3) > 0x30
	.error "Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz3 may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz3) < 0x30
	.space 0x30 - (. - Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz3)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:913 Route110_TrickHousePuzzle5_Text_CorrectGoThrough
	.globl Route110_TrickHousePuzzle5_Text_CorrectGoThrough
Route110_TrickHousePuzzle5_Text_CorrectGoThrough: @ 0x0823F97A
	.string "オメデトウ セイカイ デース!\nサキヘ ドウゾ!{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_CorrectGoThrough) > 0x19
	.error "Route110_TrickHousePuzzle5_Text_CorrectGoThrough may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_CorrectGoThrough) < 0x19
	.space 0x19 - (. - Route110_TrickHousePuzzle5_Text_CorrectGoThrough)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:916 Route110_TrickHousePuzzle5_Text_DisappointmentError
	.globl Route110_TrickHousePuzzle5_Text_DisappointmentError
Route110_TrickHousePuzzle5_Text_DisappointmentError: @ 0x0823F993
	.string "ザンネン!\nマチガイ デーーース!{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_DisappointmentError) > 0x12
	.error "Route110_TrickHousePuzzle5_Text_DisappointmentError may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_DisappointmentError) < 0x12
	.space 0x12 - (. - Route110_TrickHousePuzzle5_Text_DisappointmentError)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:919 Route110_TrickHousePuzzle5_Text_Wahahahaha
	.globl Route110_TrickHousePuzzle5_Text_Wahahahaha
Route110_TrickHousePuzzle5_Text_Wahahahaha: @ 0x0823F9A5
	.string "ワハハハハ! ワハハハハ! カタカタ!{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_Wahahahaha) > 0x14
	.error "Route110_TrickHousePuzzle5_Text_Wahahahaha may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_Wahahahaha) < 0x14
	.space 0x14 - (. - Route110_TrickHousePuzzle5_Text_Wahahahaha)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:922 Route110_TrickHousePuzzle5_Text_WaitForNextChallenge
	.globl Route110_TrickHousePuzzle5_Text_WaitForNextChallenge
Route110_TrickHousePuzzle5_Text_WaitForNextChallenge: @ 0x0823F9B9
	.string "マタノ ちゃれんじ オマチシテマース!{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_WaitForNextChallenge) > 0x14
	.error "Route110_TrickHousePuzzle5_Text_WaitForNextChallenge may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_WaitForNextChallenge) < 0x14
	.space 0x14 - (. - Route110_TrickHousePuzzle5_Text_WaitForNextChallenge)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:925 Route110_TrickHousePuzzle5_Text_Mechadoll2Intro
	.globl Route110_TrickHousePuzzle5_Text_Mechadoll2Intro
Route110_TrickHousePuzzle5_Text_Mechadoll2Intro: @ 0x0823F9CD
	.string "カタカタ…\nワガハイ ハ からくりニンギョウ 2ゴウ!\l1ゴウノ くいずハ ヤサシスギルヨ!{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll2Intro) > 0x2f
	.error "Route110_TrickHousePuzzle5_Text_Mechadoll2Intro may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll2Intro) < 0x2f
	.space 0x2f - (. - Route110_TrickHousePuzzle5_Text_Mechadoll2Intro)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:928 Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz1
	.globl Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz1
Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz1: @ 0x0823F9FC
	.string "からくりニンギョウ 2ゴウ くいず!\pミツルくんが パパから かしてもらった\nポケモンは なんだった?{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz1) > 0x34
	.error "Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz1 may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz1) < 0x34
	.space 0x34 - (. - Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz1)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:931 Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz2
	.globl Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz2
Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz2: @ 0x0823FA30
	.string "からくりニンギョウ 2ゴウ くいず!\pオダマキはかせを おいかけていた\nポケモンは なんだった?{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz2) > 0x31
	.error "Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz2 may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz2) < 0x31
	.space 0x31 - (. - Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz2)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:934 Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz3
	.globl Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz3
Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz3: @ 0x0823FA61
	.string "からくりニンギョウ 2ゴウ くいず!\pトウカのもりで アクアだんが\nたたかわせた ポケモンは なんだった?{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz3) > 0x36
	.error "Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz3 may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz3) < 0x36
	.space 0x36 - (. - Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz3)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:937 Route110_TrickHousePuzzle5_Text_Mechadoll3Intro
	.globl Route110_TrickHousePuzzle5_Text_Mechadoll3Intro
Route110_TrickHousePuzzle5_Text_Mechadoll3Intro: @ 0x0823FA97
	.string "カタカタ…\nワガハイ ハ からくりニンギョウ 3ゴウ!\lオカネニハ ウルサイノダ!{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll3Intro) > 0x2a
	.error "Route110_TrickHousePuzzle5_Text_Mechadoll3Intro may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll3Intro) < 0x2a
	.space 0x2a - (. - Route110_TrickHousePuzzle5_Text_Mechadoll3Intro)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:940 Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz1
	.globl Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz1
Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz1: @ 0x0823FAC1
	.string "からくりニンギョウ 3ゴウ くいず!\pハーバーメール 3つ かうのと\nやけどなおし 1つ かうのと\lどっちが たかい?{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz1) > 0x3c
	.error "Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz1 may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz1) < 0x3c
	.space 0x3c - (. - Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz1)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:943 Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz2
	.globl Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz2
Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz2: @ 0x0823FAFD
	.string "からくりニンギョウ 3ゴウ くいず!\pスーパーボールを うって\nキズぐすりを かうと いくら のこる?{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz2) > 0x34
	.error "Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz2 may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz2) < 0x34
	.space 0x34 - (. - Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz2)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:946 Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz3
	.globl Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz3
Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz3: @ 0x0823FB31
	.string "からくりニンギョウ 3ゴウ くいず!\pむしよけスプレーと サイコソーダを かうと\nいいキズぐすり より たかくなる?{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz3) > 0x3b
	.error "Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz3 may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz3) < 0x3b
	.space 0x3b - (. - Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz3)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:949 Route110_TrickHousePuzzle5_Text_Mechadoll4Intro
	.globl Route110_TrickHousePuzzle5_Text_Mechadoll4Intro
Route110_TrickHousePuzzle5_Text_Mechadoll4Intro: @ 0x0823FB6C
	.string "カタカタ…\nからくりニンギョウ 4ゴウ ヨーン!\lウツクシイ ワタシノ くいず イクワヨ!{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll4Intro) > 0x2e
	.error "Route110_TrickHousePuzzle5_Text_Mechadoll4Intro may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll4Intro) < 0x2e
	.space 0x2e - (. - Route110_TrickHousePuzzle5_Text_Mechadoll4Intro)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:952 Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz1
	.globl Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz1
Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz1: @ 0x0823FB9A
	.string "からくりニンギョウ 4ゴウ くいずヨ!\pうみのいえには だんせいと じょせい\nどちらが おおい?{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz1) > 0x31
	.error "Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz1 may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz1) < 0x31
	.space 0x31 - (. - Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz1)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:955 Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz2
	.globl Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz2
Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz2: @ 0x0823FBCB
	.string "からくりニンギョウ 4ゴウ くいずヨ!\pフエンタウンに いる\nおじいさんと おばあさん どっちがおおい?{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz2) > 0x35
	.error "Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz2 may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz2) < 0x35
	.space 0x35 - (. - Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz2)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:958 Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz3
	.globl Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz3
Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz3: @ 0x0823FC00
	.string "からくりニンギョウ 4ゴウ くいずヨ!\pポケモン トレーナーズ スクールに\nおんなのこの せいとは なんにん いた?{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz3) > 0x3b
	.error "Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz3 may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz3) < 0x3b
	.space 0x3b - (. - Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz3)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:961 Route110_TrickHousePuzzle5_Text_Mechadoll5Intro
	.globl Route110_TrickHousePuzzle5_Text_Mechadoll5Intro
Route110_TrickHousePuzzle5_Text_Mechadoll5Intro: @ 0x0823FC3B
	.string "カタカタ…\nワガハイ ハ からくりニンギョウ 5ゴウ!\lダイオウノ サイコウ ケッサク!{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll5Intro) > 0x2d
	.error "Route110_TrickHousePuzzle5_Text_Mechadoll5Intro may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll5Intro) < 0x2d
	.space 0x2d - (. - Route110_TrickHousePuzzle5_Text_Mechadoll5Intro)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:964 Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz1
	.globl Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz1
Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz1: @ 0x0823FC68
	.string "からくりニンギョウ 5ゴウ くいず!\pカイナシティの だいすきクラブに\nポケモンは なんひき いた?{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz1) > 0x33
	.error "Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz1 may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz1) < 0x33
	.space 0x33 - (. - Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz1)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:967 Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz2
	.globl Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz2
Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz2: @ 0x0823FC9B
	.string "からくりニンギョウ 5ゴウ くいず!\pヒワマキシティに ある ツリーハウス\nぜんぶで いくつ?{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz2) > 0x30
	.error "Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz2 may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz2) < 0x30
	.space 0x30 - (. - Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz2)
	.endif
	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:970 Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz3
	.globl Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz3
Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz3: @ 0x0823FCCB
	.string "からくりニンギョウ 5ゴウ くいず!\pサイクリングロードの うえに\nトライアスリートは なんにん いた?{EOS}"
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz3) > 0x35
	.error "Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz3 may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz3) < 0x35
	.space 0x35 - (. - Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz3)
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
