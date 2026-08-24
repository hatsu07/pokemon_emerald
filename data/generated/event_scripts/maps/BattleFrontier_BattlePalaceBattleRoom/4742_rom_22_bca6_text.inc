	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:443 BattleFrontier_BattlePalaceBattleRoom_Text_LetMeRestoreYourMons
	.globl gText_Rom_22B83B
gText_Rom_22B83B: @ 0x0822B83B
	.string "おみごと……\nポケモンを かいふくして やろう……{EOS}"
	.if (. - gText_Rom_22B83B) > 0x1a
	.error "gText_Rom_22B83B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B83B) < 0x1a
	.space 0x1a - (. - gText_Rom_22B83B)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:447 BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor2ndOpponent
	.globl gText_Rom_22B855
gText_Rom_22B855: @ 0x0822B855
	.string "つぎは 2にんめの あいて だが\nじゅんびは よろしいか?{EOS}"
	.if (. - gText_Rom_22B855) > 0x1e
	.error "gText_Rom_22B855 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B855) < 0x1e
	.space 0x1e - (. - gText_Rom_22B855)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:451 BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor3rdOpponent
	.globl gText_Rom_22B873
gText_Rom_22B873: @ 0x0822B873
	.string "つぎは 3にんめの あいて だが\nじゅんびは よろしいか?{EOS}"
	.if (. - gText_Rom_22B873) > 0x1e
	.error "gText_Rom_22B873 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B873) < 0x1e
	.space 0x1e - (. - gText_Rom_22B873)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:455 BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor4thOpponent
	.globl gText_Rom_22B891
gText_Rom_22B891: @ 0x0822B891
	.string "つぎは 4にんめの あいて だが\nじゅんびは よろしいか?{EOS}"
	.if (. - gText_Rom_22B891) > 0x1e
	.error "gText_Rom_22B891 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B891) < 0x1e
	.space 0x1e - (. - gText_Rom_22B891)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:459 BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor5thOpponent
	.globl gText_Rom_22B8AF
gText_Rom_22B8AF: @ 0x0822B8AF
	.string "つぎは 5にんめの あいて だが\nじゅんびは よろしいか?{EOS}"
	.if (. - gText_Rom_22B8AF) > 0x1e
	.error "gText_Rom_22B8AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B8AF) < 0x1e
	.space 0x1e - (. - gText_Rom_22B8AF)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:463 BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor6thOpponent
	.globl gText_Rom_22B8CD
gText_Rom_22B8CD: @ 0x0822B8CD
	.string "つぎは 6にんめの あいて だが\nじゅんびは よろしいか?{EOS}"
	.if (. - gText_Rom_22B8CD) > 0x1e
	.error "gText_Rom_22B8CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B8CD) < 0x1e
	.space 0x1e - (. - gText_Rom_22B8CD)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:467 BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor7thOpponent
	.globl gText_Rom_22B8EB
gText_Rom_22B8EB: @ 0x0822B8EB
	.string "つぎは 7にんめの あいて だが\nじゅんびは よろしいか?{EOS}"
	.if (. - gText_Rom_22B8EB) > 0x1e
	.error "gText_Rom_22B8EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B8EB) < 0x1e
	.space 0x1e - (. - gText_Rom_22B8EB)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:471 BattleFrontier_BattlePalaceBattleRoom_Text_SaveAndQuitGame
	.globl gText_Rom_22B909
gText_Rom_22B909: @ 0x0822B909
	.string "レポートを かいて しゅうりょう するか?{EOS}"
	.if (. - gText_Rom_22B909) > 0x16
	.error "gText_Rom_22B909 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B909) < 0x16
	.space 0x16 - (. - gText_Rom_22B909)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:475 BattleFrontier_BattlePalaceBattleRoom_Text_WishToQuitChallenge
	.globl gText_Rom_22B91F
gText_Rom_22B91F: @ 0x0822B91F
	.string "ちょうせんを ちゅうし するのか?{EOS}"
	.if (. - gText_Rom_22B91F) > 0x12
	.error "gText_Rom_22B91F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B91F) < 0x12
	.space 0x12 - (. - gText_Rom_22B91F)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:478 BattleFrontier_BattlePalaceBattleRoom_Text_SavingData
	.globl gText_Rom_22B931
