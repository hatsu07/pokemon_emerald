@------------------------------------------------------------------------------
@ Item descriptions
@ ROM: 0x0855A9D0 - 0x0855C3BE
@ ROM: 0x0855CDDB - 0x0855CEE7
@------------------------------------------------------------------------------

@ src/data/items.h:240 items_line_240
	.globl gItemDescription_MASTER_BALL
gItemDescription_MASTER_BALL: @ 0x0855A9D0
	.string "ポケモンを かならず\nつかまえることが できる\nさいこうの ボール"
	.byte EOS
	.if (. - gItemDescription_MASTER_BALL) != 0x22
	.error "gItemDescription_MASTER_BALL must retain its original byte length"
	.endif

	@ src/data/items.h:224 items_line_224
	.globl gItemDescription_ULTRA_BALL
gItemDescription_ULTRA_BALL: @ 0x0855A9F2
	.string "スーパーボール より\nつかまえ やすくなった\nとても すごい ボール"
	.byte EOS
	.if (. - gItemDescription_ULTRA_BALL) != 0x23
	.error "gItemDescription_ULTRA_BALL must retain its original byte length"
	.endif

	@ src/data/items.h:208 items_line_208
	.globl gItemDescription_GREAT_BALL
gItemDescription_GREAT_BALL: @ 0x0855AA15
	.string "モンスターボール より\nつかまえ やすくなった\nこうせいのうの ボール"
	.byte EOS
	.if (. - gItemDescription_GREAT_BALL) != 0x24
	.error "gItemDescription_GREAT_BALL must retain its original byte length"
	.endif

	@ src/data/items.h:193 items_line_193
	.globl gItemDescription_POKE_BALL
gItemDescription_POKE_BALL: @ 0x0855AA39
	.string "やせい ポケモンを\nつかまえるための どうぐ"
	.byte EOS
	.if (. - gItemDescription_POKE_BALL) != 0x17
	.error "gItemDescription_POKE_BALL must retain its original byte length"
	.endif

	@ src/data/items.h:549 items_line_549
	.globl gItemDescription_SAFARI_BALL
gItemDescription_SAFARI_BALL: @ 0x0855AA50
	.string "サファリゾーンで のみ\nつかうことが できる\nとくしゅな ボール"
	.byte EOS
	.if (. - gItemDescription_SAFARI_BALL) != 0x21
	.error "gItemDescription_SAFARI_BALL must retain its original byte length"
	.endif

	@ src/data/items.h:288 items_line_288
	.globl gItemDescription_NET_BALL
gItemDescription_NET_BALL: @ 0x0855AA71
	.string "みずと むしタイプの\nポケモンが つかまえ\nやすくなる ボール"
	.byte EOS
	.if (. - gItemDescription_NET_BALL) != 0x20
	.error "gItemDescription_NET_BALL must retain its original byte length"
	.endif

	@ src/data/items.h:320 items_line_320
	.globl gItemDescription_DIVE_BALL
gItemDescription_DIVE_BALL: @ 0x0855AA91
	.string "かいていに いる\nポケモンが つかまえ\nやすくなる ボール"
	.byte EOS
	.if (. - gItemDescription_DIVE_BALL) != 0x1e
	.error "gItemDescription_DIVE_BALL must retain its original byte length"
	.endif

	@ src/data/items.h:304 items_line_304
	.globl gItemDescription_NEST_BALL
gItemDescription_NEST_BALL: @ 0x0855AAAF
	.string "つかまえる ポケモンが\nよわいほど つかまえ\nやすくなる ボール"
	.byte EOS
	.if (. - gItemDescription_NEST_BALL) != 0x21
	.error "gItemDescription_NEST_BALL must retain its original byte length"
	.endif

	@ src/data/items.h:384 items_line_384
	.globl gItemDescription_REPEAT_BALL
gItemDescription_REPEAT_BALL: @ 0x0855AAD0
	.string "つかまえた ことが ある\nポケモンが つかまえ\nやすくなる ボール"
	.byte EOS
	.if (. - gItemDescription_REPEAT_BALL) != 0x22
	.error "gItemDescription_REPEAT_BALL must retain its original byte length"
	.endif

	@ src/data/items.h:352 items_line_352
	.globl gItemDescription_TIMER_BALL
gItemDescription_TIMER_BALL: @ 0x0855AAF2
	.string "ターンすうが かかれば\nかかるほど つかまえ\nやすくなる ボール"
	.byte EOS
	.if (. - gItemDescription_TIMER_BALL) != 0x21
	.error "gItemDescription_TIMER_BALL must retain its original byte length"
	.endif

	@ src/data/items.h:400 items_line_400
	.globl gItemDescription_LUXURY_BALL
gItemDescription_LUXURY_BALL: @ 0x0855AB13
	.string "つかまえた ポケモンが\nなつき やすくなる\nいごこちの いい ボール"
	.byte EOS
	.if (. - gItemDescription_LUXURY_BALL) != 0x23
	.error "gItemDescription_LUXURY_BALL must retain its original byte length"
	.endif

	@ src/data/items.h:256 items_line_256
	.globl gItemDescription_PREMIER_BALL
gItemDescription_PREMIER_BALL: @ 0x0855AB36
	.string "なにかの きねんに\nつくられた めずらしい\nモンスターボール"
	.byte EOS
	.if (. - gItemDescription_PREMIER_BALL) != 0x1f
	.error "gItemDescription_PREMIER_BALL must retain its original byte length"
	.endif

	@ src/data/items.h:632 items_line_632
	.globl gItemDescription_POTION
gItemDescription_POTION: @ 0x0855AB55
	.string "ポケモンの たいりょくを\n20 かいふくする"
	.byte EOS
	.if (. - gItemDescription_POTION) > 0x17
	.error "gItemDescription_POTION may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_POTION) < 0x17
	.space 0x17 - (. - gItemDescription_POTION)
	.endif

	@ src/data/items.h:946 items_line_946
	.globl gItemDescription_ANTIDOTE
gItemDescription_ANTIDOTE: @ 0x0855AB6C
	.string "どく じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gItemDescription_ANTIDOTE) > 0x11
	.error "gItemDescription_ANTIDOTE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_ANTIDOTE) < 0x11
	.space 0x11 - (. - gItemDescription_ANTIDOTE)
	.endif

	@ src/data/items.h:988 items_line_988
	.globl gItemDescription_BURN_HEAL
gItemDescription_BURN_HEAL: @ 0x0855AB7D
	.string "やけど じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gItemDescription_BURN_HEAL) > 0x12
	.error "gItemDescription_BURN_HEAL may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_BURN_HEAL) < 0x12
	.space 0x12 - (. - gItemDescription_BURN_HEAL)
	.endif

	@ src/data/items.h:1012 items_line_1012
	.globl gItemDescription_ICE_HEAL
gItemDescription_ICE_HEAL: @ 0x0855AB8F
	.string "こおり じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gItemDescription_ICE_HEAL) > 0x12
	.error "gItemDescription_ICE_HEAL may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_ICE_HEAL) < 0x12
	.space 0x12 - (. - gItemDescription_ICE_HEAL)
	.endif

	@ src/data/items.h:1036 items_line_1036
	.globl gItemDescription_AWAKENING
gItemDescription_AWAKENING: @ 0x0855ABA1
	.string "ねむり じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gItemDescription_AWAKENING) > 0x12
	.error "gItemDescription_AWAKENING may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_AWAKENING) < 0x12
	.space 0x12 - (. - gItemDescription_AWAKENING)
	.endif

	@ src/data/items.h:964 items_line_964
	.globl gItemDescription_PARALYZE_HEAL
gItemDescription_PARALYZE_HEAL: @ 0x0855ABB3
	.string "まひ じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gItemDescription_PARALYZE_HEAL) > 0x11
	.error "gItemDescription_PARALYZE_HEAL may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_PARALYZE_HEAL) < 0x11
	.space 0x11 - (. - gItemDescription_PARALYZE_HEAL)
	.endif

	@ src/data/items.h:716 items_line_716
	.globl gItemDescription_FULL_RESTORE
gItemDescription_FULL_RESTORE: @ 0x0855ABC4
	.string "ポケモンの たいりょくと\nじょうたい いじょうを\nぜんかいふくする"
	.byte EOS
	.if (. - gItemDescription_FULL_RESTORE) > 0x22
	.error "gItemDescription_FULL_RESTORE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_FULL_RESTORE) < 0x22
	.space 0x22 - (. - gItemDescription_FULL_RESTORE)
	.endif

	@ src/data/items.h:697 items_line_697
	.globl gItemDescription_MAX_POTION
gItemDescription_MAX_POTION: @ 0x0855ABE6
	.string "ポケモンの たいりょくを\nぜんかいふくする"
	.byte EOS
	.if (. - gItemDescription_MAX_POTION) > 0x16
	.error "gItemDescription_MAX_POTION may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_MAX_POTION) < 0x16
	.space 0x16 - (. - gItemDescription_MAX_POTION)
	.endif
	@ src/data/items.h: sHyperPotionDesc
	.globl gItemDescription_HYPER_POTION
gItemDescription_HYPER_POTION: @ 0x0855ABFC
	.string "ポケモンの たいりょくを\n200 かいふくする"
	.byte EOS

	@ src/data/items.h: sSuperPotionDesc
	.globl gItemDescription_SUPER_POTION
gItemDescription_SUPER_POTION: @ 0x0855AC14
	.string "ポケモンの たいりょくを\n50 かいふくする"
	.byte EOS

	@ src/data/items.h:22 sFullHealDesc
	.globl gItemDescription_FULL_HEAL
gItemDescription_FULL_HEAL: @ 0x0855AC2B
	.string "じょうたい いじょうを\nすべて かいふくする"
	.byte EOS
	.if (. - gItemDescription_FULL_HEAL) > 0x17
	.error "gItemDescription_FULL_HEAL may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_FULL_HEAL) < 0x17
	.space 0x17 - (. - gItemDescription_FULL_HEAL)
	.endif

	@ src/data/items.h:735 items_line_735
	.globl gItemDescription_REVIVE
gItemDescription_REVIVE: @ 0x0855AC42
	.string "ひんし じょうたいから\nたいりょく はんぶんまで\nかいふくする"
	.byte EOS
	.if (. - gItemDescription_REVIVE) > 0x20
	.error "gItemDescription_REVIVE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_REVIVE) < 0x20
	.space 0x20 - (. - gItemDescription_REVIVE)
	.endif

	@ src/data/items.h:29 sMaxReviveDesc
	.globl gItemDescription_MAX_REVIVE
gItemDescription_MAX_REVIVE: @ 0x0855AC62
	.string "ひんし じょうたいから\nたいりょくを\nぜんかいふくする"
	.byte EOS
	.if (. - gItemDescription_MAX_REVIVE) > 0x1c
	.error "gItemDescription_MAX_REVIVE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_MAX_REVIVE) < 0x1c
	.space 0x1c - (. - gItemDescription_MAX_REVIVE)
	.endif

	@ src/data/items.h: sFreshWaterDesc
	.globl gItemDescription_FRESH_WATER
gItemDescription_FRESH_WATER: @ 0x0855AC7E
	.string "ミネラルたっぷりの みず\nポケモンの たいりょくを\n50 かいふくする"
	.byte EOS

	@ src/data/items.h: sSodaPopDesc
	.globl gItemDescription_SODA_POP
gItemDescription_SODA_POP: @ 0x0855ACA2
	.string "ジュワーっと そうかい\nポケモンの たいりょくを\n60 かいふくする"
	.byte EOS

	@ src/data/items.h: sLemonadeDesc
	.globl gItemDescription_LEMONADE
gItemDescription_LEMONADE: @ 0x0855ACC5
	.string "とっても あまーい\nポケモンの たいりょくを\n80 かいふくする"
	.byte EOS

	@ src/data/items.h:843 items_line_843
	.globl gItemDescription_MOOMOO_MILK
gItemDescription_MOOMOO_MILK: @ 0x0855ACE6
	.string "えいよう まんてん\nポケモンの たいりょくを\n100 かいふくする"
	.byte EOS
	.if (. - gItemDescription_MOOMOO_MILK) > 0x22
	.error "gItemDescription_MOOMOO_MILK may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_MOOMOO_MILK) < 0x22
	.space 0x22 - (. - gItemDescription_MOOMOO_MILK)
	.endif

	@ src/data/items.h: sEnergyPowderDesc
	.globl gItemDescription_ENERGY_POWDER
gItemDescription_ENERGY_POWDER: @ 0x0855AD08
	.string "とても にがい こな\nポケモンの たいりょくを\n50 かいふくする"
	.byte EOS

	@ src/data/items.h: sEnergyRootDesc
	.globl gItemDescription_ENERGY_ROOT
gItemDescription_ENERGY_ROOT: @ 0x0855AD2A
	.string "とても にがい ねっこ\nポケモンの たいりょくを\n200 かいふくする"
	.byte EOS

	@ src/data/items.h:908 items_line_908
	.globl gItemDescription_HEAL_POWDER
