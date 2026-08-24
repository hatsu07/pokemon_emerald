	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:455 BattleFrontier_BattleFactoryPreBattleRoom_Text_HoldMonsChooseFromSelection
	.globl BattleFrontier_BattleFactoryPreBattleRoom_Text_HoldMonsChooseFromSelection
BattleFrontier_BattleFactoryPreBattleRoom_Text_HoldMonsChooseFromSelection: @ 0x082323B3
	.string "では まず おきゃくさまの\nポケモンを おあずかりして\lポケモンレンタルを おこないます!\lよーく かんがえて えらんで くださいよ!!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_HoldMonsChooseFromSelection) > 0x45
	.error "BattleFrontier_BattleFactoryPreBattleRoom_Text_HoldMonsChooseFromSelection may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_HoldMonsChooseFromSelection) < 0x45
	.space 0x45 - (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_HoldMonsChooseFromSelection)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:461 BattleFrontier_BattleFactoryPreBattleRoom_Text_LetUsRestoreMons
	.globl BattleFrontier_BattleFactoryPreBattleRoom_Text_LetUsRestoreMons
BattleFrontier_BattleFactoryPreBattleRoom_Text_LetUsRestoreMons: @ 0x082323F8
	.string "おつかれさま です!\nポケモンを かいふく しましょう!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_LetUsRestoreMons) > 0x1d
	.error "BattleFrontier_BattleFactoryPreBattleRoom_Text_LetUsRestoreMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_LetUsRestoreMons) < 0x1d
	.space 0x1d - (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_LetUsRestoreMons)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:465 BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor2ndOpponent
	.globl BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor2ndOpponent
BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor2ndOpponent: @ 0x08232415
	.string "つぎは 2せんめ ですよ!\nじゅんびは よろしい ですか?"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor2ndOpponent) > 0x1e
	.error "BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor2ndOpponent may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor2ndOpponent) < 0x1e
	.space 0x1e - (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor2ndOpponent)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:469 BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor3rdOpponent
	.globl BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor3rdOpponent
BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor3rdOpponent: @ 0x08232433
	.string "つぎは 3せんめ ですよ!\nじゅんびは よろしい ですか?"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor3rdOpponent) > 0x1e
	.error "BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor3rdOpponent may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor3rdOpponent) < 0x1e
	.space 0x1e - (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor3rdOpponent)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:473 BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor4thOpponent
	.globl gText_Rom_232451
gText_Rom_232451: @ 0x08232451
	.string "つぎは 4せんめ ですよ!\nじゅんびは よろしい ですか?"
	.byte EOS
	.if (. - gText_Rom_232451) > 0x1e
	.error "gText_Rom_232451 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232451) < 0x1e
	.space 0x1e - (. - gText_Rom_232451)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:477 BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor5thOpponent
	.globl gText_Rom_23246F
gText_Rom_23246F: @ 0x0823246F
	.string "つぎは 5せんめ ですよ!\nじゅんびは よろしい ですか?"
	.byte EOS
	.if (. - gText_Rom_23246F) > 0x1e
	.error "gText_Rom_23246F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23246F) < 0x1e
	.space 0x1e - (. - gText_Rom_23246F)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:481 BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor6thOpponent
	.globl BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor6thOpponent
BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor6thOpponent: @ 0x0823248D
	.string "つぎは 6せんめ ですよ!\nじゅんびは よろしい ですか?"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor6thOpponent) > 0x1e
	.error "BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor6thOpponent may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor6thOpponent) < 0x1e
	.space 0x1e - (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor6thOpponent)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:485 BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor7thOpponent
	.globl gText_Rom_2324AB
gText_Rom_2324AB: @ 0x082324AB
	.string "いよいよ 7せんめ ですよ!\nじゅんびは よろしい ですか?"
	.byte EOS
	.if (. - gText_Rom_2324AB) > 0x1f
	.error "gText_Rom_2324AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2324AB) < 0x1f
	.space 0x1f - (. - gText_Rom_2324AB)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:489 BattleFrontier_BattleFactoryPreBattleRoom_Text_SaveAndQuitGame
	.globl BattleFrontier_BattleFactoryPreBattleRoom_Text_SaveAndQuitGame
BattleFrontier_BattleFactoryPreBattleRoom_Text_SaveAndQuitGame: @ 0x082324CA
	.string "レポートを かいて\nしゅうりょう なさいますか?"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_SaveAndQuitGame) > 0x19
	.error "BattleFrontier_BattleFactoryPreBattleRoom_Text_SaveAndQuitGame may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_SaveAndQuitGame) < 0x19
	.space 0x19 - (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_SaveAndQuitGame)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:493 BattleFrontier_BattleFactoryPreBattleRoom_Text_RetireFromChallenge
	.globl BattleFrontier_BattleFactoryPreBattleRoom_Text_RetireFromChallenge
