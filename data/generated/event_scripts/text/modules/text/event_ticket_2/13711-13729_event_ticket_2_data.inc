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
	.globl VerdanturfTown_BattleTentLobby_Text_ExplainBasicRules
VerdanturfTown_BattleTentLobby_Text_ExplainBasicRules: @ 0x08275908
	.string "バトルテント シダケかいじょう では\nポケモンたちが じぶんで\lかんがえ たたかいます\pじゅんすいな やせいの ときとは ちがって\nひとと くらしている ポケモンは\lせいかくに よって どんな こうどうを\lするかが かわるのです{EOS}"
	.if (. - VerdanturfTown_BattleTentLobby_Text_ExplainBasicRules) > 0x73
	.error "VerdanturfTown_BattleTentLobby_Text_ExplainBasicRules may not grow beyond its original slot"
	.endif
	.if (. - VerdanturfTown_BattleTentLobby_Text_ExplainBasicRules) < 0x73
	.space 0x73 - (. - VerdanturfTown_BattleTentLobby_Text_ExplainBasicRules)
	.endif
	@ data/text/battle_tent.inc:393 VerdanturfTown_BattleTentLobby_Text_ExplainNatureRules
	.globl VerdanturfTown_BattleTentLobby_Text_ExplainNatureRules
VerdanturfTown_BattleTentLobby_Text_ExplainNatureRules: @ 0x0827597B
	.string "とにかく こうげきが\nすきな せいかく\pじぶんの みを まもることが\nすきな せいかく\pあいてを こまらせたり\nかわったことが すきな せいかく\pポケモンは せいかくに よって\nすきで とくいな わざと\lきらいで にがてな わざが ちがいます{EOS}"
	.if (. - VerdanturfTown_BattleTentLobby_Text_ExplainNatureRules) > 0x7a
	.error "VerdanturfTown_BattleTentLobby_Text_ExplainNatureRules may not grow beyond its original slot"
	.endif
	.if (. - VerdanturfTown_BattleTentLobby_Text_ExplainNatureRules) < 0x7a
	.space 0x7a - (. - VerdanturfTown_BattleTentLobby_Text_ExplainNatureRules)
	.endif
	@ data/text/battle_tent.inc:405 VerdanturfTown_BattleTentLobby_Text_ExplainMoveRules
	.globl VerdanturfTown_BattleTentLobby_Text_ExplainMoveRules
VerdanturfTown_BattleTentLobby_Text_ExplainMoveRules: @ 0x082759F5
	.string "あいてに むかって じぶんから\nちょくせつ ダメージを あたえる\lこうげきの わざ\pたたかいの じゅんびや キズついた からだの\nかいふくを する ぼうぎょの わざ\pあいての のうりょくを さげたり\nどくや まひに したり など\lすこし かわった ことを する わざ\pポケモンは すべての わざを\nおおきく 3つの しゅるいに わけて\lどんな わざを だすか かんがえて います{EOS}"
	.if (. - VerdanturfTown_BattleTentLobby_Text_ExplainMoveRules) > 0xbe
	.error "VerdanturfTown_BattleTentLobby_Text_ExplainMoveRules may not grow beyond its original slot"
	.endif
	.if (. - VerdanturfTown_BattleTentLobby_Text_ExplainMoveRules) < 0xbe
	.space 0xbe - (. - VerdanturfTown_BattleTentLobby_Text_ExplainMoveRules)
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
	.globl BattleTentLobby_Text_ExplainLevelRules
BattleTentLobby_Text_ExplainLevelRules: @ 0x08275BCD
	.string "バトルテントでは\nあなたの ポケモンの レベルに あわせて\lたいせんする トレーナーの ポケモンの\lレベルが かわります\pただし レベル30より ひくい レベルの\nポケモンを つれた トレーナーが\lとうじょう することは ありません{EOS}"
	.if (. - BattleTentLobby_Text_ExplainLevelRules) != 0x75
	.error "BattleTentLobby_Text_ExplainLevelRules must retain its original byte length"
	.endif
	@ data/text/battle_tent.inc:374 VerdanturfTown_BattleTentLobby_Text_RulesAreListed2 (+1 aliases)
	.globl VerdanturfTown_BattleTentLobby_Text_RulesAreListed2
