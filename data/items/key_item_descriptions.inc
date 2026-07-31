@ Key-item descriptions preceding gItems.
@ Extracted from the original Japanese ROM; no baserom dependency remains.
@ Keep order and byte lengths unchanged for matching.

	@ src/data/items.h:14424 items_line_14424
	.globl gItemDescription_OAKS_PARCEL
gItemDescription_OAKS_PARCEL: @ 0x0855CB52
	.string "ショップの てんいんから\nたのまれた おとどけもの\nオーキドはかせに わたす"
	.byte EOS
	.if (. - gItemDescription_OAKS_PARCEL) > 0x27
	.error "gItemDescription_OAKS_PARCEL may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_OAKS_PARCEL) < 0x27
	.space 0x27 - (. - gItemDescription_OAKS_PARCEL)
	.endif

	@ src/data/items.h:14080 items_line_14080
	.globl gItemDescription_POKE_FLUTE
gItemDescription_POKE_FLUTE: @ 0x0855CB79
	.string "きれいな ねいろの ふえ\nねている ポケモンが\nきくと とびおきる"
	.byte EOS
	.if (. - gItemDescription_POKE_FLUTE) > 0x22
	.error "gItemDescription_POKE_FLUTE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_POKE_FLUTE) < 0x22
	.space 0x22 - (. - gItemDescription_POKE_FLUTE)
	.endif

	@ src/data/items.h:14440 items_line_14440
	.globl gItemDescription_SECRET_KEY
gItemDescription_SECRET_KEY: @ 0x0855CB9B
	.string "グレンじま ジムの\nいりぐちを あける カギ"
	.byte EOS
	.if (. - gItemDescription_SECRET_KEY) > 0x17
	.error "gItemDescription_SECRET_KEY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_SECRET_KEY) < 0x17
	.space 0x17 - (. - gItemDescription_SECRET_KEY)
	.endif

	@ src/data/items.h:14455 items_line_14455
	.globl gItemDescription_BIKE_VOUCHER
gItemDescription_BIKE_VOUCHER: @ 0x0855CBB2
	.string "ミラクル・サイクルで\nおりたたみ じてんしゃと\nこうかん できる かみ"
	.byte EOS
	.if (. - gItemDescription_BIKE_VOUCHER) > 0x24
	.error "gItemDescription_BIKE_VOUCHER may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_BIKE_VOUCHER) < 0x24
	.space 0x24 - (. - gItemDescription_BIKE_VOUCHER)
	.endif

	@ src/data/items.h:14472 items_line_14472
	.globl gItemDescription_GOLD_TEETH
gItemDescription_GOLD_TEETH: @ 0x0855CBD6
	.string "サファリゾーンの\nえんちょうが おとした\nきんいろの いれば"
	.byte EOS
	.if (. - gItemDescription_GOLD_TEETH) > 0x1f
	.error "gItemDescription_GOLD_TEETH may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_GOLD_TEETH) < 0x1f
	.space 0x1f - (. - gItemDescription_GOLD_TEETH)
	.endif

	@ src/data/items.h:3264 items_line_3264
	.globl gItemDescription_OLD_AMBER
gItemDescription_OLD_AMBER: @ 0x0855CBF5
	.string "こだい ポケモンの\nいでんし じょうほうが\nとじこめられている いし"
	.byte EOS
	.if (. - gItemDescription_OLD_AMBER) > 0x23
	.error "gItemDescription_OLD_AMBER may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_OLD_AMBER) < 0x23
	.space 0x23 - (. - gItemDescription_OLD_AMBER)
	.endif

	@ src/data/items.h:14488 items_line_14488
	.globl gItemDescription_CARD_KEY
gItemDescription_CARD_KEY: @ 0x0855CC18
	.string "カードで できた カギ\nシルフカンパニー ビルの\nドアロックを はずせる"
	.byte EOS
	.if (. - gItemDescription_CARD_KEY) > 0x25
	.error "gItemDescription_CARD_KEY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_CARD_KEY) < 0x25
	.space 0x25 - (. - gItemDescription_CARD_KEY)
	.endif

	@ src/data/items.h:14504 items_line_14504
	.globl gItemDescription_LIFT_KEY
gItemDescription_LIFT_KEY: @ 0x0855CC3D
	.string "ロケットだん アジトの\nエレベーターを うごかす\nことが できる カギ"
	.byte EOS
	.if (. - gItemDescription_LIFT_KEY) > 0x24
	.error "gItemDescription_LIFT_KEY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_LIFT_KEY) < 0x24
	.space 0x24 - (. - gItemDescription_LIFT_KEY)
	.endif

	@ src/data/items.h:3218 items_line_3218
	.globl gItemDescription_HELIX_FOSSIL
gItemDescription_HELIX_FOSSIL: @ 0x0855CC61
	.string "おおむかし うみに\nすんでいた ポケモンの\nかいがらの いちぶ"
	.byte EOS
	.if (. - gItemDescription_HELIX_FOSSIL) > 0x20
	.error "gItemDescription_HELIX_FOSSIL may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_HELIX_FOSSIL) < 0x20
	.space 0x20 - (. - gItemDescription_HELIX_FOSSIL)
	.endif

	@ src/data/items.h:3241 items_line_3241
	.globl gItemDescription_DOME_FOSSIL
