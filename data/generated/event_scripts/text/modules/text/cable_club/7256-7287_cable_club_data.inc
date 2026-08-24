
	@ data/text/cable_club.inc:197 MossdeepCity_GameCorner_1F_Text_DodrioBerryPickingInfo
	.globl MossdeepCity_GameCorner_1F_Text_DodrioBerryPickingInfo
MossdeepCity_GameCorner_1F_Text_DodrioBerryPickingInfo: @ 0x08248292
	.string "「ドードリオのきのみどり」は\nドードリオの 3つの あたまに\lめいれいして うえから おちてくる\lきのみを おとさないように\lとりつづける ゲームです\pじゅうじボタンの\nうえ みぎ ひだりを つかいます\pこの ゲームを あそぶには\nドードリオが ひつようです{EOS}"
	.if (. - MossdeepCity_GameCorner_1F_Text_DodrioBerryPickingInfo) > 0x82
	.error "MossdeepCity_GameCorner_1F_Text_DodrioBerryPickingInfo may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_GameCorner_1F_Text_DodrioBerryPickingInfo) < 0x82
	.space 0x82 - (. - MossdeepCity_GameCorner_1F_Text_DodrioBerryPickingInfo)
	.endif

	@ data/text/cable_club.inc:200 MossdeepCity_GameCorner_1F_Text_TalkToOldManToPlay
	.globl MossdeepCity_GameCorner_1F_Text_TalkToOldManToPlay
MossdeepCity_GameCorner_1F_Text_TalkToOldManToPlay: @ 0x08248314
	.string "ゲームを するなら\nおとなりの おじいさんに いってね{EOS}"
	.if (. - MossdeepCity_GameCorner_1F_Text_TalkToOldManToPlay) > 0x1c
	.error "MossdeepCity_GameCorner_1F_Text_TalkToOldManToPlay may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_GameCorner_1F_Text_TalkToOldManToPlay) < 0x1c
	.space 0x1c - (. - MossdeepCity_GameCorner_1F_Text_TalkToOldManToPlay)
	.endif

	@ data/text/cable_club.inc:203 MossdeepCity_GameCorner_1F_Text_WelcomeCanYouWait
	.globl MossdeepCity_GameCorner_1F_Text_WelcomeCanYouWait
MossdeepCity_GameCorner_1F_Text_WelcomeCanYouWait: @ 0x08248330
	.string "やあ いらっしゃい\nワイヤレスつうしんの ゲームかな?\lちょっと まってね{EOS}"
	.if (. - MossdeepCity_GameCorner_1F_Text_WelcomeCanYouWait) > 0x26
	.error "MossdeepCity_GameCorner_1F_Text_WelcomeCanYouWait may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_GameCorner_1F_Text_WelcomeCanYouWait) < 0x26
	.space 0x26 - (. - MossdeepCity_GameCorner_1F_Text_WelcomeCanYouWait)
	.endif

	@ data/text/cable_club.inc:206 MossdeepCity_GameCorner_1F_Text_ComeAgain
	.globl gText_Rom_248356
gText_Rom_248356: @ 0x08248356
	.string "また おいでね{EOS}"
	.if (. - gText_Rom_248356) > 0x8
	.error "gText_Rom_248356 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248356) < 0x8
	.space 0x8 - (. - gText_Rom_248356)
	.endif

	@ data/text/cable_club.inc:209 MossdeepCity_GameCorner_1F_Text_AdapterNotConnected
	.globl MossdeepCity_GameCorner_1F_Text_AdapterNotConnected
MossdeepCity_GameCorner_1F_Text_AdapterNotConnected: @ 0x0824835E
	.string "ワイヤレスアダプタを つなげて\nあそびに おいで!{EOS}"
	.if (. - MossdeepCity_GameCorner_1F_Text_AdapterNotConnected) > 0x1a
	.error "MossdeepCity_GameCorner_1F_Text_AdapterNotConnected may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_GameCorner_1F_Text_AdapterNotConnected) < 0x1a
	.space 0x1a - (. - MossdeepCity_GameCorner_1F_Text_AdapterNotConnected)
	.endif

	@ data/text/cable_club.inc:212 MossdeepCity_GameCorner_1F_Text_PlayWhichGame
	.globl MossdeepCity_GameCorner_1F_Text_PlayWhichGame
