
	@ data/text/cable_club.inc:197 MossdeepCity_GameCorner_1F_Text_DodrioBerryPickingInfo
	.globl gText_Rom_248292
gText_Rom_248292: @ 0x08248292
	.string "「ドードリオのきのみどり」は\nドードリオの 3つの あたまに\lめいれいして うえから おちてくる\lきのみを おとさないように\lとりつづける ゲームです\pじゅうじボタンの\nうえ みぎ ひだりを つかいます\pこの ゲームを あそぶには\nドードリオが ひつようです{EOS}"
	.if (. - gText_Rom_248292) > 0x82
	.error "gText_Rom_248292 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248292) < 0x82
	.space 0x82 - (. - gText_Rom_248292)
	.endif

	@ data/text/cable_club.inc:200 MossdeepCity_GameCorner_1F_Text_TalkToOldManToPlay
	.globl gText_Rom_248314
gText_Rom_248314: @ 0x08248314
	.string "ゲームを するなら\nおとなりの おじいさんに いってね{EOS}"
	.if (. - gText_Rom_248314) > 0x1c
	.error "gText_Rom_248314 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248314) < 0x1c
	.space 0x1c - (. - gText_Rom_248314)
	.endif

	@ data/text/cable_club.inc:203 MossdeepCity_GameCorner_1F_Text_WelcomeCanYouWait
	.globl gText_Rom_248330
gText_Rom_248330: @ 0x08248330
	.string "やあ いらっしゃい\nワイヤレスつうしんの ゲームかな?\lちょっと まってね{EOS}"
	.if (. - gText_Rom_248330) > 0x26
	.error "gText_Rom_248330 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248330) < 0x26
	.space 0x26 - (. - gText_Rom_248330)
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
	.globl gText_Rom_24835E
gText_Rom_24835E: @ 0x0824835E
	.string "ワイヤレスアダプタを つなげて\nあそびに おいで!{EOS}"
	.if (. - gText_Rom_24835E) > 0x1a
	.error "gText_Rom_24835E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24835E) < 0x1a
	.space 0x1a - (. - gText_Rom_24835E)
	.endif

	@ data/text/cable_club.inc:212 MossdeepCity_GameCorner_1F_Text_PlayWhichGame
	.globl gText_Rom_248378
gText_Rom_248378: @ 0x08248378
	.string "さて どの ゲームを\nやりたいのかな?{EOS}"
	.if (. - gText_Rom_248378) > 0x14
	.error "gText_Rom_248378 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248378) < 0x14
	.space 0x14 - (. - gText_Rom_248378)
	.endif

	@ data/text/cable_club.inc:215 MossdeepCity_GameCorner_1F_Text_EnterWhichPokemon
	.globl gText_Rom_24838C
gText_Rom_24838C: @ 0x0824838C
	.string "どの ポケモンを\nさんか させるのかな?{EOS}"
	.if (. - gText_Rom_24838C) > 0x15
	.error "gText_Rom_24838C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24838C) < 0x15
	.space 0x15 - (. - gText_Rom_24838C)
	.endif

	@ data/text/cable_club.inc:218 MossdeepCity_GameCorner_1F_Text_AllGoodToGo
	.globl gText_Rom_2483A1
gText_Rom_2483A1: @ 0x082483A1
	.string "じゅんびが できたよ\nげんきに あそんで おいで!{EOS}"
	.if (. - gText_Rom_2483A1) > 0x1a
	.error "gText_Rom_2483A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2483A1) < 0x1a
	.space 0x1a - (. - gText_Rom_2483A1)
	.endif

	@ data/text/cable_club.inc:222 MossdeepCity_GameCorner_1F_Text_LeavingDoComeAgain
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2483BB
gText_Rom_2483BB: @ 0x082483BB
	.string "きょうは かえるのかい?\nまた おいでね{EOS}"
	.if (. - gText_Rom_2483BB) != 0x15
	.error "gText_Rom_2483BB must retain its original byte length"
	.endif
	.globl gText_Rom_2483C8
	.set gText_Rom_2483C8, gText_Rom_2483BB + 0xd

	@ data/text/cable_club.inc:225 MossdeepCity_GameCorner_1F_Text_ExplainRequiredMon
	.globl gText_Rom_2483D0
gText_Rom_2483D0: @ 0x082483D0
	.string "ゲームに さんかできる\nポケモンを もって いないんだね\pだれが さんか できるか\nせつめいを しようか?{EOS}"
	.if (. - gText_Rom_2483D0) > 0x36
	.error "gText_Rom_2483D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2483D0) < 0x36
	.space 0x36 - (. - gText_Rom_2483D0)
	.endif

	@ data/text/cable_club.inc:228 MossdeepCity_GameCorner_1F_Text_ShortJumpingPokemonAllowed
	.globl gText_Rom_248406
gText_Rom_248406: @ 0x08248406
	.string "「ミニポケモンでジャンプ」に\nさんか できる ポケモンは\lたかさ 70センチくらい までだよ\pじめんに もぐったり\nうかんでいる ポケモンは\lジャンプ できないから\lでられないんだよ{EOS}"
	.if (. - gText_Rom_248406) > 0x5c
	.error "gText_Rom_248406 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248406) < 0x5c
	.space 0x5c - (. - gText_Rom_248406)
	.endif

	@ data/text/cable_club.inc:231 MossdeepCity_GameCorner_1F_Text_OnlyDodrioAllowed
	.globl gText_Rom_248462
gText_Rom_248462: @ 0x08248462
	.string "「ドードリオのきのみどり」は\nドードリオ だけが\lさんか できる ゲームなんだよ{EOS}"
	.if (. - gText_Rom_248462) > 0x29
	.error "gText_Rom_248462 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248462) < 0x29
	.space 0x29 - (. - gText_Rom_248462)
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
	.globl gText_Rom_2484A8
gText_Rom_2484A8: @ 0x082484A8
	.string "ポケモン ワイヤレス クラブ\nダイレクト コーナーに ようこそ!\pこちらでは ともだちと ちょくせつ\nやりとり できます\pどの へやに はいりますか?{EOS}"
	.if (. - gText_Rom_2484A8) > 0x4c
	.error "gText_Rom_2484A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2484A8) < 0x4c
	.space 0x4c - (. - gText_Rom_2484A8)
	.endif

	@ data/text/cable_club.inc:241 CableClub_Text_TradePokemon
	.globl gText_Rom_2484F4
gText_Rom_2484F4: @ 0x082484F4
	.string "こうかんを しますか?{EOS}"
	.if (. - gText_Rom_2484F4) > 0xc
	.error "gText_Rom_2484F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2484F4) < 0xc
	.space 0xc - (. - gText_Rom_2484F4)
	.endif

