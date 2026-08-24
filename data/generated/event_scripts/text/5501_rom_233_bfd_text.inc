	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:340 BattleFrontier_BattlePikeLobby_Text_SaveBeforeChallenge
	.globl gText_Rom_233896
gText_Rom_233896: @ 0x08233896
	.string "バトルゲームを かいしする まえに\nレポートを かきます…… よろしいですか?"
	.byte EOS
	.if (. - gText_Rom_233896) > 0x28
	.error "gText_Rom_233896 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233896) < 0x28
	.space 0x28 - (. - gText_Rom_233896)
	.endif
	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:345 BattleFrontier_BattlePikeLobby_Text_StepThisWay
	.globl gText_Rom_2338BE
gText_Rom_2338BE: @ 0x082338BE
	.string "では こちらに どうぞ……"
	.byte EOS
	.if (. - gText_Rom_2338BE) > 0xe
	.error "gText_Rom_2338BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2338BE) < 0xe
	.space 0xe - (. - gText_Rom_2338BE)
	.endif
	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:348 BattleFrontier_BattlePikeLobby_Text_ChallengeEndedRecordResults
	.globl gText_Rom_2338CC
gText_Rom_2338CC: @ 0x082338CC
	.string "ゲーム しゅうりょう ですね……\pせいせきを レポートに かきましょう……\nしょうしょう おまちください……"
	.byte EOS
	.if (. - gText_Rom_2338CC) > 0x37
	.error "gText_Rom_2338CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2338CC) < 0x37
	.space 0x37 - (. - gText_Rom_2338CC)
	.endif
	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:353 BattleFrontier_BattlePikeLobby_Text_PossessLuckInAbundance
	.globl gText_Rom_233903
gText_Rom_233903: @ 0x08233903
	.string "ゲーム クリア ですね……\pおきゃくさま…… なかなかの うんを\nおもちの ようですね……"
	.byte EOS
	.if (. - gText_Rom_233903) > 0x2e
	.error "gText_Rom_233903 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233903) < 0x2e
	.space 0x2e - (. - gText_Rom_233903)
	.endif
	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:358 BattleFrontier_BattlePikeLobby_Text_ShallRecordResults
	.globl gText_Rom_233931
gText_Rom_233931: @ 0x08233931
	.string "せいせきを レポートに かきましょう……\nしばらく おまちください……"
	.byte EOS
	.if (. - gText_Rom_233931) > 0x24
	.error "gText_Rom_233931 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233931) < 0x24
	.space 0x24 - (. - gText_Rom_233931)
	.endif
	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:363 BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints2
	.globl gText_Rom_233955
gText_Rom_233955: @ 0x08233955
	.string "ゲーム クリアを きねんして\nバトルポイントを しんてい します……\pどうぞ おおさめ ください……"
	.byte EOS
	.if (. - gText_Rom_233955) > 0x33
	.error "gText_Rom_233955 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233955) < 0x33
	.space 0x33 - (. - gText_Rom_233955)
	.endif
	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:369 BattleFrontier_BattlePikeLobby_Text_ReachedBattlePointLimit
	.globl gText_Rom_233988
gText_Rom_233988: @ 0x08233988
	.string "ポイントが いっぱいの ようですね……\pポイントを せいりしてから\nまた おこしください……"
	.byte EOS
	.if (. - gText_Rom_233988) > 0x2f
	.error "gText_Rom_233988 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233988) < 0x2f
	.space 0x2f - (. - gText_Rom_233988)
	.endif
	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:375 BattleFrontier_BattlePikeLobby_Text_FailedToSaveBeforeQuitting
	.globl gText_Rom_2339B7
gText_Rom_2339B7: @ 0x082339B7
	.string "おきゃくさま……\pぜんかい きちんと レポートを かかずに\nしゅうりょう されましたね……\pもうしわけ ありませんが ちょうせんは\nむこうと させて いただきます……"
	.byte EOS
	.if (. - gText_Rom_2339B7) > 0x54
	.error "gText_Rom_2339B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2339B7) < 0x54
	.space 0x54 - (. - gText_Rom_2339B7)
	.endif
	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:382 BattleFrontier_BattlePikeLobby_Text_SnatchedVictoryFromQueen
	.globl gText_Rom_233A0B