MossdeepCity_GameCorner_1F_Text_PlayWhichGame: @ 0x08248378
	.string "さて どの ゲームを\nやりたいのかな?{EOS}"
	.if (. - MossdeepCity_GameCorner_1F_Text_PlayWhichGame) > 0x14
	.error "MossdeepCity_GameCorner_1F_Text_PlayWhichGame may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_GameCorner_1F_Text_PlayWhichGame) < 0x14
	.space 0x14 - (. - MossdeepCity_GameCorner_1F_Text_PlayWhichGame)
	.endif

	@ data/text/cable_club.inc:215 MossdeepCity_GameCorner_1F_Text_EnterWhichPokemon
	.globl MossdeepCity_GameCorner_1F_Text_EnterWhichPokemon
MossdeepCity_GameCorner_1F_Text_EnterWhichPokemon: @ 0x0824838C
	.string "どの ポケモンを\nさんか させるのかな?{EOS}"
	.if (. - MossdeepCity_GameCorner_1F_Text_EnterWhichPokemon) > 0x15
	.error "MossdeepCity_GameCorner_1F_Text_EnterWhichPokemon may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_GameCorner_1F_Text_EnterWhichPokemon) < 0x15
	.space 0x15 - (. - MossdeepCity_GameCorner_1F_Text_EnterWhichPokemon)
	.endif

	@ data/text/cable_club.inc:218 MossdeepCity_GameCorner_1F_Text_AllGoodToGo
	.globl MossdeepCity_GameCorner_1F_Text_AllGoodToGo
MossdeepCity_GameCorner_1F_Text_AllGoodToGo: @ 0x082483A1
	.string "じゅんびが できたよ\nげんきに あそんで おいで!{EOS}"
	.if (. - MossdeepCity_GameCorner_1F_Text_AllGoodToGo) > 0x1a
	.error "MossdeepCity_GameCorner_1F_Text_AllGoodToGo may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_GameCorner_1F_Text_AllGoodToGo) < 0x1a
	.space 0x1a - (. - MossdeepCity_GameCorner_1F_Text_AllGoodToGo)
	.endif

	@ data/text/cable_club.inc:222 MossdeepCity_GameCorner_1F_Text_LeavingDoComeAgain
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MossdeepCity_GameCorner_1F_Text_LeavingDoComeAgain
MossdeepCity_GameCorner_1F_Text_LeavingDoComeAgain: @ 0x082483BB
	.string "きょうは かえるのかい?\nまた おいでね{EOS}"
	.if (. - MossdeepCity_GameCorner_1F_Text_LeavingDoComeAgain) != 0x15
	.error "MossdeepCity_GameCorner_1F_Text_LeavingDoComeAgain must retain its original byte length"
	.endif
	.globl gText_Rom_2483C8
	.set gText_Rom_2483C8, MossdeepCity_GameCorner_1F_Text_LeavingDoComeAgain + 0xd

	@ data/text/cable_club.inc:225 MossdeepCity_GameCorner_1F_Text_ExplainRequiredMon
	.globl MossdeepCity_GameCorner_1F_Text_ExplainRequiredMon
MossdeepCity_GameCorner_1F_Text_ExplainRequiredMon: @ 0x082483D0
	.string "ゲームに さんかできる\nポケモンを もって いないんだね\pだれが さんか できるか\nせつめいを しようか?{EOS}"
	.if (. - MossdeepCity_GameCorner_1F_Text_ExplainRequiredMon) > 0x36
	.error "MossdeepCity_GameCorner_1F_Text_ExplainRequiredMon may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_GameCorner_1F_Text_ExplainRequiredMon) < 0x36
	.space 0x36 - (. - MossdeepCity_GameCorner_1F_Text_ExplainRequiredMon)
	.endif

	@ data/text/cable_club.inc:228 MossdeepCity_GameCorner_1F_Text_ShortJumpingPokemonAllowed
	.globl MossdeepCity_GameCorner_1F_Text_ShortJumpingPokemonAllowed
