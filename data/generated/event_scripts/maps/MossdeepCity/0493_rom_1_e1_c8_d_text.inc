	@ data/maps/MossdeepCity/scripts.inc:306 MossdeepCity_Text_WantKingsRockStevenGaveMe
	.globl gText_Rom_1E17BC
gText_Rom_1E17BC: @ 0x081E17BC
	.string "これ…… ダイゴさんに もらったけど\nなんだか よく わかんないや!\pおうじゃのしるし って いうらしいけど\nおまえ ほしい?{EOS}"
	.if (. - gText_Rom_1E17BC) > 0x40
	.error "gText_Rom_1E17BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E17BC) < 0x40
	.space 0x40 - (. - gText_Rom_1E17BC)
	.endif
	@ data/maps/MossdeepCity/scripts.inc:309 MossdeepCity_Text_YouCanKeepIt
	.globl gText_Rom_1E17FC
gText_Rom_1E17FC: @ 0x081E17FC
	.string "これが ほしいなんて\nおまえも かわってるよな!\pやるけど そのかわり\nダイゴさんには ないしょ だぜ!{EOS}"
	.if (. - gText_Rom_1E17FC) > 0x35
	.error "gText_Rom_1E17FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E17FC) < 0x35
	.space 0x35 - (. - gText_Rom_1E17FC)
	.endif
	@ data/maps/MossdeepCity/scripts.inc:312 MossdeepCity_Text_StevensHouseOverThere
	.globl gText_Rom_1E1831
gText_Rom_1E1831: @ 0x081E1831
	.string "ダイゴさんの いえなら すぐそこだよ!{EOS}"
	.if (. - gText_Rom_1E1831) > 0x14
	.error "gText_Rom_1E1831 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1831) < 0x14
	.space 0x14 - (. - gText_Rom_1E1831)
	.endif
	@ data/maps/MossdeepCity/scripts.inc:315 MossdeepCity_Text_WhatToDoWithWeirdRock
	.globl gText_Rom_1E1845
gText_Rom_1E1845: @ 0x081E1845
	.string "そうだろ! へんてこな いしを\nもらっても こまっちゃうよな!{EOS}"
	.if (. - gText_Rom_1E1845) > 0x20
	.error "gText_Rom_1E1845 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1845) < 0x20
	.space 0x20 - (. - gText_Rom_1E1845)
	.endif
	@ data/maps/MossdeepCity/scripts.inc:318 MossdeepCity_Text_WailmerWatching
	.globl gText_Rom_1E1865
gText_Rom_1E1865: @ 0x081E1865
	.string "この トクサネの しゅうへん では\nやせいの ホエルコが けんぶつ できるんだ\pそーいうのを えーと……\nなんて いったっけ かな……\pホエ ホエ ホエ……\pホエルコ ウオッチング だ!{EOS}"
	.if (. - gText_Rom_1E1865) > 0x5e
	.error "gText_Rom_1E1865 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1865) < 0x5e
	.space 0x5e - (. - gText_Rom_1E1865)
	.endif
	@ data/maps/MossdeepCity/scripts.inc:321 MossdeepCity_Text_SpaceCenterReceivedLetter
	.globl gText_Rom_1E18C3
gText_Rom_1E18C3: @ 0x081E18C3
	.string "しまの うちゅうセンター では\nすんごい ロケット とばしとるけど……\pさいきん あそこに\nおかしなてがみ が とどいた とかで\lちょっとした さわぎに なっとるのよ{EOS}"
	.if (. - gText_Rom_1E18C3) > 0x54
	.error "gText_Rom_1E18C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E18C3) < 0x54
	.space 0x54 - (. - gText_Rom_1E18C3)
	.endif
	@ data/maps/MossdeepCity/scripts.inc:324 MossdeepCity_Text_SpaceCenterLaunchingRockets
	.globl gText_Rom_1E1917
gText_Rom_1E1917: @ 0x081E1917
	.string "しまの うちゅうセンター では\nすんごい ロケット とばしとるのよ!{EOS}"
	.if (. - gText_Rom_1E1917) > 0x23
	.error "gText_Rom_1E1917 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1917) < 0x23
	.space 0x23 - (. - gText_Rom_1E1917)
	.endif
	@ data/maps/MossdeepCity/scripts.inc:327 MossdeepCity_Text_MossdeepTargetedByMagma
	.globl gText_Rom_1E193A
gText_Rom_1E193A: @ 0x081E193A
	.string "ふなのりの なかまから きいたんだけど\nミナモに すみついていた アクアだん\lだれかが やっつけたんだってな!\pでも こっちの トクサネは\nマグマだんに ねらわれてるんだよ……\pあいつらが なにをするき なのかは\nうちゅうセンターに いけば わかるさ{EOS}"
	.if (. - gText_Rom_1E193A) > 0x7e
	.error "gText_Rom_1E193A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E193A) < 0x7e
	.space 0x7e - (. - gText_Rom_1E193A)
	.endif
	@ data/maps/MossdeepCity/scripts.inc:330 MossdeepCity_Text_FeelReliefOnLand
	.globl gText_Rom_1E19B8
gText_Rom_1E19B8: @ 0x081E19B8
	.string "おれは ふなのり だから\nやっぱり うみのほうが だいじさ!\pでも ひさしぶりに りくに あがると\nやっぱり ホッと するんだよな!{EOS}"
	.if (. - gText_Rom_1E19B8) > 0x43
	.error "gText_Rom_1E19B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E19B8) < 0x43
	.space 0x43 - (. - gText_Rom_1E19B8)
	.endif
	@ data/maps/MossdeepCity/scripts.inc:333 MossdeepCity_Text_NiceIfWorldCoveredByFlowers
	.globl gText_Rom_1E19FB
gText_Rom_1E19FB: @ 0x081E19FB
	.string "せかいじゅうの すべてが!\pこのしま みたいに くさばなで\nいっぱいに なれば いいのにね!{EOS}"
	.if (. - gText_Rom_1E19FB) > 0x2f
	.error "gText_Rom_1E19FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E19FB) < 0x2f
	.space 0x2f - (. - gText_Rom_1E19FB)
	.endif
	@ data/maps/MossdeepCity/scripts.inc:336 MossdeepCity_Text_LifeNeedsSeaToLive
	.globl gText_Rom_1E1A2A
gText_Rom_1E1A2A: @ 0x081E1A2A
	.string "いのちの みなもとは うみから うまれて\nりくに あがって きた\pやくめを おえた いのちは\nつち となって だいちに かえって いく\pそして うみと だいちは\nいつでも つながって いる……\pそう この かいがんせんの ようにな{EOS}"
	.if (. - gText_Rom_1E1A2A) > 0x74
	.error "gText_Rom_1E1A2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1A2A) < 0x74
	.space 0x74 - (. - gText_Rom_1E1A2A)
	.endif
	@ data/maps/MossdeepCity/scripts.inc:339 MossdeepCity_Text_SurfExhilarating
	.globl gText_Rom_1E1A9E
gText_Rom_1E1A9E: @ 0x081E1A9E
	.string "ふねのたびも いいけどな\pポケモンと ともに なみのりで\nうみを わたるのは なんとも いえない\lきもちよさが あるよな……\pそう おもわないか? わかものよ{EOS}"
	.if (. - gText_Rom_1E1A9E) > 0x50
	.error "gText_Rom_1E1A9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1A9E) < 0x50
	.space 0x50 - (. - gText_Rom_1E1A9E)
	.endif
	@ data/maps/MossdeepCity/scripts.inc:342 MossdeepCity_Text_SpecialSpaceCenterRock
	.globl gText_Rom_1E1AEE
