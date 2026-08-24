	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:222 EverGrandeCity_ChampionsRoom_Text_IntroSpeech
	.globl EverGrandeCity_ChampionsRoom_Text_IntroSpeech
EverGrandeCity_ChampionsRoom_Text_IntroSpeech: @ 0x08210B2D
	.string "ミクリ『ようこそ {PLAYER}{KUN}\pルネシティで おこった だいじけんを\nきみが ひとりで かいけつ したのは\lなかなか みごと だったよ\p……おっと!\pきみひとりの ちからで\nかいけつ したわけでは なかったな\pきみと…… きみの ポケモンが\nちからを あわせたからこそ\lこんなんを のりこえ られたんだ\pわたしたち トレーナーは\nいろんな どうぐを あたえたり\lいろんな わざを おしえたり して\lポケモンを そだてている……\pけれど わたしたち じしんも\nポケモンから たくさんの ことを\lおしえられて いるのさ\pそして ここは……\nその せいかを ぶつけあう ばしょ\pさあ!\pホウエンで いちばん かれいに\nポケモンと おどれるのは だれなのか!\pいま ここで みせて もらおう!{EOS}"
	.if (. - EverGrandeCity_ChampionsRoom_Text_IntroSpeech) > 0x155
	.error "EverGrandeCity_ChampionsRoom_Text_IntroSpeech may not grow beyond its original slot"
	.endif
	.if (. - EverGrandeCity_ChampionsRoom_Text_IntroSpeech) < 0x155
	.space 0x155 - (. - EverGrandeCity_ChampionsRoom_Text_IntroSpeech)
	.endif
	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:225 EverGrandeCity_ChampionsRoom_Text_Defeat (+1 aliases)
	.globl EverGrandeCity_ChampionsRoom_Text_Defeat
EverGrandeCity_ChampionsRoom_Text_Defeat: @ 0x08210C82
	.string "チャンピオンである\nわたしを うちまかす とは……\pなんと ワンダフル!\nにくらしいほど エレガント!\lだけど とっても グロリアス!\pさすがだよ {PLAYER}{KUN}!\pきみは ほんとうに すばらしい\nポケモン トレーナーだ!{EOS}"
	.if (. - EverGrandeCity_ChampionsRoom_Text_Defeat) > 0x6d
	.error "EverGrandeCity_ChampionsRoom_Text_Defeat may not grow beyond its original slot"
	.endif
	.if (. - EverGrandeCity_ChampionsRoom_Text_Defeat) < 0x6d
	.space 0x6d - (. - EverGrandeCity_ChampionsRoom_Text_Defeat)
	.endif
	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:228 EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech
	.globl EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech
EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech: @ 0x08210CEF
	.string "ミクリ『きみが くりだしてきた\nポケモンの かずかず……\pときに はるかぜの ように まい\nあるいは いなづまの ように さす\pそんな ポケモンたちを\nかろやかに あやつる きみの すがた\pこの わたしで さえも\nほれぼれ するほど だったよ!\pこの ポケモンリーグで\nみごと ちょうてんに たった きみこそ\lホウエンちほうの あたらしい……{EOS}"
	.if (. - EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech) > 0xac
	.error "EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech may not grow beyond its original slot"
	.endif
	.if (. - EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech) < 0xac
	.space 0xac - (. - EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech)
	.endif
	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:231 EverGrandeCity_ChampionsRoom_Text_MayAdvice
	.globl EverGrandeCity_ChampionsRoom_Text_MayAdvice
EverGrandeCity_ChampionsRoom_Text_MayAdvice: @ 0x08210D9B
	.string "ハルカ『{PLAYER}{KUN}!\pチャンピオンに ちょうせん するまえに\nアドバイス……!{EOS}"
	.if (. - EverGrandeCity_ChampionsRoom_Text_MayAdvice) > 0x27
	.error "EverGrandeCity_ChampionsRoom_Text_MayAdvice may not grow beyond its original slot"
	.endif
	.if (. - EverGrandeCity_ChampionsRoom_Text_MayAdvice) < 0x27
	.space 0x27 - (. - EverGrandeCity_ChampionsRoom_Text_MayAdvice)
	.endif
	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:234 EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver
	.globl EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver
EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver: @ 0x08210DC2
	.string "ハルカ『あれ? あれれ?\p{PLAYER}{KUN}……\nひょっとして……\lもう おわっちゃった……?{EOS}"
	.if (. - EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver) > 0x2b
	.error "EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver may not grow beyond its original slot"
	.endif
	.if (. - EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver) < 0x2b
	.space 0x2b - (. - EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver)
	.endif
	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:237 EverGrandeCity_ChampionsRoom_Text_BrendanAdvice
	.globl EverGrandeCity_ChampionsRoom_Text_BrendanAdvice
EverGrandeCity_ChampionsRoom_Text_BrendanAdvice: @ 0x08210DED
	.string "ユウキ『{PLAYER}!\pチャンピオンに ちょうせん するまえに\nオレが アドバイス してやろうか……{EOS}"
	.if (. - EverGrandeCity_ChampionsRoom_Text_BrendanAdvice) > 0x2f
	.error "EverGrandeCity_ChampionsRoom_Text_BrendanAdvice may not grow beyond its original slot"
	.endif
	.if (. - EverGrandeCity_ChampionsRoom_Text_BrendanAdvice) < 0x2f
	.space 0x2f - (. - EverGrandeCity_ChampionsRoom_Text_BrendanAdvice)
	.endif
	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:240 EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon
	.globl EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon
EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon: @ 0x08210E1C
	.string "ユウキ『{PLAYER}……\pおまえ ひょっとして\nチャンピオンに かったのか?{EOS}"
	.if (. - EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon) > 0x23
	.error "EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon may not grow beyond its original slot"
	.endif
	.if (. - EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon) < 0x23
	.space 0x23 - (. - EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon)
	.endif
	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:243 EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex
	.globl EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex
EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex: @ 0x08210E3F
	.string "オダマキ『ほれみろ {RIVAL}!\p{PLAYER}{KUN}なら しんぱい いらんと\nわたしが いったとおり だろう!\p…… …… ……\n{PLAYER}{KUN} とうとう やりとげたな\pきみが トウカ ジムの おとうさんに\nかちぬいたと きいた ときに\lもしや…… とは おもったが\pまさか ほんとうに チャンピオンに\nなってしまうとは な!\p……おお そうだ!\pきみの ポケモンずかんは どうなった?\nわたしに みせて ごらん!{EOS}"
	.if (. - EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex) > 0xc5
	.error "EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex may not grow beyond its original slot"
	.endif
	.if (. - EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex) < 0xc5
	.space 0xc5 - (. - EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex)
	.endif
	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:246 EverGrandeCity_ChampionsRoom_Text_BirchCongratulations
	.globl EverGrandeCity_ChampionsRoom_Text_BirchCongratulations
EverGrandeCity_ChampionsRoom_Text_BirchCongratulations: @ 0x08210F04
	.string "オダマキ『とにかく おめでとう!\pさあ むねをはって おくの へやに\nいってくるが いいよ!{EOS}"
	.if (. - EverGrandeCity_ChampionsRoom_Text_BirchCongratulations) > 0x2f
	.error "EverGrandeCity_ChampionsRoom_Text_BirchCongratulations may not grow beyond its original slot"
	.endif
	.if (. - EverGrandeCity_ChampionsRoom_Text_BirchCongratulations) < 0x2f
	.space 0x2f - (. - EverGrandeCity_ChampionsRoom_Text_BirchCongratulations)
	.endif
	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:249 EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe
	.globl EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe
EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe: @ 0x08210F33
	.string "ミクリ『{PLAYER}{KUN}\p……いや あらためて よびなおそう\pあたらしい チャンピオン!\pさあ わたしに ついて きたまえ{EOS}"
	.if (. - EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe) > 0x3a
	.error "EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe may not grow beyond its original slot"
	.endif
	.if (. - EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe) < 0x3a
	.space 0x3a - (. - EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe)
	.endif
	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:252 EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside
	.globl EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside
EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside: @ 0x08210F6D
	.string "ミクリ『もうしわけ ないが……\pここから さきの へやは\nチャンピオンに なった トレーナー だけが\lはいることの できる ばしょ\pきみは そこで オダマキはかせと\nいっしょに まっていて くれたまえ{EOS}"
	.if (. - EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside) > 0x65
	.error "EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside may not grow beyond its original slot"
	.endif
	.if (. - EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside) < 0x65
	.space 0x65 - (. - EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside)
	.endif
	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:255 EverGrandeCity_ChampionsRoom_Text_MayCongratulations
	.globl EverGrandeCity_ChampionsRoom_Text_MayCongratulations
EverGrandeCity_ChampionsRoom_Text_MayCongratulations: @ 0x08210FD2
	.string "ハルカ『……がーん!\p…… …… ……\n…… …… ……\pなーんてね いいの いいの!\nだって そういう きまり だもんね!\p{PLAYER}{KUN}!\nほんとうに おめでとう!!{EOS}"
	.if (. - EverGrandeCity_ChampionsRoom_Text_MayCongratulations) > 0x53
	.error "EverGrandeCity_ChampionsRoom_Text_MayCongratulations may not grow beyond its original slot"
	.endif
	.if (. - EverGrandeCity_ChampionsRoom_Text_MayCongratulations) < 0x53
	.space 0x53 - (. - EverGrandeCity_ChampionsRoom_Text_MayCongratulations)
	.endif
	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:258 EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations
	.globl EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations
EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations: @ 0x08211025
	.string "ユウキ『……えーっ!\n…… …… ……\n…… …… ……\pま しかたないか\nそういう きまり だもんな\p{PLAYER}! よかったな\nおめでとう!!{EOS}"
	.if (. - EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations) > 0x46
	.error "EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations may not grow beyond its original slot"
	.endif
	.if (. - EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations) < 0x46
	.space 0x46 - (. - EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations)
	.endif
	@ analyzed canonical ROM range 0x0821106B-0x082111E7
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_EverGrandeCity_Hall1_OnWarpIntoMap: @ 0x0821106B
	@ map script dispatch table
	.byte 0x04
	.4byte gMapScriptConditionTable_EverGrandeCity_Hall1_OnWarpIntoMap
	.byte 0
gMapScriptConditionTable_EverGrandeCity_Hall1_OnWarpIntoMap: @ 0x08211071
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_0821107B
	.2byte 0
EventScript_JP_0821107B: @ 0x0821107B
	turnobject 0x00FF, 0x02
	end
gMapScriptDispatch_EverGrandeCity_Hall2_OnWarpIntoMap: @ 0x08211080
	@ map script dispatch table
	.byte 0x04
	.4byte gMapScriptConditionTable_EverGrandeCity_Hall2_OnWarpIntoMap
	.byte 0
gMapScriptConditionTable_EverGrandeCity_Hall2_OnWarpIntoMap: @ 0x08211086
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_08211090
	.2byte 0
EventScript_JP_08211090: @ 0x08211090
	turnobject 0x00FF, 0x02
	end
gMapScriptDispatch_EverGrandeCity_Hall3_OnWarpIntoMap: @ 0x08211095
	@ map script dispatch table
	.byte 0x04
	.4byte gMapScriptConditionTable_EverGrandeCity_Hall3_OnWarpIntoMap
	.byte 0
gMapScriptConditionTable_EverGrandeCity_Hall3_OnWarpIntoMap: @ 0x0821109B
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_082110A5
	.2byte 0
EventScript_JP_082110A5: @ 0x082110A5
	turnobject 0x00FF, 0x02
	end
gMapScriptDispatch_EverGrandeCity_Hall4_OnWarpIntoMap: @ 0x082110AA
	@ map script dispatch table
	.byte 0x04
	.4byte gMapScriptConditionTable_EverGrandeCity_Hall4_OnWarpIntoMap
	.byte 0
gMapScriptConditionTable_EverGrandeCity_Hall4_OnWarpIntoMap: @ 0x082110B0
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_082110BA
	.2byte 0
EventScript_JP_082110BA: @ 0x082110BA
	turnobject 0x00FF, 0x02
	end
gMapScriptDispatch_EverGrandeCity_Hall5_OnWarpIntoMap: @ 0x082110BF
	@ map script dispatch table
	.byte 0x04
	.4byte gMapScriptConditionTable_EverGrandeCity_Hall5_OnWarpIntoMap
	.byte 0
