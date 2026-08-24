	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:703 BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedThunderWave
	.globl gText_Rom_234D82
gText_Rom_234D82: @ 0x08234D82
	.string "キルリアの でんじは!"
	.byte EOS
	.if (. - gText_Rom_234D82) > 0xc
	.error "gText_Rom_234D82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234D82) < 0xc
	.space 0xc - (. - gText_Rom_234D82)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:706 BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedWillOWisp
	.globl BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedWillOWisp
BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedWillOWisp: @ 0x08234D8E
	.string "キルリアの おにび!"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedWillOWisp) > 0xb
	.error "BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedWillOWisp may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedWillOWisp) < 0xb
	.space 0xb - (. - BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedWillOWisp)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:709 BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedWillOWisp
	.globl BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedWillOWisp
BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedWillOWisp: @ 0x08234D99
	.string "サマヨールの おにび!"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedWillOWisp) > 0xc
	.error "BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedWillOWisp may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedWillOWisp) < 0xc
	.space 0xc - (. - BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedWillOWisp)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:712 BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedIceBeam
	.globl gText_Rom_234DA5
gText_Rom_234DA5: @ 0x08234DA5
	.string "サマヨールの れいとうビーム!"
	.byte EOS
	.if (. - gText_Rom_234DA5) > 0x10
	.error "gText_Rom_234DA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234DA5) < 0x10
	.space 0x10 - (. - gText_Rom_234DA5)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:715 BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough
	.globl BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough
BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough: @ 0x08234DB5
	.string "ええいっ! いいかげんに しないかっ!!"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough) > 0x15
	.error "BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough) < 0x15
	.space 0x15 - (. - BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:719 BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForKirlia
	.globl gText_Rom_234DCA
gText_Rom_234DCA: @ 0x08234DCA
	.string "もうしわけない……\pわたしの キルリアは おくびょう でな……"
	.byte EOS
	.if (. - gText_Rom_234DCA) > 0x20
	.error "gText_Rom_234DCA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234DCA) < 0x20
	.space 0x20 - (. - gText_Rom_234DCA)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:723 BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForDusclops
	.globl BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForDusclops
BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForDusclops: @ 0x08234DEA
	.string "もうしわけない ……\pわたしの サマヨールは おくびょう でな……"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForDusclops) > 0x22
	.error "BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForDusclops may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForDusclops) < 0x22
	.space 0x22 - (. - BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForDusclops)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:727 BattleFrontier_BattlePikeRoomNormal_Text_AttacksWhenStartled
	.globl gText_Rom_234E0C
gText_Rom_234E0C: @ 0x08234E0C
	.string "きゅうに ひとを みると おどろいて\nおそいかかって しまうのだ……\pきみも ポケモンも だいじょうぶか?"
	.byte EOS
	.if (. - gText_Rom_234E0C) > 0x36
	.error "gText_Rom_234E0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234E0C) < 0x36
	.space 0x36 - (. - gText_Rom_234E0C)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:732 BattleFrontier_BattlePikeRoomNormal_Text_ApologizeHopeMonsAreFine
	.globl BattleFrontier_BattlePikeRoomNormal_Text_ApologizeHopeMonsAreFine
BattleFrontier_BattlePikeRoomNormal_Text_ApologizeHopeMonsAreFine: @ 0x08234E42
	.string "すまなかったな……\nきみの ポケモンは ぶじか?"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_ApologizeHopeMonsAreFine) > 0x19
	.error "BattleFrontier_BattlePikeRoomNormal_Text_ApologizeHopeMonsAreFine may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_ApologizeHopeMonsAreFine) < 0x19
	.space 0x19 - (. - BattleFrontier_BattlePikeRoomNormal_Text_ApologizeHopeMonsAreFine)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:736 BattleFrontier_BattlePikeRoomNormal_Text_Silence (+1 aliases)
	.globl gText_Rom_234E5B
gText_Rom_234E5B: @ 0x08234E5B
	.string "…… …… ……\n…… …… ……"
	.byte EOS
	.if (. - gText_Rom_234E5B) > 0x12
	.error "gText_Rom_234E5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234E5B) < 0x12
	.space 0x12 - (. - gText_Rom_234E5B)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:740 BattleFrontier_BattlePikeRoomNormal_Text_BattleSomewhatToughTrainer
	.globl BattleFrontier_BattlePikeRoomNormal_Text_BattleSomewhatToughTrainer
BattleFrontier_BattlePikeRoomNormal_Text_BattleSomewhatToughTrainer: @ 0x08234E6D
	.string "ようこそ……\pこちらでは しょうしょう うでの たつ\nトレーナーと たたかって いただきます……"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_BattleSomewhatToughTrainer) > 0x31
	.error "BattleFrontier_BattlePikeRoomNormal_Text_BattleSomewhatToughTrainer may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_BattleSomewhatToughTrainer) < 0x31
	.space 0x31 - (. - BattleFrontier_BattlePikeRoomNormal_Text_BattleSomewhatToughTrainer)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:745 BattleFrontier_BattlePikeRoomNormal_Text_RestoreToFullHealth
	.globl BattleFrontier_BattlePikeRoomNormal_Text_RestoreToFullHealth