gText_Rom_1E1AEE: @ 0x081E1AEE
	.string "この いわ って\nうちゅうセンターの みんなに とって\lだいじな いわ なの\pロケットが ぶじに とぶように ねがって\nここに おいたんだって!\pあなたは ねがいごとを かなえたいとき\nどうするの?\lながれぼしに ねがうの?\pあたしなら たんざくに\nおねがいごとを かくかな やっぱ!{EOS}"
	.if (. - gText_Rom_1E1AEE) > 0x8f
	.error "gText_Rom_1E1AEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1AEE) < 0x8f
	.space 0x8f - (. - gText_Rom_1E1AEE)
	.endif
	@ data/maps/MossdeepCity/scripts.inc:345 MossdeepCity_Text_ItsAWhiteRock
	.globl gText_Rom_1E1B7D
gText_Rom_1E1B7D: @ 0x081E1B7D
	.string "しろい いわ だ!{EOS}"
	.if (. - gText_Rom_1E1B7D) > 0xa
	.error "gText_Rom_1E1B7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1B7D) < 0xa
	.space 0xa - (. - gText_Rom_1E1B7D)
	.endif
	@ data/maps/MossdeepCity/scripts.inc:348 MossdeepCity_Text_GymSign
	.globl gText_Rom_1E1B87
gText_Rom_1E1B87: @ 0x081E1B87
	.string "トクサネ シティ ポケモンジム\nリーダー フウ ラン\lしんぴの コンビネーション!!{EOS}"
	.if (. - gText_Rom_1E1B87) > 0x2b
	.error "gText_Rom_1E1B87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1B87) < 0x2b
	.space 0x2b - (. - gText_Rom_1E1B87)
	.endif
	@ data/maps/MossdeepCity/scripts.inc:351 MossdeepCity_Text_CitySign
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E1BB2
gText_Rom_1E1BB2: @ 0x081E1BB2
	.string "ここは トクサネ シティ\n「ポケモンを たいせつに!」が あいことば{EOS}"
	.if (. - gText_Rom_1E1BB2) != 0x23
	.error "gText_Rom_1E1BB2 must retain its original byte length"
	.endif
	.globl gText_Rom_1E1BD1
	.set gText_Rom_1E1BD1, gText_Rom_1E1BB2 + 0x1f
	@ data/maps/MossdeepCity/scripts.inc:354 MossdeepCity_Text_SpaceCenterSign
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E1BD5
gText_Rom_1E1BD5: @ 0x081E1BD5
	.string "「トクサネ うちゅうセンター」\nうちゅうに いちばん ちかい ばしょ{EOS}"
	.if (. - gText_Rom_1E1BD5) != 0x23
	.error "gText_Rom_1E1BD5 must retain its original byte length"
	.endif
	.globl gText_Rom_1E1BF4
	.set gText_Rom_1E1BF4, gText_Rom_1E1BD5 + 0x1f
	@ data/maps/MossdeepCity/scripts.inc:357 MossdeepCity_Text_ScottSomethingWrongWithTown
	.globl gText_Rom_1E1BF8
gText_Rom_1E1BF8: @ 0x081E1BF8
	.string "エニシダ『{PLAYER}{KUN} げんき?\nわたしは げんきさ!\pトクサネシティの ジムリーダーが\nかなり つよいって きいてね\lのぞいてみようと きて みたら\lまちの ようすが なんだか ヘンなんだ\pよこくじょうが どうした とか\nうちゅうセンターが どうした とか……\pわたしには かんけい なさそうだなあ{EOS}"
	.if (. - gText_Rom_1E1BF8) > 0x95
	.error "gText_Rom_1E1BF8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1BF8) < 0x95
	.space 0x95 - (. - gText_Rom_1E1BF8)
	.endif
	@ data/maps/MossdeepCity/scripts.inc:360 MossdeepCity_Text_SootopolisNewGymLeader
	.globl gText_Rom_1E1C8D
gText_Rom_1E1C8D: @ 0x081E1C8D
	.string "あー あしもとが じゃぶじゃぶして\nきもちが いい……\pそうだ! じゃぶじゃぶ といえば\nルネシティ だけど\pあそこの ジム\nリーダーが かわった らしいね\pなんでも ミクリさんの\nおししょうさん だとか……{EOS}"
	.if (. - gText_Rom_1E1C8D) > 0x69
	.error "gText_Rom_1E1C8D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1C8D) < 0x69
	.space 0x69 - (. - gText_Rom_1E1C8D)
	.endif
	@ analyzed canonical ROM range 0x081E1CF6-0x081E2C08
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_081E1CF6: @ 0x081E1CF6
gMapScriptDispatch_SootopolisCity_OnLoad_OnTransition_OnResume_OnFrame_OnWarpIntoMap: @ 0x081E1CF6
	@ map script dispatch table
	.byte 0x01
	.4byte EventScript_JP_081E1D10
	.byte 0x03
	.4byte EventScript_JP_081E1D89
	.byte 0x05
	.4byte EventScript_JP_081E1FA5
	.byte 0x02
	.4byte gMapScriptConditionTable_SootopolisCity_OnFrame
	.byte 0x04
	.4byte gMapScriptConditionTable_SootopolisCity_OnWarpIntoMap
	.byte 0
EventScript_JP_081E1D10: @ 0x081E1D10
	checkflag 0x009E
	call_if 0x00, EventScript_JP_081E1D7F
	checkflag 0x0081
	goto_if 0x00, EventScript_JP_081E1D2C
	checkflag 0x009E
	call_if 0x00, EventScript_JP_081E1D2D
	end
EventScript_081E1D2C: @ 0x081E1D2C
EventScript_JP_081E1D2C: @ 0x081E1D2C
	end
EventScript_081E1D2D: @ 0x081E1D2D
EventScript_JP_081E1D2D: @ 0x081E1D2D
	setmetatile 0x0009, 0x0006, 0x0248, 0x0001
	setmetatile 0x0009, 0x0011, 0x0248, 0x0001
	setmetatile 0x0009, 0x001A, 0x0248, 0x0001
	setmetatile 0x002C, 0x0011, 0x0248, 0x0001
	setmetatile 0x0008, 0x0023, 0x0248, 0x0001
	setmetatile 0x0035, 0x001C, 0x0248, 0x0001
	setmetatile 0x002D, 0x0006, 0x0248, 0x0001
	setmetatile 0x0030, 0x0019, 0x0248, 0x0001
	setmetatile 0x0033, 0x0024, 0x0248, 0x0001
	return
EventScript_081E1D7F: @ 0x081E1D7F
EventScript_JP_081E1D7F: @ 0x081E1D7F
	setmetatile 0x001F, 0x0020, 0x0250, 0x0001
	return
