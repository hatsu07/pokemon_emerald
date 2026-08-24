	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:455 BattleFrontier_BattleFactoryPreBattleRoom_Text_HoldMonsChooseFromSelection
	.globl gText_Rom_2323B3
gText_Rom_2323B3: @ 0x082323B3
	.string "では まず おきゃくさまの\nポケモンを おあずかりして\lポケモンレンタルを おこないます!\lよーく かんがえて えらんで くださいよ!!"
	.byte EOS
	.if (. - gText_Rom_2323B3) > 0x45
	.error "gText_Rom_2323B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2323B3) < 0x45
	.space 0x45 - (. - gText_Rom_2323B3)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:461 BattleFrontier_BattleFactoryPreBattleRoom_Text_LetUsRestoreMons
	.globl gText_Rom_2323F8
gText_Rom_2323F8: @ 0x082323F8
	.string "おつかれさま です!\nポケモンを かいふく しましょう!"
	.byte EOS
	.if (. - gText_Rom_2323F8) > 0x1d
	.error "gText_Rom_2323F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2323F8) < 0x1d
	.space 0x1d - (. - gText_Rom_2323F8)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:465 BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor2ndOpponent
	.globl gText_Rom_232415
gText_Rom_232415: @ 0x08232415
	.string "つぎは 2せんめ ですよ!\nじゅんびは よろしい ですか?"
	.byte EOS
	.if (. - gText_Rom_232415) > 0x1e
	.error "gText_Rom_232415 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232415) < 0x1e
	.space 0x1e - (. - gText_Rom_232415)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:469 BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor3rdOpponent
	.globl gText_Rom_232433
gText_Rom_232433: @ 0x08232433
	.string "つぎは 3せんめ ですよ!\nじゅんびは よろしい ですか?"
	.byte EOS
	.if (. - gText_Rom_232433) > 0x1e
	.error "gText_Rom_232433 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232433) < 0x1e
	.space 0x1e - (. - gText_Rom_232433)
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
	.globl gText_Rom_23248D
gText_Rom_23248D: @ 0x0823248D
	.string "つぎは 6せんめ ですよ!\nじゅんびは よろしい ですか?"
	.byte EOS
	.if (. - gText_Rom_23248D) > 0x1e
	.error "gText_Rom_23248D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23248D) < 0x1e
	.space 0x1e - (. - gText_Rom_23248D)
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
	.globl gText_Rom_2324CA
gText_Rom_2324CA: @ 0x082324CA
	.string "レポートを かいて\nしゅうりょう なさいますか?"
	.byte EOS
	.if (. - gText_Rom_2324CA) > 0x19
	.error "gText_Rom_2324CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2324CA) < 0x19
	.space 0x19 - (. - gText_Rom_2324CA)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:493 BattleFrontier_BattleFactoryPreBattleRoom_Text_RetireFromChallenge
	.globl gText_Rom_2324E3
gText_Rom_2324E3: @ 0x082324E3
	.string "バトルトレードの ちょうせんを\nちゅうし されますか?"
	.byte EOS
	.if (. - gText_Rom_2324E3) > 0x1c
	.error "gText_Rom_2324E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2324E3) < 0x1c
	.space 0x1c - (. - gText_Rom_2324E3)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:497 BattleFrontier_BattleFactoryPreBattleRoom_Text_InvestigatedUpcomingOpponent
	.globl gText_Rom_2324FF
gText_Rom_2324FF: @ 0x082324FF
	.string "さあさあ!\nこんかいの たいせんあいて ですが\lわたしの ちょうさ では……"
	.byte EOS
	.if (. - gText_Rom_2324FF) > 0x27
	.error "gText_Rom_2324FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2324FF) < 0x27
	.space 0x27 - (. - gText_Rom_2324FF)
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
	.globl gText_Rom_232541
