	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:521 BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading (+7 aliases)
	.globl gText_Rom_2758F8
gText_Rom_2758F8: @ 0x082758F8
	.string "どの せつめいを よみますか?{EOS}"
	.if (. - gText_Rom_2758F8) > 0x10
	.error "gText_Rom_2758F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2758F8) < 0x10
	.space 0x10 - (. - gText_Rom_2758F8)
	.endif
	@ data/text/battle_tent.inc:383 VerdanturfTown_BattleTentLobby_Text_ExplainBasicRules
	.globl gText_Rom_275908
gText_Rom_275908: @ 0x08275908
	.string "バトルテント シダケかいじょう では\nポケモンたちが じぶんで\lかんがえ たたかいます\pじゅんすいな やせいの ときとは ちがって\nひとと くらしている ポケモンは\lせいかくに よって どんな こうどうを\lするかが かわるのです{EOS}"
	.if (. - gText_Rom_275908) > 0x73
	.error "gText_Rom_275908 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275908) < 0x73
	.space 0x73 - (. - gText_Rom_275908)
	.endif
	@ data/text/battle_tent.inc:393 VerdanturfTown_BattleTentLobby_Text_ExplainNatureRules
	.globl gText_Rom_27597B
gText_Rom_27597B: @ 0x0827597B
	.string "とにかく こうげきが\nすきな せいかく\pじぶんの みを まもることが\nすきな せいかく\pあいてを こまらせたり\nかわったことが すきな せいかく\pポケモンは せいかくに よって\nすきで とくいな わざと\lきらいで にがてな わざが ちがいます{EOS}"
	.if (. - gText_Rom_27597B) > 0x7a
	.error "gText_Rom_27597B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27597B) < 0x7a
	.space 0x7a - (. - gText_Rom_27597B)
	.endif
	@ data/text/battle_tent.inc:405 VerdanturfTown_BattleTentLobby_Text_ExplainMoveRules
	.globl gText_Rom_2759F5
gText_Rom_2759F5: @ 0x082759F5
	.string "あいてに むかって じぶんから\nちょくせつ ダメージを あたえる\lこうげきの わざ\pたたかいの じゅんびや キズついた からだの\nかいふくを する ぼうぎょの わざ\pあいての のうりょくを さげたり\nどくや まひに したり など\lすこし かわった ことを する わざ\pポケモンは すべての わざを\nおおきく 3つの しゅるいに わけて\lどんな わざを だすか かんがえて います{EOS}"
	.if (. - gText_Rom_2759F5) > 0xbe
	.error "gText_Rom_2759F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2759F5) < 0xbe
	.space 0xbe - (. - gText_Rom_2759F5)
	.endif
	@ data/text/battle_tent.inc:419 VerdanturfTown_BattleTentLobby_Text_ExplainUnderpoweredRules
	.globl gText_Rom_275AB3
gText_Rom_275AB3: @ 0x08275AB3
	.string "トレーナーの めいれいを うけて いない\nポケモンは うまく わざを\lだせない ことが あります\pポケモンは きらいな わざを\nつかうのは とくいでは ありません\pせいかくに あわない わざ ばかりを\nおぼえさせて いると たたかいで\lポケモンが じぶんの ちからを はっき\lできない ことが おおく なります{EOS}"
	.if (. - gText_Rom_275AB3) > 0x9c
	.error "gText_Rom_275AB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275AB3) < 0x9c
	.space 0x9c - (. - gText_Rom_275AB3)
	.endif
	@ data/text/battle_tent.inc:431 VerdanturfTown_BattleTentLobby_Text_ExplainWhenInDangerRules
	.globl gText_Rom_275B4F
gText_Rom_275B4F: @ 0x08275B4F
	.string "ポケモンの せいかくの なかには\nピンチに なることで もともとの\lせいかくとは ちがう タイプの\lわざを つかう ように\lなるものが あります\pピンチに なって すこし かわった\nこうどうを はじめた ポケモンには\lじゅうぶん ちゅうい しましょう{EOS}"
	.if (. - gText_Rom_275B4F) > 0x7e
	.error "gText_Rom_275B4F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275B4F) < 0x7e
	.space 0x7e - (. - gText_Rom_275B4F)
	.endif
	@ data/text/battle_tent.inc:441 BattleTentLobby_Text_ExplainLevelRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_275BCD
gText_Rom_275BCD: @ 0x08275BCD
	.string "バトルテントでは\nあなたの ポケモンの レベルに あわせて\lたいせんする トレーナーの ポケモンの\lレベルが かわります\pただし レベル30より ひくい レベルの\nポケモンを つれた トレーナーが\lとうじょう することは ありません{EOS}"
	.if (. - gText_Rom_275BCD) != 0x75
	.error "gText_Rom_275BCD must retain its original byte length"
	.endif
	.globl gText_Rom_275C3E
	.set gText_Rom_275C3E, gText_Rom_275BCD + 0x71
	@ data/text/battle_tent.inc:374 VerdanturfTown_BattleTentLobby_Text_RulesAreListed2 (+1 aliases)
	.globl gText_Rom_275C42
gText_Rom_275C42: @ 0x08275C42
	.string "バトルテント シダケかいじょうの\nルールが かかれている!{EOS}"
	.if (. - gText_Rom_275C42) > 0x1e
	.error "gText_Rom_275C42 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275C42) < 0x1e
	.space 0x1e - (. - gText_Rom_275C42)
	.endif
	@ data/text/event_ticket_2.inc:1 EventTicket_Text_OldSeaMapTooFar
	.globl gText_Rom_275C60