MossdeepCity_GameCorner_1F_Text_ShortJumpingPokemonAllowed: @ 0x08248406
	.string "「ミニポケモンでジャンプ」に\nさんか できる ポケモンは\lたかさ 70センチくらい までだよ\pじめんに もぐったり\nうかんでいる ポケモンは\lジャンプ できないから\lでられないんだよ{EOS}"
	.if (. - MossdeepCity_GameCorner_1F_Text_ShortJumpingPokemonAllowed) > 0x5c
	.error "MossdeepCity_GameCorner_1F_Text_ShortJumpingPokemonAllowed may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_GameCorner_1F_Text_ShortJumpingPokemonAllowed) < 0x5c
	.space 0x5c - (. - MossdeepCity_GameCorner_1F_Text_ShortJumpingPokemonAllowed)
	.endif

	@ data/text/cable_club.inc:231 MossdeepCity_GameCorner_1F_Text_OnlyDodrioAllowed
	.globl MossdeepCity_GameCorner_1F_Text_OnlyDodrioAllowed
MossdeepCity_GameCorner_1F_Text_OnlyDodrioAllowed: @ 0x08248462
	.string "「ドードリオのきのみどり」は\nドードリオ だけが\lさんか できる ゲームなんだよ{EOS}"
	.if (. - MossdeepCity_GameCorner_1F_Text_OnlyDodrioAllowed) > 0x29
	.error "MossdeepCity_GameCorner_1F_Text_OnlyDodrioAllowed may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_GameCorner_1F_Text_OnlyDodrioAllowed) < 0x29
	.space 0x29 - (. - MossdeepCity_GameCorner_1F_Text_OnlyDodrioAllowed)
	.endif

	@ data/text/cable_club.inc:235 MossdeepCity_GameCorner_1F_Text_RetryPlease
	.globl gText_Rom_24848B
gText_Rom_24848B: @ 0x0824848B
	.string "もういちど はじめから\nやりなおして みて くれるかな?{EOS}"
	.if (. - gText_Rom_24848B) > 0x1d
	.error "gText_Rom_24848B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24848B) < 0x1d
	.space 0x1d - (. - gText_Rom_24848B)
	.endif

	@ data/text/cable_club.inc:238 CableClub_Text_WelcomeWhichDirectCornerRoom
	.globl CableClub_Text_WelcomeWhichDirectCornerRoom
CableClub_Text_WelcomeWhichDirectCornerRoom: @ 0x082484A8
	.string "ポケモン ワイヤレス クラブ\nダイレクト コーナーに ようこそ!\pこちらでは ともだちと ちょくせつ\nやりとり できます\pどの へやに はいりますか?{EOS}"
	.if (. - CableClub_Text_WelcomeWhichDirectCornerRoom) > 0x4c
	.error "CableClub_Text_WelcomeWhichDirectCornerRoom may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_WelcomeWhichDirectCornerRoom) < 0x4c
	.space 0x4c - (. - CableClub_Text_WelcomeWhichDirectCornerRoom)
	.endif

	@ data/text/cable_club.inc:241 CableClub_Text_TradePokemon
	.globl CableClub_Text_TradePokemon
CableClub_Text_TradePokemon: @ 0x082484F4
	.string "こうかんを しますか?{EOS}"
	.if (. - CableClub_Text_TradePokemon) > 0xc
	.error "CableClub_Text_TradePokemon may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_TradePokemon) < 0xc
	.space 0xc - (. - CableClub_Text_TradePokemon)
	.endif