gItemDescription_HEAL_POWDER: @ 0x0855AD4E
	.string "すごく にがい こな\nじょうたい いじょうを\nすべて かいふくする"
	.byte EOS
	.if (. - gItemDescription_HEAL_POWDER) != 0x22
	.error "gItemDescription_HEAL_POWDER must retain its original byte length"
	.endif

	@ src/data/items.h:927 items_line_927
	.globl gItemDescription_REVIVAL_HERB
gItemDescription_REVIVAL_HERB: @ 0x0855AD70
	.string "とても にがい くさ\nひんし じょうたいから\nふっかつする"
	.byte EOS
	.if (. - gItemDescription_REVIVAL_HERB) > 0x1e
	.error "gItemDescription_REVIVAL_HERB may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_REVIVAL_HERB) < 0x1e
	.space 0x1e - (. - gItemDescription_REVIVAL_HERB)
	.endif

	@ src/data/items.h:1071 items_line_1071
	.globl gItemDescription_ETHER
gItemDescription_ETHER: @ 0x0855AD8E
	.string "1つの わざの\nわざポイントを\n10 かいふくする"
	.byte EOS
	.if (. - gItemDescription_ETHER) > 0x1a
	.error "gItemDescription_ETHER may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_ETHER) < 0x1a
	.space 0x1a - (. - gItemDescription_ETHER)
	.endif

	@ src/data/items.h:1091 items_line_1091
	.globl gItemDescription_MAX_ETHER
gItemDescription_MAX_ETHER: @ 0x0855ADA8
	.string "1つの わざの\nわざポイントを\nぜんかいふくする"
	.byte EOS
	.if (. - gItemDescription_MAX_ETHER) > 0x19
	.error "gItemDescription_MAX_ETHER may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_MAX_ETHER) < 0x19
	.space 0x19 - (. - gItemDescription_MAX_ETHER)
	.endif

	@ src/data/items.h:1111 items_line_1111
	.globl gItemDescription_ELIXIR
gItemDescription_ELIXIR: @ 0x0855ADC1
	.string "すべての わざの\nわざポイントを\n10 かいふくする"
	.byte EOS
	.if (. - gItemDescription_ELIXIR) > 0x1b
	.error "gItemDescription_ELIXIR may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_ELIXIR) < 0x1b
	.space 0x1b - (. - gItemDescription_ELIXIR)
	.endif

	@ src/data/items.h:1131 items_line_1131
	.globl gItemDescription_MAX_ELIXIR
gItemDescription_MAX_ELIXIR: @ 0x0855ADDC
	.string "ポケモン 1ぴきの\nすべての わざポイントを\nぜんかいふくする"
	.byte EOS
	.if (. - gItemDescription_MAX_ELIXIR) > 0x20
	.error "gItemDescription_MAX_ELIXIR may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_MAX_ELIXIR) < 0x20
	.space 0x20 - (. - gItemDescription_MAX_ELIXIR)
	.endif

	@ src/data/items.h:1262 items_line_1262
	.globl gItemDescription_LAVA_COOKIE
gItemDescription_LAVA_COOKIE: @ 0x0855ADFC
	.string "フエンの めいぶつ\nじょうたい いじょうを\nすべて かいふくする"
	.byte EOS
	.if (. - gItemDescription_LAVA_COOKIE) != 0x21
	.error "gItemDescription_LAVA_COOKIE must retain its original byte length"
	.endif

	@ src/data/items.h:2162 items_line_2162
	.globl gItemDescription_BLUE_FLUTE
gItemDescription_BLUE_FLUTE: @ 0x0855AE1D
	.string "ガラスで できた ふえ\nねむり じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gItemDescription_BLUE_FLUTE) != 0x1e
	.error "gItemDescription_BLUE_FLUTE must retain its original byte length"
	.endif

	@ src/data/items.h:2182 items_line_2182
	.globl gItemDescription_YELLOW_FLUTE
gItemDescription_YELLOW_FLUTE: @ 0x0855AE3B
	.string "ガラスで できた ふえ\nこんらん じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gItemDescription_YELLOW_FLUTE) > 0x1f
	.error "gItemDescription_YELLOW_FLUTE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_YELLOW_FLUTE) < 0x1f
	.space 0x1f - (. - gItemDescription_YELLOW_FLUTE)
	.endif

	@ src/data/items.h:2202 items_line_2202
	.globl gItemDescription_RED_FLUTE
gItemDescription_RED_FLUTE: @ 0x0855AE5A
	.string "ガラスで できた ふえ\nメロメロ じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gItemDescription_RED_FLUTE) > 0x1f
	.error "gItemDescription_RED_FLUTE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_RED_FLUTE) < 0x1f
	.space 0x1f - (. - gItemDescription_RED_FLUTE)
	.endif

	@ src/data/items.h:2225 items_line_2225
	.globl gItemDescription_BLACK_FLUTE
gItemDescription_BLACK_FLUTE: @ 0x0855AE79
	.string "ガラスで できた ふえ\nやせい ポケモンと\nそうぐう しにくくなる"
	.byte EOS
	.if (. - gItemDescription_BLACK_FLUTE) > 0x22
	.error "gItemDescription_BLACK_FLUTE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_BLACK_FLUTE) < 0x22
	.space 0x22 - (. - gItemDescription_BLACK_FLUTE)
	.endif

	@ src/data/items.h:2244 items_line_2244
	.globl gItemDescription_WHITE_FLUTE
gItemDescription_WHITE_FLUTE: @ 0x0855AE9B
	.string "ガラスで できた ふえ\nやせい ポケモンと\nそうぐう しやすくなる"
	.byte EOS
	.if (. - gItemDescription_WHITE_FLUTE) > 0x22
	.error "gItemDescription_WHITE_FLUTE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_WHITE_FLUTE) < 0x22
	.space 0x22 - (. - gItemDescription_WHITE_FLUTE)
	.endif

	@ src/data/items.h:1152 items_line_1152
	.globl gItemDescription_BERRY_JUICE
gItemDescription_BERRY_JUICE: @ 0x0855AEBD
	.string "きのみ 100パーセント\nポケモンの たいりょくを\n20 かいふくする"
	.byte EOS
	.if (. - gItemDescription_BERRY_JUICE) != 0x24
	.error "gItemDescription_BERRY_JUICE must retain its original byte length"
	.endif

	@ src/data/items.h:1172 items_line_1172
	.globl gItemDescription_SACRED_ASH
gItemDescription_SACRED_ASH: @ 0x0855AEE1
	.string "ひんししている ポケモン\nすべてを せいじょうな\nじょうたいに する"
	.byte EOS
	.if (. - gItemDescription_SACRED_ASH) > 0x23
	.error "gItemDescription_SACRED_ASH may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_SACRED_ASH) < 0x23
	.space 0x23 - (. - gItemDescription_SACRED_ASH)
	.endif

	@ src/data/items.h:2901 items_line_2901
	.globl gItemDescription_SHOAL_SALT
gItemDescription_SHOAL_SALT: @ 0x0855AF04
	.string "あさせのほらあなで\nみつけた しお"
	.byte EOS
	.if (. - gItemDescription_SHOAL_SALT) > 0x12
	.error "gItemDescription_SHOAL_SALT may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_SHOAL_SALT) < 0x12
	.space 0x12 - (. - gItemDescription_SHOAL_SALT)
	.endif

	@ src/data/items.h:2917 items_line_2917
	.globl gItemDescription_SHOAL_SHELL
gItemDescription_SHOAL_SHELL: @ 0x0855AF16
	.string "あさせのほらあなで\nみつけた かいがら"
	.byte EOS
	.if (. - gItemDescription_SHOAL_SHELL) > 0x14
	.error "gItemDescription_SHOAL_SHELL may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_SHOAL_SHELL) < 0x14
	.space 0x14 - (. - gItemDescription_SHOAL_SHELL)
	.endif

	@ src/data/items.h:60 sShardsDesc
	.globl gItemDescription_RED_SHARD
gItemDescription_RED_SHARD: @ 0x0855AF2A
	.string "むかしに つくられた\nどうぐの かけら らしい\nやすく うれる"
	.byte EOS
	.if (. - gItemDescription_RED_SHARD) > 0x20
	.error "gItemDescription_RED_SHARD may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_RED_SHARD) < 0x20
	.space 0x20 - (. - gItemDescription_RED_SHARD)
	.endif

	@ src/data/items.h:60 sShardsDesc
	.globl gItemDescription_BLUE_SHARD
gItemDescription_BLUE_SHARD: @ 0x0855AF4A
	.string "むかしに つくられた\nどうぐの かけら らしい\nやすく うれる"
	.byte EOS
	.if (. - gItemDescription_BLUE_SHARD) > 0x20
	.error "gItemDescription_BLUE_SHARD may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_BLUE_SHARD) < 0x20
	.space 0x20 - (. - gItemDescription_BLUE_SHARD)
	.endif

	@ src/data/items.h:60 sShardsDesc
	.globl gItemDescription_YELLOW_SHARD
gItemDescription_YELLOW_SHARD: @ 0x0855AF6A
	.string "むかしに つくられた\nどうぐの かけら らしい\nやすく うれる"
	.byte EOS
	.if (. - gItemDescription_YELLOW_SHARD) > 0x20
	.error "gItemDescription_YELLOW_SHARD may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_YELLOW_SHARD) < 0x20
	.space 0x20 - (. - gItemDescription_YELLOW_SHARD)
	.endif

	@ src/data/items.h:60 sShardsDesc
	.globl gItemDescription_GREEN_SHARD
gItemDescription_GREEN_SHARD: @ 0x0855AF8A
	.string "むかしに つくられた\nどうぐの かけら らしい\nやすく うれる"
	.byte EOS
	.if (. - gItemDescription_GREEN_SHARD) > 0x20
	.error "gItemDescription_GREEN_SHARD may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_GREEN_SHARD) < 0x20
	.space 0x20 - (. - gItemDescription_GREEN_SHARD)
	.endif

	@ src/data/items.h:1364 items_line_1364
	.globl gItemDescription_HP_UP
gItemDescription_HP_UP: @ 0x0855AFAA
	.string "たいりょくの\nきそポイントを あげる"
	.byte EOS
	.if (. - gItemDescription_HP_UP) != 0x13
	.error "gItemDescription_HP_UP must retain its original byte length"
	.endif

	@ src/data/items.h:1381 items_line_1381
	.globl gItemDescription_PROTEIN
gItemDescription_PROTEIN: @ 0x0855AFBD
	.string "こうげきの\nきそポイントを あげる"
	.byte EOS
	.if (. - gItemDescription_PROTEIN) != 0x12
	.error "gItemDescription_PROTEIN must retain its original byte length"
	.endif

	@ src/data/items.h:1398 items_line_1398
	.globl gItemDescription_IRON
gItemDescription_IRON: @ 0x0855AFCF
	.string "ぼうぎょの\nきそポイントを あげる"
	.byte EOS
	.if (. - gItemDescription_IRON) != 0x12
	.error "gItemDescription_IRON must retain its original byte length"
	.endif

	@ src/data/items.h:1450 items_line_1450
	.globl gItemDescription_CARBOS
gItemDescription_CARBOS: @ 0x0855AFE1
	.string "すばやさの\nきそポイントを あげる"
	.byte EOS
	.if (. - gItemDescription_CARBOS) != 0x12
	.error "gItemDescription_CARBOS must retain its original byte length"
	.endif

	@ src/data/items.h:1415 items_line_1415
	.globl gItemDescription_CALCIUM
gItemDescription_CALCIUM: @ 0x0855AFF3
	.string "とくこうの\nきそポイントを あげる"
	.byte EOS
	.if (. - gItemDescription_CALCIUM) != 0x12
	.error "gItemDescription_CALCIUM must retain its original byte length"
	.endif

	@ src/data/items.h:2026 items_line_2026
	.globl gItemDescription_RARE_CANDY
gItemDescription_RARE_CANDY: @ 0x0855B005
	.string "ポケモンの レベルを\n1 あげる"
	.byte EOS
	.if (. - gItemDescription_RARE_CANDY) != 0x11
	.error "gItemDescription_RARE_CANDY must retain its original byte length"
	.endif

	@ src/data/items.h:1473 items_line_1473
	.globl gItemDescription_PP_UP
gItemDescription_PP_UP: @ 0x0855B016
	.string "わざポイントの\nさいだいちが あがる"
	.byte EOS
	.if (. - gItemDescription_PP_UP) > 0x13
	.error "gItemDescription_PP_UP may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_PP_UP) < 0x13
	.space 0x13 - (. - gItemDescription_PP_UP)
	.endif

	@ src/data/items.h:1432 items_line_1432
	.globl gItemDescription_ZINC