gText_Rom_22B931: @ 0x0822B931
	.string "レポートを かいておる……\nしばし またれよ……{EOS}"
	.if (. - gText_Rom_22B931) > 0x19
	.error "gText_Rom_22B931 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B931) < 0x19
	.space 0x19 - (. - gText_Rom_22B931)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:482 BattleFrontier_BattlePalaceBattleRoom_Text_RecordLastMatch
	.globl gText_Rom_22B94A
gText_Rom_22B94A: @ 0x0822B94A
	.string "さきほどの たたかいを\nフロンティアパスに きろく するか?{EOS}"
	.if (. - gText_Rom_22B94A) > 0x1f
	.error "gText_Rom_22B94A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B94A) < 0x1f
	.space 0x1f - (. - gText_Rom_22B94A)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:486 BattleFrontier_BattlePalaceBattleRoom_Text_ChallengingPalaceMaven
	.globl gText_Rom_22B969
gText_Rom_22B969: @ 0x0822B969
	.string "さて……\pここまで かちぬいた おぬしは\nわれらが あるじ パレスガーディアンに\lちょうせんする しかくを てにした……{EOS}"
	.if (. - gText_Rom_22B969) > 0x3d
	.error "gText_Rom_22B969 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B969) < 0x3d
	.space 0x3d - (. - gText_Rom_22B969)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:492 BattleFrontier_BattlePalaceBattleRoom_Text_ReadyForPalaceMaven
	.globl gText_Rom_22B9A6
gText_Rom_22B9A6: @ 0x0822B9A6
	.string "パレスガーディアンを およびする\n……かくごは よいか?{EOS}"
	.if (. - gText_Rom_22B9A6) > 0x1d
	.error "gText_Rom_22B9A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B9A6) < 0x1d
	.space 0x1d - (. - gText_Rom_22B9A6)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:496 BattleFrontier_BattlePalaceBattleRoom_Text_AnnounceArrivalOfSpenser
	.globl gText_Rom_22B9C3
gText_Rom_22B9C3: @ 0x0822B9C3
	.string "パレスガーディアン ウコンさまーーー!\nごらいでんーーー!!{EOS}"
	.if (. - gText_Rom_22B9C3) > 0x1f
	.error "gText_Rom_22B9C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B9C3) < 0x1f
	.space 0x1f - (. - gText_Rom_22B9C3)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:500 BattleFrontier_BattlePalaceBattleRoom_Text_SpenserFirstIntro
	.globl gText_Rom_22B9E2
gText_Rom_22B9E2: @ 0x0822B9E2
	.string "ウコン『わが み\nつねに ポケモンと ありっ!\pわが こころ\nつねに ポケモンと ありっ!\pわかき トレーナーよ!!\nきさまは ポケモンを\lしんじて おるか?\pきさまは ポケモンを\nしんじぬく ことが できるかっ!\pもろき しんらいの きずな では\nわが きょうだい には かてん!!{EOS}"
	.if (. - gText_Rom_22B9E2) > 0x8f
	.error "gText_Rom_22B9E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B9E2) < 0x8f
	.space 0x8f - (. - gText_Rom_22B9E2)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:512 BattleFrontier_BattlePalaceBattleRoom_Text_ProveYourBondWithMons
	.globl gText_Rom_22BA71
gText_Rom_22BA71: @ 0x0822BA71
	.string "ポケモンとの きずな!!\nここに しめせぇい!!{EOS}"
	.if (. - gText_Rom_22BA71) > 0x19
	.error "gText_Rom_22BA71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22BA71) < 0x19
	.space 0x19 - (. - gText_Rom_22BA71)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:516 BattleFrontier_BattlePalaceBattleRoom_Text_SpenserPostSilverBattle
	.globl gText_Rom_22BA8A
gText_Rom_22BA8A: @ 0x0822BA8A
	.string "ウコン『ぐわはっはっ!\pやはり ハッタリ なんぞ きかんか!!\nおどしたり して わるかったのぅ!!\pおーい! あれを!{EOS}"
	.if (. - gText_Rom_22BA8A) > 0x3d
	.error "gText_Rom_22BA8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22BA8A) < 0x3d
	.space 0x3d - (. - gText_Rom_22BA8A)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:523 BattleFrontier_BattlePalaceBattleRoom_Text_LetsSeeFrontierPass
	.globl gText_Rom_22BAC7