gItemDescription_DOME_FOSSIL: @ 0x0855CC81
	.string "おおむかし うみに\nすんでいた ポケモンの\nこうらの いちぶ"
	.byte EOS
	.if (. - gItemDescription_DOME_FOSSIL) > 0x1f
	.error "gItemDescription_DOME_FOSSIL may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_DOME_FOSSIL) < 0x1f
	.space 0x1f - (. - gItemDescription_DOME_FOSSIL)
	.endif

	@ src/data/items.h:14520 items_line_14520
	.globl gItemDescription_SILPH_SCOPE
gItemDescription_SILPH_SCOPE: @ 0x0855CCA0
	.string "めに みえない ものを\nみられる スコープ\nシルフ カンパニーせい"
	.byte EOS
	.if (. - gItemDescription_SILPH_SCOPE) > 0x22
	.error "gItemDescription_SILPH_SCOPE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_SILPH_SCOPE) < 0x22
	.space 0x22 - (. - gItemDescription_SILPH_SCOPE)
	.endif

	@ src/data/items.h:13784 items_line_13784
	.globl gItemDescription_BICYCLE
gItemDescription_BICYCLE: @ 0x0855CCC2
	.string "おりたたみの じてんしゃ\nランニングシューズより\nはやく はしる"
	.byte EOS
	.if (. - gItemDescription_BICYCLE) != 0x21
	.error "gItemDescription_BICYCLE must retain its original byte length"
	.endif

	@ src/data/items.h:13902 items_line_13902
	.globl gItemDescription_TOWN_MAP
gItemDescription_TOWN_MAP: @ 0x0855CCE3
	.string "いつでも みることが\nできる べんりな ちず\nじぶんの いちも わかる"
	.byte EOS
	.if (. - gItemDescription_TOWN_MAP) != 0x24
	.error "gItemDescription_TOWN_MAP must retain its original byte length"
	.endif

	@ src/data/items.h:13918 items_line_13918
	.globl gItemDescription_VS_SEEKER
gItemDescription_VS_SEEKER: @ 0x0855CD07
	.string "たたかえる トレーナーを\nおしえてくれる きかい\nじゅうでんして つかう"
	.byte EOS
	.if (. - gItemDescription_VS_SEEKER) != 0x25
	.error "gItemDescription_VS_SEEKER must retain its original byte length"
	.endif

	@ src/data/items.h:14097 items_line_14097
	.globl gItemDescription_FAME_CHECKER
gItemDescription_FAME_CHECKER: @ 0x0855CD2C
	.string "ゆうめいな じんぶつの\nじょうほうを いつでも\nみなおすことが できる"
	.byte EOS
	.if (. - gItemDescription_FAME_CHECKER) != 0x24
	.error "gItemDescription_FAME_CHECKER must retain its original byte length"
	.endif

	@ src/data/items.h:13938 items_line_13938
	.globl gItemDescription_TM_CASE
gItemDescription_TM_CASE: @ 0x0855CD50
	.string "わざマシンを ほかんする\nべんりな いれもの"
	.byte EOS
	.if (. - gItemDescription_TM_CASE) > 0x17
	.error "gItemDescription_TM_CASE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_TM_CASE) < 0x17
	.space 0x17 - (. - gItemDescription_TM_CASE)
	.endif

	@ src/data/items.h:13954 items_line_13954
	.globl gItemDescription_BERRY_POUCH
gItemDescription_BERRY_POUCH: @ 0x0855CD67
	.string "きのみを ほぞんする\nべんりな いれもの"
	.byte EOS
	.if (. - gItemDescription_BERRY_POUCH) > 0x15
	.error "gItemDescription_BERRY_POUCH may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_BERRY_POUCH) < 0x15
	.space 0x15 - (. - gItemDescription_BERRY_POUCH)
	.endif

	@ src/data/items.h:14113 items_line_14113
	.globl gItemDescription_TEACHY_TV
gItemDescription_TEACHY_TV: @ 0x0855CD7C
	.string "トレーナーの やくにたつ\nばんぐみを みることが\nできる テレビ"
	.byte EOS
	.if (. - gItemDescription_TEACHY_TV) != 0x21
	.error "gItemDescription_TEACHY_TV must retain its original byte length"
	.endif
	@ ITEM_TRI_PASS: トライパス
	.globl gItemDescription_TRI_PASS
gItemDescription_TRI_PASS: @ 0x0855CD9D
	.string "1のしまと 2のしまと\n3のしまを いどうする\nふねに のれる"
	.byte 0x00 @ original trailing space
	.byte EOS
	.if (. - gItemDescription_TRI_PASS) != 0x21
	.error "gItemDescription_TRI_PASS must be exactly 0x21 bytes"
	.endif

	@ ITEM_RAINBOW_PASS: レインボーパス
	.globl gItemDescription_RAINBOW_PASS