gItemDescription_ZINC: @ 0x0855B029
	.string "とくぼうの\nきそポイントを あげる"
	.byte EOS
	.if (. - gItemDescription_ZINC) != 0x12
	.error "gItemDescription_ZINC must retain its original byte length"
	.endif

	@ src/data/items.h:1491 items_line_1491
	.globl gItemDescription_PP_MAX
gItemDescription_PP_MAX: @ 0x0855B03B
	.string "わざポイントを\nさいだいちまで あげる"
	.byte EOS
	.if (. - gItemDescription_PP_MAX) != 0x14
	.error "gItemDescription_PP_MAX must retain its original byte length"
	.endif

	@ src/data/items.h:2571 items_line_2571
	.globl gItemDescription_GUARD_SPEC
gItemDescription_GUARD_SPEC: @ 0x0855B04F
	.string "せんとうで つかうと\nみかたの のうりょくを\nさげられなくする"
	.byte EOS
	.if (. - gItemDescription_GUARD_SPEC) > 0x20
	.error "gItemDescription_GUARD_SPEC may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_GUARD_SPEC) < 0x20
	.space 0x20 - (. - gItemDescription_GUARD_SPEC)
	.endif

	@ src/data/items.h:2551 items_line_2551
	.globl gItemDescription_DIRE_HIT
gItemDescription_DIRE_HIT: @ 0x0855B06F
	.string "つかった せんとうちゅう\nあいての きゅうしょに\nあたりやすくなる"
	.byte EOS
	.if (. - gItemDescription_DIRE_HIT) > 0x22
	.error "gItemDescription_DIRE_HIT may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_DIRE_HIT) < 0x22
	.space 0x22 - (. - gItemDescription_DIRE_HIT)
	.endif

	@ src/data/items.h: sXAttackDesc
	.globl gItemDescription_X_ATTACK
gItemDescription_X_ATTACK: @ 0x0855B091
	.string "つかった せんとうちゅう\nこうげきりょくが あがる"
	.byte EOS

	@ src/data/items.h: sXDefendDesc
	.globl gItemDescription_X_DEFEND
gItemDescription_X_DEFEND: @ 0x0855B0AB
	.string "つかった せんとうちゅう\nぼうぎょりょくが あがる"
	.byte EOS

	@ src/data/items.h: sXSpeedDesc
	.globl gItemDescription_X_SPEED
gItemDescription_X_SPEED: @ 0x0855B0C5
	.string "つかった せんとうちゅう\nすばやさが あがる"
	.byte EOS

	@ src/data/items.h: sXAccuracyDesc
	.globl gItemDescription_X_ACCURACY
gItemDescription_X_ACCURACY: @ 0x0855B0DC
	.string "つかった せんとうちゅう\nわざが あたりやすくなる"
	.byte EOS

	@ src/data/items.h: sXSpecialDesc
	.globl gItemDescription_X_SPECIAL
gItemDescription_X_SPECIAL: @ 0x0855B0F6
	.string "つかった せんとうちゅう\nとくこうの いりょくが\nあがる"
	.byte EOS

	@ src/data/items.h:25 sPokeDollDesc
	.globl gItemDescription_POKE_DOLL
gItemDescription_POKE_DOLL: @ 0x0855B113
	.string "そうぐうした やせいの\nポケモンから かならず\nにげることが できる"
	.byte EOS
	.if (. - gItemDescription_POKE_DOLL) != 0x23
	.error "gItemDescription_POKE_DOLL must retain its original byte length"
	.endif

	@ src/data/items.h:25 sPokeDollDesc
	.globl gItemDescription_FLUFFY_TAIL
gItemDescription_FLUFFY_TAIL: @ 0x0855B136
	.string "そうぐうした やせいの\nポケモンから かならず\nにげることが できる"
	.byte EOS
	.if (. - gItemDescription_FLUFFY_TAIL) != 0x23
	.error "gItemDescription_FLUFFY_TAIL must retain its original byte length"
	.endif

	@ src/data/items.h:2283 items_line_2283
	.globl gItemDescription_SUPER_REPEL
gItemDescription_SUPER_REPEL: @ 0x0855B159
	.string "200ぽ すすむ あいだ\nよわい ポケモンと\nそうぐう しなくなる"
	.byte EOS
	.if (. - gItemDescription_SUPER_REPEL) > 0x22
	.error "gItemDescription_SUPER_REPEL may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_SUPER_REPEL) < 0x22
	.space 0x22 - (. - gItemDescription_SUPER_REPEL)
	.endif

	@ src/data/items.h:2301 items_line_2301
	.globl gItemDescription_MAX_REPEL
gItemDescription_MAX_REPEL: @ 0x0855B17B
	.string "250ぽ すすむ あいだ\nよわい ポケモンと\nそうぐう しなくなる"
	.byte EOS
	.if (. - gItemDescription_MAX_REPEL) > 0x22
	.error "gItemDescription_MAX_REPEL may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_MAX_REPEL) < 0x22
	.space 0x22 - (. - gItemDescription_MAX_REPEL)
	.endif

	@ src/data/items.h:2374 items_line_2374
	.globl gItemDescription_ESCAPE_ROPE
gItemDescription_ESCAPE_ROPE: @ 0x0855B19D
	.string "どうくつや ダンジョンを\nぬけだせる"
	.byte EOS
	.if (. - gItemDescription_ESCAPE_ROPE) > 0x13
	.error "gItemDescription_ESCAPE_ROPE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_ESCAPE_ROPE) < 0x13
	.space 0x13 - (. - gItemDescription_ESCAPE_ROPE)
	.endif

	@ src/data/items.h:2265 items_line_2265
	.globl gItemDescription_REPEL
gItemDescription_REPEL: @ 0x0855B1B0
	.string "100ぽ すすむ あいだ\nよわい ポケモンと\nそうぐう しなくなる"
	.byte EOS
	.if (. - gItemDescription_REPEL) > 0x22
	.error "gItemDescription_REPEL may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_REPEL) < 0x22
	.space 0x22 - (. - gItemDescription_REPEL)
	.endif

	@ src/data/items.h:75 sEvolutionStoneDesc
	.globl gItemDescription_SUN_STONE
gItemDescription_SUN_STONE: @ 0x0855B1D2
	.string "とくていの ポケモンを\nしんかさせる"
	.byte EOS
	.if (. - gItemDescription_SUN_STONE) > 0x13
	.error "gItemDescription_SUN_STONE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_SUN_STONE) < 0x13
	.space 0x13 - (. - gItemDescription_SUN_STONE)
	.endif

	@ src/data/items.h:75 sEvolutionStoneDesc
	.globl gItemDescription_MOON_STONE
gItemDescription_MOON_STONE: @ 0x0855B1E5
	.string "とくていの ポケモンを\nしんかさせる"
	.byte EOS
	.if (. - gItemDescription_MOON_STONE) > 0x13
	.error "gItemDescription_MOON_STONE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_MOON_STONE) < 0x13
	.space 0x13 - (. - gItemDescription_MOON_STONE)
	.endif

	@ src/data/items.h:75 sEvolutionStoneDesc
	.globl gItemDescription_FIRE_STONE
gItemDescription_FIRE_STONE: @ 0x0855B1F8
	.string "とくていの ポケモンを\nしんかさせる"
	.byte EOS
	.if (. - gItemDescription_FIRE_STONE) > 0x13
	.error "gItemDescription_FIRE_STONE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_FIRE_STONE) < 0x13
	.space 0x13 - (. - gItemDescription_FIRE_STONE)
	.endif

	@ src/data/items.h:75 sEvolutionStoneDesc
	.globl gItemDescription_THUNDER_STONE
gItemDescription_THUNDER_STONE: @ 0x0855B20B
	.string "とくていの ポケモンを\nしんかさせる"
	.byte EOS
	.if (. - gItemDescription_THUNDER_STONE) > 0x13
	.error "gItemDescription_THUNDER_STONE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_THUNDER_STONE) < 0x13
	.space 0x13 - (. - gItemDescription_THUNDER_STONE)
	.endif

	@ src/data/items.h:75 sEvolutionStoneDesc
	.globl gItemDescription_WATER_STONE
gItemDescription_WATER_STONE: @ 0x0855B21E
	.string "とくていの ポケモンを\nしんかさせる"
	.byte EOS
	.if (. - gItemDescription_WATER_STONE) > 0x13
	.error "gItemDescription_WATER_STONE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_WATER_STONE) < 0x13
	.space 0x13 - (. - gItemDescription_WATER_STONE)
	.endif

	@ src/data/items.h:75 sEvolutionStoneDesc
	.globl gItemDescription_LEAF_STONE
gItemDescription_LEAF_STONE: @ 0x0855B231
	.string "とくていの ポケモンを\nしんかさせる"
	.byte EOS
	.if (. - gItemDescription_LEAF_STONE) > 0x13
	.error "gItemDescription_LEAF_STONE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_LEAF_STONE) < 0x13
	.space 0x13 - (. - gItemDescription_LEAF_STONE)
	.endif

	@ src/data/items.h:2735 items_line_2735
	.globl gItemDescription_TINY_MUSHROOM
gItemDescription_TINY_MUSHROOM: @ 0x0855B244
	.string "ふつうの キノコ\nやすく うれる"
	.byte EOS
	.if (. - gItemDescription_TINY_MUSHROOM) > 0x11
	.error "gItemDescription_TINY_MUSHROOM may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_TINY_MUSHROOM) < 0x11
	.space 0x11 - (. - gItemDescription_TINY_MUSHROOM)
	.endif

	@ src/data/items.h:57 sBigMushroomDesc
	.globl gItemDescription_BIG_MUSHROOM
gItemDescription_BIG_MUSHROOM: @ 0x0855B255
	.string "めずらしい キノコ\nたかく うれる"
	.byte EOS
	.if (. - gItemDescription_BIG_MUSHROOM) > 0x12
	.error "gItemDescription_BIG_MUSHROOM may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_BIG_MUSHROOM) < 0x12
	.space 0x12 - (. - gItemDescription_BIG_MUSHROOM)
	.endif

	@ src/data/items.h:2785 items_line_2785
	.globl gItemDescription_PEARL
gItemDescription_PEARL: @ 0x0855B267
	.string "きれいな しんじゅ\nやすく うれる"
	.byte EOS
	.if (. - gItemDescription_PEARL) > 0x12
	.error "gItemDescription_PEARL may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_PEARL) < 0x12
	.space 0x12 - (. - gItemDescription_PEARL)
	.endif

	@ src/data/items.h:2801 items_line_2801
	.globl gItemDescription_BIG_PEARL
gItemDescription_BIG_PEARL: @ 0x0855B279
	.string "とても きれいな\nおおつぶの しんじゅ\nたかく うれる"
	.byte EOS
	.if (. - gItemDescription_BIG_PEARL) > 0x1c
	.error "gItemDescription_BIG_PEARL may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_BIG_PEARL) < 0x1c
	.space 0x1c - (. - gItemDescription_BIG_PEARL)
	.endif

	@ src/data/items.h:2843 items_line_2843
	.globl gItemDescription_STARDUST
gItemDescription_STARDUST: @ 0x0855B295
	.string "あかくて きれいな すな\nたかく うれる"
	.byte EOS
	.if (. - gItemDescription_STARDUST) > 0x15
	.error "gItemDescription_STARDUST may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_STARDUST) < 0x15
	.space 0x15 - (. - gItemDescription_STARDUST)
	.endif

	@ src/data/items.h:2859 items_line_2859
	.globl gItemDescription_STAR_PIECE
gItemDescription_STAR_PIECE: @ 0x0855B2AA
	.string "あかくて きれいな\nほうせきの かけら\nとても たかく うれる"
	.byte EOS
	.if (. - gItemDescription_STAR_PIECE) > 0x20
	.error "gItemDescription_STAR_PIECE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_STAR_PIECE) < 0x20
	.space 0x20 - (. - gItemDescription_STAR_PIECE)
	.endif

	@ src/data/items.h:2696 items_line_2696
	.globl gItemDescription_NUGGET
gItemDescription_NUGGET: @ 0x0855B2CA
	.string "じゅんきん せい\nたかく うれる"
	.byte EOS
	.if (. - gItemDescription_NUGGET) > 0x11
	.error "gItemDescription_NUGGET may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_NUGGET) < 0x11
	.space 0x11 - (. - gItemDescription_NUGGET)
	.endif

	@ src/data/items.h:2989 items_line_2989
	.globl gItemDescription_HEART_SCALE
gItemDescription_HEART_SCALE: @ 0x0855B2DB
	.string "きれいな ウロコ\nマニアの あいだで\nにんきが たかい"
	.byte EOS
	.if (. - gItemDescription_HEART_SCALE) != 0x1c
	.error "gItemDescription_HEART_SCALE must retain its original byte length"
	.endif

	@ src/data/items.h:3870 items_line_3870
	.globl gItemDescription_ORANGE_MAIL