BattleFrontier_BattleFactoryPreBattleRoom_Text_RetireFromChallenge: @ 0x082324E3
	.string "バトルトレードの ちょうせんを\nちゅうし されますか?"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_RetireFromChallenge) > 0x1c
	.error "BattleFrontier_BattleFactoryPreBattleRoom_Text_RetireFromChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_RetireFromChallenge) < 0x1c
	.space 0x1c - (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_RetireFromChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:497 BattleFrontier_BattleFactoryPreBattleRoom_Text_InvestigatedUpcomingOpponent
	.globl BattleFrontier_BattleFactoryPreBattleRoom_Text_InvestigatedUpcomingOpponent
BattleFrontier_BattleFactoryPreBattleRoom_Text_InvestigatedUpcomingOpponent: @ 0x082324FF
	.string "さあさあ!\nこんかいの たいせんあいて ですが\lわたしの ちょうさ では……"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_InvestigatedUpcomingOpponent) > 0x27
	.error "BattleFrontier_BattleFactoryPreBattleRoom_Text_InvestigatedUpcomingOpponent may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_InvestigatedUpcomingOpponent) < 0x27
	.space 0x27 - (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_InvestigatedUpcomingOpponent)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:501 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInNormalType
	.globl gText_Rom_232526
gText_Rom_232526: @ 0x08232526
	.string "どうやら ノーマルタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_232526) > 0x1b
	.error "gText_Rom_232526 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232526) < 0x1b
	.space 0x1b - (. - gText_Rom_232526)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:505 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFireType
	.globl BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFireType
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFireType: @ 0x08232541
	.string "どうやら ほのおタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFireType) > 0x1a
	.error "BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFireType may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFireType) < 0x1a
	.space 0x1a - (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFireType)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:509 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInWaterType
	.globl gText_Rom_23255B
gText_Rom_23255B: @ 0x0823255B
	.string "どうやら みずタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_23255B) > 0x19
	.error "gText_Rom_23255B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23255B) < 0x19
	.space 0x19 - (. - gText_Rom_23255B)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:513 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInElectricType
	.globl gText_Rom_232574
gText_Rom_232574: @ 0x08232574
	.string "どうやら でんきタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_232574) > 0x1a
	.error "gText_Rom_232574 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232574) < 0x1a
	.space 0x1a - (. - gText_Rom_232574)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:517 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInGrassType
	.globl gText_Rom_23258E
gText_Rom_23258E: @ 0x0823258E
	.string "どうやら くさタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_23258E) > 0x19
	.error "gText_Rom_23258E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23258E) < 0x19
	.space 0x19 - (. - gText_Rom_23258E)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:521 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInIceType
	.globl gText_Rom_2325A7
gText_Rom_2325A7: @ 0x082325A7
	.string "どうやら こおりタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_2325A7) > 0x1a
	.error "gText_Rom_2325A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2325A7) < 0x1a
	.space 0x1a - (. - gText_Rom_2325A7)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:525 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFightingType
	.globl BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFightingType
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFightingType: @ 0x082325C1
	.string "どうやら かくとうタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFightingType) > 0x1b
	.error "BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFightingType may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFightingType) < 0x1b
	.space 0x1b - (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFightingType)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:529 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInPoisonType
	.globl gText_Rom_2325DC
gText_Rom_2325DC: @ 0x082325DC
	.string "どうやら どくタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_2325DC) > 0x19
	.error "gText_Rom_2325DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2325DC) < 0x19
	.space 0x19 - (. - gText_Rom_2325DC)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:533 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInGroundType
	.globl gText_Rom_2325F5
gText_Rom_2325F5: @ 0x082325F5
	.string "どうやら じめんタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_2325F5) > 0x1a
	.error "gText_Rom_2325F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2325F5) < 0x1a
	.space 0x1a - (. - gText_Rom_2325F5)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:537 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFlyingType
	.globl gText_Rom_23260F
gText_Rom_23260F: @ 0x0823260F
	.string "どうやら ひこうタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_23260F) > 0x1a
	.error "gText_Rom_23260F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23260F) < 0x1a
	.space 0x1a - (. - gText_Rom_23260F)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:541 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInPsychicType
	.globl BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInPsychicType
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInPsychicType: @ 0x08232629
	.string "どうやら エスパータイプを\nとくいと して いて……"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInPsychicType) > 0x1b
	.error "BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInPsychicType may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInPsychicType) < 0x1b
	.space 0x1b - (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInPsychicType)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:545 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInBugType
	.globl gText_Rom_232644