EventScript_JP_081E1D89: @ 0x081E1D89
	setflag 0x087D
	compare_var_to_value 0x405E, 0x0001
	call_if 0x01, EventScript_JP_081E1E1B
	compare_var_to_value 0x40CA, 0x0001
	call_if 0x01, EventScript_JP_081E1E1B
	call EventScript_JP_081E1E9F
	call EventScript_JP_081E1E4C
	compare_var_to_value 0x405E, 0x0001
	call_if 0x01, EventScript_JP_081E1E1F
	compare_var_to_value 0x405E, 0x0002
	call_if 0x01, EventScript_JP_081E1E1F
	compare_var_to_value 0x405E, 0x0003
	call_if 0x01, EventScript_JP_081E1E1F
	compare_var_to_value 0x405E, 0x0004
	call_if 0x01, EventScript_JP_081E1E1F
	compare_var_to_value 0x405E, 0x0005
	call_if 0x01, EventScript_JP_081E1E1F
	compare_var_to_value 0x405E, 0x0002
	call_if 0x01, EventScript_JP_081E1EDC
	compare_var_to_value 0x405E, 0x0003
	call_if 0x01, EventScript_JP_081E1EDC
	compare_var_to_value 0x405E, 0x0004
	call_if 0x01, EventScript_JP_081E1EF5
	compare_var_to_value 0x405E, 0x0005
	call_if 0x01, EventScript_JP_081E1F0B
	compare_var_to_value 0x405E, 0x0006
	call_if 0x01, EventScript_JP_081E1F6D
	end
EventScript_JP_081E1E1B: @ 0x081E1E1B
	setflag 0x4000
	return
EventScript_JP_081E1E1F: @ 0x081E1E1F
	setobjectxyperm 0x0003, 0x000D, 0x0030
	setobjectxyperm 0x0005, 0x002E, 0x0020
	setobjectxyperm 0x0004, 0x0030, 0x0029
	setobjectxyperm 0x0008, 0x002D, 0x002B
	setobjectmovementtype 0x0003, 0x07
	setobjectmovementtype 0x0005, 0x09
	setobjectmovementtype 0x0004, 0x09
	setobjectmovementtype 0x0008, 0x09
	return
EventScript_JP_081E1E4C: @ 0x081E1E4C
	compare_var_to_value 0x405E, 0x0000
	goto_if 0x01, EventScript_JP_081E1E9A
	compare_var_to_value 0x405E, 0x0006
	goto_if 0x04, EventScript_JP_081E1E9A
	compare_var_to_value 0x405E, 0x0001
	goto_if 0x01, EventScript_JP_081E1E9B
	compare_var_to_value 0x405E, 0x0002
	goto_if 0x01, EventScript_JP_081E1E9B
	compare_var_to_value 0x405E, 0x0003
	goto_if 0x01, EventScript_JP_081E1E9B
	compare_var_to_value 0x405E, 0x0004
	goto_if 0x01, EventScript_JP_081E1E9B
	compare_var_to_value 0x40CA, 0x0001
	goto_if 0x03, EventScript_JP_081E1E9B
	return
EventScript_JP_081E1E9A: @ 0x081E1E9A
	return
EventScript_JP_081E1E9B: @ 0x081E1E9B
	setmaplayoutindex 0x0165
	return
EventScript_JP_081E1E9F: @ 0x081E1E9F
	compare_var_to_value 0x405E, 0x0000
	goto_if 0x01, EventScript_JP_081E1ED7
	compare_var_to_value 0x405E, 0x0006
	goto_if 0x04, EventScript_JP_081E1ED7
	compare_var_to_value 0x405E, 0x0001
	goto_if 0x01, EventScript_JP_081E1ED8
	compare_var_to_value 0x40CA, 0x0001
	goto_if 0x01, EventScript_JP_081E1ED8
	compare_var_to_value 0x40CA, 0x0001
	goto_if 0x03, 0x08243106
	return
EventScript_JP_081E1ED7: @ 0x081E1ED7
	return
EventScript_JP_081E1ED8: @ 0x081E1ED8
	setweather 0x000D
	return
EventScript_JP_081E1EDC: @ 0x081E1EDC
	checkflag 0x0133
	goto_if 0x01, EventScript_JP_081E1EE6
	return
EventScript_JP_081E1EE6: @ 0x081E1EE6
	setobjectxyperm 0x0001, 0x001E, 0x0012
	setobjectxyperm 0x0007, 0x0020, 0x0012
	return
EventScript_JP_081E1EF5: @ 0x081E1EF5
	setobjectxyperm 0x0001, 0x001E, 0x0012
	setobjectxyperm 0x0012, 0x001F, 0x0012
	setobjectxyperm 0x0007, 0x0020, 0x0012
	end
EventScript_JP_081E1F0B: @ 0x081E1F0B
	setobjectxyperm 0x0001, 0x001F, 0x0012
	setobjectxyperm 0x0007, 0x001D, 0x0021
	setobjectxyperm 0x0010, 0x0021, 0x0023
	setobjectxyperm 0x0011, 0x0022, 0x0023
	compare_var_to_value 0x40D8, 0x0000
	call_if 0x01, EventScript_JP_081E1F49
	compare_var_to_value 0x40D8, 0x0001
	call_if 0x01, EventScript_JP_081E1F55
	compare_var_to_value 0x40D8, 0x0002
	call_if 0x01, EventScript_JP_081E1F61
	return
EventScript_JP_081E1F49: @ 0x081E1F49
	setobjectxyperm 0x0012, 0x001F, 0x0021
	setobjectmovementtype 0x0012, 0x08
	return
EventScript_JP_081E1F55: @ 0x081E1F55
	setobjectxyperm 0x0012, 0x0020, 0x0021
	setobjectmovementtype 0x0012, 0x08
	return
EventScript_JP_081E1F61: @ 0x081E1F61
	setobjectxyperm 0x0012, 0x001E, 0x0021
	setobjectmovementtype 0x0012, 0x08
	return
EventScript_JP_081E1F6D: @ 0x081E1F6D
	setobjectxyperm 0x0001, 0x001F, 0x0012
	return
gMapScriptConditionTable_SootopolisCity_OnWarpIntoMap: @ 0x081E1F75
	@ conditional map script table
	.2byte 0x405E, 0x0005
	.4byte EventScript_JP_081E1F7F
	.2byte 0
EventScript_JP_081E1F7F: @ 0x081E1F7F
	compare_var_to_value 0x40CA, 0x0001
	call_if 0x01, EventScript_JP_081E1F96
	compare_var_to_value 0x40CA, 0x0002
	call_if 0x01, EventScript_JP_081E1F9B
	end
EventScript_JP_081E1F96: @ 0x081E1F96
	turnobject 0x00FF, 0x02
	return
EventScript_JP_081E1F9B: @ 0x081E1F9B
	turnobject 0x00FF, 0x02
	setvar 0x40CA, 0x0003
	return
EventScript_JP_081E1FA5: @ 0x081E1FA5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: setdivewarp
	setdivewarp MAP_ID_UNDERWATER_SOOTOPOLIS_CITY, 0xFF, 0x0009, 0x0006
	.byte 0x02
gMapScriptConditionTable_SootopolisCity_OnFrame: @ 0x081E1FAE
	@ conditional map script table
	.2byte 0x405E, 0x0001
	.4byte EventScript_JP_081E1FC0
	.2byte 0x40CA, 0x0001
	.4byte EventScript_JP_081E2298
	.2byte 0
EventScript_JP_081E1FC0: @ 0x081E1FC0
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: special
	special StorePlayerCoordsInVars
	compare_var_to_value 0x8004, 0x002B
	goto_if 0x05, EventScript_JP_081E211C
	compare_var_to_value 0x8005, 0x0020
	goto_if 0x05, EventScript_JP_081E211C
	goto EventScript_JP_081E1FE0
	.byte 0x02