gText_Rom_233A0B: @ 0x08233A0B
	.string "…… おめでとう ございます……\nチューブクイーンに しょうりし\lゲームを クリア されましたね……"
	.byte EOS
	.if (. - gText_Rom_233A0B) > 0x33
	.error "gText_Rom_233A0B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233A0B) < 0x33
	.space 0x33 - (. - gText_Rom_233A0B)
	.endif
	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:387 BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints
	.globl gText_Rom_233A3E
gText_Rom_233A3E: @ 0x08233A3E
	.string "おきゃくさまの つよき うんを たたえ\nバトルポイントを さしあげます……"
	.byte EOS
	.if (. - gText_Rom_233A3E) > 0x26
	.error "gText_Rom_233A3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233A3E) < 0x26
	.space 0x26 - (. - gText_Rom_233A3E)
	.endif
	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:391 BattleFrontier_BattlePikeLobby_Text_OneRoomAwayFromGoal
	.globl gText_Rom_233A64
gText_Rom_233A64: @ 0x08233A64
	.string "んんー! ちくしょー!!\nあと 1へやで ゴールだったのによー!\pおまえ! ここでは どくや こおりには\nちゅうい したほうが いいぞ!"
	.byte EOS
	.if (. - gText_Rom_233A64) > 0x45
	.error "gText_Rom_233A64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233A64) < 0x45
	.space 0x45 - (. - gText_Rom_233A64)
	.endif
	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:397 BattleFrontier_BattlePikeLobby_Text_NeverHadToBattleTrainer
	.globl gText_Rom_233AA9
gText_Rom_233AA9: @ 0x08233AA9
	.string "あたし 10かいは クリアしたけど\nいっかいも トレーナーと\lたたかった こと ないんだよぅ!"
	.byte EOS
	.if (. - gText_Rom_233AA9) > 0x30
	.error "gText_Rom_233AA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233AA9) < 0x30
	.space 0x30 - (. - gText_Rom_233AA9)
	.endif
	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:402 BattleFrontier_BattlePikeLobby_Text_ThinkAbilitiesUsefulHere
	.globl gText_Rom_233AD9
gText_Rom_233AD9: @ 0x08233AD9
	.string "ねえ! ねえ!\pここって ポケモンの とくせいが\nかつやく すると おもわない?"
	.byte EOS
	.if (. - gText_Rom_233AD9) > 0x29
	.error "gText_Rom_233AD9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233AD9) < 0x29
	.space 0x29 - (. - gText_Rom_233AD9)
	.endif
	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:409 BattleFrontier_BattlePikeLobby_Text_TrainersWhicheverPathIChoose
	.globl gText_Rom_233B02
gText_Rom_233B02: @ 0x08233B02
	.string "なんだよ ここ! いみ わかんないよー!\pなんかい チャレンジ しても\nどの みち えらんでも\lトレーナーしか でてこない じゃないかー!"
	.byte EOS
	.if (. - gText_Rom_233B02) > 0x46
	.error "gText_Rom_233B02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233B02) < 0x46
	.space 0x46 - (. - gText_Rom_233B02)
	.endif
	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:416 BattleFrontier_BattlePikeLobby_Text_RulesAreListed
	.globl gText_Rom_233B48
gText_Rom_233B48: @ 0x08233B48
	.string "バトルゲームの ルールが かかれている!"
	.byte EOS
	.if (. - gText_Rom_233B48) > 0x15
	.error "gText_Rom_233B48 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233B48) < 0x15
	.space 0x15 - (. - gText_Rom_233B48)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:521 BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading (+7 aliases)
	.globl gText_Rom_233B5D