gText_Rom_22BAC7: @ 0x0822BAC7
	.string "やれやれ あのまま いげんを たもって\nおいて くだされば よい ものを……\pおい! フロンティアパスを かさんか!{EOS}"
	.if (. - gText_Rom_22BAC7) > 0x3b
	.error "gText_Rom_22BAC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22BAC7) < 0x3b
	.space 0x3b - (. - gText_Rom_22BAC7)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:529 BattleFrontier_BattlePalaceBattleRoom_Text_ReceivedSpiritsSymbol
	.globl gText_Rom_22BB02
gText_Rom_22BB02: @ 0x0822BB02
	.string "フロンティアパスに\nスピリットシンボルが きざまれた!{EOS}"
	.if (. - gText_Rom_22BB02) > 0x1c
	.error "gText_Rom_22BB02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22BB02) < 0x1c
	.space 0x1c - (. - gText_Rom_22BB02)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:533 BattleFrontier_BattlePalaceBattleRoom_Text_SpenserAwaitNextTime
	.globl gText_Rom_22BB1E
gText_Rom_22BB1E: @ 0x0822BB1E
	.string "ウコン『おまえの ポケモンたちは\nまことに すんだ ひとみを しとる!\pつぎの きかいを たのしみに しとるぞ!{EOS}"
	.if (. - gText_Rom_22BB1E) > 0x39
	.error "gText_Rom_22BB1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22BB1E) < 0x39
	.space 0x39 - (. - gText_Rom_22BB1E)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:539 BattleFrontier_BattlePalaceBattleRoom_Text_SpenserThisTimeWontHoldBack
	.globl gText_Rom_22BB57
gText_Rom_22BB57: @ 0x0822BB57
	.string "ウコン『ぐわはっはっ!\nここまで かちぬいて きおったか!\pおまえは ポケモン たちと\nまことに ええ かんけいを\lきずいて おるよう だな!\pうむ!\pほいじゃあ こんどは わしらも\nハッタリや てかげんは\lいっさい ぬきで いくと しよう!\pええか? かくご せい!!{EOS}"
	.if (. - gText_Rom_22BB57) > 0x88
	.error "gText_Rom_22BB57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22BB57) < 0x88
	.space 0x88 - (. - gText_Rom_22BB57)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:550 BattleFrontier_BattlePalaceBattleRoom_Text_Kaaah
	.globl gText_Rom_22BBDF
gText_Rom_22BBDF: @ 0x0822BBDF
	.string "…… …… …… かーっ!!!{EOS}"
	.if (. - gText_Rom_22BBDF) > 0x10
	.error "gText_Rom_22BBDF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22BBDF) < 0x10
	.space 0x10 - (. - gText_Rom_22BBDF)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:553 BattleFrontier_BattlePalaceBattleRoom_Text_SpenserYourTeamIsAdmirable
	.globl gText_Rom_22BBEF
gText_Rom_22BBEF: @ 0x0822BBEF
	.string "ウコン『いやはや よう やったわ!!\nぜんりょくの わが きょうだいが\lはが たたん とは なぁ!\pいやー おまえらは まことに すんばらしい!\nおーいっ! はやく あれを!!{EOS}"
	.if (. - gText_Rom_22BBEF) > 0x59
	.error "gText_Rom_22BBEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22BBEF) < 0x59
	.space 0x59 - (. - gText_Rom_22BBEF)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:561 BattleFrontier_BattlePalaceBattleRoom_Text_HurryWithFrontierPass
	.globl gText_Rom_22BC48
gText_Rom_22BC48: @ 0x0822BC48
	.string "ったく ここの イメージと いうのを\nかんがえて くれない おかた だ……\pええい! おまえ!!\nさっさと フロンティアパスを かさんか!{EOS}"
	.if (. - gText_Rom_22BC48) > 0x46
	.error "gText_Rom_22BC48 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22BC48) < 0x46
	.space 0x46 - (. - gText_Rom_22BC48)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:567 BattleFrontier_BattlePalaceBattleRoom_Text_SpiritsSymbolTookGoldenShine
	.globl gText_Rom_22BC8E