gItemDescription_ORANGE_MAIL: @ 0x0855B2F7
	.string "ジグザグマの すがたが\nプリントされた びんせん\nポケモンに もたせる"
	.byte EOS
	.if (. - gItemDescription_ORANGE_MAIL) != 0x24
	.error "gItemDescription_ORANGE_MAIL must retain its original byte length"
	.endif

	@ src/data/items.h:3888 items_line_3888
	.globl gItemDescription_HARBOR_MAIL
gItemDescription_HARBOR_MAIL: @ 0x0855B31B
	.string "キャモメの すがたが\nプリントされた びんせん\nポケモンに もたせる"
	.byte EOS
	.if (. - gItemDescription_HARBOR_MAIL) != 0x23
	.error "gItemDescription_HARBOR_MAIL must retain its original byte length"
	.endif

	@ src/data/items.h:3906 items_line_3906
	.globl gItemDescription_GLITTER_MAIL
gItemDescription_GLITTER_MAIL: @ 0x0855B33E
	.string "ピカチュウの すがたが\nプリントされた びんせん\nポケモンに もたせる"
	.byte EOS
	.if (. - gItemDescription_GLITTER_MAIL) != 0x24
	.error "gItemDescription_GLITTER_MAIL must retain its original byte length"
	.endif

	@ src/data/items.h:3924 items_line_3924
	.globl gItemDescription_MECH_MAIL
gItemDescription_MECH_MAIL: @ 0x0855B362
	.string "コイルの すがたが\nプリントされた びんせん\nポケモンに もたせる"
	.byte EOS
	.if (. - gItemDescription_MECH_MAIL) != 0x22
	.error "gItemDescription_MECH_MAIL must retain its original byte length"
	.endif

	@ src/data/items.h:3942 items_line_3942
	.globl gItemDescription_WOOD_MAIL
gItemDescription_WOOD_MAIL: @ 0x0855B384
	.string "ナマケロの すがたが\nプリントされた びんせん\nポケモンに もたせる"
	.byte EOS
	.if (. - gItemDescription_WOOD_MAIL) != 0x23
	.error "gItemDescription_WOOD_MAIL must retain its original byte length"
	.endif

	@ src/data/items.h:3960 items_line_3960
	.globl gItemDescription_WAVE_MAIL
gItemDescription_WAVE_MAIL: @ 0x0855B3A7
	.string "ホエルコの すがたが\nプリントされた びんせん\nポケモンに もたせる"
	.byte EOS
	.if (. - gItemDescription_WAVE_MAIL) != 0x23
	.error "gItemDescription_WAVE_MAIL must retain its original byte length"
	.endif

	@ src/data/items.h:72 sBeadMailDesc
	.globl gItemDescription_BEAD_MAIL
gItemDescription_BEAD_MAIL: @ 0x0855B3CA
	.string "もたせた ポケモンの\nにがおえがでる びんせん"
	.byte EOS
	.if (. - gItemDescription_BEAD_MAIL) > 0x18
	.error "gItemDescription_BEAD_MAIL may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_BEAD_MAIL) < 0x18
	.space 0x18 - (. - gItemDescription_BEAD_MAIL)
	.endif

	@ src/data/items.h:3993 items_line_3993
	.globl gItemDescription_SHADOW_MAIL
gItemDescription_SHADOW_MAIL: @ 0x0855B3E2
	.string "ヨマワルの すがたが\nプリントされた びんせん\nポケモンに もたせる"
	.byte EOS
	.if (. - gItemDescription_SHADOW_MAIL) != 0x23
	.error "gItemDescription_SHADOW_MAIL must retain its original byte length"
	.endif

	@ src/data/items.h:4011 items_line_4011
	.globl gItemDescription_TROPIC_MAIL
gItemDescription_TROPIC_MAIL: @ 0x0855B405
	.string "キレイハナの すがたが\nプリントされた びんせん\nポケモンに もたせる"
	.byte EOS
	.if (. - gItemDescription_TROPIC_MAIL) != 0x24
	.error "gItemDescription_TROPIC_MAIL must retain its original byte length"
	.endif

	@ src/data/items.h:72 sBeadMailDesc
	.globl gItemDescription_DREAM_MAIL
gItemDescription_DREAM_MAIL: @ 0x0855B429
	.string "もたせた ポケモンの\nにがおえがでる びんせん"
	.byte EOS
	.if (. - gItemDescription_DREAM_MAIL) > 0x18
	.error "gItemDescription_DREAM_MAIL may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_DREAM_MAIL) < 0x18
	.space 0x18 - (. - gItemDescription_DREAM_MAIL)
	.endif

	@ src/data/items.h:4044 items_line_4044
	.globl gItemDescription_FAB_MAIL
gItemDescription_FAB_MAIL: @ 0x0855B441
	.string "ごうかな もようが\nプリントされた びんせん\nポケモンに もたせる"
	.byte EOS
	.if (. - gItemDescription_FAB_MAIL) != 0x22
	.error "gItemDescription_FAB_MAIL must retain its original byte length"
	.endif

	@ src/data/items.h:4062 items_line_4062
	.globl gItemDescription_RETRO_MAIL
gItemDescription_RETRO_MAIL: @ 0x0855B463
	.string "3ひきの ポケモンが\nプリントされた びんせん\nポケモンに もたせる"
	.byte EOS
	.if (. - gItemDescription_RETRO_MAIL) != 0x23
	.error "gItemDescription_RETRO_MAIL must retain its original byte length"
	.endif

	@ src/data/items.h:10884 items_line_10884
	.globl gItemDescription_CHERI_BERRY
gItemDescription_CHERI_BERRY: @ 0x0855B486
	.string "もたせると じぶんで\nまひ じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gItemDescription_CHERI_BERRY) != 0x1c
	.error "gItemDescription_CHERI_BERRY must retain its original byte length"
	.endif

	@ src/data/items.h:10904 items_line_10904
	.globl gItemDescription_CHESTO_BERRY
gItemDescription_CHESTO_BERRY: @ 0x0855B4A2
	.string "もたせると じぶんで\nねむり じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gItemDescription_CHESTO_BERRY) != 0x1d
	.error "gItemDescription_CHESTO_BERRY must retain its original byte length"
	.endif

	@ src/data/items.h:10924 items_line_10924
	.globl gItemDescription_PECHA_BERRY
gItemDescription_PECHA_BERRY: @ 0x0855B4BF
	.string "もたせると じぶんで\nどく じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gItemDescription_PECHA_BERRY) != 0x1c
	.error "gItemDescription_PECHA_BERRY must retain its original byte length"
	.endif

	@ src/data/items.h:10944 items_line_10944
	.globl gItemDescription_RAWST_BERRY
gItemDescription_RAWST_BERRY: @ 0x0855B4DB
	.string "もたせると じぶんで\nやけど じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gItemDescription_RAWST_BERRY) != 0x1d
	.error "gItemDescription_RAWST_BERRY must retain its original byte length"
	.endif

	@ src/data/items.h:10964 items_line_10964
	.globl gItemDescription_ASPEAR_BERRY
gItemDescription_ASPEAR_BERRY: @ 0x0855B4F8
	.string "もたせると じぶんで\nこおり じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gItemDescription_ASPEAR_BERRY) != 0x1d
	.error "gItemDescription_ASPEAR_BERRY must retain its original byte length"
	.endif

	@ src/data/items.h:10985 items_line_10985
	.globl gItemDescription_LEPPA_BERRY
gItemDescription_LEPPA_BERRY: @ 0x0855B515
	.string "もたせると じぶんで\nわざポイントを\n10 かいふくする"
	.byte EOS
	.if (. - gItemDescription_LEPPA_BERRY) > 0x1d
	.error "gItemDescription_LEPPA_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_LEPPA_BERRY) < 0x1d
	.space 0x1d - (. - gItemDescription_LEPPA_BERRY)
	.endif

	@ src/data/items.h:11006 items_line_11006
	.globl gItemDescription_ORAN_BERRY
gItemDescription_ORAN_BERRY: @ 0x0855B532
	.string "もたせると じぶんで\nたいりょくを\n10 かいふくする"
	.byte EOS
	.if (. - gItemDescription_ORAN_BERRY) > 0x1c
	.error "gItemDescription_ORAN_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_ORAN_BERRY) < 0x1c
	.space 0x1c - (. - gItemDescription_ORAN_BERRY)
	.endif

	@ src/data/items.h:11026 items_line_11026
	.globl gItemDescription_PERSIM_BERRY
gItemDescription_PERSIM_BERRY: @ 0x0855B54E
	.string "もたせると じぶんで\nこんらん じょうたいを\nかいふくする"
	.byte EOS
	.if (. - gItemDescription_PERSIM_BERRY) > 0x1e
	.error "gItemDescription_PERSIM_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_PERSIM_BERRY) < 0x1e
	.space 0x1e - (. - gItemDescription_PERSIM_BERRY)
	.endif

	@ src/data/items.h: sLumBerryDesc
	.globl gItemDescription_LUM_BERRY
gItemDescription_LUM_BERRY: @ 0x0855B56C
	.string "もたせると じぶんで\nじょうたい いじょうを\nかいふくする"
	.byte EOS

	@ src/data/items.h:11075 items_line_11075
	.globl gItemDescription_SITRUS_BERRY
gItemDescription_SITRUS_BERRY: @ 0x0855B58A
	.string "もたせると じぶんで\nたいりょくを\n30 かいふくする"
	.byte EOS
	.if (. - gItemDescription_SITRUS_BERRY) > 0x1c
	.error "gItemDescription_SITRUS_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_SITRUS_BERRY) < 0x1c
	.space 0x1c - (. - gItemDescription_SITRUS_BERRY)
	.endif

	@ src/data/items.h:138 sFigyBerryDesc
	.globl gItemDescription_FIGY_BERRY
gItemDescription_FIGY_BERRY: @ 0x0855B5A6
	.string "もたせると たいりょくを\nかいふく できるが\nこんらんする ことがある"
	.byte EOS
	.if (. - gItemDescription_FIGY_BERRY) > 0x24
	.error "gItemDescription_FIGY_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_FIGY_BERRY) < 0x24
	.space 0x24 - (. - gItemDescription_FIGY_BERRY)
	.endif

	@ src/data/items.h:138 sFigyBerryDesc
	.globl gItemDescription_WIKI_BERRY
gItemDescription_WIKI_BERRY: @ 0x0855B5CA
	.string "もたせると たいりょくを\nかいふく できるが\nこんらんする ことがある"
	.byte EOS
	.if (. - gItemDescription_WIKI_BERRY) > 0x24
	.error "gItemDescription_WIKI_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_WIKI_BERRY) < 0x24
	.space 0x24 - (. - gItemDescription_WIKI_BERRY)
	.endif

	@ src/data/items.h:138 sFigyBerryDesc
	.globl gItemDescription_MAGO_BERRY
gItemDescription_MAGO_BERRY: @ 0x0855B5EE
	.string "もたせると たいりょくを\nかいふく できるが\nこんらんする ことがある"
	.byte EOS
	.if (. - gItemDescription_MAGO_BERRY) > 0x24
	.error "gItemDescription_MAGO_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_MAGO_BERRY) < 0x24
	.space 0x24 - (. - gItemDescription_MAGO_BERRY)
	.endif

	@ src/data/items.h:138 sFigyBerryDesc
	.globl gItemDescription_AGUAV_BERRY
gItemDescription_AGUAV_BERRY: @ 0x0855B612
	.string "もたせると たいりょくを\nかいふく できるが\nこんらんする ことがある"
	.byte EOS
	.if (. - gItemDescription_AGUAV_BERRY) > 0x24
	.error "gItemDescription_AGUAV_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_AGUAV_BERRY) < 0x24
	.space 0x24 - (. - gItemDescription_AGUAV_BERRY)
	.endif

	@ src/data/items.h:138 sFigyBerryDesc
	.globl gItemDescription_IAPAPA_BERRY
gItemDescription_IAPAPA_BERRY: @ 0x0855B636
	.string "もたせると たいりょくを\nかいふく できるが\nこんらんする ことがある"
	.byte EOS
	.if (. - gItemDescription_IAPAPA_BERRY) > 0x24
	.error "gItemDescription_IAPAPA_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_IAPAPA_BERRY) < 0x24
	.space 0x24 - (. - gItemDescription_IAPAPA_BERRY)
	.endif

	@ src/data/items.h:11175 items_line_11175
	.globl gItemDescription_RAZZ_BERRY
gItemDescription_RAZZ_BERRY: @ 0x0855B65A
	.string "ポロックの ざいりょう\nつちのなかに うめると\nズリが そだつ"
	.byte EOS
	.if (. - gItemDescription_RAZZ_BERRY) > 0x20
	.error "gItemDescription_RAZZ_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_RAZZ_BERRY) < 0x20
	.space 0x20 - (. - gItemDescription_RAZZ_BERRY)
	.endif

	@ src/data/items.h:11192 items_line_11192
	.globl gItemDescription_BLUK_BERRY