EventScript_JP_081E1FE0: @ 0x081E1FE0
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	delay 0x003C
	@ event command: special
	special SpawnCameraObject
	@ event command: applymovement
	applymovement 0x007F, MossdeepCity_Movement_WalkSlowDiagSouthwestX12
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: special
	special RemoveCameraObject
	delay 0x003C
	fadescreenspeed 0x01, 0x08
	setweather 0x000F
	doweather
	setvar 0x8004, 0x0000
	@ event command: special
	special Script_DoRayquazaScene
	waitstate
	@ event command: applymovement
	applymovement 0x000A, PetalburgCity_Ext_WallyFaceLeft
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x003C
	waitse
	playmoncry 0x0194, 0x0002
	@ event command: applymovement
	applymovement 0x000A, MossdeepCity_Movement_WalkInPlaceSlowLeftX3_Delay16X3_InitAffineAnim_WalkLeftAffine_ClearAffineAnim
	@ event command: applymovement
	applymovement 0x0009, MossdeepCity_Movement_Delay16X9_WalkFastRight
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0008
	setvar 0x8007, 0x0005
	@ event command: special
	special ShakeCamera
	waitstate
	@ event command: applymovement
	applymovement 0x000A, MossdeepCity_Movement_LockFacingDirection_WalkRight_Delay16X3_UnlockFacingDirection
	@ event command: applymovement
	applymovement 0x0009, MossdeepCity_Movement_LockFacingDirection_WalkLeft_Delay16X3_UnlockFacingDirection
	@ event command: waitmovement
	waitmovement 0x0000
	waitse
	playmoncry 0x0195, 0x0002
	@ event command: applymovement
	applymovement 0x000A, MossdeepCity_Movement_Delay16X9_InitAffineAnim_WalkLeftAffine_ClearAffineAnim
	@ event command: applymovement
	applymovement 0x0009, MossdeepCity_Movement_WalkInPlaceSlowRightX3_Delay16X3_WalkFastRight
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0008
	setvar 0x8007, 0x0005
	@ event command: special
	special ShakeCamera
	waitstate
	@ event command: applymovement
	applymovement 0x000A, MossdeepCity_Movement_LockFacingDirection_WalkRight_Delay16X3_UnlockFacingDirection
	@ event command: applymovement
	applymovement 0x0009, MossdeepCity_Movement_LockFacingDirection_WalkLeft_Delay16X3_UnlockFacingDirection
	@ event command: waitmovement
	waitmovement 0x0000
	waitse
	playmoncry 0x0194, 0x0002
	@ event command: applymovement
	applymovement 0x000A, MossdeepCity_Movement_WalkInPlaceSlowLeftX3_Delay16X3_InitAffineAnim_WalkLeftAffine_ClearAffineAnim
	@ event command: applymovement
	applymovement 0x0009, MossdeepCity_Movement_Delay16X9_WalkFastRight
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0008
	setvar 0x8007, 0x0005
	@ event command: special
	special ShakeCamera
	waitstate
	@ event command: applymovement
	applymovement 0x000A, MossdeepCity_Movement_LockFacingDirection_WalkRight_Delay16X3_UnlockFacingDirection
	@ event command: applymovement
	applymovement 0x0009, MossdeepCity_Movement_LockFacingDirection_WalkLeft_Delay16X3_UnlockFacingDirection
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: special
	special SpawnCameraObject
	@ event command: applymovement
	applymovement 0x000A, MossdeepCity_Movement_WalkInPlaceSlowLeftX6
	@ event command: applymovement
	applymovement 0x0009, MossdeepCity_Movement_WalkInPlaceSlowRightX6
	@ event command: applymovement
	applymovement 0x007F, MossdeepCity_Movement_WalkSlowDiagNortheastX12
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: special
	special RemoveCameraObject
	setvar 0x405E, 0x0002
	clearflag 0x4000
	releaseall
	end
MossdeepCity_Movement_WalkSlowDiagSouthwestX12: @ 0x081E2102
	@ object movement sequence
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	step_end
MossdeepCity_Movement_WalkSlowDiagNortheastX12: @ 0x081E210F
	@ object movement sequence
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	step_end
EventScript_JP_081E211C: @ 0x081E211C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	delay 0x003C
	@ event command: special
	special SpawnCameraObject
	@ event command: applymovement
	applymovement 0x007F, MossdeepCity_Movement_WalkSlowDiagNortheastX2_WalkUpX7
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: special
	special RemoveCameraObject
	delay 0x003C
	fadescreenspeed 0x01, 0x08
	setweather 0x000F
	doweather
	setvar 0x8004, 0x0000
	@ event command: special
	special Script_DoRayquazaScene
	waitstate
	@ event command: applymovement
	applymovement 0x000A, PetalburgCity_Ext_WallyFaceLeft
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x003C
	waitse
	playmoncry 0x0194, 0x0002
	@ event command: applymovement
	applymovement 0x000A, MossdeepCity_Movement_WalkInPlaceSlowLeftX3_Delay16X3_InitAffineAnim_WalkLeftAffine_ClearAffineAnim
	@ event command: applymovement
	applymovement 0x0009, MossdeepCity_Movement_Delay16X9_WalkFastRight
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0008
	setvar 0x8007, 0x0005
	@ event command: special
	special ShakeCamera
	waitstate
	@ event command: applymovement
	applymovement 0x000A, MossdeepCity_Movement_LockFacingDirection_WalkRight_Delay16X3_UnlockFacingDirection
	@ event command: applymovement
	applymovement 0x0009, MossdeepCity_Movement_LockFacingDirection_WalkLeft_Delay16X3_UnlockFacingDirection
	@ event command: waitmovement
	waitmovement 0x0000
	waitse
	playmoncry 0x0195, 0x0002
	@ event command: applymovement
	applymovement 0x000A, MossdeepCity_Movement_Delay16X9_InitAffineAnim_WalkLeftAffine_ClearAffineAnim
	@ event command: applymovement
	applymovement 0x0009, MossdeepCity_Movement_WalkInPlaceSlowRightX3_Delay16X3_WalkFastRight
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0008
	setvar 0x8007, 0x0005
	@ event command: special
	special ShakeCamera
	waitstate
	@ event command: applymovement
	applymovement 0x000A, MossdeepCity_Movement_LockFacingDirection_WalkRight_Delay16X3_UnlockFacingDirection
	@ event command: applymovement
	applymovement 0x0009, MossdeepCity_Movement_LockFacingDirection_WalkLeft_Delay16X3_UnlockFacingDirection
	@ event command: waitmovement
	waitmovement 0x0000
	waitse
	playmoncry 0x0194, 0x0002
	@ event command: applymovement
	applymovement 0x000A, MossdeepCity_Movement_WalkInPlaceSlowLeftX3_Delay16X3_InitAffineAnim_WalkLeftAffine_ClearAffineAnim
	@ event command: applymovement
	applymovement 0x0009, MossdeepCity_Movement_Delay16X9_WalkFastRight
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0008
	setvar 0x8007, 0x0005
	@ event command: special
	special ShakeCamera
	waitstate
	@ event command: applymovement
	applymovement 0x000A, MossdeepCity_Movement_LockFacingDirection_WalkRight_Delay16X3_UnlockFacingDirection
	@ event command: applymovement
	applymovement 0x0009, MossdeepCity_Movement_LockFacingDirection_WalkLeft_Delay16X3_UnlockFacingDirection
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: special
	special SpawnCameraObject
	@ event command: applymovement
	applymovement 0x000A, MossdeepCity_Movement_WalkInPlaceSlowLeftX6
	@ event command: applymovement
	applymovement 0x0009, MossdeepCity_Movement_WalkInPlaceSlowRightX6
	@ event command: applymovement
	applymovement 0x007F, MossdeepCity_Movement_WalkDownX7_WalkSlowDiagSouthwestX2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: special
	special RemoveCameraObject
	setvar 0x405E, 0x0002
	clearflag 0x4000
	releaseall
	end