gText_Rom_22BC8E: @ 0x0822BC8E
	.string "スピリットシンボルが\nきんいろに かがやいた!{EOS}"
	.if (. - gText_Rom_22BC8E) > 0x18
	.error "gText_Rom_22BC8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22BC8E) < 0x18
	.space 0x18 - (. - gText_Rom_22BC8E)
	.endif
	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:571 BattleFrontier_BattlePalaceBattleRoom_Text_SpenserComeSeeMeAgain
	.globl gText_Rom_22BCA6
gText_Rom_22BCA6: @ 0x0822BCA6
	.string "ウコン『ぐわはっはっ!\pこれからも ときどき あそびに こいよ!\nわしも きょうだいも まっとる からな!!{EOS}"
	.if (. - gText_Rom_22BCA6) > 0x37
	.error "gText_Rom_22BCA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22BCA6) < 0x37
	.space 0x37 - (. - gText_Rom_22BCA6)
	.endif
	@ analyzed canonical ROM range 0x0822BCDD-0x0822C4F7
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_BattleFrontier_BattlePyramidLobby_OnFrame_OnWarpIntoMap: @ 0x0822BCDD
	@ map script dispatch table
	.byte 0x02
	.4byte gMapScriptConditionTable_BattleFrontier_BattlePyramidLobby_OnFrame
	.byte 0x04
	.4byte gMapScriptConditionTable_Shared_BattleFrontier_BattleDomeLobby_BattlePyramidLobby_OnWarpIntoMap
	.byte 0
	.byte 0x01, 0x40, 0x00, 0x00, 0xF2, 0xBC, 0x22, 0x08, 0x00, 0x00, 0x16, 0x01, 0x40, 0x01, 0x00, 0x5B
	.byte 0xFF, 0x00, 0x02, 0x02
gMapScriptConditionTable_BattleFrontier_BattlePyramidLobby_OnFrame: @ 0x0822BCFC
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_0822BD26
	.2byte 0x4000, 0x0001
	.4byte EventScript_JP_0822BD2F
	.2byte 0x4000, 0x0002
	.4byte EventScript_JP_0822BE73
	.2byte 0x4000, 0x0003
	.4byte EventScript_JP_0822BD78
	.2byte 0x4000, 0x0004
	.4byte EventScript_JP_0822BE19
	.2byte 0
EventScript_JP_0822BD26: @ 0x0822BD26
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	end
EventScript_JP_0822BD2F: @ 0x0822BD2F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	message gText_Rom_22C956
	waitmessage
	playse 0x005B
	waitse
	closemessage
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0000
	@ event command: special
	special CallBattlePyramidFunction
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0002
	setvar 0x8006, 0x0000
	@ event command: special
	special CallBattlePyramidFunction
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x4000, 0x00FF
	releaseall
	end
EventScript_JP_0822BD78: @ 0x0822BD78
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setvar 0x8004, 0x000A
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0822BD99
	loadword 0x00, gText_Rom_22C9CE
	callstd 0x04
	goto EventScript_JP_0822BDA1
EventScript_JP_0822BD99: @ 0x0822BD99
	loadword 0x00, gText_Rom_22D2B7
	callstd 0x04
EventScript_JP_0822BDA1: @ 0x0822BDA1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special DoBattlePyramidMonsHaveHeldItem
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_0822C3A2
	clearflag 0x4004
	setvar 0x8004, 0x0008
	@ event command: special
	special CallFrontierUtilFunc
	@ event command: special
	special LoadPlayerParty
	setvar 0x8004, 0x000E
	@ event command: special
	special CallBattlePyramidFunction
	@ event command: special
	special HealPlayerParty
	message gText_Rom_22CAEE
	waitmessage
	playse 0x005B
	waitse
	loadword 0x00, gText_Rom_22D2EA
	callstd 0x04
	setvar 0x8004, 0x000B
	@ event command: special
	special CallFrontierUtilFunc
	loadword 0x00, gText_Rom_22189E
	callstd 0x09
	message gText_Rom_22CB38
	waitmessage
	setvar 0x8004, 0x0004
	@ event command: special
	special CallBattlePyramidFunction
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0000
	@ event command: special
	special CallBattlePyramidFunction
	playse 0x0037
	waitse
	loadword 0x00, gText_Rom_22CBF4
	callstd 0x04
	closemessage
	setvar 0x4000, 0x00FF
	releaseall
	end