gText_Rom_232644: @ 0x08232644
	.string "どうやら むしタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_232644) > 0x19
	.error "gText_Rom_232644 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232644) < 0x19
	.space 0x19 - (. - gText_Rom_232644)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:549 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInRockType
	.globl BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInRockType
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInRockType: @ 0x0823265D
	.string "どうやら いわタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInRockType) > 0x19
	.error "BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInRockType may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInRockType) < 0x19
	.space 0x19 - (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInRockType)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:553 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInGhostType
	.globl gText_Rom_232676
gText_Rom_232676: @ 0x08232676
	.string "どうやら ゴーストタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_232676) > 0x1b
	.error "gText_Rom_232676 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232676) < 0x1b
	.space 0x1b - (. - gText_Rom_232676)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:557 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInDragonType
	.globl gText_Rom_232691
gText_Rom_232691: @ 0x08232691
	.string "どうやら ドラゴンタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_232691) > 0x1b
	.error "gText_Rom_232691 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232691) < 0x1b
	.space 0x1b - (. - gText_Rom_232691)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:561 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInDarkType
	.globl gText_Rom_2326AC
gText_Rom_2326AC: @ 0x082326AC
	.string "どうやら あくタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_2326AC) > 0x19
	.error "gText_Rom_2326AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2326AC) < 0x19
	.space 0x19 - (. - gText_Rom_2326AC)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:569 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInSteelType
	.globl gText_Rom_2326C5
gText_Rom_2326C5: @ 0x082326C5
	.string "どうやら はがねタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_2326C5) > 0x1a
	.error "gText_Rom_2326C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2326C5) < 0x1a
	.space 0x1a - (. - gText_Rom_2326C5)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:573 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerHasNoClearFavorite
	.globl BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerHasNoClearFavorite
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerHasNoClearFavorite: @ 0x082326DF
	.string "どうやら ポケモンの タイプには\nとくに こだわりが ないようで……"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerHasNoClearFavorite) > 0x23
	.error "BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerHasNoClearFavorite may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerHasNoClearFavorite) < 0x23
	.space 0x23 - (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerHasNoClearFavorite)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:577 BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleSlowAndSteady
	.globl gText_Rom_232702
gText_Rom_232702: @ 0x08232702
	.string "『じっくり じわじわ』とした バトルを\nこころがけている ようですよ!"
	.byte EOS
	.if (. - gText_Rom_232702) > 0x24
	.error "gText_Rom_232702 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232702) < 0x24
	.space 0x24 - (. - gText_Rom_232702)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:581 BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleEndurance
	.globl BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleEndurance
BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleEndurance: @ 0x08232726
	.string "『まだまだ これから!』な バトルを\nこころがけている ようですよ!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleEndurance) > 0x23
	.error "BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleEndurance may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleEndurance) < 0x23
	.space 0x23 - (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleEndurance)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:585 BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleHighRisk
	.globl gText_Rom_232749
gText_Rom_232749: @ 0x08232749
	.string "『けんこん いってき』の バトルを\nこころがけている ようですよ!"
	.byte EOS
	.if (. - gText_Rom_232749) > 0x22
	.error "gText_Rom_232749 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232749) < 0x22
	.space 0x22 - (. - gText_Rom_232749)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:589 BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleDependsOnFlow
	.globl BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleDependsOnFlow
BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleDependsOnFlow: @ 0x0823276B
	.string "『くもゆき しだい』の バトルを\nこころがけている かたの ようですよ!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleDependsOnFlow) > 0x25
	.error "BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleDependsOnFlow may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleDependsOnFlow) < 0x25
	.space 0x25 - (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleDependsOnFlow)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:593 BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleTotalPreparation
	.globl gText_Rom_232790
gText_Rom_232790: @ 0x08232790
	.string "『じゅんび ばんたん』の バトルを\nこころがけている ようですよ!"
	.byte EOS
	.if (. - gText_Rom_232790) > 0x22
	.error "gText_Rom_232790 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232790) < 0x22
	.space 0x22 - (. - gText_Rom_232790)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:597 BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleWeakenFoe
	.globl gText_Rom_2327B2