gText_Rom_275C60: @ 0x08275C60
	.string "なんだ?\nボロっちい ちずを もってきたってのは\lおまえさんか? みせてみな!\p…… …… ……\pこりゃ また ずいぶん とおいなあ\nわりいが ほかを あたったほうが……{EOS}"
	.if (. - gText_Rom_275C60) > 0x56
	.error "gText_Rom_275C60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275C60) < 0x56
	.space 0x56 - (. - gText_Rom_275C60)
	.endif

	@ data/text/event_ticket_2.inc:9 EventTicket_Text_BrineyHoldOnASecond
	.globl gText_Rom_275CB6
gText_Rom_275CB6: @ 0x08275CB6
	.string "ハギ『こら! わしの おんじんの\nねがいを ことわるとは なにごとだ!{EOS}"
	.if (. - gText_Rom_275CB6) > 0x24
	.error "gText_Rom_275CB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275CB6) < 0x24
	.space 0x24 - (. - gText_Rom_275CB6)
	.endif

	@ data/text/event_ticket_2.inc:13 EventTicket_Text_BrineyLetsSail
	.globl gText_Rom_275CDA
gText_Rom_275CDA: @ 0x08275CDA
	.string "{PLAYER}{KUN} すまなかったね\nこのふねを たよって きて くれたのに……\lもちろん いますぐに しゅっこうだ!\pさあいくぞ!\nかいずに ある しまへ しゅっぱつ!{EOS}"
	.if (. - gText_Rom_275CDA) > 0x50
	.error "gText_Rom_275CDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275CDA) < 0x50
	.space 0x50 - (. - gText_Rom_275CDA)
	.endif

	@ data/text/event_ticket_2.inc:20 EventTicket_Text_OddTicketGetOnBoard
	.globl gText_Rom_275D2A
gText_Rom_275D2A: @ 0x08275D2A
	.string "みょうな チケットを\nもってきたのは おまえさんか?\pおまえが いこうと しているのは\nとおく はなれた ちほうの しま……\lそこには なにが まっているのか\lしって いるやつは いねえ……\lううむ ふなのりの ちが さわぐぜ!\pさあ のりな!{EOS}"
	.if (. - gText_Rom_275D2A) > 0x7b
	.error "gText_Rom_275D2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275D2A) < 0x7b
	.space 0x7b - (. - gText_Rom_275D2A)
	.endif

	@ data/text/event_ticket_2.inc:30 FarawayIsland_Entrance_Text_SailorReturn
	.globl gText_Rom_275DA5
gText_Rom_275DA5: @ 0x08275DA5
	.string "まったく ハギ せんちょうの\nきまぐれにも まいるよなあ……\pもう ミナモへ かえるのかい?{EOS}"
	.if (. - gText_Rom_275DA5) > 0x2f
	.error "gText_Rom_275DA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275DA5) < 0x2f
	.space 0x2f - (. - gText_Rom_275DA5)
	.endif

	@ data/text/event_ticket_2.inc:35 BirthIsland_Harbor_Text_SailorReturn
	.globl gText_Rom_275DD4
gText_Rom_275DD4: @ 0x08275DD4
	.string "ふしぎな かたちの しまだなあ\nもう ミナモへ かえるか?{EOS}"
	.if (. - gText_Rom_275DD4) > 0x1e
	.error "gText_Rom_275DD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275DD4) < 0x1e
	.space 0x1e - (. - gText_Rom_275DD4)
	.endif

	@ data/text/event_ticket_2.inc:39 EventTicket_Text_OddTicketsWhereTo
	.globl gText_Rom_275DF2
gText_Rom_275DF2: @ 0x08275DF2
	.string "ヘンテコな チケットを\nいくつも もってきたのは おまえさんか?\p…… …… ……ふむ\pこいつらで いける ところは\nどこも ここから とおい しま\lそこでは なにが おきるのか\lなにが まっているのか\lしっている やつは いねえ……\lううむ ふなのりの ちが さわぐぜ!\pさあ のりな!\nまずは どこから いってみるかい?{EOS}"
	.if (. - gText_Rom_275DF2) > 0xa3
	.error "gText_Rom_275DF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275DF2) < 0xa3
	.space 0xa3 - (. - gText_Rom_275DF2)
	.endif

	@ data/text/event_ticket_2.inc:52 NavelRock_Harbor_Text_SailorReturn
	.globl gText_Rom_275E95
gText_Rom_275E95: @ 0x08275E95
	.string "な…… なんか おくふかくから\nひくい うなりが きこえたような……\pだ だいじょうぶか?\nもう かえった ほうが いいんじゃないか?{EOS}"
	.if (. - gText_Rom_275E95) > 0x44
	.error "gText_Rom_275E95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275E95) < 0x44
	.space 0x44 - (. - gText_Rom_275E95)
	.endif

	@ data/text/event_ticket_2.inc:58 FarawayIsland_Entrance_Text_Sign
	.globl gText_Rom_275ED9
gText_Rom_275ED9: @ 0x08275ED9
	.string "なんねんも まえに かかれたような\nふるい かきおきが ある……\p……がつ 6か\nここに たちいる にんげ……が\lふたたび ……らわれると すれば\lこころ やさし……で あらんことを\p……こに その ねがいを しるし\nこの ……を あとにする\p……ジ{EOS}"
	.if (. - gText_Rom_275ED9) > 0x7e
	.error "gText_Rom_275ED9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275ED9) < 0x7e
	.space 0x7e - (. - gText_Rom_275ED9)
	.endif

	@ data/text/event_ticket_2.inc:69 FarawayIsland_Interior_Text_Mew
	.globl gText_Rom_275F57
gText_Rom_275F57: @ 0x08275F57
	.string "ミュー……{EOS}"
	.if (. - gText_Rom_275F57) > 0x6
	.error "gText_Rom_275F57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275F57) < 0x6
	.space 0x6 - (. - gText_Rom_275F57)
	.endif