gItemDescription_RAINBOW_PASS: @ 0x0855CDBE
	.string "クチバシティと\nななしまを いどうする\nふねに のれる"
	.byte 0x00 @ original trailing space
	.byte EOS
	.if (. - gItemDescription_RAINBOW_PASS) != 0x1D
	.error "gItemDescription_RAINBOW_PASS must be exactly 0x1D bytes"
	.endif

@ src/data/items.h:14571 items_line_14571
	.globl gItemDescription_TEA
gItemDescription_TEA: @ 0x0855CDDB
	.string "おばあさんが いれた\nおいしい おちゃ\nかわきを うるおす"
	.byte EOS
	.if (. - gItemDescription_TEA) > 0x1e
	.error "gItemDescription_TEA may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_TEA) < 0x1e
	.space 0x1e - (. - gItemDescription_TEA)
	.endif

	@ src/data/items.h:14162 items_line_14162
	.globl gItemDescription_MYSTIC_TICKET
gItemDescription_MYSTIC_TICKET: @ 0x0855CDF9
	.string "へそのいわへ\nいくために ひつような\nふねの チケット"
	.byte EOS
	.if (. - gItemDescription_MYSTIC_TICKET) > 0x1c
	.error "gItemDescription_MYSTIC_TICKET may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_MYSTIC_TICKET) < 0x1c
	.space 0x1c - (. - gItemDescription_MYSTIC_TICKET)
	.endif

	@ src/data/items.h:14178 items_line_14178
	.globl gItemDescription_AURORA_TICKET
gItemDescription_AURORA_TICKET: @ 0x0855CE15
	.string "たんじょうのしまへ\nいくために ひつような\nふねの チケット"
	.byte EOS
	.if (. - gItemDescription_AURORA_TICKET) > 0x1f
	.error "gItemDescription_AURORA_TICKET may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_AURORA_TICKET) < 0x1f
	.space 0x1f - (. - gItemDescription_AURORA_TICKET)
	.endif

	@ src/data/items.h:14001 items_line_14001
	.globl gItemDescription_POWDER_JAR
gItemDescription_POWDER_JAR: @ 0x0855CE34
	.string "きのみクラッシュで\nできた きのみの こなを\nほぞんする いれもの"
	.byte EOS
	.if (. - gItemDescription_POWDER_JAR) > 0x22
	.error "gItemDescription_POWDER_JAR may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_POWDER_JAR) < 0x22
	.space 0x22 - (. - gItemDescription_POWDER_JAR)
	.endif

	@ src/data/items.h:14588 items_line_14588
	.globl gItemDescription_RUBY
gItemDescription_RUBY: @ 0x0855CE56
	.string "じょうねつを あらわす\nうつくしい ほうせき\nあかく ひかり かがやく"
	.byte EOS
	.if (. - gItemDescription_RUBY) > 0x24
	.error "gItemDescription_RUBY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_RUBY) < 0x24
	.space 0x24 - (. - gItemDescription_RUBY)
	.endif

	@ src/data/items.h:14604 items_line_14604
	.globl gItemDescription_SAPPHIRE
gItemDescription_SAPPHIRE: @ 0x0855CE7A
	.string "せいじつを あらわす\nうつくしい ほうせき\nあおく ひかり かがやく"
	.byte EOS
	.if (. - gItemDescription_SAPPHIRE) > 0x23
	.error "gItemDescription_SAPPHIRE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_SAPPHIRE) < 0x23
	.space 0x23 - (. - gItemDescription_SAPPHIRE)
	.endif
	@ ITEM_MAGMA_EMBLEM: マグマのしるし
	.globl gItemDescription_MAGMA_EMBLEM
gItemDescription_MAGMA_EMBLEM: @ 0x0855CE9D
	.string "マグマだんの マークと\nおなじ かたちを した\nメダルの ようなもの"
	.byte EOS
	.if (. - gItemDescription_MAGMA_EMBLEM) != 0x23
	.error "gItemDescription_MAGMA_EMBLEM must be exactly 0x23 bytes"
	.endif

	@ src/data/items.h:14194 items_line_14194
	.globl gItemDescription_OLD_SEA_MAP
gItemDescription_OLD_SEA_MAP: @ 0x0855CEC0
	.string "ある しまへの かいろを\nしるして ある\nふるぼけた うみの ちず"
	.byte EOS
	.if (. - gItemDescription_OLD_SEA_MAP) > 0x22
	.error "gItemDescription_OLD_SEA_MAP may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_OLD_SEA_MAP) < 0x22
	.space 0x22 - (. - gItemDescription_OLD_SEA_MAP)
	.endif
	
	@ ITEM_NONE: ダミー説明文
	.globl gItemDescription_Dummy
gItemDescription_Dummy: @ 0x0855CEE2
	.string "?????"
	.byte EOS
	.if (. - gItemDescription_Dummy) != 0x6
	.error "gItemDescription_Dummy must be exactly 0x6 bytes"
	.endif

	.align 2