MossdeepCity_Movement_WalkSlowDiagNortheastX2_WalkUpX7: @ 0x081E223E
	@ object movement sequence
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
MossdeepCity_Movement_WalkDownX7_WalkSlowDiagSouthwestX2: @ 0x081E2248
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	step_end
MossdeepCity_Movement_WalkInPlaceSlowLeftX3_Delay16X3_InitAffineAnim_WalkLeftAffine_ClearAffineAnim: @ 0x081E2252
	@ object movement sequence
	walk_in_place_slow_left
	walk_in_place_slow_left
	walk_in_place_slow_left
	delay_16
	delay_16
	delay_16
	init_affine_anim
	walk_left_affine
	clear_affine_anim
	step_end
MossdeepCity_Movement_Delay16X9_InitAffineAnim_WalkLeftAffine_ClearAffineAnim: @ 0x081E225C
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	init_affine_anim
	walk_left_affine
	clear_affine_anim
	step_end
MossdeepCity_Movement_LockFacingDirection_WalkRight_Delay16X3_UnlockFacingDirection: @ 0x081E2269
	@ object movement sequence
	lock_facing_direction
	walk_right
	delay_16
	delay_16
	delay_16
	unlock_facing_direction
	step_end
MossdeepCity_Movement_WalkInPlaceSlowLeftX6: @ 0x081E2270
	@ object movement sequence
	walk_in_place_slow_left
	walk_in_place_slow_left
	walk_in_place_slow_left
	walk_in_place_slow_left
	walk_in_place_slow_left
	walk_in_place_slow_left
	step_end
MossdeepCity_Movement_WalkInPlaceSlowRightX3_Delay16X3_WalkFastRight: @ 0x081E2277
	@ object movement sequence
	walk_in_place_slow_right
	walk_in_place_slow_right
	walk_in_place_slow_right
	delay_16
	delay_16
	delay_16
	walk_fast_right
	step_end
MossdeepCity_Movement_Delay16X9_WalkFastRight: @ 0x081E227F
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_fast_right
	step_end
MossdeepCity_Movement_LockFacingDirection_WalkLeft_Delay16X3_UnlockFacingDirection: @ 0x081E228A
	@ object movement sequence
	lock_facing_direction
	walk_left
	delay_16
	delay_16
	delay_16
	unlock_facing_direction
	step_end
MossdeepCity_Movement_WalkInPlaceSlowRightX6: @ 0x081E2291
	@ object movement sequence
	walk_in_place_slow_right
	walk_in_place_slow_right
	walk_in_place_slow_right
	walk_in_place_slow_right
	walk_in_place_slow_right
	walk_in_place_slow_right
	step_end
EventScript_JP_081E2298: @ 0x081E2298
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: special
	special StorePlayerCoordsInVars
	compare_var_to_value 0x8004, 0x002B
	goto_if 0x05, EventScript_JP_081E2368
	compare_var_to_value 0x8005, 0x0020
	goto_if 0x05, EventScript_JP_081E2368
	goto EventScript_JP_081E22B8
	.byte 0x02
EventScript_JP_081E22B8: @ 0x081E22B8
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	delay 0x003C
	@ event command: special
	special SpawnCameraObject
	@ event command: applymovement
	applymovement 0x007F, MossdeepCity_Movement_WalkSlowDiagSouthwestX12
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: special
	special RemoveCameraObject
	delay 0x003C
	fadescreenspeed 0x01, 0x08
	call EventScript_JP_081E241C
	@ event command: removeobject
	removeobject 0x0009
	@ event command: removeobject
	removeobject 0x000A
	@ event command: addobject
	addobject 0x000B
	setvar 0x8004, 0x0001
	@ event command: special
	special Script_DoRayquazaScene
	waitstate
	playse 0x0057
	@ event command: special
	special SpawnCameraObject
	@ event command: applymovement
	applymovement 0x007F, MossdeepCity_Movement_WalkUpX4
	@ event command: waitmovement
	waitmovement 0x0000
	waitse
	playmoncry 0x0196, 0x0002
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0008
	setvar 0x8007, 0x0003
	@ event command: special
	special ShakeCamera
	waitstate
	waitse
	playmoncry 0x0196, 0x0002
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	setvar 0x8006, 0x0008
	setvar 0x8007, 0x0005
	@ event command: special
	special ShakeCamera
	waitstate
	waitmoncry
	setweather 0x0000
	doweather
	@ event command: applymovement
	applymovement 0x000B, MossdeepCity_Movement_WalkFastUp_WalkFastestUpX6
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: removeobject
	removeobject 0x000B
	@ event command: special
	special WaitWeather
	waitstate
	clearflag 0x088A
	setvar 0x40CA, 0x0003
	clearflag 0x0053
	fadenewbgm 0x01BD
	delay 0x0078
	clearflag 0x4000
	@ event command: warp8
	warp8 MAP_ID_SOOTOPOLIS_CITY, 0xFF, 0x002B, 0x0020
	.byte 0x27, 0x02
EventScript_JP_081E2368: @ 0x081E2368
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	delay 0x003C
	@ event command: special
	special SpawnCameraObject
	@ event command: applymovement
	applymovement 0x007F, MossdeepCity_Movement_WalkSlowDiagNortheastX2_WalkUpX7
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: special
	special RemoveCameraObject
	delay 0x003C
	fadescreenspeed 0x01, 0x08
	call EventScript_JP_081E241C
	@ event command: removeobject
	removeobject 0x0009
	@ event command: removeobject
	removeobject 0x000A
	@ event command: addobject
	addobject 0x000B
	setvar 0x8004, 0x0001
	@ event command: special
	special Script_DoRayquazaScene
	waitstate
	@ event command: special
	special SpawnCameraObject
	@ event command: applymovement
	applymovement 0x007F, MossdeepCity_Movement_WalkUpX4
	@ event command: applymovement
	applymovement 0x00FF, MossdeepCity_Movement_WalkUpX4_1
	@ event command: waitmovement
	waitmovement 0x0000
	waitse
	playmoncry 0x0196, 0x0002
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0008
	setvar 0x8007, 0x0003
	@ event command: special
	special ShakeCamera
	waitstate
	waitse
	playmoncry 0x0196, 0x0002
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	setvar 0x8006, 0x0008
	setvar 0x8007, 0x0005
	@ event command: special
	special ShakeCamera
	waitstate
	waitmoncry
	setweather 0x0000
	doweather
	@ event command: applymovement
	applymovement 0x000B, MossdeepCity_Movement_WalkFastUp_WalkFastestUpX6
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: removeobject
	removeobject 0x000B
	@ event command: special
	special WaitWeather
	waitstate
	clearflag 0x088A
	setvar 0x40CA, 0x0002
	clearflag 0x0053
	fadenewbgm 0x016D
	delay 0x0078
	clearflag 0x4000
	@ event command: warp8
	warp8 MAP_ID_SOOTOPOLIS_CITY, 0xFF, 0x001D, 0x0035
	.byte 0x27, 0x02
