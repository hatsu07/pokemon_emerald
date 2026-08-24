	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:480 BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame
	.globl BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame
BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame: @ 0x0822FC01
	.string "おまちしておりました!\pバトルアリーナに おつれする まえに\nレポートを かきますので おまちくだされ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame) > 0x35
	.error "BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame) < 0x35
	.space 0x35 - (. - BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:487 BattleFrontier_BattleArenaLobby_Text_RecordLastMatch
	.globl BattleFrontier_BattleArenaLobby_Text_RecordLastMatch
BattleFrontier_BattleArenaLobby_Text_RecordLastMatch: @ 0x0822FC36
	.string "バトルアリーナで\nさいごに おこなった たたかいを\lフロンティアパスに きろく されますかな?"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_RecordLastMatch) > 0x30
	.error "BattleFrontier_BattleArenaLobby_Text_RecordLastMatch may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_RecordLastMatch) < 0x30
	.space 0x30 - (. - BattleFrontier_BattleArenaLobby_Text_RecordLastMatch)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:491 BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack
	.globl BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack
BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack: @ 0x0822FC66
	.string "はんていで まけちゃった……\pまもる ばっかりで\nせめなかったのが よくなかった みたい……"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack) > 0x2f
	.error "BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack) < 0x2f
	.space 0x2f - (. - BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:496 BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked
	.globl BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked
BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked: @ 0x0822FC95
	.string "はんていで かったぜ!\pあいての ポケモンに\nわざを かくじつに あてたのが よかったぜ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked) > 0x2e
	.error "BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked) < 0x2e
	.space 0x2e - (. - BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:501 BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw
	.globl BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw
BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw: @ 0x0822FCC3
	.string "はんていで ひきわけ だったよ\pじかんぎれに なったときに\nあいて ポケモンと のこりの HPが\lおなじ くらい だったからねぇ……"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw) > 0x43
	.error "BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw) < 0x43
	.space 0x43 - (. - BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:507 BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant
	.globl BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant
BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant: @ 0x0822FD06
	.string "バトルアリーナでは ポケモンの じゅんばんが\nとっても だいじ なのよ!\pたとえば 1ばんめの ポケモンの\nじゃくてん となる タイプに たいして\pこうかばつぐんの わざを もっている\nポケモンを 2ばんめに いれておけば\lいいチームに なると おもうわ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant) > 0x81
	.error "BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant) < 0x81
	.space 0x81 - (. - BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:518 BattleFrontier_BattleArenaLobby_Text_RulesAreListed
	.globl BattleFrontier_BattleArenaLobby_Text_RulesAreListed
BattleFrontier_BattleArenaLobby_Text_RulesAreListed: @ 0x0822FD87
	.string "かちぬきチームバトルの\nルールが かかれている!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_RulesAreListed) > 0x19
	.error "BattleFrontier_BattleArenaLobby_Text_RulesAreListed may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_RulesAreListed) < 0x19
	.space 0x19 - (. - BattleFrontier_BattleArenaLobby_Text_RulesAreListed)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:521 BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading (+7 aliases)
	.globl gText_Rom_22FDA0
gText_Rom_22FDA0: @ 0x0822FDA0
	.string "どの せつめいを よみますか?"
	.byte EOS
	.if (. - gText_Rom_22FDA0) > 0x10
	.error "gText_Rom_22FDA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FDA0) < 0x10
	.space 0x10 - (. - gText_Rom_22FDA0)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:524 BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules
BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules: @ 0x0822FDB0
	.string "かちぬきチームバトルは ふつうの たたかいと\nちがい とくべつな ルールが あります\pまず 1かいの たたかいは\n3ターンで しゅうりょうと なります\p3ターンで しょうぶが つかないときは\nしんぱんに よる はんていに なります\pはんていは ポケモンの たたかいかたを\nみて しょうはいを けってい します\pまた しょうぶの けっちゃくが つくまで\nポケモンの こうたいは できません"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules) != 0xc2
	.error "BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:536 BattleFrontier_BattleArenaLobby_Text_ExplainMindRules
	.globl BattleFrontier_BattleArenaLobby_Text_ExplainMindRules
BattleFrontier_BattleArenaLobby_Text_ExplainMindRules: @ 0x0822FE72
	.string "1つめの はんてい ポイントである\n「こころ」は\lせめる きもちを みられます\pどれだけ トレーナーが こうげきする わざを\nめいれい したかに よって\lひょうかが かわります"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_ExplainMindRules) > 0x59
	.error "BattleFrontier_BattleArenaLobby_Text_ExplainMindRules may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_ExplainMindRules) < 0x59
	.space 0x59 - (. - BattleFrontier_BattleArenaLobby_Text_ExplainMindRules)
	.endif
