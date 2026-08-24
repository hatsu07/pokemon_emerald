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
	.globl gText_Rom_23165C
gText_Rom_23165C: @ 0x0823165C
	.string "トレーナーの ちしきを はかる ばしょ!!\nバトルファクトリーに ようこそ!\pバトルトレード ダブルの\nごあんないは こちらです!"
	.byte EOS
	.if (. - gText_Rom_23165C) > 0x42
	.error "gText_Rom_23165C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23165C) < 0x42
	.space 0x42 - (. - gText_Rom_23165C)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:428 BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge
	.globl gText_Rom_23169E
gText_Rom_23169E: @ 0x0823169E
	.string "バトルトレード ダブルに\nちょうせん しますか?"
	.byte EOS
	.if (. - gText_Rom_23169E) > 0x19
	.error "gText_Rom_23169E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23169E) < 0x19
	.space 0x19 - (. - gText_Rom_23169E)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:432 BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge
	.globl gText_Rom_2316B7
gText_Rom_2316B7: @ 0x082316B7
	.string "こちらでは レンタルポケモンを つかった\nバトルトレード ダブル という\lイベントを おこなって います\pまずは バトルトレード せんようの\nポケモン 3ひきを おかし します!\pつぎに そちらの ポケモンを\nつかって ダブルバトルを\lおこなって いただきます!\pたたかいに しょうりすると いちど だけ\nポケモンを トレード できます!\pトレードと たたかいを くりかえし\nみごと 7れんしょうを したら\lバトルポイントを さしあげます!\pなお とちゅうで ちょうせんを\nちゅうだん したい ときには\lきちんと レポートを かかないと\lつづけて ちょうせんが できません!\pくれぐれも きをつけて くださいね!"
	.byte EOS
	.if (. - gText_Rom_2316B7) > 0x133
	.error "gText_Rom_2316B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2316B7) < 0x133
	.space 0x133 - (. - gText_Rom_2316B7)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:450 BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead
	.globl gText_Rom_2317EA
gText_Rom_2317EA: @ 0x082317EA
	.string "ファクトリーヘッドへの しょうり!\nならびに 7れんしょう たっせい\lおめでとう ございます!"
	.byte EOS
	.if (. - gText_Rom_2317EA) > 0x30
	.error "gText_Rom_2317EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2317EA) < 0x30
	.space 0x30 - (. - gText_Rom_2317EA)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:455 BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints
	.globl gText_Rom_23181A
gText_Rom_23181A: @ 0x0823181A
	.string "おきゃくさまの ふかい ちしきを たたえ\nバトルポイントを さしあげます!"
	.byte EOS
	.if (. - gText_Rom_23181A) > 0x26
	.error "gText_Rom_23181A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23181A) < 0x26
	.space 0x26 - (. - gText_Rom_23181A)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:460 BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave
	.globl gText_Rom_231840
gText_Rom_231840: @ 0x08231840
	.string "レンタルポケモンと\nおあずかり していた ポケモンを\lこうかん しましょう!\pせいせきを レポートに かきますので\nしょうしょう おまちください!"
	.byte EOS
	.if (. - gText_Rom_231840) > 0x4a
	.error "gText_Rom_231840 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231840) < 0x4a
	.space 0x4a - (. - gText_Rom_231840)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:466 BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch
	.globl gText_Rom_23188A
gText_Rom_23188A: @ 0x0823188A
	.string "バトルファクトリーで\nさいごに おこなった たたかいを\lフロンティアパスに きろく いたしますか?"
	.byte EOS
	.if (. - gText_Rom_23188A) > 0x32
	.error "gText_Rom_23188A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23188A) < 0x32
	.space 0x32 - (. - gText_Rom_23188A)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:471 BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves
	.globl gText_Rom_2318BC
gText_Rom_2318BC: @ 0x082318BC
	.string "ちょっと! キミ!\pポケモンを そだてなくても\nちょうせん できる から らくしょうー!\pとか おもってない?\pここは ポケモンと そのわざに\nかんする ちしきが ないと\lかちぬけない ひじょうに きびしー\lところ なのよ!!"
	.byte EOS
	.if (. - gText_Rom_2318BC) > 0x72
	.error "gText_Rom_2318BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2318BC) < 0x72
	.space 0x72 - (. - gText_Rom_2318BC)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:483 BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon
	.globl gText_Rom_23192E
gText_Rom_23192E: @ 0x0823192E
	.string "しゅるいに だまされて よわいポケモンと\nこうかん しちゃった……\pボロまけ……"
	.byte EOS
	.if (. - gText_Rom_23192E) > 0x29
	.error "gText_Rom_23192E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23192E) < 0x29
	.space 0x29 - (. - gText_Rom_23192E)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:488 BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons
	.globl gText_Rom_231957
gText_Rom_231957: @ 0x08231957
	.string "ダメダメねー!\pトレーナーが いいポケモン もってたら\nたたかいの あいだに\lチェック しとかなきゃ!"
	.byte EOS
	.if (. - gText_Rom_231957) > 0x34
	.error "gText_Rom_231957 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231957) < 0x34
	.space 0x34 - (. - gText_Rom_231957)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:495 BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints
	.globl gText_Rom_23198B
gText_Rom_23198B: @ 0x0823198B
	.string "ここの スタッフさぁ たたかいの まえに\nつぎに たたかう トレーナーのこと\lちょっとだけ おしえて くれるだろー?\pでも オレ いい おとな なのに\nあいつらの せつめいの いみが\lぜんぜん わからないんだ よう"
	.byte EOS
	.if (. - gText_Rom_23198B) > 0x6c
	.error "gText_Rom_23198B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23198B) < 0x6c
	.space 0x6c - (. - gText_Rom_23198B)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:502 BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried
	.globl gText_Rom_2319F7
gText_Rom_2319F7: @ 0x082319F7
	.string "ぼくってー バッチリー つよいけどー\nすっごくー あきっぽい からさー\lとりあえずー\lばんばん トレード しながらー\lたたかってたのさー\lそしたらさー\lつづけてー バトルトレードにー\lちょうせん したときー\lレンタル してくれるー\lポケモンのー\lしゅるいがさー\lなんかさー\lちょっとさー\lちがったんだよねー"
	.byte EOS
	.if (. - gText_Rom_2319F7) > 0x9a
	.error "gText_Rom_2319F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2319F7) < 0x9a
	.space 0x9a - (. - gText_Rom_2319F7)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:510 BattleFrontier_BattleFactoryLobby_Text_RulesAreListed
	.globl gText_Rom_231A91
gText_Rom_231A91: @ 0x08231A91
	.string "バトルトレードの ルールが かかれている!"
	.byte EOS
	.if (. - gText_Rom_231A91) > 0x16
	.error "gText_Rom_231A91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231A91) < 0x16
	.space 0x16 - (. - gText_Rom_231A91)
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
	.globl gText_Rom_231AB7
gText_Rom_231AB7: @ 0x08231AB7
	.string "バトルトレードで つかうことの できる\nポケモンは 3ひき まで です\pレンタルするとき トレードするとき\nどちらの とき でも\lおなじ しゅるいの ポケモンを\l2ひき いじょう もつことは できません"
	.byte EOS
	.if (. - gText_Rom_231AB7) != 0x66
	.error "gText_Rom_231AB7 must retain its original byte length"
	.endif
	.globl gText_Rom_231B19
	.set gText_Rom_231B19, gText_Rom_231AB7 + 0x62
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
