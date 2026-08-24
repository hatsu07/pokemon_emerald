	@ data/text/match_call.inc:625 MatchCall_Text_Roxanne_Preparing
	.globl MatchCall_Text_Roxanne_Preparing
MatchCall_Text_Roxanne_Preparing: @ 0x08269EA8
	.string "ツツジ『あら {PLAYER}さん!\pあれから また トレーニングを\nやりなおして いるところ なんですよ!\pまた ジムを さいかい するためには\nもうすこし じかんが かかりますが\pもし ジムを さいかい できたら\nぜひまた ちょうせん してくださいね……"
	.byte EOS
	.if (. - MatchCall_Text_Roxanne_Preparing) > 0x7c
	.error "MatchCall_Text_Roxanne_Preparing may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Roxanne_Preparing) < 0x7c
	.space 0x7c - (. - MatchCall_Text_Roxanne_Preparing)
	.endif

	@ data/text/match_call.inc:628 MatchCall_Text_Roxanne_PreparingPostGame
	.globl MatchCall_Text_Roxanne_PreparingPostGame
MatchCall_Text_Roxanne_PreparingPostGame: @ 0x08269F24
	.string "ツツジ『{PLAYER}さん おめでとう!\nうわさは ききましたよ!\pこちらは ジムを さいかい するためには\nもうすこし じかんが かかりますが\pもし ジムを さいかい できたら\nぜひまた ちょうせん してくださいね……"
	.byte EOS
	.if (. - MatchCall_Text_Roxanne_PreparingPostGame) > 0x6a
	.error "MatchCall_Text_Roxanne_PreparingPostGame may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Roxanne_PreparingPostGame) < 0x6a
	.space 0x6a - (. - MatchCall_Text_Roxanne_PreparingPostGame)
	.endif

	@ data/text/match_call.inc:631 MatchCall_Text_Roxanne_RematchReady
	.globl MatchCall_Text_Roxanne_RematchReady
MatchCall_Text_Roxanne_RematchReady: @ 0x08269F8E
	.string "ツツジ『{PLAYER}さん!\nジムの じゅんびが できました!\pいつでも カナズミ シティまで\nきてくださいな!"
	.byte EOS
	.if (. - MatchCall_Text_Roxanne_RematchReady) > 0x34
	.error "MatchCall_Text_Roxanne_RematchReady may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Roxanne_RematchReady) < 0x34
	.space 0x34 - (. - MatchCall_Text_Roxanne_RematchReady)
	.endif

	@ data/text/match_call.inc:634 MatchCall_Text_Roxanne_PostRematch
	.globl MatchCall_Text_Roxanne_PostRematch
MatchCall_Text_Roxanne_PostRematch: @ 0x08269FC2
	.string "ツツジ『{PLAYER}さんと\nしょうぶ できたことは\lカナズミ ジムの ほこりですよ!"
	.byte EOS
	.if (. - MatchCall_Text_Roxanne_PostRematch) > 0x27
	.error "MatchCall_Text_Roxanne_PostRematch may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Roxanne_PostRematch) < 0x27
	.space 0x27 - (. - MatchCall_Text_Roxanne_PostRematch)
	.endif

	@ data/text/match_call.inc:637 MatchCall_Text_Brawly_Preparing
	.globl MatchCall_Text_Brawly_Preparing
MatchCall_Text_Brawly_Preparing: @ 0x08269FE9
	.string "トウキ『やあ {PLAYER}{KUN}!\pキミとの しょうぶでは いろんなことを\nまなばせて もらったよ!\pまた しゅぎょう しなおして\nジムを さいかいする つもりさ!\pジムの じゅんびが できるまでは\nまだ じかんが かかりそう だけど\pもし ジムを さいかい できたら\nぜひまた ちょうせん してくれよ……"
	.byte EOS
	.if (. - MatchCall_Text_Brawly_Preparing) > 0x95
	.error "MatchCall_Text_Brawly_Preparing may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Brawly_Preparing) < 0x95
	.space 0x95 - (. - MatchCall_Text_Brawly_Preparing)
	.endif

	@ data/text/match_call.inc:640 MatchCall_Text_Brawly_PreparingPostGame
	.globl MatchCall_Text_Brawly_PreparingPostGame