EventScript_JP_081E241C: @ 0x081E241C
	setmetatile 0x001B, 0x002B, 0x0290, 0x0000
	setmetatile 0x001C, 0x002B, 0x0290, 0x0000
	setmetatile 0x001D, 0x002B, 0x0290, 0x0000
	setmetatile 0x001E, 0x002B, 0x0290, 0x0000
	setmetatile 0x001B, 0x002C, 0x0290, 0x0000
	setmetatile 0x001C, 0x002C, 0x0290, 0x0000
	setmetatile 0x001D, 0x002C, 0x0290, 0x0000
	setmetatile 0x001E, 0x002C, 0x0290, 0x0000
	setmetatile 0x001B, 0x002D, 0x0290, 0x0000
	setmetatile 0x001C, 0x002D, 0x0290, 0x0000
	setmetatile 0x001D, 0x002D, 0x0290, 0x0000
	setmetatile 0x001E, 0x002D, 0x0290, 0x0000
	setmetatile 0x0020, 0x002B, 0x0290, 0x0000
	setmetatile 0x0021, 0x002B, 0x0290, 0x0000
	setmetatile 0x0022, 0x002B, 0x0290, 0x0000
	setmetatile 0x0023, 0x002B, 0x0290, 0x0000
	setmetatile 0x0020, 0x002C, 0x0290, 0x0000
	setmetatile 0x0021, 0x002C, 0x0290, 0x0000
	setmetatile 0x0022, 0x002C, 0x0290, 0x0000
	setmetatile 0x0023, 0x002C, 0x0290, 0x0000
	setmetatile 0x0020, 0x002D, 0x0290, 0x0000
	setmetatile 0x0021, 0x002D, 0x0290, 0x0000
	setmetatile 0x0022, 0x002D, 0x0290, 0x0000
	setmetatile 0x0023, 0x002D, 0x0290, 0x0000
	return
MossdeepCity_Movement_WalkFastUp_WalkFastestUpX6: @ 0x081E24F5
	@ object movement sequence
	walk_fast_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	step_end
MossdeepCity_Movement_WalkUpX4: @ 0x081E24FD
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
MossdeepCity_Movement_WalkUpX4_1: @ 0x081E2502
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
	.globl MossdeepCity_Movement_WalkDownX4
MossdeepCity_Movement_WalkDownX4: @ 0x081E2507
	.byte 0x08, 0x08, 0x08, 0x08, 0xFE
	.globl MossdeepCity_Movement_WalkSlowDiagNortheastX8_WalkRightX4
MossdeepCity_Movement_WalkSlowDiagNortheastX8_WalkRightX4: @ 0x081E250C
	.byte 0x91, 0x91, 0x91, 0x91, 0x91, 0x91, 0x91, 0x91, 0x0B, 0x0B, 0x0B
	.byte 0x0B, 0xFE
	.globl MossdeepCity_Movement_WalkDownX11_WalkSlowDiagSouthwestX2
MossdeepCity_Movement_WalkDownX11_WalkSlowDiagSouthwestX2: @ 0x081E2519
	.byte 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x92, 0x92, 0xFE
.globl EventScript_JP_081E2527
EventScript_JP_081E2527: @ 0x081E2527
	lock
	faceplayer
	compare_var_to_value 0x405E, 0x0006
	goto_if 0x04, EventScript_JP_081E255E
	compare_var_to_value 0x405E, 0x0005
	goto_if 0x01, EventScript_JP_081E2568
	compare_var_to_value 0x405E, 0x0002
	goto_if 0x04, EventScript_JP_081E2554
	loadword 0x00, gText_Rom_1E305D
	callstd 0x04
	release
	end
EventScript_JP_081E2554: @ 0x081E2554
	loadword 0x00, gText_Rom_1E30B4
	callstd 0x04
	release
	end
EventScript_JP_081E255E: @ 0x081E255E
	loadword 0x00, gText_Rom_1E3148
	callstd 0x04
	release
	end
EventScript_JP_081E2568: @ 0x081E2568
	loadword 0x00, gText_Rom_1E311F
	callstd 0x04
	release
	end
.globl EventScript_JP_081E2572
EventScript_JP_081E2572: @ 0x081E2572
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	compare_var_to_value 0x405E, 0x0001
	goto_if 0x03, EventScript_JP_081E25B5
	compare_var_to_value 0x405E, 0x0006
	goto_if 0x04, EventScript_JP_081E25B5
	compare_var_to_value 0x405E, 0x0005
	goto_if 0x01, EventScript_JP_081E25AA
	loadword 0x00, gText_Rom_1E2F96
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0003, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
EventScript_JP_081E25AA: @ 0x081E25AA
	loadword 0x00, gText_Rom_1E2FBE
	callstd 0x04
	closemessage
	release
	end
EventScript_JP_081E25B5: @ 0x081E25B5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	dotimebasedevents
	@ event command: special
	special GetPlayerBigGuyGirlString
	checkflag 0x0932
	goto_if 0x01, EventScript_JP_081E2655
	loadword 0x00, gText_Rom_263F33
	callstd 0x04
	random 0x000A
	addvar 0x800D, 0x0014
	addvar 0x800D, 0x0085
	setorcopyvar 0x8000, 0x800D
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x0932
	loadword 0x00, gText_Rom_263FB4
	callstd 0x04
	random 0x0002
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081E2613
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081E2634
	end
EventScript_JP_081E2613: @ 0x081E2613
	setorcopyvar 0x8000, 0x008F
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	loadword 0x00, gText_Rom_263FD5
	callstd 0x04
	release
	end
EventScript_JP_081E2634: @ 0x081E2634
	setorcopyvar 0x8000, 0x0093
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	loadword 0x00, gText_Rom_263FD5
	callstd 0x04
	release
	end
EventScript_JP_081E2655: @ 0x081E2655
	loadword 0x00, gText_Rom_263FF1
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081E2672
	loadword 0x00, gText_Rom_26404E
	callstd 0x04
	release
	end
EventScript_JP_081E2672: @ 0x081E2672
	loadword 0x00, gText_Rom_264025
	callstd 0x04
	release
	end
.globl EventScript_JP_081E267C
EventScript_JP_081E267C: @ 0x081E267C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x0002, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	compare_var_to_value 0x405E, 0x0005
	goto_if 0x01, EventScript_JP_081E26A7
	loadword 0x00, gText_Rom_1E32A3
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0002, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	releaseall
	end
EventScript_JP_081E26A7: @ 0x081E26A7
	loadword 0x00, gText_Rom_1E3326
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_081E26B1
EventScript_JP_081E26B1: @ 0x081E26B1
	lock
	faceplayer
	compare_var_to_value 0x405E, 0x0006
	goto_if 0x04, EventScript_JP_081E26C8
	loadword 0x00, gText_Rom_1E2FFF
	callstd 0x04
	release
	end
EventScript_JP_081E26C8: @ 0x081E26C8
	loadword 0x00, gText_Rom_1E304B
	callstd 0x04
	release
	end
.globl EventScript_JP_081E26D2
EventScript_JP_081E26D2: @ 0x081E26D2
	lock
	faceplayer
	compare_var_to_value 0x405E, 0x0006
	goto_if 0x04, EventScript_JP_081E2714
	compare_var_to_value 0x405E, 0x0005
	goto_if 0x01, EventScript_JP_081E271E
	compare_var_to_value 0x405E, 0x0002
	goto_if 0x04, EventScript_JP_081E26FF
	loadword 0x00, gText_Rom_1E317C
	callstd 0x04
	release
	end