gItemDescription_BLUK_BERRY: @ 0x0855B67A
	.string "ポロックの ざいりょう\nつちのなかに うめると\nブリーが そだつ"
	.byte EOS
	.if (. - gItemDescription_BLUK_BERRY) > 0x21
	.error "gItemDescription_BLUK_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_BLUK_BERRY) < 0x21
	.space 0x21 - (. - gItemDescription_BLUK_BERRY)
	.endif

	@ src/data/items.h:11209 items_line_11209
	.globl gItemDescription_NANAB_BERRY
gItemDescription_NANAB_BERRY: @ 0x0855B69B
	.string "ポロックの ざいりょう\nつちのなかに うめると\nナナが そだつ"
	.byte EOS
	.if (. - gItemDescription_NANAB_BERRY) > 0x20
	.error "gItemDescription_NANAB_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_NANAB_BERRY) < 0x20
	.space 0x20 - (. - gItemDescription_NANAB_BERRY)
	.endif

	@ src/data/items.h:11226 items_line_11226
	.globl gItemDescription_WEPEAR_BERRY
gItemDescription_WEPEAR_BERRY: @ 0x0855B6BB
	.string "ポロックの ざいりょう\nつちのなかに うめると\nセシナが そだつ"
	.byte EOS
	.if (. - gItemDescription_WEPEAR_BERRY) > 0x21
	.error "gItemDescription_WEPEAR_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_WEPEAR_BERRY) < 0x21
	.space 0x21 - (. - gItemDescription_WEPEAR_BERRY)
	.endif

	@ src/data/items.h:11243 items_line_11243
	.globl gItemDescription_PINAP_BERRY
gItemDescription_PINAP_BERRY: @ 0x0855B6DC
	.string "ポロックの ざいりょう\nつちのなかに うめると\nパイルが そだつ"
	.byte EOS
	.if (. - gItemDescription_PINAP_BERRY) > 0x21
	.error "gItemDescription_PINAP_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_PINAP_BERRY) < 0x21
	.space 0x21 - (. - gItemDescription_PINAP_BERRY)
	.endif

	@ src/data/items.h:11260 items_line_11260
	.globl gItemDescription_POMEG_BERRY
gItemDescription_POMEG_BERRY: @ 0x0855B6FD
	.string "ポケモンが ちょっと\nなつくが HPの\nきそポイントが さがる"
	.byte EOS
	.if (. - gItemDescription_POMEG_BERRY) > 0x20
	.error "gItemDescription_POMEG_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_POMEG_BERRY) < 0x20
	.space 0x20 - (. - gItemDescription_POMEG_BERRY)
	.endif

	@ src/data/items.h:11278 items_line_11278
	.globl gItemDescription_KELPSY_BERRY
gItemDescription_KELPSY_BERRY: @ 0x0855B71D
	.string "ポケモンが ちょっと\nなつくが こうげきの\nきそポイントが さがる"
	.byte EOS
	.if (. - gItemDescription_KELPSY_BERRY) > 0x22
	.error "gItemDescription_KELPSY_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_KELPSY_BERRY) < 0x22
	.space 0x22 - (. - gItemDescription_KELPSY_BERRY)
	.endif

	@ src/data/items.h:11296 items_line_11296
	.globl gItemDescription_QUALOT_BERRY
gItemDescription_QUALOT_BERRY: @ 0x0855B73F
	.string "ポケモンが ちょっと\nなつくが ぼうぎょの\nきそポイントが さがる"
	.byte EOS
	.if (. - gItemDescription_QUALOT_BERRY) > 0x22
	.error "gItemDescription_QUALOT_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_QUALOT_BERRY) < 0x22
	.space 0x22 - (. - gItemDescription_QUALOT_BERRY)
	.endif

	@ src/data/items.h:11314 items_line_11314
	.globl gItemDescription_HONDEW_BERRY
gItemDescription_HONDEW_BERRY: @ 0x0855B761
	.string "ポケモンが ちょっと\nなつくが とくこうの\nきそポイントが さがる"
	.byte EOS
	.if (. - gItemDescription_HONDEW_BERRY) > 0x22
	.error "gItemDescription_HONDEW_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_HONDEW_BERRY) < 0x22
	.space 0x22 - (. - gItemDescription_HONDEW_BERRY)
	.endif

	@ src/data/items.h:11332 items_line_11332
	.globl gItemDescription_GREPA_BERRY
gItemDescription_GREPA_BERRY: @ 0x0855B783
	.string "ポケモンが ちょっと\nなつくが とくぼうの\nきそポイントが さがる"
	.byte EOS
	.if (. - gItemDescription_GREPA_BERRY) > 0x22
	.error "gItemDescription_GREPA_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_GREPA_BERRY) < 0x22
	.space 0x22 - (. - gItemDescription_GREPA_BERRY)
	.endif

	@ src/data/items.h:11350 items_line_11350
	.globl gItemDescription_TAMATO_BERRY
gItemDescription_TAMATO_BERRY: @ 0x0855B7A5
	.string "ポケモンが ちょっと\nなつくが すばやさの\nきそポイントが さがる"
	.byte EOS
	.if (. - gItemDescription_TAMATO_BERRY) > 0x22
	.error "gItemDescription_TAMATO_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_TAMATO_BERRY) < 0x22
	.space 0x22 - (. - gItemDescription_TAMATO_BERRY)
	.endif

	@ src/data/items.h:11368 items_line_11368
	.globl gItemDescription_CORNN_BERRY
gItemDescription_CORNN_BERRY: @ 0x0855B7C7
	.string "ポロックの ざいりょう\nつちのなかに うめると\nモコシが そだつ"
	.byte EOS
	.if (. - gItemDescription_CORNN_BERRY) > 0x21
	.error "gItemDescription_CORNN_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_CORNN_BERRY) < 0x21
	.space 0x21 - (. - gItemDescription_CORNN_BERRY)
	.endif

	@ src/data/items.h:11385 items_line_11385
	.globl gItemDescription_MAGOST_BERRY
gItemDescription_MAGOST_BERRY: @ 0x0855B7E8
	.string "ポロックの ざいりょう\nつちのなかに うめると\nゴスが そだつ"
	.byte EOS
	.if (. - gItemDescription_MAGOST_BERRY) > 0x20
	.error "gItemDescription_MAGOST_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_MAGOST_BERRY) < 0x20
	.space 0x20 - (. - gItemDescription_MAGOST_BERRY)
	.endif

	@ src/data/items.h:11402 items_line_11402
	.globl gItemDescription_RABUTA_BERRY
gItemDescription_RABUTA_BERRY: @ 0x0855B808
	.string "ポロックの ざいりょう\nつちのなかに うめると\nラブタが そだつ"
	.byte EOS
	.if (. - gItemDescription_RABUTA_BERRY) > 0x21
	.error "gItemDescription_RABUTA_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_RABUTA_BERRY) < 0x21
	.space 0x21 - (. - gItemDescription_RABUTA_BERRY)
	.endif

	@ src/data/items.h:11419 items_line_11419
	.globl gItemDescription_NOMEL_BERRY
gItemDescription_NOMEL_BERRY: @ 0x0855B829
	.string "ポロックの ざいりょう\nつちのなかに うめると\nノメルが そだつ"
	.byte EOS
	.if (. - gItemDescription_NOMEL_BERRY) > 0x21
	.error "gItemDescription_NOMEL_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_NOMEL_BERRY) < 0x21
	.space 0x21 - (. - gItemDescription_NOMEL_BERRY)
	.endif

	@ src/data/items.h:11436 items_line_11436
	.globl gItemDescription_SPELON_BERRY
gItemDescription_SPELON_BERRY: @ 0x0855B84A
	.string "ポロックの ざいりょう\nつちのなかに うめると\nノワキが そだつ"
	.byte EOS
	.if (. - gItemDescription_SPELON_BERRY) > 0x21
	.error "gItemDescription_SPELON_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_SPELON_BERRY) < 0x21
	.space 0x21 - (. - gItemDescription_SPELON_BERRY)
	.endif

	@ src/data/items.h:11453 items_line_11453
	.globl gItemDescription_PAMTRE_BERRY
gItemDescription_PAMTRE_BERRY: @ 0x0855B86B
	.string "ポロックの ざいりょう\nつちのなかに うめると\nシーヤが そだつ"
	.byte EOS
	.if (. - gItemDescription_PAMTRE_BERRY) > 0x21
	.error "gItemDescription_PAMTRE_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_PAMTRE_BERRY) < 0x21
	.space 0x21 - (. - gItemDescription_PAMTRE_BERRY)
	.endif

	@ src/data/items.h:11470 items_line_11470
	.globl gItemDescription_WATMEL_BERRY
gItemDescription_WATMEL_BERRY: @ 0x0855B88C
	.string "ポロックの ざいりょう\nつちのなかに うめると\nカイスが そだつ"
	.byte EOS
	.if (. - gItemDescription_WATMEL_BERRY) > 0x21
	.error "gItemDescription_WATMEL_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_WATMEL_BERRY) < 0x21
	.space 0x21 - (. - gItemDescription_WATMEL_BERRY)
	.endif

	@ src/data/items.h:11487 items_line_11487
	.globl gItemDescription_DURIN_BERRY
gItemDescription_DURIN_BERRY: @ 0x0855B8AD
	.string "ポロックの ざいりょう\nつちのなかに うめると\nドリが そだつ"
	.byte EOS
	.if (. - gItemDescription_DURIN_BERRY) > 0x20
	.error "gItemDescription_DURIN_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_DURIN_BERRY) < 0x20
	.space 0x20 - (. - gItemDescription_DURIN_BERRY)
	.endif

	@ src/data/items.h:11504 items_line_11504
	.globl gItemDescription_BELUE_BERRY
gItemDescription_BELUE_BERRY: @ 0x0855B8CD
	.string "ポロックの ざいりょう\nつちのなかに うめると\nベリブが そだつ"
	.byte EOS
	.if (. - gItemDescription_BELUE_BERRY) > 0x21
	.error "gItemDescription_BELUE_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_BELUE_BERRY) < 0x21
	.space 0x21 - (. - gItemDescription_BELUE_BERRY)
	.endif

	@ src/data/items.h:11865 items_line_11865
	.globl gItemDescription_LIECHI_BERRY
gItemDescription_LIECHI_BERRY: @ 0x0855B8EE
	.string "もたせると ピンチのとき\nこうげきりょくが あがる"
	.byte EOS
	.if (. - gItemDescription_LIECHI_BERRY) > 0x1a
	.error "gItemDescription_LIECHI_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_LIECHI_BERRY) < 0x1a
	.space 0x1a - (. - gItemDescription_LIECHI_BERRY)
	.endif

	@ src/data/items.h:11883 items_line_11883
	.globl gItemDescription_GANLON_BERRY
gItemDescription_GANLON_BERRY: @ 0x0855B908
	.string "もたせると ピンチのとき\nぼうぎょりょくが あがる"
	.byte EOS
	.if (. - gItemDescription_GANLON_BERRY) > 0x1a
	.error "gItemDescription_GANLON_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_GANLON_BERRY) < 0x1a
	.space 0x1a - (. - gItemDescription_GANLON_BERRY)
	.endif

	@ src/data/items.h:11901 items_line_11901
	.globl gItemDescription_SALAC_BERRY
gItemDescription_SALAC_BERRY: @ 0x0855B922
	.string "もたせると ピンチのとき\nすばやさが あがる"
	.byte EOS
	.if (. - gItemDescription_SALAC_BERRY) > 0x17
	.error "gItemDescription_SALAC_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_SALAC_BERRY) < 0x17
	.space 0x17 - (. - gItemDescription_SALAC_BERRY)
	.endif

	@ src/data/items.h:11919 items_line_11919
	.globl gItemDescription_PETAYA_BERRY
gItemDescription_PETAYA_BERRY: @ 0x0855B939
	.string "もたせると ピンチのとき\nとくこうが あがる"
	.byte EOS
	.if (. - gItemDescription_PETAYA_BERRY) > 0x17
	.error "gItemDescription_PETAYA_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_PETAYA_BERRY) < 0x17
	.space 0x17 - (. - gItemDescription_PETAYA_BERRY)
	.endif

	@ src/data/items.h:11937 items_line_11937
	.globl gItemDescription_APICOT_BERRY
gItemDescription_APICOT_BERRY: @ 0x0855B950
	.string "もたせると ピンチのとき\nとくぼうが あがる"
	.byte EOS
	.if (. - gItemDescription_APICOT_BERRY) > 0x17
	.error "gItemDescription_APICOT_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_APICOT_BERRY) < 0x17
	.space 0x17 - (. - gItemDescription_APICOT_BERRY)
	.endif

	@ src/data/items.h:11955 items_line_11955
	.globl gItemDescription_LANSAT_BERRY