gText_Rom_232541: @ 0x08232541
	.string "どうやら ほのおタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_232541) > 0x1a
	.error "gText_Rom_232541 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232541) < 0x1a
	.space 0x1a - (. - gText_Rom_232541)
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
	.globl gText_Rom_2325C1
gText_Rom_2325C1: @ 0x082325C1
	.string "どうやら かくとうタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_2325C1) > 0x1b
	.error "gText_Rom_2325C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2325C1) < 0x1b
	.space 0x1b - (. - gText_Rom_2325C1)
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
	.globl gText_Rom_232629
gText_Rom_232629: @ 0x08232629
	.string "どうやら エスパータイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_232629) > 0x1b
	.error "gText_Rom_232629 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232629) < 0x1b
	.space 0x1b - (. - gText_Rom_232629)
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
	.globl gText_Rom_23265D
gText_Rom_23265D: @ 0x0823265D
	.string "どうやら いわタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_23265D) > 0x19
	.error "gText_Rom_23265D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23265D) < 0x19
	.space 0x19 - (. - gText_Rom_23265D)
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
	.globl gText_Rom_2326DF
gText_Rom_2326DF: @ 0x082326DF
	.string "どうやら ポケモンの タイプには\nとくに こだわりが ないようで……"
	.byte EOS
	.if (. - gText_Rom_2326DF) > 0x23
	.error "gText_Rom_2326DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2326DF) < 0x23
	.space 0x23 - (. - gText_Rom_2326DF)
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
	.globl gText_Rom_232726
gText_Rom_232726: @ 0x08232726
	.string "『まだまだ これから!』な バトルを\nこころがけている ようですよ!"
	.byte EOS
	.if (. - gText_Rom_232726) > 0x23
	.error "gText_Rom_232726 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232726) < 0x23
	.space 0x23 - (. - gText_Rom_232726)
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
	.globl gText_Rom_23276B
gText_Rom_23276B: @ 0x0823276B
	.string "『くもゆき しだい』の バトルを\nこころがけている かたの ようですよ!"
	.byte EOS
	.if (. - gText_Rom_23276B) > 0x25
	.error "gText_Rom_23276B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23276B) < 0x25
	.space 0x25 - (. - gText_Rom_23276B)
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
	.globl gText_Rom_232839
gText_Rom_232839: @ 0x08232839
	.string "では バトルを はじめる まえに\nポケモンの こうかんを おこないますか?"
	.byte EOS
	.if (. - gText_Rom_232839) > 0x26
	.error "gText_Rom_232839 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232839) < 0x26
	.space 0x26 - (. - gText_Rom_232839)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:617 BattleFrontier_BattleFactoryPreBattleRoom_Text_YourSwapIsComplete
	.globl gText_Rom_23285F
gText_Rom_23285F: @ 0x0823285F
	.string "おつかれさまです!\nポケモンこうかん かんりょう ですね!"
	.byte EOS
	.if (. - gText_Rom_23285F) > 0x1e
	.error "gText_Rom_23285F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23285F) < 0x1e
	.space 0x1e - (. - gText_Rom_23285F)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:621 BattleFrontier_BattleFactoryPreBattleRoom_Text_RightThisWay
	.globl gText_Rom_23287D
gText_Rom_23287D: @ 0x0823287D
	.string "それでは おくに どうぞ!"
	.byte EOS
	.if (. - gText_Rom_23287D) > 0xe
	.error "gText_Rom_23287D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23287D) < 0xe
	.space 0xe - (. - gText_Rom_23287D)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:624 BattleFrontier_BattleFactoryPreBattleRoom_Text_SavingDataPleaseWait
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23288B
gText_Rom_23288B: @ 0x0823288B
	.string "ただいま レポートを かいて います……\nしょうしょう おまちください"
	.byte EOS
	.if (. - gText_Rom_23288B) != 0x24
	.error "gText_Rom_23288B must retain its original byte length"
	.endif
	.globl gText_Rom_2328A0
	.set gText_Rom_2328A0, gText_Rom_23288B + 0x15
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