gText_Rom_2327B2: @ 0x082327B2
	.string "『まずは よわらせて…』という バトルを\nこころがけている ようですよ!"
	.byte EOS
	.if (. - gText_Rom_2327B2) > 0x25
	.error "gText_Rom_2327B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2327B2) < 0x25
	.space 0x25 - (. - gText_Rom_2327B2)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:601 BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleFlexible
	.globl gText_Rom_2327D7
gText_Rom_2327D7: @ 0x082327D7
	.string "『りんきおうへん』な バトルを\nこころがけている ようですよ!"
	.byte EOS
	.if (. - gText_Rom_2327D7) > 0x20
	.error "gText_Rom_2327D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2327D7) < 0x20
	.space 0x20 - (. - gText_Rom_2327D7)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:605 BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleImpossibleToPredict
	.globl gText_Rom_2327F7
gText_Rom_2327F7: @ 0x082327F7
	.string "『よそく ふかのう』な バトルを\nこころがけている ようですよ!"
	.byte EOS
	.if (. - gText_Rom_2327F7) > 0x21
	.error "gText_Rom_2327F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2327F7) < 0x21
	.space 0x21 - (. - gText_Rom_2327F7)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:609 BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleUnrestrained
	.globl gText_Rom_232818
gText_Rom_232818: @ 0x08232818
	.string "『じゆう ほんぽう』な バトルを\nこころがけている ようですよ!"
	.byte EOS
	.if (. - gText_Rom_232818) > 0x21
	.error "gText_Rom_232818 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232818) < 0x21
	.space 0x21 - (. - gText_Rom_232818)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:613 BattleFrontier_BattleFactoryPreBattleRoom_Text_LikeToSwapMon
	.globl BattleFrontier_BattleFactoryPreBattleRoom_Text_LikeToSwapMon
BattleFrontier_BattleFactoryPreBattleRoom_Text_LikeToSwapMon: @ 0x08232839
	.string "では バトルを はじめる まえに\nポケモンの こうかんを おこないますか?"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_LikeToSwapMon) > 0x26
	.error "BattleFrontier_BattleFactoryPreBattleRoom_Text_LikeToSwapMon may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_LikeToSwapMon) < 0x26
	.space 0x26 - (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_LikeToSwapMon)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:617 BattleFrontier_BattleFactoryPreBattleRoom_Text_YourSwapIsComplete
	.globl BattleFrontier_BattleFactoryPreBattleRoom_Text_YourSwapIsComplete
BattleFrontier_BattleFactoryPreBattleRoom_Text_YourSwapIsComplete: @ 0x0823285F
	.string "おつかれさまです!\nポケモンこうかん かんりょう ですね!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_YourSwapIsComplete) > 0x1e
	.error "BattleFrontier_BattleFactoryPreBattleRoom_Text_YourSwapIsComplete may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_YourSwapIsComplete) < 0x1e
	.space 0x1e - (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_YourSwapIsComplete)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:621 BattleFrontier_BattleFactoryPreBattleRoom_Text_RightThisWay
	.globl BattleFrontier_BattleFactoryPreBattleRoom_Text_RightThisWay
BattleFrontier_BattleFactoryPreBattleRoom_Text_RightThisWay: @ 0x0823287D
	.string "それでは おくに どうぞ!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_RightThisWay) > 0xe
	.error "BattleFrontier_BattleFactoryPreBattleRoom_Text_RightThisWay may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_RightThisWay) < 0xe
	.space 0xe - (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_RightThisWay)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:624 BattleFrontier_BattleFactoryPreBattleRoom_Text_SavingDataPleaseWait
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleFactoryPreBattleRoom_Text_SavingDataPleaseWait
BattleFrontier_BattleFactoryPreBattleRoom_Text_SavingDataPleaseWait: @ 0x0823288B
	.string "ただいま レポートを かいて います……\nしょうしょう おまちください"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryPreBattleRoom_Text_SavingDataPleaseWait) != 0x24
	.error "BattleFrontier_BattleFactoryPreBattleRoom_Text_SavingDataPleaseWait must retain its original byte length"
	.endif
	.globl gText_Rom_2328A0
	.set gText_Rom_2328A0, BattleFrontier_BattleFactoryPreBattleRoom_Text_SavingDataPleaseWait + 0x15
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:364 BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch (+2 aliases)
	.globl gText_Rom_2328AF
gText_Rom_2328AF: @ 0x082328AF
	.string "さきほどの たたかいを\nフロンティアパスに きろく しますか?"
	.byte EOS
	.if (. - gText_Rom_2328AF) > 0x20
	.error "gText_Rom_2328AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2328AF) < 0x20
	.space 0x20 - (. - gText_Rom_2328AF)
	.endif