gItemDescription_LANSAT_BERRY: @ 0x0855B967
	.string "もたせると ピンチのとき\nてきの きゅうしょに\nあたり やすくなる"
	.byte EOS
	.if (. - gItemDescription_LANSAT_BERRY) > 0x22
	.error "gItemDescription_LANSAT_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_LANSAT_BERRY) < 0x22
	.space 0x22 - (. - gItemDescription_LANSAT_BERRY)
	.endif

	@ src/data/items.h:11974 items_line_11974
	.globl gItemDescription_STARF_BERRY
gItemDescription_STARF_BERRY: @ 0x0855B989
	.string "もたせると ピンチのとき\nのうりょくの どれか\n1つが ぐーんと あがる"
	.byte EOS
	.if (. - gItemDescription_STARF_BERRY) > 0x25
	.error "gItemDescription_STARF_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_STARF_BERRY) < 0x25
	.space 0x25 - (. - gItemDescription_STARF_BERRY)
	.endif

	@ src/data/items.h:12119 items_line_12119
	.globl gItemDescription_ENIGMA_BERRY
gItemDescription_ENIGMA_BERRY: @ 0x0855B9AE
	.string "ポロックの ざいりょう\nつちのなかに うめると\nなぞな みが そだつ"
	.byte EOS
	.if (. - gItemDescription_ENIGMA_BERRY) > 0x23
	.error "gItemDescription_ENIGMA_BERRY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_ENIGMA_BERRY) < 0x23
	.space 0x23 - (. - gItemDescription_ENIGMA_BERRY)
	.endif

	@ src/data/items.h:9609 items_line_9609
	.globl gItemDescription_BRIGHT_POWDER
gItemDescription_BRIGHT_POWDER: @ 0x0855B9D1
	.string "もたせると ひかりが\nあいてを まどわして\nめいちゅうりつを さげる"
	.byte EOS
	.if (. - gItemDescription_BRIGHT_POWDER) > 0x23
	.error "gItemDescription_BRIGHT_POWDER may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_BRIGHT_POWDER) < 0x23
	.space 0x23 - (. - gItemDescription_BRIGHT_POWDER)
	.endif

	@ src/data/items.h:9633 items_line_9633
	.globl gItemDescription_WHITE_HERB
gItemDescription_WHITE_HERB: @ 0x0855B9F4
	.string "ポケモンに もたせると\nさがった のうりょくを\nもとにもどす"
	.byte EOS
	.if (. - gItemDescription_WHITE_HERB) > 0x1f
	.error "gItemDescription_WHITE_HERB may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_WHITE_HERB) < 0x1f
	.space 0x1f - (. - gItemDescription_WHITE_HERB)
	.endif

	@ src/data/items.h: sMachoBraceDesc
	@ The original text contains a space immediately before the second newline.
	.globl gItemDescription_MACHO_BRACE
gItemDescription_MACHO_BRACE: @ 0x0855BA13
	.string "ポケモンに もたせると\nすばやさが さがるが"
	.byte 0x00, 0xFE
	.string "つよく そだつ"
	.byte EOS

	@ src/data/items.h:9660 items_line_9660
	.globl gItemDescription_EXP_SHARE
gItemDescription_EXP_SHARE: @ 0x0855BA33
	.string "もたせた ポケモンが\nけいけんちを\nわけて もらえる"
	.byte EOS
	.if (. - gItemDescription_EXP_SHARE) > 0x1b
	.error "gItemDescription_EXP_SHARE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_EXP_SHARE) < 0x1b
	.space 0x1b - (. - gItemDescription_EXP_SHARE)
	.endif

	@ src/data/items.h:9686 items_line_9686
	.globl gItemDescription_QUICK_CLAW
gItemDescription_QUICK_CLAW: @ 0x0855BA4E
	.string "ポケモンに もたせると\nせんせい こうげきが\nたまに できる"
	.byte EOS
	.if (. - gItemDescription_QUICK_CLAW) != 0x1f
	.error "gItemDescription_QUICK_CLAW must retain its original byte length"
	.endif

	@ src/data/items.h: sSootheBellDesc
	@ The original text contains a space immediately before the second newline.
	.globl gItemDescription_SOOTHE_BELL
gItemDescription_SOOTHE_BELL: @ 0x0855BA6D
	.string "もたせると ポケモンが\nとっても やすらいで"
	.byte 0x00, 0xFE
	.string "なつき やすくなる"
	.byte EOS

	@ src/data/items.h: sMentalHerbDesc
	.globl gItemDescription_MENTAL_HERB
gItemDescription_MENTAL_HERB: @ 0x0855BA8F
	.string "もたせた ポケモンが\nメロメロに なったとき\nなおして くれる"
	.byte EOS

	@ src/data/items.h:9190 items_line_9190
	.globl gItemDescription_CHOICE_BAND
gItemDescription_CHOICE_BAND: @ 0x0855BAAF
	.string "こうげきの いりょくが\nあがるが おなじ\nわざしか だせなくなる"
	.byte EOS
	.if (. - gItemDescription_CHOICE_BAND) > 0x21
	.error "gItemDescription_CHOICE_BAND may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_CHOICE_BAND) < 0x21
	.space 0x21 - (. - gItemDescription_CHOICE_BAND)
	.endif

	@ src/data/items.h:134 sKingsRockDesc
	.globl gItemDescription_KINGS_ROCK
gItemDescription_KINGS_ROCK: @ 0x0855BAD0
	.string "ポケモンに もたせると\nダメージを うけた\nあいてが たまに ひるむ"
	.byte EOS
	.if (. - gItemDescription_KINGS_ROCK) > 0x23
	.error "gItemDescription_KINGS_ROCK may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_KINGS_ROCK) < 0x23
	.space 0x23 - (. - gItemDescription_KINGS_ROCK)
	.endif

	@ src/data/items.h:9058 items_line_9058
	.globl gItemDescription_SILVER_POWDER
gItemDescription_SILVER_POWDER: @ 0x0855BAF3
	.string "ポケモンに もたせると\nむしタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gItemDescription_SILVER_POWDER) > 0x20
	.error "gItemDescription_SILVER_POWDER may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_SILVER_POWDER) < 0x20
	.space 0x20 - (. - gItemDescription_SILVER_POWDER)
	.endif

	@ src/data/items.h:126 sLuckIncenseDesc
	.globl gItemDescription_AMULET_COIN
gItemDescription_AMULET_COIN: @ 0x0855BB13
	.string "もたせた ポケモンが\nせんとうに でると\nおかねが 2ばいもらえる"
	.byte EOS
	.if (. - gItemDescription_AMULET_COIN) > 0x22
	.error "gItemDescription_AMULET_COIN may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_AMULET_COIN) < 0x22
	.space 0x22 - (. - gItemDescription_AMULET_COIN)
	.endif

	@ src/data/items.h: sCleanseTagDesc
	.globl gItemDescription_CLEANSE_TAG
gItemDescription_CLEANSE_TAG: @ 0x0855BB35
	.string "ポケモンに もたせると\nやせいの ポケモンに\nそうぐう しにくく なる"
	.byte EOS

	@ src/data/items.h: sSoulDewDesc
	.globl gItemDescription_SOUL_DEW
gItemDescription_SOUL_DEW: @ 0x0855BB59
	.string "ラティオス ラティアスに\nもたせると とくこうと\nとくぼうが あがる"
	.byte EOS

	@ src/data/items.h:8332 items_line_8332
	.globl gItemDescription_DEEP_SEA_TOOTH
gItemDescription_DEEP_SEA_TOOTH: @ 0x0855BB7C
	.string "するどく ひかる キバ\nパールルに もたせると\nとくこうが あがる"
	.byte EOS
	.if (. - gItemDescription_DEEP_SEA_TOOTH) > 0x22
	.error "gItemDescription_DEEP_SEA_TOOTH may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_DEEP_SEA_TOOTH) < 0x22
	.space 0x22 - (. - gItemDescription_DEEP_SEA_TOOTH)
	.endif

	@ src/data/items.h:8312 items_line_8312
	.globl gItemDescription_DEEP_SEA_SCALE
gItemDescription_DEEP_SEA_SCALE: @ 0x0855BB9E
	.string "にぶく ひかる ウロコ\nパールルに もたせると\nとくぼうが あがる"
	.byte EOS
	.if (. - gItemDescription_DEEP_SEA_SCALE) > 0x22
	.error "gItemDescription_DEEP_SEA_SCALE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_DEEP_SEA_SCALE) < 0x22
	.space 0x22 - (. - gItemDescription_DEEP_SEA_SCALE)
	.endif

	@ src/data/items.h:9823 items_line_9823
	.globl gItemDescription_SMOKE_BALL
gItemDescription_SMOKE_BALL: @ 0x0855BBC0
	.string "そうぐうした やせいの\nポケモンから かならず\nにげられる"
	.byte EOS
	.if (. - gItemDescription_SMOKE_BALL) != 0x1e
	.error "gItemDescription_SMOKE_BALL must retain its original byte length"
	.endif

	@ src/data/items.h:4671 items_line_4671
	.globl gItemDescription_EVERSTONE
gItemDescription_EVERSTONE: @ 0x0855BBDE
	.string "もたせた ポケモンが\nしんか しなくなる\nふしぎな いし"
	.byte EOS
	.if (. - gItemDescription_EVERSTONE) > 0x1d
	.error "gItemDescription_EVERSTONE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_EVERSTONE) < 0x1d
	.space 0x1d - (. - gItemDescription_EVERSTONE)
	.endif

	@ src/data/items.h:9848 items_line_9848
	.globl gItemDescription_FOCUS_BAND
gItemDescription_FOCUS_BAND: @ 0x0855BBFB
	.string "ポケモンに もたせると\nたまに ひんしを\nふせぐことが できる"
	.byte EOS
	.if (. - gItemDescription_FOCUS_BAND) != 0x20
	.error "gItemDescription_FOCUS_BAND must retain its original byte length"
	.endif

	@ src/data/items.h:9866 items_line_9866
	.globl gItemDescription_LUCKY_EGG
gItemDescription_LUCKY_EGG: @ 0x0855BC1B
	.string "もたせた ポケモンの\nけいけんちが いつもより\nおおめに もらえる"
	.byte EOS
	.if (. - gItemDescription_LUCKY_EGG) > 0x22
	.error "gItemDescription_LUCKY_EGG may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_LUCKY_EGG) < 0x22
	.space 0x22 - (. - gItemDescription_LUCKY_EGG)
	.endif

	@ src/data/items.h:9891 items_line_9891
	.globl gItemDescription_SCOPE_LENS
gItemDescription_SCOPE_LENS: @ 0x0855BC3D
	.string "ポケモンに もたせると\nきゅうしょに\nあたり やすくなる"
	.byte EOS
	.if (. - gItemDescription_SCOPE_LENS) > 0x1d
	.error "gItemDescription_SCOPE_LENS may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_SCOPE_LENS) < 0x1d
	.space 0x1d - (. - gItemDescription_SCOPE_LENS)
	.endif

	@ src/data/items.h:9162 items_line_9162
	.globl gItemDescription_METAL_COAT
gItemDescription_METAL_COAT: @ 0x0855BC5A
	.string "ポケモンに もたせると\nはがねタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gItemDescription_METAL_COAT) > 0x21
	.error "gItemDescription_METAL_COAT may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_METAL_COAT) < 0x21
	.space 0x21 - (. - gItemDescription_METAL_COAT)
	.endif

	@ src/data/items.h:9917 items_line_9917
	.globl gItemDescription_LEFTOVERS
gItemDescription_LEFTOVERS: @ 0x0855BC7B
	.string "もたせると たいりょくが\nせんとうの あいだ\nすこしずつ かいふくする"
	.byte EOS
	.if (. - gItemDescription_LEFTOVERS) > 0x24
	.error "gItemDescription_LEFTOVERS may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_LEFTOVERS) < 0x24
	.space 0x24 - (. - gItemDescription_LEFTOVERS)
	.endif

	@ src/data/items.h:4348 items_line_4348
	.globl gItemDescription_DRAGON_SCALE
gItemDescription_DRAGON_SCALE: @ 0x0855BC9F
	.string "ドラゴンタイプの\nポケモンが もっている\nふしぎな ウロコ"
	.byte EOS
	.if (. - gItemDescription_DRAGON_SCALE) > 0x1e
	.error "gItemDescription_DRAGON_SCALE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_DRAGON_SCALE) < 0x1e
	.space 0x1e - (. - gItemDescription_DRAGON_SCALE)
	.endif

	@ src/data/items.h: sLightBallDesc
	.globl gItemDescription_LIGHT_BALL
gItemDescription_LIGHT_BALL: @ 0x0855BCBD
	.string "ビリビリしている たま\nピカチュウに もたせると\nとくこうが あがる"
	.byte EOS

	@ src/data/items.h:9001 items_line_9001
	.globl gItemDescription_SOFT_SAND