EventScript_JP_0822BE19: @ 0x0822BE19
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0008
	@ event command: special
	special CallFrontierUtilFunc
	@ event command: special
	special LoadPlayerParty
	setvar 0x8004, 0x000E
	@ event command: special
	special CallBattlePyramidFunction
	@ event command: special
	special HealPlayerParty
	lockall
	message gText_Rom_22CBBD
	waitmessage
	playse 0x005B
	waitse
	message gText_Rom_22CB38
	waitmessage
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0002
	setvar 0x8006, 0x0000
	@ event command: special
	special CallBattlePyramidFunction
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0000
	@ event command: special
	special CallBattlePyramidFunction
	playse 0x0037
	waitse
	loadword 0x00, gText_Rom_22CBF4
	callstd 0x04
	closemessage
	setvar 0x4000, 0x00FF
	releaseall
	end
EventScript_JP_0822BE73: @ 0x0822BE73
	goto EventScript_JP_0822BFE8
.globl EventScript_JP_0822BE78
EventScript_JP_0822BE78: @ 0x0822BE78
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x40CF, 0x0006
	setvar 0x40CE, 0x0000
	@ event command: special
	special SavePlayerParty
	loadword 0x00, gText_Rom_22C4F8
	callstd 0x04
EventScript_JP_0822BE8F: @ 0x0822BE8F
	message gText_Rom_22C53F
	waitmessage
	multichoice 0x11, 0x06, 0x17, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822BECB
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822C02F
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822C08B
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822C08B
EventScript_JP_0822BECB: @ 0x0822BECB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_22C6BD
	waitmessage
	multichoice 0x11, 0x06, 0x18, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822C08B
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822C08B
	setvar 0x8004, 0x000F
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x8004, 0x0001
	goto_if 0x01, EventScript_JP_0822C03C
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0001
	copyvar 0x8006, 0x800D
	@ event command: special
	special CallFrontierUtilFunc
	loadword 0x00, gText_Rom_22C6EA
	callstd 0x04
	fadescreen 0x01
	call 0x082202F8
	copyvar 0x8004, 0x800D
	setvar 0x8005, 0x0003
	@ event command: special
	special ChoosePartyForBattleFrontier
	waitstate
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0822C088
	loadword 0x00, gText_Rom_22C83E
	callstd 0x05
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822C088
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822BF6C
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822C088
EventScript_JP_0822BF6C: @ 0x0822BF6C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x4000, 0x0000
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0004
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x8004, 0x0000
	@ event command: special
	special CallBattlePyramidFunction
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0002
	setvar 0x8006, 0x0001
	@ event command: special
	special CallBattlePyramidFunction
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0001
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0003
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x8004, 0x0006
	@ event command: special
	special CallBattlePyramidFunction
	setvar 0x8004, 0x0009
	@ event command: special
	special CallBattlePyramidFunction
	@ event command: special
	special LoadPlayerParty
	closemessage
	delay 0x0002
	call 0x082423E9
	setvar 0x4000, 0x00FF
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0822C071
EventScript_JP_0822BFE8: @ 0x0822BFE8
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special SavePlayerParty
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0003
	@ event command: special
	special CallFrontierUtilFunc
	loadword 0x00, gText_Rom_22C866
	callstd 0x04
	closemessage
	call EventScript_JP_0822C31D
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x800D, 0x0000
	@ event command: special
	special HealPlayerParty
	@ event command: warp
	warp MAP_ID_BATTLE_FRONTIER_BATTLE_PYRAMID_FLOOR, 0xFF, 0x0001, 0x0001
	.byte 0x16, 0x00, 0x40, 0x00, 0x00, 0x27, 0x02