VerdanturfTown_BattleTentLobby_Text_RulesAreListed2: @ 0x08275C42
	.string "バトルテント シダケかいじょうの\nルールが かかれている!{EOS}"
	.if (. - VerdanturfTown_BattleTentLobby_Text_RulesAreListed2) > 0x1e
	.error "VerdanturfTown_BattleTentLobby_Text_RulesAreListed2 may not grow beyond its original slot"
	.endif
	.if (. - VerdanturfTown_BattleTentLobby_Text_RulesAreListed2) < 0x1e
	.space 0x1e - (. - VerdanturfTown_BattleTentLobby_Text_RulesAreListed2)
	.endif
	@ data/text/event_ticket_2.inc:1 EventTicket_Text_OldSeaMapTooFar
	.globl EventTicket_Text_OldSeaMapTooFar
EventTicket_Text_OldSeaMapTooFar: @ 0x08275C60
	.string "なんだ?\nボロっちい ちずを もってきたってのは\lおまえさんか? みせてみな!\p…… …… ……\pこりゃ また ずいぶん とおいなあ\nわりいが ほかを あたったほうが……{EOS}"
	.if (. - EventTicket_Text_OldSeaMapTooFar) > 0x56
	.error "EventTicket_Text_OldSeaMapTooFar may not grow beyond its original slot"
	.endif
	.if (. - EventTicket_Text_OldSeaMapTooFar) < 0x56
	.space 0x56 - (. - EventTicket_Text_OldSeaMapTooFar)
	.endif

	@ data/text/event_ticket_2.inc:9 EventTicket_Text_BrineyHoldOnASecond
	.globl EventTicket_Text_BrineyHoldOnASecond
EventTicket_Text_BrineyHoldOnASecond: @ 0x08275CB6
	.string "ハギ『こら! わしの おんじんの\nねがいを ことわるとは なにごとだ!{EOS}"
	.if (. - EventTicket_Text_BrineyHoldOnASecond) > 0x24
	.error "EventTicket_Text_BrineyHoldOnASecond may not grow beyond its original slot"
	.endif
	.if (. - EventTicket_Text_BrineyHoldOnASecond) < 0x24
	.space 0x24 - (. - EventTicket_Text_BrineyHoldOnASecond)
	.endif

	@ data/text/event_ticket_2.inc:13 EventTicket_Text_BrineyLetsSail
	.globl EventTicket_Text_BrineyLetsSail
EventTicket_Text_BrineyLetsSail: @ 0x08275CDA
	.string "{PLAYER}{KUN} すまなかったね\nこのふねを たよって きて くれたのに……\lもちろん いますぐに しゅっこうだ!\pさあいくぞ!\nかいずに ある しまへ しゅっぱつ!{EOS}"
	.if (. - EventTicket_Text_BrineyLetsSail) > 0x50
	.error "EventTicket_Text_BrineyLetsSail may not grow beyond its original slot"
	.endif
	.if (. - EventTicket_Text_BrineyLetsSail) < 0x50
	.space 0x50 - (. - EventTicket_Text_BrineyLetsSail)
	.endif

	@ data/text/event_ticket_2.inc:20 EventTicket_Text_OddTicketGetOnBoard
	.globl EventTicket_Text_OddTicketGetOnBoard
EventTicket_Text_OddTicketGetOnBoard: @ 0x08275D2A
	.string "みょうな チケットを\nもってきたのは おまえさんか?\pおまえが いこうと しているのは\nとおく はなれた ちほうの しま……\lそこには なにが まっているのか\lしって いるやつは いねえ……\lううむ ふなのりの ちが さわぐぜ!\pさあ のりな!{EOS}"
	.if (. - EventTicket_Text_OddTicketGetOnBoard) > 0x7b
	.error "EventTicket_Text_OddTicketGetOnBoard may not grow beyond its original slot"
	.endif
	.if (. - EventTicket_Text_OddTicketGetOnBoard) < 0x7b
	.space 0x7b - (. - EventTicket_Text_OddTicketGetOnBoard)
	.endif

	@ data/text/event_ticket_2.inc:30 FarawayIsland_Entrance_Text_SailorReturn
	.globl FarawayIsland_Entrance_Text_SailorReturn