gItemDescription_SOFT_SAND: @ 0x0855BCE0
	.string "ポケモンに もたせると\nじめんタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gItemDescription_SOFT_SAND) > 0x21
	.error "gItemDescription_SOFT_SAND may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_SOFT_SAND) < 0x21
	.space 0x21 - (. - gItemDescription_SOFT_SAND)
	.endif

	@ src/data/items.h: sHardStoneDesc
	.globl gItemDescription_HARD_STONE
gItemDescription_HARD_STONE: @ 0x0855BD01
	.string "ポケモンに もたせると\nいわタイプの\nわざのいりょくが あがる"
	.byte EOS

	@ src/data/items.h: sMiracleSeedDesc
	.globl gItemDescription_MIRACLE_SEED
gItemDescription_MIRACLE_SEED: @ 0x0855BD21
	.string "ポケモンに もたせると\nくさタイプの\nわざのいりょくが あがる"
	.byte EOS

	@ src/data/items.h:9136 items_line_9136
	.globl gItemDescription_BLACK_GLASSES
gItemDescription_BLACK_GLASSES: @ 0x0855BD41
	.string "ポケモンに もたせると\nあくタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gItemDescription_BLACK_GLASSES) > 0x20
	.error "gItemDescription_BLACK_GLASSES may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_BLACK_GLASSES) < 0x20
	.space 0x20 - (. - gItemDescription_BLACK_GLASSES)
	.endif

	@ src/data/items.h:8960 items_line_8960
	.globl gItemDescription_BLACK_BELT
gItemDescription_BLACK_BELT: @ 0x0855BD61
	.string "ポケモンに もたせると\nかくとうタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gItemDescription_BLACK_BELT) > 0x22
	.error "gItemDescription_BLACK_BELT may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_BLACK_BELT) < 0x22
	.space 0x22 - (. - gItemDescription_BLACK_BELT)
	.endif

	@ src/data/items.h:8903 items_line_8903
	.globl gItemDescription_MAGNET
gItemDescription_MAGNET: @ 0x0855BD83
	.string "ポケモンに もたせると\nでんきタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gItemDescription_MAGNET) > 0x21
	.error "gItemDescription_MAGNET may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_MAGNET) < 0x21
	.space 0x21 - (. - gItemDescription_MAGNET)
	.endif

	@ src/data/items.h:8883 items_line_8883
	.globl gItemDescription_MYSTIC_WATER
gItemDescription_MYSTIC_WATER: @ 0x0855BDA4
	.string "ポケモンに もたせると\nみずタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gItemDescription_MYSTIC_WATER) > 0x20
	.error "gItemDescription_MYSTIC_WATER may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_MYSTIC_WATER) < 0x20
	.space 0x20 - (. - gItemDescription_MYSTIC_WATER)
	.endif

	@ src/data/items.h:9021 items_line_9021
	.globl gItemDescription_SHARP_BEAK
gItemDescription_SHARP_BEAK: @ 0x0855BDC4
	.string "ポケモンに もたせると\nひこうタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gItemDescription_SHARP_BEAK) > 0x21
	.error "gItemDescription_SHARP_BEAK may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_SHARP_BEAK) < 0x21
	.space 0x21 - (. - gItemDescription_SHARP_BEAK)
	.endif

	@ src/data/items.h:8980 items_line_8980
	.globl gItemDescription_POISON_BARB
gItemDescription_POISON_BARB: @ 0x0855BDE5
	.string "ポケモンに もたせると\nどくタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gItemDescription_POISON_BARB) > 0x20
	.error "gItemDescription_POISON_BARB may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_POISON_BARB) < 0x20
	.space 0x20 - (. - gItemDescription_POISON_BARB)
	.endif

	@ src/data/items.h:8940 items_line_8940
	.globl gItemDescription_NEVER_MELT_ICE
gItemDescription_NEVER_MELT_ICE: @ 0x0855BE05
	.string "ポケモンに もたせると\nこおりタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gItemDescription_NEVER_MELT_ICE) > 0x21
	.error "gItemDescription_NEVER_MELT_ICE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_NEVER_MELT_ICE) < 0x21
	.space 0x21 - (. - gItemDescription_NEVER_MELT_ICE)
	.endif

	@ src/data/items.h:9095 items_line_9095
	.globl gItemDescription_SPELL_TAG
gItemDescription_SPELL_TAG: @ 0x0855BE26
	.string "ポケモンに もたせると\nゴーストタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gItemDescription_SPELL_TAG) > 0x22
	.error "gItemDescription_SPELL_TAG may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_SPELL_TAG) < 0x22
	.space 0x22 - (. - gItemDescription_SPELL_TAG)
	.endif

	@ src/data/items.h: sTwistedSpoonDesc
	.globl gItemDescription_TWISTED_SPOON
gItemDescription_TWISTED_SPOON: @ 0x0855BE48
	.string "ポケモンに もたせると\nエスパータイプの\nわざのいりょくが あがる"
	.byte EOS

	@ src/data/items.h:8863 items_line_8863
	.globl gItemDescription_CHARCOAL
gItemDescription_CHARCOAL: @ 0x0855BE6A
	.string "ポケモンに もたせると\nほのおタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gItemDescription_CHARCOAL) > 0x21
	.error "gItemDescription_CHARCOAL may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_CHARCOAL) < 0x21
	.space 0x21 - (. - gItemDescription_CHARCOAL)
	.endif

	@ src/data/items.h:9115 items_line_9115
	.globl gItemDescription_DRAGON_FANG
gItemDescription_DRAGON_FANG: @ 0x0855BE8B
	.string "ポケモンに もたせると\nドラゴンタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gItemDescription_DRAGON_FANG) > 0x22
	.error "gItemDescription_DRAGON_FANG may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_DRAGON_FANG) < 0x22
	.space 0x22 - (. - gItemDescription_DRAGON_FANG)
	.endif

	@ src/data/items.h:8837 items_line_8837
	.globl gItemDescription_SILK_SCARF
gItemDescription_SILK_SCARF: @ 0x0855BEAD
	.string "ポケモンに もたせると\nノーマルタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gItemDescription_SILK_SCARF) > 0x22
	.error "gItemDescription_SILK_SCARF may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_SILK_SCARF) < 0x22
	.space 0x22 - (. - gItemDescription_SILK_SCARF)
	.endif

	@ src/data/items.h:4366 items_line_4366
	.globl gItemDescription_UP_GRADE
gItemDescription_UP_GRADE: @ 0x0855BECF
	.string "ふしぎな はこ\nシルフ カンパニーせい"
	.byte EOS
	.if (. - gItemDescription_UP_GRADE) > 0x14
	.error "gItemDescription_UP_GRADE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_UP_GRADE) < 0x14
	.space 0x14 - (. - gItemDescription_UP_GRADE)
	.endif

	@ src/data/items.h:9942 items_line_9942
	.globl gItemDescription_SHELL_BELL
gItemDescription_SHELL_BELL: @ 0x0855BEE3
	.string "もたせると てきに\nダメージを あたえたとき\nたいりょくが かいふく"
	.byte EOS
	.if (. - gItemDescription_SHELL_BELL) != 0x23
	.error "gItemDescription_SHELL_BELL must retain its original byte length"
	.endif
	
	@ src/data/items.h: sSeaIncenseDesc
	.globl gItemDescription_SEA_INCENSE
gItemDescription_SEA_INCENSE: @ 0x0855BF06
	.string "ポケモンに もたせると\nすこしだけ みずタイプの\nわざのいりょくが あがる"
	.byte EOS

	@ src/data/items.h: sLaxIncenseDesc
	.globl gItemDescription_LAX_INCENSE
gItemDescription_LAX_INCENSE: @ 0x0855BF2C
	.string "ポケモンに もたせると\nてきの めいちゅうりつを\nすこしだけ さげる"
	.byte EOS

	@ src/data/items.h: sLuckyPunchDesc
	.globl gItemDescription_LUCKY_PUNCH
gItemDescription_LUCKY_PUNCH: @ 0x0855BF4F
	.string "ラッキーに もたせると\nあいての きゅうしょに\nあたりやすくなる"
	.byte EOS

	@ src/data/items.h:8278 items_line_8278
	.globl gItemDescription_METAL_POWDER
gItemDescription_METAL_POWDER: @ 0x0855BF70
	.string "メタモンに もたせると\nぼうぎょが あがる"
	.byte EOS
	.if (. - gItemDescription_METAL_POWDER) > 0x16
	.error "gItemDescription_METAL_POWDER may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_METAL_POWDER) < 0x16
	.space 0x16 - (. - gItemDescription_METAL_POWDER)
	.endif

	@ src/data/items.h:8241 items_line_8241
	.globl gItemDescription_THICK_CLUB
gItemDescription_THICK_CLUB: @ 0x0855BF86
	.string "カラカラや ガラガラに\nもたせると こうげきの\nいりょくが あがる"
	.byte EOS
	.if (. - gItemDescription_THICK_CLUB) > 0x22
	.error "gItemDescription_THICK_CLUB may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_THICK_CLUB) < 0x22
	.space 0x22 - (. - gItemDescription_THICK_CLUB)
	.endif

	@ src/data/items.h:8223 items_line_8223
	.globl gItemDescription_STICK
gItemDescription_STICK: @ 0x0855BFA8
	.string "カモネギに もたせると\nきゅうしょに\nあたりやすくなる"
	.byte EOS
	.if (. - gItemDescription_STICK) > 0x1c
	.error "gItemDescription_STICK may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_STICK) < 0x1c
	.space 0x1c - (. - gItemDescription_STICK)
	.endif

	@ src/data/items.h:8595 items_line_8595
	.globl gItemDescription_RED_SCARF
gItemDescription_RED_SCARF: @ 0x0855BFC4
	.string "もたせて コンテストに\nさんかすると いつもより\nかっこよく みられる"
	.byte EOS
	.if (. - gItemDescription_RED_SCARF) != 0x24
	.error "gItemDescription_RED_SCARF must retain its original byte length"
	.endif

	@ src/data/items.h:8613 items_line_8613
	.globl gItemDescription_BLUE_SCARF
gItemDescription_BLUE_SCARF: @ 0x0855BFE8
	.string "もたせて コンテストに\nさんかすると いつもより\nうつくしく みられる"
	.byte EOS
	.if (. - gItemDescription_BLUE_SCARF) != 0x24
	.error "gItemDescription_BLUE_SCARF must retain its original byte length"
	.endif

	@ src/data/items.h:8631 items_line_8631
	.globl gItemDescription_PINK_SCARF
gItemDescription_PINK_SCARF: @ 0x0855C00C
	.string "もたせて コンテストに\nさんかすると いつもより\nかわいく みられる"
	.byte EOS
	.if (. - gItemDescription_PINK_SCARF) != 0x23
	.error "gItemDescription_PINK_SCARF must retain its original byte length"
	.endif

	@ src/data/items.h:8649 items_line_8649
	.globl gItemDescription_GREEN_SCARF
gItemDescription_GREEN_SCARF: @ 0x0855C02F
	.string "もたせて コンテストに\nさんかすると いつもより\nかしこく みられる"
	.byte EOS
	.if (. - gItemDescription_GREEN_SCARF) != 0x23
	.error "gItemDescription_GREEN_SCARF must retain its original byte length"
	.endif

	@ src/data/items.h:8667 items_line_8667
	.globl gItemDescription_YELLOW_SCARF
gItemDescription_YELLOW_SCARF: @ 0x0855C052
	.string "もたせて コンテストに\nさんかすると いつもより\nたくましく みられる"
	.byte EOS
	.if (. - gItemDescription_YELLOW_SCARF) != 0x24
	.error "gItemDescription_YELLOW_SCARF must retain its original byte length"
	.endif

	@ src/data/items.h:13801 items_line_13801
	.globl gItemDescription_MACH_BIKE
gItemDescription_MACH_BIKE: @ 0x0855C076
	.string "2ばい いじょうの\nはやさで いどう できる\nおりたたみの じてんしゃ"
	.byte EOS
	.if (. - gItemDescription_MACH_BIKE) != 0x24
	.error "gItemDescription_MACH_BIKE must retain its original byte length"
	.endif

	@ src/data/items.h:13985 items_line_13985
	.globl gItemDescription_COIN_CASE
gItemDescription_COIN_CASE: @ 0x0855C09A
	.string "てにいれた コインを\n9999まい まで\nもつことが できる"
	.byte EOS
	.if (. - gItemDescription_COIN_CASE) != 0x1f
	.error "gItemDescription_COIN_CASE must retain its original byte length"
	.endif

	@ src/data/items.h:13886 items_line_13886
	.globl gItemDescription_ITEMFINDER
gItemDescription_ITEMFINDER: @ 0x0855C0B9
	.string "みえない どうぐに\nはんのうして\nおとで おしえて くれる"
	.byte EOS
	.if (. - gItemDescription_ITEMFINDER) > 0x1e
	.error "gItemDescription_ITEMFINDER may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_ITEMFINDER) < 0x1e
	.space 0x1e - (. - gItemDescription_ITEMFINDER)
	.endif

	@ src/data/items.h:13835 items_line_13835
	.globl gItemDescription_OLD_ROD