EventScript_JP_0822C02F: @ 0x0822C02F
	loadword 0x00, gText_Rom_22C571
	callstd 0x04
	goto EventScript_JP_0822BE8F
EventScript_JP_0822C03C: @ 0x0822C03C
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822C057
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822C064
EventScript_JP_0822C057: @ 0x0822C057
	loadword 0x00, gText_Rom_22C786
	callstd 0x04
	goto EventScript_JP_0822C093
EventScript_JP_0822C064: @ 0x0822C064
	loadword 0x00, gText_Rom_22C708
	callstd 0x04
	goto EventScript_JP_0822C093
EventScript_JP_0822C071: @ 0x0822C071
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	goto EventScript_JP_0822C08B
EventScript_JP_0822C088: @ 0x0822C088
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special LoadPlayerParty
EventScript_JP_0822C08B: @ 0x0822C08B
	loadword 0x00, gText_Rom_22C559
	callstd 0x04
EventScript_JP_0822C093: @ 0x0822C093
	release
	end
.globl EventScript_JP_0822C095
EventScript_JP_0822C095: @ 0x0822C095
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x0002, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_22CC44
	callstd 0x04
	call EventScript_JP_0822C0B7
	loadword 0x00, gText_Rom_22D1C7
	callstd 0x04
	releaseall
	end
EventScript_JP_0822C0B7: @ 0x0822C0B7
	multichoice 0x11, 0x06, 0x18, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822C0EF
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822C12D
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822C0EE
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822C0EE
	return
EventScript_JP_0822C0EE: @ 0x0822C0EE
	return
EventScript_JP_0822C0EF: @ 0x0822C0EF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_22CC6D
	callstd 0x04
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0005
	@ event command: special
	special CallBattlePyramidFunction
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_0822C11A
	setvar 0x800D, 0x0000
	goto EventScript_JP_0822C16B
	.byte 0x03
EventScript_JP_0822C11A: @ 0x0822C11A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0003
	@ event command: special
	special CallBattlePyramidFunction
	goto EventScript_JP_0822C16B
	.byte 0x03
EventScript_JP_0822C12D: @ 0x0822C12D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_22CC6D
	callstd 0x04
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0006
	@ event command: special
	special CallBattlePyramidFunction
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_0822C158
	setvar 0x800D, 0x0000
	goto EventScript_JP_0822C16B
	.byte 0x03
EventScript_JP_0822C158: @ 0x0822C158
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0004
	@ event command: special
	special CallBattlePyramidFunction
	goto EventScript_JP_0822C16B
	.byte 0x03
EventScript_JP_0822C16B: @ 0x0822C16B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	copyvar 0x8004, 0x800D
	@ event command: special
	special GetBattlePyramidHint
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822C255
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822C25E
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822C267
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0822C270
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_0822C279
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_0822C282
	compare_var_to_value 0x8000, 0x0006
	goto_if 0x01, EventScript_JP_0822C28B
	compare_var_to_value 0x8000, 0x0007
	goto_if 0x01, EventScript_JP_0822C294
	compare_var_to_value 0x8000, 0x0008
	goto_if 0x01, EventScript_JP_0822C29D
	compare_var_to_value 0x8000, 0x0009
	goto_if 0x01, EventScript_JP_0822C2A6
	compare_var_to_value 0x8000, 0x000A
	goto_if 0x01, EventScript_JP_0822C2AF
	compare_var_to_value 0x8000, 0x000B
	goto_if 0x01, EventScript_JP_0822C2B8
	compare_var_to_value 0x8000, 0x000C
	goto_if 0x01, EventScript_JP_0822C2C1
	compare_var_to_value 0x8000, 0x000D
	goto_if 0x01, EventScript_JP_0822C2CA
	compare_var_to_value 0x8000, 0x000E
	goto_if 0x01, EventScript_JP_0822C2D3
	compare_var_to_value 0x8000, 0x000F
	goto_if 0x01, EventScript_JP_0822C2DC
	compare_var_to_value 0x8000, 0x0010
	goto_if 0x01, EventScript_JP_0822C2E5
	compare_var_to_value 0x8000, 0x0011
	goto_if 0x01, EventScript_JP_0822C2EE
	compare_var_to_value 0x8000, 0x0012
	goto_if 0x01, EventScript_JP_0822C2F7
	compare_var_to_value 0x8000, 0x0013
	goto_if 0x01, EventScript_JP_0822C300
	return