gMapScriptConditionTable_EverGrandeCity_Hall5_OnWarpIntoMap: @ 0x082110C5
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_082110CF
	.2byte 0
EventScript_JP_082110CF: @ 0x082110CF
	turnobject 0x00FF, 0x02
	end
gMapScriptDispatch_EverGrandeCity_PokemonLeague_1F_OnTransition_OnResume: @ 0x082110D4
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_082110DF
	.byte 0x05
	.4byte SharedMapScript_0824790F
	.byte 0
EventScript_JP_082110DF: @ 0x082110DF
	setrespawn 0x0014
	setflag 0x08B4
	checkflag 0x0107
	call_if 0x00, EventScript_JP_082110EF
	end
EventScript_JP_082110EF: @ 0x082110EF
	setobjectxyperm 0x0003, 0x0009, 0x0002
	setobjectxyperm 0x0004, 0x000A, 0x0002
	return
.globl EventScript_JP_082110FE
EventScript_JP_082110FE: @ 0x082110FE
	setvar 0x800B, 0x0001
	call 0x082429B8
	waitmessage
	waitbuttonpress
	release
	end
.globl EventScript_JP_0821110C
EventScript_JP_0821110C: @ 0x0821110C
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemart 0x08211124
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x02, 0x00, 0x15, 0x00, 0x14, 0x00, 0x13, 0x00, 0x17, 0x00, 0x18, 0x00, 0x54, 0x00, 0x00
	.byte 0x00, 0x6C, 0x02
.globl EventScript_JP_08211136
EventScript_JP_08211136: @ 0x08211136
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	checkflag 0x0107
	goto_if 0x01, EventScript_JP_082111BB
	getplayerxy 0x4000, 0x4001
	compare_var_to_value 0x4000, 0x000B
	call_if 0x04, EventScript_JP_08211198
	compare_var_to_value 0x4000, 0x0008
	call_if 0x03, EventScript_JP_082111A3
	message EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges
	waitmessage
	delay 0x004B
	checkflag 0x086C
	goto_if 0x00, EventScript_JP_082111AE
	closemessage
	@ event command: applymovement
	applymovement 0x0003, EverGrandeCity_ChampionsRoom_Movement_WalkLeft_WalkInPlaceFastestDown
	@ event command: applymovement
	applymovement 0x0004, EverGrandeCity_ChampionsRoom_Movement_WalkRight_WalkInPlaceFastestDown
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x000A
	playfanfare 0x0171
	message EverGrandeCity_PokemonLeague_1F_Text_GoForth
	waitmessage
	waitfanfare
	closemessage
	moveobjectoffscreen 0x0003
	moveobjectoffscreen 0x0004
	setflag 0x0107
	releaseall
	end
EventScript_JP_08211198: @ 0x08211198
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, EverGrandeCity_ChampionsRoom_Movement_WalkDown_WalkLeft_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_082111A3: @ 0x082111A3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, EverGrandeCity_ChampionsRoom_Movement_WalkDown_WalkRight_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_082111AE: @ 0x082111AE
	playse 0x0020
	loadword 0x00, EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges
	callstd 0x04
	releaseall
	end
EventScript_JP_082111BB: @ 0x082111BB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, EverGrandeCity_PokemonLeague_1F_Text_GoForth
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	releaseall
	end
EverGrandeCity_ChampionsRoom_Movement_WalkDown_WalkLeft_WalkInPlaceFastestUp: @ 0x082111DA
	@ object movement sequence
	walk_down
	walk_left
	walk_in_place_fastest_up
	step_end
EverGrandeCity_ChampionsRoom_Movement_WalkDown_WalkRight_WalkInPlaceFastestUp: @ 0x082111DE
	@ object movement sequence
	walk_down
	walk_right
	walk_in_place_fastest_up
	step_end
EverGrandeCity_ChampionsRoom_Movement_WalkLeft_WalkInPlaceFastestDown: @ 0x082111E2
	@ object movement sequence
	walk_left
	walk_in_place_fastest_down
	step_end
EverGrandeCity_ChampionsRoom_Movement_WalkRight_WalkInPlaceFastestDown: @ 0x082111E5
	@ object movement sequence
	walk_right
	walk_in_place_fastest_down
	step_end