gItemDescription_OLD_ROD: @ 0x0855C0D7
	.string "ポケモンを つるどうぐ\nみずべで つかうと\nポケモンが つれる"
	.byte EOS
	.if (. - gItemDescription_OLD_ROD) > 0x20
	.error "gItemDescription_OLD_ROD may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_OLD_ROD) < 0x20
	.space 0x20 - (. - gItemDescription_OLD_ROD)
	.endif

	@ src/data/items.h:13852 items_line_13852
	.globl gItemDescription_GOOD_ROD
gItemDescription_GOOD_ROD: @ 0x0855C0F7
	.string "ポケモンを つるどうぐ\nなかなかの つりざおと\nいわれている"
	.byte EOS
	.if (. - gItemDescription_GOOD_ROD) != 0x1f
	.error "gItemDescription_GOOD_ROD must retain its original byte length"
	.endif

	@ src/data/items.h:13869 items_line_13869
	.globl gItemDescription_SUPER_ROD
gItemDescription_SUPER_ROD: @ 0x0855C116
	.string "ポケモンを つるどうぐ\nさいこうの つりざおと\nいわれている"
	.byte EOS
	.if (. - gItemDescription_SUPER_ROD) != 0x1f
	.error "gItemDescription_SUPER_ROD must retain its original byte length"
	.endif

	@ src/data/items.h:14131 items_line_14131
	.globl gItemDescription_SS_TICKET
gItemDescription_SS_TICKET: @ 0x0855C135
	.string "れんらくせんに\nのるとき ひつよう"
	.byte EOS
	.if (. - gItemDescription_SS_TICKET) > 0x12
	.error "gItemDescription_SS_TICKET may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_SS_TICKET) < 0x12
	.space 0x12 - (. - gItemDescription_SS_TICKET)
	.endif

	@ src/data/items.h:14409 items_line_14409
	.globl gItemDescription_CONTEST_PASS
gItemDescription_CONTEST_PASS: @ 0x0855C147
	.string "ポケモンコンテストに\nさんかする ことができる"
	.byte EOS
	.if (. - gItemDescription_CONTEST_PASS) != 0x18
	.error "gItemDescription_CONTEST_PASS must retain its original byte length"
	.endif

	@ src/data/items.h:14017 items_line_14017
	.globl gItemDescription_WAILMER_PAIL
gItemDescription_WAILMER_PAIL: @ 0x0855C15F
	.string "みずを かける どうぐ\nつちに うめた きのみを\nすくすく そだてる"
	.byte EOS
	.if (. - gItemDescription_WAILMER_PAIL) > 0x23
	.error "gItemDescription_WAILMER_PAIL may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_WAILMER_PAIL) < 0x23
	.space 0x23 - (. - gItemDescription_WAILMER_PAIL)
	.endif

	@ src/data/items.h:14226 items_line_14226
	.globl gItemDescription_DEVON_GOODS
gItemDescription_DEVON_GOODS: @ 0x0855C182
	.string "デボンで つくられた\nなにかの パーツが\nはいっている にもつ"
	.byte EOS
	.if (. - gItemDescription_DEVON_GOODS) > 0x20
	.error "gItemDescription_DEVON_GOODS may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_DEVON_GOODS) < 0x20
	.space 0x20 - (. - gItemDescription_DEVON_GOODS)
	.endif

	@ src/data/items.h:14065 items_line_14065
	.globl gItemDescription_SOOT_SACK
gItemDescription_SOOT_SACK: @ 0x0855C1A2
	.string "つもった かざんばいを\nあつめるための ふくろ"
	.byte EOS
	.if (. - gItemDescription_SOOT_SACK) > 0x18
	.error "gItemDescription_SOOT_SACK may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_SOOT_SACK) < 0x18
	.space 0x18 - (. - gItemDescription_SOOT_SACK)
	.endif

	@ src/data/items.h:14275 items_line_14275
	.globl gItemDescription_BASEMENT_KEY
gItemDescription_BASEMENT_KEY: @ 0x0855C1BA
	.string "キンセツの ちかにある\nニューキンセツに\nはいる ための カギ"
	.byte EOS
	.if (. - gItemDescription_BASEMENT_KEY) > 0x20
	.error "gItemDescription_BASEMENT_KEY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_BASEMENT_KEY) < 0x20
	.space 0x20 - (. - gItemDescription_BASEMENT_KEY)
	.endif

	@ src/data/items.h:13818 items_line_13818
	.globl gItemDescription_ACRO_BIKE
gItemDescription_ACRO_BIKE: @ 0x0855C1DA
	.string "ジャンプや ウイリーの\nアクションが できる\nおりたたみの じてんしゃ"
	.byte EOS
	.if (. - gItemDescription_ACRO_BIKE) != 0x24
	.error "gItemDescription_ACRO_BIKE must retain its original byte length"
	.endif

	@ src/data/items.h:14049 items_line_14049
	.globl gItemDescription_POKEBLOCK_CASE
gItemDescription_POKEBLOCK_CASE: @ 0x0855C1FE
	.string "きのみブレンダーで\nつくった ポロックを\nほぞんする いれもの"
	.byte EOS
	.if (. - gItemDescription_POKEBLOCK_CASE) > 0x20
	.error "gItemDescription_POKEBLOCK_CASE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_POKEBLOCK_CASE) < 0x20
	.space 0x20 - (. - gItemDescription_POKEBLOCK_CASE)
	.endif

	@ src/data/items.h:14210 items_line_14210
	.globl gItemDescription_LETTER
gItemDescription_LETTER: @ 0x0855C21E
	.string "デボンしゃちょう から\nあずかった てがみ"
	.byte EOS
	.if (. - gItemDescription_LETTER) != 0x16
	.error "gItemDescription_LETTER must retain its original byte length"
	.endif

	@ src/data/items.h:14146 items_line_14146
	.globl gItemDescription_EON_TICKET
gItemDescription_EON_TICKET: @ 0x0855C234
	.string "みなみのことうへ いく\nふねの チケット"
	.byte EOS
	.if (. - gItemDescription_EON_TICKET) > 0x15
	.error "gItemDescription_EON_TICKET may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_EON_TICKET) < 0x15
	.space 0x15 - (. - gItemDescription_EON_TICKET)
	.endif

	@ src/data/items.h:5564 items_line_5564
	.globl gItemDescription_RED_ORB
gItemDescription_RED_ORB: @ 0x0855C249
	.string "おおむかしの ちからが\nこめられている という\nあかく かがやく たま"
	.byte EOS
	.if (. - gItemDescription_RED_ORB) > 0x24
	.error "gItemDescription_RED_ORB may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_RED_ORB) < 0x24
	.space 0x24 - (. - gItemDescription_RED_ORB)
	.endif

	@ src/data/items.h:5581 items_line_5581
	.globl gItemDescription_BLUE_ORB
gItemDescription_BLUE_ORB: @ 0x0855C26D
	.string "おおむかしの ちからが\nこめられている という\nあおく かがやく たま"
	.byte EOS
	.if (. - gItemDescription_BLUE_ORB) > 0x24
	.error "gItemDescription_BLUE_ORB may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_BLUE_ORB) < 0x24
	.space 0x24 - (. - gItemDescription_BLUE_ORB)
	.endif

	@ src/data/items.h:14291 items_line_14291
	.globl gItemDescription_SCANNER
gItemDescription_SCANNER: @ 0x0855C291
	.string "すてられぶねの なかで\nみつけた どうぐ"
	.byte EOS
	.if (. - gItemDescription_SCANNER) != 0x15
	.error "gItemDescription_SCANNER must retain its original byte length"
	.endif

	@ src/data/items.h:14243 items_line_14243
	.globl gItemDescription_GO_GOGGLES
gItemDescription_GO_GOGGLES: @ 0x0855C2A6
	.string "さばくの すなあらしから\nめを まもってくれる\nすてきな ゴーグル"
	.byte EOS
	.if (. - gItemDescription_GO_GOGGLES) > 0x22
	.error "gItemDescription_GO_GOGGLES may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_GO_GOGGLES) < 0x22
	.space 0x22 - (. - gItemDescription_GO_GOGGLES)
	.endif

	@ src/data/items.h:14377 items_line_14377
	.globl gItemDescription_METEORITE
gItemDescription_METEORITE: @ 0x0855C2C8
	.string "りゅうせいのたきに\nおちていた いんせき"
	.byte EOS
	.if (. - gItemDescription_METEORITE) > 0x15
	.error "gItemDescription_METEORITE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_METEORITE) < 0x15
	.space 0x15 - (. - gItemDescription_METEORITE)
	.endif

	@ src/data/items.h:146 sKeyToRoomDesc
	.globl gItemDescription_ROOM_1_KEY
gItemDescription_ROOM_1_KEY: @ 0x0855C2DD
	.string "すてられぶねの へやに\nはいる ための カギ"
	.byte EOS
	.if (. - gItemDescription_ROOM_1_KEY) > 0x17
	.error "gItemDescription_ROOM_1_KEY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_ROOM_1_KEY) < 0x17
	.space 0x17 - (. - gItemDescription_ROOM_1_KEY)
	.endif

	@ src/data/items.h:146 sKeyToRoomDesc
	.globl gItemDescription_ROOM_2_KEY
gItemDescription_ROOM_2_KEY: @ 0x0855C2F4
	.string "すてられぶねの へやに\nはいる ための カギ"
	.byte EOS
	.if (. - gItemDescription_ROOM_2_KEY) > 0x17
	.error "gItemDescription_ROOM_2_KEY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_ROOM_2_KEY) < 0x17
	.space 0x17 - (. - gItemDescription_ROOM_2_KEY)
	.endif

	@ src/data/items.h:146 sKeyToRoomDesc
	.globl gItemDescription_ROOM_4_KEY
gItemDescription_ROOM_4_KEY: @ 0x0855C30B
	.string "すてられぶねの へやに\nはいる ための カギ"
	.byte EOS
	.if (. - gItemDescription_ROOM_4_KEY) > 0x17
	.error "gItemDescription_ROOM_4_KEY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_ROOM_4_KEY) < 0x17
	.space 0x17 - (. - gItemDescription_ROOM_4_KEY)
	.endif

	@ src/data/items.h:146 sKeyToRoomDesc
	.globl gItemDescription_ROOM_6_KEY
gItemDescription_ROOM_6_KEY: @ 0x0855C322
	.string "すてられぶねの へやに\nはいる ための カギ"
	.byte EOS
	.if (. - gItemDescription_ROOM_6_KEY) > 0x17
	.error "gItemDescription_ROOM_6_KEY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_ROOM_6_KEY) < 0x17
	.space 0x17 - (. - gItemDescription_ROOM_6_KEY)
	.endif

	@ src/data/items.h:14306 items_line_14306
	.globl gItemDescription_STORAGE_KEY
gItemDescription_STORAGE_KEY: @ 0x0855C339
	.string "すてられぶねの そうこに\nはいる ための カギ"
	.byte EOS
	.if (. - gItemDescription_STORAGE_KEY) > 0x18
	.error "gItemDescription_STORAGE_KEY may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_STORAGE_KEY) < 0x18
	.space 0x18 - (. - gItemDescription_STORAGE_KEY)
	.endif

	@ src/data/items.h:64 sRootFossilDesc
	.globl gItemDescription_ROOT_FOSSIL
gItemDescription_ROOT_FOSSIL: @ 0x0855C351
	.string "おおむかし かいていで\nくらしていた ポケモンの\nカセキと いわれている"
	.byte EOS
	.if (. - gItemDescription_ROOT_FOSSIL) != 0x25
	.error "gItemDescription_ROOT_FOSSIL must retain its original byte length"
	.endif

	@ src/data/items.h:64 sRootFossilDesc
	.globl gItemDescription_CLAW_FOSSIL
gItemDescription_CLAW_FOSSIL: @ 0x0855C376
	.string "おおむかし かいていで\nくらしていた ポケモンの\nカセキと いわれている"
	.byte EOS
	.if (. - gItemDescription_CLAW_FOSSIL) != 0x25
	.error "gItemDescription_CLAW_FOSSIL must retain its original byte length"
	.endif

	@ src/data/items.h:14259 items_line_14259
	.globl gItemDescription_DEVON_SCOPE
gItemDescription_DEVON_SCOPE: @ 0x0855C39B
	.string "みえない ポケモンに\nはんのうして おとをだす\nデボンの とくせいひん"
	.byte EOS
	.if (. - gItemDescription_DEVON_SCOPE) > 0x24
	.error "gItemDescription_DEVON_SCOPE may not grow beyond its original slot"
	.endif
	.if (. - gItemDescription_DEVON_SCOPE) < 0x24
	.space 0x24 - (. - gItemDescription_DEVON_SCOPE)
	.endif