MatchCall_Text_Brawly_PreparingPostGame: @ 0x0826A07E
	.string "トウキ『{PLAYER}{KUN} おめでとう!\pキミの うわさは しおかぜに のって\nこのまちにも とどいて いるよ!\pボクのほうは まだまだ しゅぎょうを\nやりなおす ひつようが ありそうだ\pジムの じゅんびが できるまでは\nまだ じかんが かかりそう だけど\pもし ジムを さいかい できたら\nぜひまた ちょうせん してくれよ……"
	.byte EOS
	.if (. - MatchCall_Text_Brawly_PreparingPostGame) > 0xa0
	.error "MatchCall_Text_Brawly_PreparingPostGame may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Brawly_PreparingPostGame) < 0xa0
	.space 0xa0 - (. - MatchCall_Text_Brawly_PreparingPostGame)
	.endif

	@ data/text/match_call.inc:643 MatchCall_Text_Brawly_RematchReady
	.globl MatchCall_Text_Brawly_RematchReady
MatchCall_Text_Brawly_RematchReady: @ 0x0826A11E
	.string "トウキ『{PLAYER}{KUN}!\nジムの じゅんびが できたよ!\pいつでも ムロ タウンまで\nちょうせんしに きてくれよな!"
	.byte EOS
	.if (. - MatchCall_Text_Brawly_RematchReady) > 0x38
	.error "MatchCall_Text_Brawly_RematchReady may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Brawly_RematchReady) < 0x38
	.space 0x38 - (. - MatchCall_Text_Brawly_RematchReady)
	.endif

	@ data/text/match_call.inc:646 MatchCall_Text_Brawly_PostRematch
	.globl MatchCall_Text_Brawly_PostRematch
MatchCall_Text_Brawly_PostRematch: @ 0x0826A156
	.string "トウキ『{PLAYER}{KUN} とは\nなんど しょうぶ しても あきないよ!"
	.byte EOS
	.if (. - MatchCall_Text_Brawly_PostRematch) > 0x20
	.error "MatchCall_Text_Brawly_PostRematch may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Brawly_PostRematch) < 0x20
	.space 0x20 - (. - MatchCall_Text_Brawly_PostRematch)
	.endif

	@ data/text/match_call.inc:649 MatchCall_Text_Wattson_Preparing
	.globl MatchCall_Text_Wattson_Preparing
MatchCall_Text_Wattson_Preparing: @ 0x0826A176
	.string "テッセン『おう おまえさんか!\pわしは あれから また トレーニングを\nやりなおして いるところ じゃよ!\pわしの ジムを さいかいするには\nまだ ちーと じかんが かかりそうじゃな!\pそれまで まっていて おくれ!\nわっはははは!"
	.byte EOS
	.if (. - MatchCall_Text_Wattson_Preparing) > 0x75
	.error "MatchCall_Text_Wattson_Preparing may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Wattson_Preparing) < 0x75
	.space 0x75 - (. - MatchCall_Text_Wattson_Preparing)
	.endif

	@ data/text/match_call.inc:652 MatchCall_Text_Wattson_PreparingPostGame
	.globl MatchCall_Text_Wattson_PreparingPostGame
MatchCall_Text_Wattson_PreparingPostGame: @ 0x0826A1EB
	.string "テッセン『わっははは!\pおまえさん とうとう やったな!\nうわさは わしの みみにも とどいとる!\pこちらは まだまだ しゅぎょうを\nやりなおす ひつようが ありそうじゃ\pわしの ジムを さいかいするには\nまだ ちーと じかんが かかりそうじゃな!\pそれまで まっていて おくれ!\nわっはははは!"
	.byte EOS
	.if (. - MatchCall_Text_Wattson_PreparingPostGame) > 0x95
	.error "MatchCall_Text_Wattson_PreparingPostGame may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Wattson_PreparingPostGame) < 0x95
	.space 0x95 - (. - MatchCall_Text_Wattson_PreparingPostGame)
	.endif

	@ data/text/match_call.inc:655 MatchCall_Text_Wattson_RematchReady
	.globl MatchCall_Text_Wattson_RematchReady