FarawayIsland_Entrance_Text_SailorReturn: @ 0x08275DA5
	.string "まったく ハギ せんちょうの\nきまぐれにも まいるよなあ……\pもう ミナモへ かえるのかい?{EOS}"
	.if (. - FarawayIsland_Entrance_Text_SailorReturn) > 0x2f
	.error "FarawayIsland_Entrance_Text_SailorReturn may not grow beyond its original slot"
	.endif
	.if (. - FarawayIsland_Entrance_Text_SailorReturn) < 0x2f
	.space 0x2f - (. - FarawayIsland_Entrance_Text_SailorReturn)
	.endif

	@ data/text/event_ticket_2.inc:35 BirthIsland_Harbor_Text_SailorReturn
	.globl BirthIsland_Harbor_Text_SailorReturn
BirthIsland_Harbor_Text_SailorReturn: @ 0x08275DD4
	.string "ふしぎな かたちの しまだなあ\nもう ミナモへ かえるか?{EOS}"
	.if (. - BirthIsland_Harbor_Text_SailorReturn) > 0x1e
	.error "BirthIsland_Harbor_Text_SailorReturn may not grow beyond its original slot"
	.endif
	.if (. - BirthIsland_Harbor_Text_SailorReturn) < 0x1e
	.space 0x1e - (. - BirthIsland_Harbor_Text_SailorReturn)
	.endif

	@ data/text/event_ticket_2.inc:39 EventTicket_Text_OddTicketsWhereTo
	.globl EventTicket_Text_OddTicketsWhereTo
EventTicket_Text_OddTicketsWhereTo: @ 0x08275DF2
	.string "ヘンテコな チケットを\nいくつも もってきたのは おまえさんか?\p…… …… ……ふむ\pこいつらで いける ところは\nどこも ここから とおい しま\lそこでは なにが おきるのか\lなにが まっているのか\lしっている やつは いねえ……\lううむ ふなのりの ちが さわぐぜ!\pさあ のりな!\nまずは どこから いってみるかい?{EOS}"
	.if (. - EventTicket_Text_OddTicketsWhereTo) > 0xa3
	.error "EventTicket_Text_OddTicketsWhereTo may not grow beyond its original slot"
	.endif
	.if (. - EventTicket_Text_OddTicketsWhereTo) < 0xa3
	.space 0xa3 - (. - EventTicket_Text_OddTicketsWhereTo)
	.endif

	@ data/text/event_ticket_2.inc:52 NavelRock_Harbor_Text_SailorReturn
	.globl NavelRock_Harbor_Text_SailorReturn
NavelRock_Harbor_Text_SailorReturn: @ 0x08275E95
	.string "な…… なんか おくふかくから\nひくい うなりが きこえたような……\pだ だいじょうぶか?\nもう かえった ほうが いいんじゃないか?{EOS}"
	.if (. - NavelRock_Harbor_Text_SailorReturn) > 0x44
	.error "NavelRock_Harbor_Text_SailorReturn may not grow beyond its original slot"
	.endif
	.if (. - NavelRock_Harbor_Text_SailorReturn) < 0x44
	.space 0x44 - (. - NavelRock_Harbor_Text_SailorReturn)
	.endif

	@ data/text/event_ticket_2.inc:58 FarawayIsland_Entrance_Text_Sign
	.globl FarawayIsland_Entrance_Text_Sign
FarawayIsland_Entrance_Text_Sign: @ 0x08275ED9
	.string "なんねんも まえに かかれたような\nふるい かきおきが ある……\p……がつ 6か\nここに たちいる にんげ……が\lふたたび ……らわれると すれば\lこころ やさし……で あらんことを\p……こに その ねがいを しるし\nこの ……を あとにする\p……ジ{EOS}"
	.if (. - FarawayIsland_Entrance_Text_Sign) > 0x7e
	.error "FarawayIsland_Entrance_Text_Sign may not grow beyond its original slot"
	.endif
	.if (. - FarawayIsland_Entrance_Text_Sign) < 0x7e
	.space 0x7e - (. - FarawayIsland_Entrance_Text_Sign)
	.endif

	@ data/text/event_ticket_2.inc:69 FarawayIsland_Interior_Text_Mew
	.globl FarawayIsland_Interior_Text_Mew
FarawayIsland_Interior_Text_Mew: @ 0x08275F57
	.string "ミュー……{EOS}"
	.if (. - FarawayIsland_Interior_Text_Mew) > 0x6
	.error "FarawayIsland_Interior_Text_Mew may not grow beyond its original slot"
	.endif
	.if (. - FarawayIsland_Interior_Text_Mew) < 0x6
	.space 0x6 - (. - FarawayIsland_Interior_Text_Mew)
	.endif