EventScript_JP_0822C255: @ 0x0822C255
	loadword 0x00, gText_Rom_22CCA1
	callstd 0x04
	return
EventScript_JP_0822C25E: @ 0x0822C25E
	loadword 0x00, gText_Rom_22CCDC
	callstd 0x04
	return
EventScript_JP_0822C267: @ 0x0822C267
	loadword 0x00, gText_Rom_22CD0D
	callstd 0x04
	return
EventScript_JP_0822C270: @ 0x0822C270
	loadword 0x00, gText_Rom_22CD44
	callstd 0x04
	return
EventScript_JP_0822C279: @ 0x0822C279
	loadword 0x00, gText_Rom_22CD9A
	callstd 0x04
	return
EventScript_JP_0822C282: @ 0x0822C282
	loadword 0x00, gText_Rom_22CDE1
	callstd 0x04
	return
EventScript_JP_0822C28B: @ 0x0822C28B
	loadword 0x00, gText_Rom_22CE26
	callstd 0x04
	return
EventScript_JP_0822C294: @ 0x0822C294
	loadword 0x00, gText_Rom_22CE63
	callstd 0x04
	return
EventScript_JP_0822C29D: @ 0x0822C29D
	loadword 0x00, gText_Rom_22CEA5
	callstd 0x04
	return
EventScript_JP_0822C2A6: @ 0x0822C2A6
	loadword 0x00, gText_Rom_22CEE4
	callstd 0x04
	return
EventScript_JP_0822C2AF: @ 0x0822C2AF
	loadword 0x00, gText_Rom_22CF1F
	callstd 0x04
	return
EventScript_JP_0822C2B8: @ 0x0822C2B8
	loadword 0x00, gText_Rom_22CF5E
	callstd 0x04
	return
EventScript_JP_0822C2C1: @ 0x0822C2C1
	loadword 0x00, gText_Rom_22CFC1
	callstd 0x04
	return
EventScript_JP_0822C2CA: @ 0x0822C2CA
	loadword 0x00, gText_Rom_22D000
	callstd 0x04
	return
EventScript_JP_0822C2D3: @ 0x0822C2D3
	loadword 0x00, gText_Rom_22D03C
	callstd 0x04
	return
EventScript_JP_0822C2DC: @ 0x0822C2DC
	loadword 0x00, gText_Rom_22D077
	callstd 0x04
	return
EventScript_JP_0822C2E5: @ 0x0822C2E5
	loadword 0x00, gText_Rom_22D0B6
	callstd 0x04
	return
EventScript_JP_0822C2EE: @ 0x0822C2EE
	loadword 0x00, gText_Rom_22D0F5
	callstd 0x04
	return
EventScript_JP_0822C2F7: @ 0x0822C2F7
	loadword 0x00, gText_Rom_22D132
	callstd 0x04
	return
EventScript_JP_0822C300: @ 0x0822C300
	loadword 0x00, gText_Rom_22D187
	callstd 0x04
	return
.globl EventScript_JP_0822C309
EventScript_JP_0822C309: @ 0x0822C309
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setvar 0x8004, 0x0007
	setvar 0x8005, 0x0006
	@ event command: special
	special CallFrontierUtilFunc
	waitbuttonpress
	@ event command: special
	special RemoveRecordsWindow
	releaseall
	end
EventScript_JP_0822C31D: @ 0x0822C31D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattlePalaceBattleRoom_Movement_WalkUpX7_FaceDown
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattlePalaceBattleRoom_Movement_WalkUpX7
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_22C882
	callstd 0x04
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	@ event command: special
	special CallBattlePyramidFunction
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0822C35B
	loadword 0x00, gText_Rom_22C8A8
	callstd 0x04
	goto EventScript_JP_0822C363
EventScript_JP_0822C35B: @ 0x0822C35B
	loadword 0x00, gText_Rom_22C8CF
	callstd 0x04
