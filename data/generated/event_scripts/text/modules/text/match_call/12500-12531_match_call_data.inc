	@ data/text/match_call.inc:625 MatchCall_Text_Roxanne_Preparing
	.globl gText_Rom_269EA8
gText_Rom_269EA8: @ 0x08269EA8
	.string "ツツジ『あら {PLAYER}さん!\pあれから また トレーニングを\nやりなおして いるところ なんですよ!\pまた ジムを さいかい するためには\nもうすこし じかんが かかりますが\pもし ジムを さいかい できたら\nぜひまた ちょうせん してくださいね……"
	.byte EOS
	.if (. - gText_Rom_269EA8) > 0x7c
	.error "gText_Rom_269EA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269EA8) < 0x7c
	.space 0x7c - (. - gText_Rom_269EA8)
	.endif

	@ data/text/match_call.inc:628 MatchCall_Text_Roxanne_PreparingPostGame
	.globl gText_Rom_269F24
gText_Rom_269F24: @ 0x08269F24
	.string "ツツジ『{PLAYER}さん おめでとう!\nうわさは ききましたよ!\pこちらは ジムを さいかい するためには\nもうすこし じかんが かかりますが\pもし ジムを さいかい できたら\nぜひまた ちょうせん してくださいね……"
	.byte EOS
	.if (. - gText_Rom_269F24) > 0x6a
	.error "gText_Rom_269F24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269F24) < 0x6a
	.space 0x6a - (. - gText_Rom_269F24)
	.endif

	@ data/text/match_call.inc:631 MatchCall_Text_Roxanne_RematchReady
	.globl gText_Rom_269F8E
gText_Rom_269F8E: @ 0x08269F8E
	.string "ツツジ『{PLAYER}さん!\nジムの じゅんびが できました!\pいつでも カナズミ シティまで\nきてくださいな!"
	.byte EOS
	.if (. - gText_Rom_269F8E) > 0x34
	.error "gText_Rom_269F8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269F8E) < 0x34
	.space 0x34 - (. - gText_Rom_269F8E)
	.endif

	@ data/text/match_call.inc:634 MatchCall_Text_Roxanne_PostRematch
	.globl gText_Rom_269FC2
gText_Rom_269FC2: @ 0x08269FC2
	.string "ツツジ『{PLAYER}さんと\nしょうぶ できたことは\lカナズミ ジムの ほこりですよ!"
	.byte EOS
	.if (. - gText_Rom_269FC2) > 0x27
	.error "gText_Rom_269FC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269FC2) < 0x27
	.space 0x27 - (. - gText_Rom_269FC2)
	.endif

	@ data/text/match_call.inc:637 MatchCall_Text_Brawly_Preparing
	.globl gText_Rom_269FE9
gText_Rom_269FE9: @ 0x08269FE9
	.string "トウキ『やあ {PLAYER}{KUN}!\pキミとの しょうぶでは いろんなことを\nまなばせて もらったよ!\pまた しゅぎょう しなおして\nジムを さいかいする つもりさ!\pジムの じゅんびが できるまでは\nまだ じかんが かかりそう だけど\pもし ジムを さいかい できたら\nぜひまた ちょうせん してくれよ……"
	.byte EOS
	.if (. - gText_Rom_269FE9) > 0x95
	.error "gText_Rom_269FE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269FE9) < 0x95
	.space 0x95 - (. - gText_Rom_269FE9)
	.endif

	@ data/text/match_call.inc:640 MatchCall_Text_Brawly_PreparingPostGame
	.globl gText_Rom_26A07E
gText_Rom_26A07E: @ 0x0826A07E
	.string "トウキ『{PLAYER}{KUN} おめでとう!\pキミの うわさは しおかぜに のって\nこのまちにも とどいて いるよ!\pボクのほうは まだまだ しゅぎょうを\nやりなおす ひつようが ありそうだ\pジムの じゅんびが できるまでは\nまだ じかんが かかりそう だけど\pもし ジムを さいかい できたら\nぜひまた ちょうせん してくれよ……"
	.byte EOS
	.if (. - gText_Rom_26A07E) > 0xa0
	.error "gText_Rom_26A07E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A07E) < 0xa0
	.space 0xa0 - (. - gText_Rom_26A07E)
	.endif

	@ data/text/match_call.inc:643 MatchCall_Text_Brawly_RematchReady
	.globl gText_Rom_26A11E
gText_Rom_26A11E: @ 0x0826A11E
	.string "トウキ『{PLAYER}{KUN}!\nジムの じゅんびが できたよ!\pいつでも ムロ タウンまで\nちょうせんしに きてくれよな!"
	.byte EOS
	.if (. - gText_Rom_26A11E) > 0x38
	.error "gText_Rom_26A11E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A11E) < 0x38
	.space 0x38 - (. - gText_Rom_26A11E)
	.endif

	@ data/text/match_call.inc:646 MatchCall_Text_Brawly_PostRematch
	.globl gText_Rom_26A156
gText_Rom_26A156: @ 0x0826A156
	.string "トウキ『{PLAYER}{KUN} とは\nなんど しょうぶ しても あきないよ!"
	.byte EOS
	.if (. - gText_Rom_26A156) > 0x20
	.error "gText_Rom_26A156 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A156) < 0x20
	.space 0x20 - (. - gText_Rom_26A156)
	.endif

	@ data/text/match_call.inc:649 MatchCall_Text_Wattson_Preparing
	.globl gText_Rom_26A176