BattleFrontier_BattlePikeRoomNormal_Text_RestoreToFullHealth: @ 0x08234E9E
	.string "……すばらしい……\pおきゃくさまの しょうりを たたえ\nポケモンを かいふくして さしあげます……"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_RestoreToFullHealth) > 0x32
	.error "BattleFrontier_BattlePikeRoomNormal_Text_RestoreToFullHealth may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_RestoreToFullHealth) < 0x32
	.space 0x32 - (. - BattleFrontier_BattlePikeRoomNormal_Text_RestoreToFullHealth)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:642 BattleFrontier_BattlePikeRoomNormal_Text_EnjoyRestOfChallenge (+2 aliases)
	.globl gText_Rom_234ED0
gText_Rom_234ED0: @ 0x08234ED0
	.string "それでは ひきつづき\nゲームを おたのしみ ください……"
	.byte EOS
	.if (. - gText_Rom_234ED0) > 0x1d
	.error "gText_Rom_234ED0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234ED0) < 0x1d
	.space 0x1d - (. - gText_Rom_234ED0)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:754 BattleFrontier_BattlePikeRoomNormal_Text_ImThePikeQueen
	.globl gText_Rom_234EED
gText_Rom_234EED: @ 0x08234EED
	.string "あたしは アザミ……\nここの あるじ…… チューブクイーン……\p…… まあ わかると おもうけど\nあたしを たおさなきゃ\lこのさき すすめないよ……\p…… おしゃべりは すきじゃ ないからね\nさっさと かかっといで……"
	.byte EOS
	.if (. - gText_Rom_234EED) > 0x6e
	.error "gText_Rom_234EED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234EED) < 0x6e
	.space 0x6e - (. - gText_Rom_234EED)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:763 BattleFrontier_BattlePikeRoomNormal_Text_HopeYouDidntUseUpLuck
	.globl BattleFrontier_BattlePikeRoomNormal_Text_HopeYouDidntUseUpLuck
BattleFrontier_BattlePikeRoomNormal_Text_HopeYouDidntUseUpLuck: @ 0x08234F5B
	.string "あんたの うん……\nここで つきなきゃ いい けどね……"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_HopeYouDidntUseUpLuck) > 0x1d
	.error "BattleFrontier_BattlePikeRoomNormal_Text_HopeYouDidntUseUpLuck may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_HopeYouDidntUseUpLuck) < 0x1d
	.space 0x1d - (. - BattleFrontier_BattlePikeRoomNormal_Text_HopeYouDidntUseUpLuck)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:767 BattleFrontier_BattlePikeRoomNormal_Text_LucyShowMeFrontierPass
	.globl BattleFrontier_BattlePikeRoomNormal_Text_LucyShowMeFrontierPass
BattleFrontier_BattlePikeRoomNormal_Text_LucyShowMeFrontierPass: @ 0x08234F78
	.string "アザミ『…… …… …… ……\nフロンティアパス よこしな……"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_LucyShowMeFrontierPass) > 0x20
	.error "BattleFrontier_BattlePikeRoomNormal_Text_LucyShowMeFrontierPass may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_LucyShowMeFrontierPass) < 0x20
	.space 0x20 - (. - BattleFrontier_BattlePikeRoomNormal_Text_LucyShowMeFrontierPass)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:771 BattleFrontier_BattlePikeRoomNormal_Text_ReceivedLuckSymbol
	.globl gText_Rom_234F98
gText_Rom_234F98: @ 0x08234F98
	.string "フロンティアパスに\nラックシンボルが きざまれた!"
	.byte EOS
	.if (. - gText_Rom_234F98) > 0x1a
	.error "gText_Rom_234F98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234F98) < 0x1a
	.space 0x1a - (. - gText_Rom_234F98)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:775 BattleFrontier_BattlePikeRoomNormal_Text_AllThereIsDisappear
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattlePikeRoomNormal_Text_AllThereIsDisappear
BattleFrontier_BattlePikeRoomNormal_Text_AllThereIsDisappear: @ 0x08234FB2
	.string "…… ほら…… さっさと きえな………"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_AllThereIsDisappear) != 0x14
	.error "BattleFrontier_BattlePikeRoomNormal_Text_AllThereIsDisappear must retain its original byte length"
	.endif
	.globl gText_Rom_234FC2
	.set gText_Rom_234FC2, BattleFrontier_BattlePikeRoomNormal_Text_AllThereIsDisappear + 0x10
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:779 BattleFrontier_BattlePikeRoomNormal_Text_LucyYouAgain
	.globl gText_Rom_234FC6
gText_Rom_234FC6: @ 0x08234FC6
	.string "アザミ『…… また あんたか……\p…… …… …… ……\p…… …… はなも あらしも ふみこえて\nいきてきた この あたし…… ……\pそうそう おなじ あいてに\nまけて やる ひつようも ないね……\l…… …… …… …… いいわ……\lやって やるよ…… …… …… ……"
	.byte EOS
	.if (. - gText_Rom_234FC6) > 0x8a
	.error "gText_Rom_234FC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234FC6) < 0x8a
	.space 0x8a - (. - gText_Rom_234FC6)
	.endif