gText_Rom_233B5D: @ 0x08233B5D
	.string "どの せつめいを よみますか?"
	.byte EOS
	.if (. - gText_Rom_233B5D) > 0x10
	.error "gText_Rom_233B5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233B5D) < 0x10
	.space 0x10 - (. - gText_Rom_233B5D)
	.endif
	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:422 BattleFrontier_BattlePikeLobby_Text_ExplainPokenavBagRules
	.globl gText_Rom_233B6D
gText_Rom_233B6D: @ 0x08233B6D
	.string "バトルゲームの あいだは\nバッグと ポケナビの しようは\lきんし されています"
	.byte EOS
	.if (. - gText_Rom_233B6D) > 0x28
	.error "gText_Rom_233B6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233B6D) < 0x28
	.space 0x28 - (. - gText_Rom_233B6D)
	.endif
	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:426 BattleFrontier_BattlePikeLobby_Text_ExplainHeldItemRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_233B95
gText_Rom_233B95: @ 0x08233B95
	.string "バトルゲームでは\nポケモンに もたせた きのみや ハーブは\lいちどしか こうかを はっき しません"
	.byte EOS
	.if (. - gText_Rom_233B95) != 0x32
	.error "gText_Rom_233B95 must retain its original byte length"
	.endif
	.globl gText_Rom_233BC3
	.set gText_Rom_233BC3, gText_Rom_233B95 + 0x2e
	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:431 BattleFrontier_BattlePikeLobby_Text_ExplainMonOrderRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_233BC7
gText_Rom_233BC7: @ 0x08233BC7
	.string "バトルゲームの あいだは\nちょうせんする ときに きめた\lポケモンの じゅんばんを\lいれかえる ことは できません"
	.byte EOS
	.if (. - gText_Rom_233BC7) != 0x3a
	.error "gText_Rom_233BC7 must retain its original byte length"
	.endif
	.globl gText_Rom_233BFD
	.set gText_Rom_233BFD, gText_Rom_233BC7 + 0x36
	@ Embedded ROM bytes: file offset 0x233C01, size 0xA6
	.byte 0x02, 0x0C, 0x3C, 0x23, 0x08, 0x04, 0x87, 0x3C, 0x23, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x16
	.byte 0x3C, 0x23, 0x08, 0x00, 0x00, 0x28, 0x10, 0x00, 0x16, 0x04, 0x80, 0x02, 0x00, 0x16, 0x05, 0x80
	.byte 0x02, 0x00, 0x16, 0x06, 0x80, 0x01, 0x00, 0x25, 0xE7, 0x00, 0x16, 0x04, 0x80, 0x14, 0x00, 0x25
	.byte 0xEF, 0x00, 0x16, 0x04, 0x80, 0x18, 0x00, 0x16, 0x05, 0x80, 0x01, 0x00, 0x25, 0xEF, 0x00, 0x4F
	.byte 0xFF, 0x00, 0x9B, 0x3C, 0x23, 0x08, 0x4F, 0x01, 0x00, 0xA2, 0x3C, 0x23, 0x08, 0x51, 0x00, 0x00
	.byte 0x69, 0x0F, 0x00, 0xA7, 0x3C, 0x23, 0x08, 0x09, 0x04, 0x68, 0x6B, 0x4F, 0xFF, 0x00, 0x9E, 0x3C
	.byte 0x23, 0x08, 0x51, 0x00, 0x00, 0x16, 0x04, 0x80, 0x02, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x16
	.byte 0x06, 0x80, 0x63, 0x00, 0x25, 0xE7, 0x00, 0x04, 0x20, 0x35, 0x23, 0x08, 0x3A, 0x1A, 0x24, 0xFF
	.byte 0x06, 0x00, 0x0A, 0x00, 0x27, 0x02, 0x01, 0x40, 0x00, 0x00, 0x91, 0x3C, 0x23, 0x08, 0x00, 0x00
	.byte 0x16, 0x01, 0x40, 0x01, 0x00, 0x5B, 0xFF, 0x00, 0x02, 0x02, 0x09, 0x09, 0xFE, 0x09, 0x09, 0x54
	.byte 0xFE, 0x09, 0x09, 0x0A, 0x00, 0xFE