gText_Rom_26A176: @ 0x0826A176
	.string "テッセン『おう おまえさんか!\pわしは あれから また トレーニングを\nやりなおして いるところ じゃよ!\pわしの ジムを さいかいするには\nまだ ちーと じかんが かかりそうじゃな!\pそれまで まっていて おくれ!\nわっはははは!"
	.byte EOS
	.if (. - gText_Rom_26A176) > 0x75
	.error "gText_Rom_26A176 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A176) < 0x75
	.space 0x75 - (. - gText_Rom_26A176)
	.endif

	@ data/text/match_call.inc:652 MatchCall_Text_Wattson_PreparingPostGame
	.globl gText_Rom_26A1EB
gText_Rom_26A1EB: @ 0x0826A1EB
	.string "テッセン『わっははは!\pおまえさん とうとう やったな!\nうわさは わしの みみにも とどいとる!\pこちらは まだまだ しゅぎょうを\nやりなおす ひつようが ありそうじゃ\pわしの ジムを さいかいするには\nまだ ちーと じかんが かかりそうじゃな!\pそれまで まっていて おくれ!\nわっはははは!"
	.byte EOS
	.if (. - gText_Rom_26A1EB) > 0x95
	.error "gText_Rom_26A1EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A1EB) < 0x95
	.space 0x95 - (. - gText_Rom_26A1EB)
	.endif

	@ data/text/match_call.inc:655 MatchCall_Text_Wattson_RematchReady
	.globl gText_Rom_26A280
gText_Rom_26A280: @ 0x0826A280
	.string "テッセン『おう おまえさんか!\nジムの じゅんびが できたぞい!\pいつでも キンセツ シティまで\nくるがいいぞ! わっははは!"
	.byte EOS
	.if (. - gText_Rom_26A280) > 0x40
	.error "gText_Rom_26A280 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A280) < 0x40
	.space 0x40 - (. - gText_Rom_26A280)
	.endif

	@ data/text/match_call.inc:658 MatchCall_Text_Wattson_PostRematch
	.globl gText_Rom_26A2C0
gText_Rom_26A2C0: @ 0x0826A2C0
	.string "テッセン『わっははは!\pおまえさんとの ポケモン しょうぶは\nビリビリと しげきてきじゃな!"
	.byte EOS
	.if (. - gText_Rom_26A2C0) > 0x2f
	.error "gText_Rom_26A2C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A2C0) < 0x2f
	.space 0x2f - (. - gText_Rom_26A2C0)
	.endif

	@ data/text/match_call.inc:661 MatchCall_Text_Flannery_Preparing
	.globl gText_Rom_26A2EF
gText_Rom_26A2EF: @ 0x0826A2EF
	.string "アスナ『{PLAYER}さん……\pあなたとの しょうぶで じぶんの\nみじゅくさを おもいしらされた けど\lわたしは これで おわったり しないよ!\pもういちど しゅぎょうを しなおして\nまた ジムを さいかい するんだ!\pそのときには {PLAYER}さん\nぜったい ちょうせんしに きてよね!"
	.byte EOS
	.if (. - gText_Rom_26A2EF) > 0x88
	.error "gText_Rom_26A2EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A2EF) < 0x88
	.space 0x88 - (. - gText_Rom_26A2EF)
	.endif

	@ data/text/match_call.inc:664 MatchCall_Text_Flannery_PreparingPostGame
	.globl gText_Rom_26A377
gText_Rom_26A377: @ 0x0826A377
	.string "アスナ『{PLAYER}さん おめでとう!\pあなたの うわさは かざんの ねつのように\nわたしにも つたわって きてるよ!\pこちらも じゅんちょうに\nトレーニングが すすんでるんだ!\pジムの じゅんびが できたら\nエントリーコールの なまえの ところに\lしるしが つくからね!"
	.byte EOS
	.if (. - gText_Rom_26A377) > 0x85
	.error "gText_Rom_26A377 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A377) < 0x85
	.space 0x85 - (. - gText_Rom_26A377)
	.endif

	@ data/text/match_call.inc:667 MatchCall_Text_Flannery_RematchReady
	.globl gText_Rom_26A3FC
gText_Rom_26A3FC: @ 0x0826A3FC
	.string "アスナ『あっ {PLAYER}さん?\nジムの じゅんびは もうできてます!\pおんせんに はいる ついでに\nフエン タウンまで きてくださいね!"
	.byte EOS
	.if (. - gText_Rom_26A3FC) > 0x42
	.error "gText_Rom_26A3FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A3FC) < 0x42
	.space 0x42 - (. - gText_Rom_26A3FC)
	.endif

	@ data/text/match_call.inc:670 MatchCall_Text_Flannery_PostRematch
	.globl gText_Rom_26A43E
gText_Rom_26A43E: @ 0x0826A43E
	.string "アスナ『{PLAYER}さん……\nポケモンの あつかいかたが\lどんどん うまくなってる きがするよ!"
	.byte EOS
	.if (. - gText_Rom_26A43E) > 0x2d
	.error "gText_Rom_26A43E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A43E) < 0x2d
	.space 0x2d - (. - gText_Rom_26A43E)
	.endif