MatchCall_Text_Wattson_RematchReady: @ 0x0826A280
	.string "テッセン『おう おまえさんか!\nジムの じゅんびが できたぞい!\pいつでも キンセツ シティまで\nくるがいいぞ! わっははは!"
	.byte EOS
	.if (. - MatchCall_Text_Wattson_RematchReady) > 0x40
	.error "MatchCall_Text_Wattson_RematchReady may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Wattson_RematchReady) < 0x40
	.space 0x40 - (. - MatchCall_Text_Wattson_RematchReady)
	.endif

	@ data/text/match_call.inc:658 MatchCall_Text_Wattson_PostRematch
	.globl MatchCall_Text_Wattson_PostRematch
MatchCall_Text_Wattson_PostRematch: @ 0x0826A2C0
	.string "テッセン『わっははは!\pおまえさんとの ポケモン しょうぶは\nビリビリと しげきてきじゃな!"
	.byte EOS
	.if (. - MatchCall_Text_Wattson_PostRematch) > 0x2f
	.error "MatchCall_Text_Wattson_PostRematch may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Wattson_PostRematch) < 0x2f
	.space 0x2f - (. - MatchCall_Text_Wattson_PostRematch)
	.endif

	@ data/text/match_call.inc:661 MatchCall_Text_Flannery_Preparing
	.globl MatchCall_Text_Flannery_Preparing
MatchCall_Text_Flannery_Preparing: @ 0x0826A2EF
	.string "アスナ『{PLAYER}さん……\pあなたとの しょうぶで じぶんの\nみじゅくさを おもいしらされた けど\lわたしは これで おわったり しないよ!\pもういちど しゅぎょうを しなおして\nまた ジムを さいかい するんだ!\pそのときには {PLAYER}さん\nぜったい ちょうせんしに きてよね!"
	.byte EOS
	.if (. - MatchCall_Text_Flannery_Preparing) > 0x88
	.error "MatchCall_Text_Flannery_Preparing may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Flannery_Preparing) < 0x88
	.space 0x88 - (. - MatchCall_Text_Flannery_Preparing)
	.endif

	@ data/text/match_call.inc:664 MatchCall_Text_Flannery_PreparingPostGame
	.globl MatchCall_Text_Flannery_PreparingPostGame
MatchCall_Text_Flannery_PreparingPostGame: @ 0x0826A377
	.string "アスナ『{PLAYER}さん おめでとう!\pあなたの うわさは かざんの ねつのように\nわたしにも つたわって きてるよ!\pこちらも じゅんちょうに\nトレーニングが すすんでるんだ!\pジムの じゅんびが できたら\nエントリーコールの なまえの ところに\lしるしが つくからね!"
	.byte EOS
	.if (. - MatchCall_Text_Flannery_PreparingPostGame) > 0x85
	.error "MatchCall_Text_Flannery_PreparingPostGame may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Flannery_PreparingPostGame) < 0x85
	.space 0x85 - (. - MatchCall_Text_Flannery_PreparingPostGame)
	.endif

	@ data/text/match_call.inc:667 MatchCall_Text_Flannery_RematchReady
	.globl MatchCall_Text_Flannery_RematchReady
MatchCall_Text_Flannery_RematchReady: @ 0x0826A3FC
	.string "アスナ『あっ {PLAYER}さん?\nジムの じゅんびは もうできてます!\pおんせんに はいる ついでに\nフエン タウンまで きてくださいね!"
	.byte EOS
	.if (. - MatchCall_Text_Flannery_RematchReady) > 0x42
	.error "MatchCall_Text_Flannery_RematchReady may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Flannery_RematchReady) < 0x42
	.space 0x42 - (. - MatchCall_Text_Flannery_RematchReady)
	.endif

	@ data/text/match_call.inc:670 MatchCall_Text_Flannery_PostRematch
	.globl MatchCall_Text_Flannery_PostRematch
MatchCall_Text_Flannery_PostRematch: @ 0x0826A43E
	.string "アスナ『{PLAYER}さん……\nポケモンの あつかいかたが\lどんどん うまくなってる きがするよ!"
	.byte EOS
	.if (. - MatchCall_Text_Flannery_PostRematch) > 0x2d
	.error "MatchCall_Text_Flannery_PostRematch may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Flannery_PostRematch) < 0x2d
	.space 0x2d - (. - MatchCall_Text_Flannery_PostRematch)
	.endif