EventScript_JP_081E26FF: @ 0x081E26FF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_1E31E2
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0008, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
EventScript_JP_081E2714: @ 0x081E2714
	loadword 0x00, gText_Rom_1E324C
	callstd 0x04
	release
	end
EventScript_JP_081E271E: @ 0x081E271E
	loadword 0x00, gText_Rom_1E3217
	callstd 0x04
	release
	end
.globl EventScript_JP_081E2728
EventScript_JP_081E2728: @ 0x081E2728
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x0004, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	compare_var_to_value 0x405E, 0x0005
	goto_if 0x01, EventScript_JP_081E2773
	compare_var_to_value 0x405E, 0x0006
	goto_if 0x04, EventScript_JP_081E2769
	compare_var_to_value 0x405E, 0x0001
	goto_if 0x03, EventScript_JP_081E2769
	loadword 0x00, gText_Rom_1E2E17
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0004, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
EventScript_JP_081E2769: @ 0x081E2769
	loadword 0x00, gText_Rom_1E2DD3
	callstd 0x04
	release
	end
EventScript_JP_081E2773: @ 0x081E2773
	loadword 0x00, gText_Rom_1E2E24
	callstd 0x04
	release
	end
.globl EventScript_JP_081E277D
EventScript_JP_081E277D: @ 0x081E277D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x0005, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	compare_var_to_value 0x405E, 0x0005
	goto_if 0x01, EventScript_JP_081E27C7
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_081E27D1
	compare_var_to_value 0x405E, 0x0006
	goto_if 0x04, EventScript_JP_081E27DB
	compare_var_to_value 0x405E, 0x0001
	goto_if 0x03, EventScript_JP_081E27DB
	loadword 0x00, gText_Rom_1E2C9A
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0005, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
EventScript_JP_081E27C7: @ 0x081E27C7
	loadword 0x00, gText_Rom_1E2D00
	callstd 0x04
	release
	end
EventScript_JP_081E27D1: @ 0x081E27D1
	loadword 0x00, gText_Rom_1E2D1F
	callstd 0x04
	release
	end
EventScript_JP_081E27DB: @ 0x081E27DB
	loadword 0x00, gText_Rom_1E2C5C
	callstd 0x04
	release
	end
.globl EventScript_JP_081E27E5
EventScript_JP_081E27E5: @ 0x081E27E5
	loadword 0x00, gText_Rom_1E2C09
	callstd 0x03
	end
.globl EventScript_JP_081E27EE
EventScript_JP_081E27EE: @ 0x081E27EE
	loadword 0x00, gText_Rom_1E2C31
	callstd 0x03
	end
EventScript_JP_081E27F7: @ 0x081E27F7
	loadword 0x00, gText_Rom_1E2C4D
	callstd 0x03
	end
.globl EventScript_JP_081E2800
EventScript_JP_081E2800: @ 0x081E2800
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x0007, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	checkflag 0x0133
	call_if 0x00, EventScript_JP_081E2866
	compare_var_to_value 0x405E, 0x0002
	goto_if 0x01, EventScript_JP_081E2848
	compare_var_to_value 0x405E, 0x0003
	goto_if 0x01, EventScript_JP_081E285C
	compare_var_to_value 0x405E, 0x0004
	goto_if 0x01, EventScript_JP_081E285C
	checkflag 0x009E
	goto_if 0x01, EventScript_JP_081E2852
	loadword 0x00, gText_Rom_1E36F0
	callstd 0x04
	releaseall
	end
EventScript_JP_081E2848: @ 0x081E2848
	loadword 0x00, gText_Rom_1E369B
	callstd 0x04
	releaseall
	end
EventScript_JP_081E2852: @ 0x081E2852
	loadword 0x00, gText_Rom_1E3726
	callstd 0x04
	releaseall
	end
EventScript_JP_081E285C: @ 0x081E285C
	loadword 0x00, gText_Rom_1E36BF
	callstd 0x04
	releaseall
	end
EventScript_JP_081E2866: @ 0x081E2866
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_1E350F
	callstd 0x04
	closemessage
	compare_var_to_value 0x800C, 0x0003
	call_if 0x01, EventScript_JP_081E28DD
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_081E28EF
	loadword 0x00, gText_Rom_1E35DC
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0007, MossdeepCity_Movement_WalkUpX2_WalkRightX4_WalkDownX2_WalkRightX5_Then57Actions_Delay16X2_WalkRight_WalkUpX2
	@ event command: applymovement
	applymovement 0x00FF, MossdeepCity_Movement_WalkUpX3_WalkRightX4_WalkDownX2_WalkRightX5_Then50Actions_WalkLeftX8_WalkDownX8_WalkRightX3
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x0078
	@ event command: applymovement
	applymovement 0x0001, MossdeepCity_Movement_WalkSlowLeft_WalkInPlaceFastestRight
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0007, MossdeepCity_Movement_WalkDownX2_WalkLeft_Delay8_WalkRight_WalkUpX3_WalkRight_WalkInPlaceFastestLeft
	@ event command: applymovement
	applymovement 0x00FF, MossdeepCity_Movement_Delay16X3_Delay8_WalkRightX2_WalkUpX3_WalkInPlaceFastestRight
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1E3656
	callstd 0x04
	closemessage
	setflag 0x0133
	@ event command: applymovement
	applymovement 0x00FF, MossdeepCity_Movement_WalkUpX2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: warp
	warp MAP_ID_CAVE_OF_ORIGIN_ENTRANCE, 0xFF, 0x0009, 0x0014
	.byte 0x27, 0x02
EventScript_JP_081E28DD: @ 0x081E28DD
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0007, MossdeepCity_Movement_WalkUpX3_WalkRight_WalkUpX11_WalkLeft_WalkUpX4_WalkLeftX4_WalkUpX11_WalkInPlaceFastestDown
	@ event command: applymovement
	applymovement 0x00FF, MossdeepCity_Movement_WalkLeft_WalkUpX3_WalkRight_WalkUpX11_WalkLeft_WalkUpX4_WalkLeftX4_WalkUpX10
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081E28EF: @ 0x081E28EF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0007, MossdeepCity_Movement_WalkUpX3_WalkRight_WalkUpX11_WalkLeft_WalkUpX4_WalkLeftX4_WalkUpX11_WalkInPlaceFastestDown
	@ event command: applymovement
	applymovement 0x00FF, MossdeepCity_Movement_WalkUpX4_WalkRight_WalkUpX11_WalkLeft_WalkUpX4_WalkLeftX4_WalkUpX10
	@ event command: waitmovement
	waitmovement 0x0000
	return
MossdeepCity_Movement_WalkUpX3_WalkRight_WalkUpX11_WalkLeft_WalkUpX4_WalkLeftX4_WalkUpX11_WalkInPlaceFastestDown: @ 0x081E2901
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_fastest_down
	step_end
MossdeepCity_Movement_WalkLeft_WalkUpX3_WalkRight_WalkUpX11_WalkLeft_WalkUpX4_WalkLeftX4_WalkUpX10: @ 0x081E2926
	@ object movement sequence
	walk_left
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
MossdeepCity_Movement_WalkUpX4_WalkRight_WalkUpX11_WalkLeft_WalkUpX4_WalkLeftX4_WalkUpX10: @ 0x081E294A
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
MossdeepCity_Movement_WalkUpX2_WalkRightX4_WalkDownX2_WalkRightX5_Then57Actions_Delay16X2_WalkRight_WalkUpX2: @ 0x081E296E
	@ object movement sequence
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	delay_4
	walk_in_place_fastest_left
	delay_16
	delay_16
	walk_right
	walk_up
	walk_up
	step_end
