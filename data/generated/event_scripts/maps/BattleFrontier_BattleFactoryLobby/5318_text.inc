	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:413 BattleFrontier_BattleFactoryLobby_Text_WellReturnMons (+1 aliases)
	.globl gText_Rom_231637
gText_Rom_231637: @ 0x08231637
	.string "おきゃくさまの ポケモンを\nおかえしします!"
	.byte EOS
	.if (. - gText_Rom_231637) > 0x17
	.error "gText_Rom_231637 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231637) < 0x17
	.space 0x17 - (. - gText_Rom_231637)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:461 BattleFrontier_BattleArenaLobby_Text_ReceivedPrize (+6 aliases)
	.globl gText_Rom_23164E
gText_Rom_23164E: @ 0x0823164E
	.string "{PLAYER}は\n{STR_VAR_1}を もらった!"
	.byte EOS
	.if (. - gText_Rom_23164E) > 0xe
	.error "gText_Rom_23164E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23164E) < 0xe
	.space 0xe - (. - gText_Rom_23164E)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:421 BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle
	.globl BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle
BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle: @ 0x0823165C
	.string "トレーナーの ちしきを はかる ばしょ!!\nバトルファクトリーに ようこそ!\pバトルトレード ダブルの\nごあんないは こちらです!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle) > 0x42
	.error "BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle) < 0x42
	.space 0x42 - (. - BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:428 BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge
	.globl BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge
BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge: @ 0x0823169E
	.string "バトルトレード ダブルに\nちょうせん しますか?"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge) > 0x19
	.error "BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge) < 0x19
	.space 0x19 - (. - BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:432 BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge
	.globl BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge
BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge: @ 0x082316B7
	.string "こちらでは レンタルポケモンを つかった\nバトルトレード ダブル という\lイベントを おこなって います\pまずは バトルトレード せんようの\nポケモン 3ひきを おかし します!\pつぎに そちらの ポケモンを\nつかって ダブルバトルを\lおこなって いただきます!\pたたかいに しょうりすると いちど だけ\nポケモンを トレード できます!\pトレードと たたかいを くりかえし\nみごと 7れんしょうを したら\lバトルポイントを さしあげます!\pなお とちゅうで ちょうせんを\nちゅうだん したい ときには\lきちんと レポートを かかないと\lつづけて ちょうせんが できません!\pくれぐれも きをつけて くださいね!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge) > 0x133
	.error "BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge) < 0x133
	.space 0x133 - (. - BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:450 BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead
	.globl BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead
BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead: @ 0x082317EA
	.string "ファクトリーヘッドへの しょうり!\nならびに 7れんしょう たっせい\lおめでとう ございます!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead) > 0x30
	.error "BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead) < 0x30
	.space 0x30 - (. - BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:455 BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints
	.globl BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints
BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints: @ 0x0823181A
	.string "おきゃくさまの ふかい ちしきを たたえ\nバトルポイントを さしあげます!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints) > 0x26
	.error "BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints) < 0x26
	.space 0x26 - (. - BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:460 BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave
	.globl BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave
BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave: @ 0x08231840
	.string "レンタルポケモンと\nおあずかり していた ポケモンを\lこうかん しましょう!\pせいせきを レポートに かきますので\nしょうしょう おまちください!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave) > 0x4a
	.error "BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave) < 0x4a
	.space 0x4a - (. - BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:466 BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch
	.globl BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch
BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch: @ 0x0823188A
	.string "バトルファクトリーで\nさいごに おこなった たたかいを\lフロンティアパスに きろく いたしますか?"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch) > 0x32
	.error "BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch) < 0x32
	.space 0x32 - (. - BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:471 BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves
	.globl BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves
BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves: @ 0x082318BC
	.string "ちょっと! キミ!\pポケモンを そだてなくても\nちょうせん できる から らくしょうー!\pとか おもってない?\pここは ポケモンと そのわざに\nかんする ちしきが ないと\lかちぬけない ひじょうに きびしー\lところ なのよ!!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves) > 0x72
	.error "BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves) < 0x72
	.space 0x72 - (. - BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:483 BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon
	.globl BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon
BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon: @ 0x0823192E
	.string "しゅるいに だまされて よわいポケモンと\nこうかん しちゃった……\pボロまけ……"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon) > 0x29
	.error "BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon) < 0x29
	.space 0x29 - (. - BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:488 BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons
	.globl BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons
BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons: @ 0x08231957
	.string "ダメダメねー!\pトレーナーが いいポケモン もってたら\nたたかいの あいだに\lチェック しとかなきゃ!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons) > 0x34
	.error "BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons) < 0x34
	.space 0x34 - (. - BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:495 BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints
	.globl BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints
BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints: @ 0x0823198B
	.string "ここの スタッフさぁ たたかいの まえに\nつぎに たたかう トレーナーのこと\lちょっとだけ おしえて くれるだろー?\pでも オレ いい おとな なのに\nあいつらの せつめいの いみが\lぜんぜん わからないんだ よう"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints) > 0x6c
	.error "BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints) < 0x6c
	.space 0x6c - (. - BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:502 BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried
	.globl BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried
BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried: @ 0x082319F7
	.string "ぼくってー バッチリー つよいけどー\nすっごくー あきっぽい からさー\lとりあえずー\lばんばん トレード しながらー\lたたかってたのさー\lそしたらさー\lつづけてー バトルトレードにー\lちょうせん したときー\lレンタル してくれるー\lポケモンのー\lしゅるいがさー\lなんかさー\lちょっとさー\lちがったんだよねー"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried) > 0x9a
	.error "BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried) < 0x9a
	.space 0x9a - (. - BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:510 BattleFrontier_BattleFactoryLobby_Text_RulesAreListed
	.globl BattleFrontier_BattleFactoryLobby_Text_RulesAreListed
BattleFrontier_BattleFactoryLobby_Text_RulesAreListed: @ 0x08231A91
	.string "バトルトレードの ルールが かかれている!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_RulesAreListed) > 0x16
	.error "BattleFrontier_BattleFactoryLobby_Text_RulesAreListed may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_RulesAreListed) < 0x16
	.space 0x16 - (. - BattleFrontier_BattleFactoryLobby_Text_RulesAreListed)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:521 BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading (+7 aliases)
	.globl gText_Rom_231AA7
gText_Rom_231AA7: @ 0x08231AA7
	.string "どの せつめいを よみますか?"
	.byte EOS
	.if (. - gText_Rom_231AA7) > 0x10
	.error "gText_Rom_231AA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231AA7) < 0x10
	.space 0x10 - (. - gText_Rom_231AA7)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:516 BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules
BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules: @ 0x08231AB7
	.string "バトルトレードで つかうことの できる\nポケモンは 3ひき まで です\pレンタルするとき トレードするとき\nどちらの とき でも\lおなじ しゅるいの ポケモンを\l2ひき いじょう もつことは できません"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules) != 0x66
	.error "BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:523 BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules (+1 aliases)
	.globl gText_Rom_231B1D
gText_Rom_231B1D: @ 0x08231B1D
	.string "トレードが できる あいては\nあなたが たたかいで\lたおした トレーナーです\pトレードで うけとる ことが できるのは\nトレーナーが つかっていた ポケモンです"
	.byte EOS
	.if (. - gText_Rom_231B1D) > 0x51
	.error "gText_Rom_231B1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231B1D) < 0x51
	.space 0x51 - (. - gText_Rom_231B1D)
	.endif
