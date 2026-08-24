	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:480 BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame
	.globl gText_Rom_22FC01
gText_Rom_22FC01: @ 0x0822FC01
	.string "おまちしておりました!\pバトルアリーナに おつれする まえに\nレポートを かきますので おまちくだされ!"
	.byte EOS
	.if (. - gText_Rom_22FC01) > 0x35
	.error "gText_Rom_22FC01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FC01) < 0x35
	.space 0x35 - (. - gText_Rom_22FC01)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:487 BattleFrontier_BattleArenaLobby_Text_RecordLastMatch
	.globl gText_Rom_22FC36
gText_Rom_22FC36: @ 0x0822FC36
	.string "バトルアリーナで\nさいごに おこなった たたかいを\lフロンティアパスに きろく されますかな?"
	.byte EOS
	.if (. - gText_Rom_22FC36) > 0x30
	.error "gText_Rom_22FC36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FC36) < 0x30
	.space 0x30 - (. - gText_Rom_22FC36)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:491 BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack
	.globl gText_Rom_22FC66
gText_Rom_22FC66: @ 0x0822FC66
	.string "はんていで まけちゃった……\pまもる ばっかりで\nせめなかったのが よくなかった みたい……"
	.byte EOS
	.if (. - gText_Rom_22FC66) > 0x2f
	.error "gText_Rom_22FC66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FC66) < 0x2f
	.space 0x2f - (. - gText_Rom_22FC66)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:496 BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked
	.globl gText_Rom_22FC95
gText_Rom_22FC95: @ 0x0822FC95
	.string "はんていで かったぜ!\pあいての ポケモンに\nわざを かくじつに あてたのが よかったぜ!"
	.byte EOS
	.if (. - gText_Rom_22FC95) > 0x2e
	.error "gText_Rom_22FC95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FC95) < 0x2e
	.space 0x2e - (. - gText_Rom_22FC95)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:501 BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw
	.globl gText_Rom_22FCC3
gText_Rom_22FCC3: @ 0x0822FCC3
	.string "はんていで ひきわけ だったよ\pじかんぎれに なったときに\nあいて ポケモンと のこりの HPが\lおなじ くらい だったからねぇ……"
	.byte EOS
	.if (. - gText_Rom_22FCC3) > 0x43
	.error "gText_Rom_22FCC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FCC3) < 0x43
	.space 0x43 - (. - gText_Rom_22FCC3)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:507 BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant
	.globl gText_Rom_22FD06
gText_Rom_22FD06: @ 0x0822FD06
	.string "バトルアリーナでは ポケモンの じゅんばんが\nとっても だいじ なのよ!\pたとえば 1ばんめの ポケモンの\nじゃくてん となる タイプに たいして\pこうかばつぐんの わざを もっている\nポケモンを 2ばんめに いれておけば\lいいチームに なると おもうわ!"
	.byte EOS
	.if (. - gText_Rom_22FD06) > 0x81
	.error "gText_Rom_22FD06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FD06) < 0x81
	.space 0x81 - (. - gText_Rom_22FD06)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:518 BattleFrontier_BattleArenaLobby_Text_RulesAreListed
	.globl gText_Rom_22FD87
gText_Rom_22FD87: @ 0x0822FD87
	.string "かちぬきチームバトルの\nルールが かかれている!"
	.byte EOS
	.if (. - gText_Rom_22FD87) > 0x19
	.error "gText_Rom_22FD87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FD87) < 0x19
	.space 0x19 - (. - gText_Rom_22FD87)
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
	.globl gText_Rom_22FDB0
gText_Rom_22FDB0: @ 0x0822FDB0
	.string "かちぬきチームバトルは ふつうの たたかいと\nちがい とくべつな ルールが あります\pまず 1かいの たたかいは\n3ターンで しゅうりょうと なります\p3ターンで しょうぶが つかないときは\nしんぱんに よる はんていに なります\pはんていは ポケモンの たたかいかたを\nみて しょうはいを けってい します\pまた しょうぶの けっちゃくが つくまで\nポケモンの こうたいは できません"
	.byte EOS
	.if (. - gText_Rom_22FDB0) != 0xc2
	.error "gText_Rom_22FDB0 must retain its original byte length"
	.endif
	.globl gText_Rom_22FE6E
	.set gText_Rom_22FE6E, gText_Rom_22FDB0 + 0xbe
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:536 BattleFrontier_BattleArenaLobby_Text_ExplainMindRules
	.globl gText_Rom_22FE72
gText_Rom_22FE72: @ 0x0822FE72
	.string "1つめの はんてい ポイントである\n「こころ」は\lせめる きもちを みられます\pどれだけ トレーナーが こうげきする わざを\nめいれい したかに よって\lひょうかが かわります"
	.byte EOS
	.if (. - gText_Rom_22FE72) > 0x59
	.error "gText_Rom_22FE72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FE72) < 0x59
	.space 0x59 - (. - gText_Rom_22FE72)
	.endif