EventScript_JP_0822C363: @ 0x0822C363
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_22C8EA
	waitmessage
	playse 0x005B
	waitse
	loadword 0x00, gText_Rom_22C907
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattlePalaceBattleRoom_Movement_WalkRight_FaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattlePalaceBattleRoom_Movement_WalkUpX2
	@ event command: waitmovement
	waitmovement 0x0000
	return
BattleFrontier_BattlePalaceBattleRoom_Movement_WalkUpX7_FaceDown: @ 0x0822C38B
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	face_down
	step_end
BattleFrontier_BattlePalaceBattleRoom_Movement_WalkUpX7: @ 0x0822C394
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
BattleFrontier_BattlePalaceBattleRoom_Movement_WalkRight_FaceLeft: @ 0x0822C39C
	@ object movement sequence
	walk_right
	face_left
	step_end
BattleFrontier_BattlePalaceBattleRoom_Movement_WalkUpX2: @ 0x0822C39F
	@ object movement sequence
	walk_up
	walk_up
	step_end
EventScript_JP_0822C3A2: @ 0x0822C3A2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_22C9F4
	callstd 0x04
	setflag 0x4004
	@ event command: special
	special TryStoreHeldItemsInPyramidBag
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0822C3C7
	message gText_Rom_22CA67
	waitmessage
	goto EventScript_JP_0822C3D0
	.byte 0x02
EventScript_JP_0822C3C7: @ 0x0822C3C7
	loadword 0x00, gText_Rom_22CA3F
	callstd 0x04
	return
EventScript_JP_0822C3D0: @ 0x0822C3D0
	multichoice 0x11, 0x06, 0x53, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822C407
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822C417
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822C427
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822C427
	end
EventScript_JP_0822C407: @ 0x0822C407
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special ChooseItemsToTossFromPyramidBag
	waitstate
	message gText_Rom_22CAB5
	waitmessage
	goto EventScript_JP_0822C3D0
	.byte 0x02
EventScript_JP_0822C417: @ 0x0822C417
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special BattlePyramidChooseMonHeldItems
	waitstate
	message gText_Rom_22CAB5
	waitmessage
	goto EventScript_JP_0822C3D0
	.byte 0x02
EventScript_JP_0822C427: @ 0x0822C427
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special DoBattlePyramidMonsHaveHeldItem
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0822C436
	return
EventScript_JP_0822C436: @ 0x0822C436
	loadword 0x00, gText_Rom_22CA9D
	callstd 0x04
	message gText_Rom_22CAB5
	waitmessage
	goto EventScript_JP_0822C3D0
	.byte 0x02
.globl EventScript_JP_0822C44A
EventScript_JP_0822C44A: @ 0x0822C44A
	loadword 0x00, gText_Rom_22D202
	callstd 0x02
	end
.globl EventScript_JP_0822C453
EventScript_JP_0822C453: @ 0x0822C453
	loadword 0x00, gText_Rom_22D276
	callstd 0x02
	end
.globl EventScript_JP_0822C45C
EventScript_JP_0822C45C: @ 0x0822C45C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, gText_Rom_22D31A
	callstd 0x04
	goto EventScript_JP_0822C46B
	.byte 0x02
EventScript_JP_0822C46B: @ 0x0822C46B
	message gText_Rom_22D333
	waitmessage
	multichoice 0x0F, 0x02, 0x65, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822C4BE
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822C4CC
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822C4DA
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0822C4E8
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_0822C4F6
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822C4F6
	end
EventScript_JP_0822C4BE: @ 0x0822C4BE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_22D343
	callstd 0x04
	goto EventScript_JP_0822C46B
	.byte 0x02
EventScript_JP_0822C4CC: @ 0x0822C4CC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_22D398
	callstd 0x04
	goto EventScript_JP_0822C46B
	.byte 0x02
EventScript_JP_0822C4DA: @ 0x0822C4DA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_22D3FE
	callstd 0x04
	goto EventScript_JP_0822C46B
	.byte 0x02
EventScript_JP_0822C4E8: @ 0x0822C4E8
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_22D46E
	callstd 0x04
	goto EventScript_JP_0822C46B
	.byte 0x02
EventScript_JP_0822C4F6: @ 0x0822C4F6
	releaseall
	end