MossdeepCity_Movement_WalkUpX3_WalkRightX4_WalkDownX2_WalkRightX5_Then50Actions_WalkLeftX8_WalkDownX8_WalkRightX3: @ 0x081E29A8
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end
MossdeepCity_Movement_WalkSlowLeft_WalkInPlaceFastestRight: @ 0x081E29DB
	@ object movement sequence
	walk_slow_left
	walk_in_place_fastest_right
	step_end
MossdeepCity_Movement_WalkDownX2_WalkLeft_Delay8_WalkRight_WalkUpX3_WalkRight_WalkInPlaceFastestLeft: @ 0x081E29DE
	@ object movement sequence
	walk_down
	walk_down
	walk_left
	delay_8
	walk_right
	walk_up
	walk_up
	walk_up
	walk_right
	walk_in_place_fastest_left
	step_end
MossdeepCity_Movement_Delay16X3_Delay8_WalkRightX2_WalkUpX3_WalkInPlaceFastestRight: @ 0x081E29E9
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	delay_8
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_in_place_fastest_right
	step_end
MossdeepCity_Movement_WalkUpX2: @ 0x081E29F4
	@ object movement sequence
	walk_up
	walk_up
	step_end
.globl EventScript_JP_081E29F7
EventScript_JP_081E29F7: @ 0x081E29F7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x000F, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	compare_var_to_value 0x405E, 0x0005
	goto_if 0x01, EventScript_JP_081E2A22
	loadword 0x00, gText_Rom_1E2D60
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x000F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	releaseall
	end
EventScript_JP_081E2A22: @ 0x081E2A22
	loadword 0x00, gText_Rom_1E2DAA
	callstd 0x04
	closemessage
	releaseall
	end
.globl EventScript_JP_081E2A2D
EventScript_JP_081E2A2D: @ 0x081E2A2D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	compare_var_to_value 0x405E, 0x0005
	goto_if 0x01, EventScript_JP_081E2A61
	loadword 0x00, gText_Rom_1E2E35
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1E2E55
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	releaseall
	end
EventScript_JP_081E2A61: @ 0x081E2A61
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1E2E7F
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_081E2A75
EventScript_JP_081E2A75: @ 0x081E2A75
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x000D, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	compare_var_to_value 0x405E, 0x0005
	goto_if 0x01, EventScript_JP_081E2AA0
	loadword 0x00, gText_Rom_1E2FD7
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x000D, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	releaseall
	end
EventScript_JP_081E2AA0: @ 0x081E2AA0
	loadword 0x00, gText_Rom_1E2FEB
	callstd 0x04
	closemessage
	releaseall
	end
.globl EventScript_JP_081E2AAB
EventScript_JP_081E2AAB: @ 0x081E2AAB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x000C, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	compare_var_to_value 0x405E, 0x0005
	goto_if 0x01, EventScript_JP_081E2AD6
	loadword 0x00, gText_Rom_1E2EC0
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x000C, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	releaseall
	end
EventScript_JP_081E2AD6: @ 0x081E2AD6
	loadword 0x00, gText_Rom_1E2F2C
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_081E2AE0
EventScript_JP_081E2AE0: @ 0x081E2AE0
	lock
	faceplayer
	compare_var_to_value 0x405E, 0x0004
	goto_if 0x01, EventScript_JP_081E2B72
	checkflag 0x0138
	goto_if 0x01, EventScript_JP_081E2B7C
	checkflag 0x009E
	goto_if 0x01, EventScript_JP_081E2B09
	loadword 0x00, gText_Rom_1E37B8
	callstd 0x04
	release
	end
EventScript_JP_081E2B09: @ 0x081E2B09
	loadword 0x00, gText_Rom_1E380B
	callstd 0x04
	setorcopyvar 0x8000, 0x0159
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	setflag 0x0138
	loadword 0x00, gText_Rom_1E38A0
	callstd 0x04
	closemessage
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_081E2B4C
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_081E2B4C
	compare_var_to_value 0x800C, 0x0003
	call_if 0x01, EventScript_JP_081E2B5F
	release
	end
EventScript_JP_081E2B4C: @ 0x081E2B4C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0012, MossdeepCity_Movement_WalkRight_WalkInPlaceFastestDown
	@ event command: waitmovement
	waitmovement 0x0000
	moveobjectoffscreen 0x0012
	setvar 0x40D8, 0x0001
	return
EventScript_JP_081E2B5F: @ 0x081E2B5F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0012, MossdeepCity_Movement_WalkLeft_WalkInPlaceFastestDown
	@ event command: waitmovement
	waitmovement 0x0000
	moveobjectoffscreen 0x0012
	setvar 0x40D8, 0x0002
	return
EventScript_JP_081E2B72: @ 0x081E2B72
	loadword 0x00, gText_Rom_1E376F
	callstd 0x04
	release
	end
EventScript_JP_081E2B7C: @ 0x081E2B7C
	loadword 0x00, gText_Rom_1E3943
	callstd 0x04
	release
	end
MossdeepCity_Movement_WalkRight_WalkInPlaceFastestDown: @ 0x081E2B86
	@ object movement sequence
	walk_right
	walk_in_place_fastest_down
	step_end
MossdeepCity_Movement_WalkLeft_WalkInPlaceFastestDown: @ 0x081E2B89
	@ object movement sequence
	walk_left
	walk_in_place_fastest_down
	step_end
.globl EventScript_JP_081E2B8C
EventScript_JP_081E2B8C: @ 0x081E2B8C
	lockall
	compare_var_to_value 0x405E, 0x0005
	goto_if 0x01, EventScript_JP_081E2BA3
	loadword 0x00, gText_Rom_1E335D
	callstd 0x04
	closemessage
	releaseall
	end
EventScript_JP_081E2BA3: @ 0x081E2BA3
	loadword 0x00, gText_Rom_1E33BA
	callstd 0x04
	setflag 0x0135
	checkflag 0x0134
	goto_if 0x01, EventScript_JP_081E2BE6
	releaseall
	end
.globl EventScript_JP_081E2BB9
EventScript_JP_081E2BB9: @ 0x081E2BB9
	lockall
	compare_var_to_value 0x405E, 0x0005
	goto_if 0x01, EventScript_JP_081E2BD0
	loadword 0x00, gText_Rom_1E343A
	callstd 0x04
	closemessage
	releaseall
	end
EventScript_JP_081E2BD0: @ 0x081E2BD0
	loadword 0x00, gText_Rom_1E3495
	callstd 0x04
	setflag 0x0134
	checkflag 0x0135
	goto_if 0x01, EventScript_JP_081E2BE6
	releaseall
	end
EventScript_JP_081E2BE6: @ 0x081E2BE6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setflag 0x033B
	setflag 0x033A
	setflag 0x009E
	clearflag 0x0358
	clearflag 0x0394
	setvar 0x40B9, 0x0002
	@ event command: warpsilent
	warpsilent MAP_ID_SOOTOPOLIS_CITY, 0xFF, 0x001F, 0x0022
	.byte 0x27, 0x6B, 0x02, 0x98, 0xFE, 0x9A, 0xFE
