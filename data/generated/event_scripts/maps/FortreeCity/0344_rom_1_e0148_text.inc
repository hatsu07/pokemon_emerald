	@ data/maps/FortreeCity/scripts.inc:90 FortreeCity_Text_SawGiganticPokemonInSky
	.globl gText_Rom_1DFEC0
gText_Rom_1DFEC0: @ 0x081DFEC0
	.string "だれも しんじて くれないけど\nおおきな ポケモンが からだを くねらせ\lそらを とんでいるのを みたんだ……\pそいつは 131ばん すいどうの ほうへ\nとんでいったよ……\p……ところで\nなんか きみ コゲくさいね\pかざんに でも いってきた?{EOS}"
	.if (. - gText_Rom_1DFEC0) > 0x7b
	.error "gText_Rom_1DFEC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFEC0) < 0x7b
	.space 0x7b - (. - gText_Rom_1DFEC0)
	.endif
	@ data/maps/FortreeCity/scripts.inc:99 FortreeCity_Text_SomethingBlockingGym
	.globl gText_Rom_1DFF3B
gText_Rom_1DFF3B: @ 0x081DFF3B
	.string "ポケモンジムに いきたいのに\nなにかが みちを ふさいでいるのよ!\pせっかく 120ばん どうろで\nポケモン そだてて きたのに!{EOS}"
	.if (. - gText_Rom_1DFF3B) > 0x42
	.error "gText_Rom_1DFF3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFF3B) < 0x42
	.space 0x42 - (. - gText_Rom_1DFF3B)
	.endif
	@ data/maps/FortreeCity/scripts.inc:105 FortreeCity_Text_ThisTimeIllBeatWinona
	.globl gText_Rom_1DFF7D
gText_Rom_1DFF7D: @ 0x081DFF7D
	.string "あたしの じまんの ポケモンで\nこんどこそ ナギさんに かってみせるわ!{EOS}"
	.if (. - gText_Rom_1DFF7D) > 0x25
	.error "gText_Rom_1DFF7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFF7D) < 0x25
	.space 0x25 - (. - gText_Rom_1DFF7D)
	.endif
	@ data/maps/FortreeCity/scripts.inc:109 FortreeCity_Text_TreesGrowByDrinkingRainwater
	.globl gText_Rom_1DFFA2
gText_Rom_1DFFA2: @ 0x081DFFA2
	.string "あめが じめんに すいこまれて\nその みずを すって きがそだつ……\pみずと つちが りょうほう あるから\nこの ヒワマキシティも あるのよね{EOS}"
	.if (. - gText_Rom_1DFFA2) > 0x48
	.error "gText_Rom_1DFFA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFFA2) < 0x48
	.space 0x48 - (. - gText_Rom_1DFFA2)
	.endif
	@ data/maps/FortreeCity/scripts.inc:115 FortreeCity_Text_EveryoneHealthyAndLively
	.globl gText_Rom_1DFFEA
gText_Rom_1DFFEA: @ 0x081DFFEA
	.string "このまちは きのうえに\nいえを たてて くらしている……\pそのせいか みんな げんきで\nイキイキと している のですよ\pわしも このまちに きてから\n30ねんほど わかがえった きぶんです{EOS}"
	.if (. - gText_Rom_1DFFEA) > 0x5f
	.error "gText_Rom_1DFFEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFFEA) < 0x5f
	.space 0x5f - (. - gText_Rom_1DFFEA)
	.endif
	@ data/maps/FortreeCity/scripts.inc:123 FortreeCity_Text_BugPokemonComeThroughWindow
	.globl gText_Rom_1E0049
gText_Rom_1E0049: @ 0x081E0049
	.string "きのうえで くらすのは いいんだけど\pときどき まどの そとから\nむしポケモンが はいって きたりして\lびっくり しちゃうんだよね{EOS}"
	.if (. - gText_Rom_1E0049) > 0x42
	.error "gText_Rom_1E0049 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0049) < 0x42
	.space 0x42 - (. - gText_Rom_1E0049)
	.endif
	@ data/maps/FortreeCity/scripts.inc:129 FortreeCity_Text_PokemonThatEvolveWhenTraded
	.globl gText_Rom_1E008B
gText_Rom_1E008B: @ 0x081E008B
	.string "ともだちと こうかんを すると\nしんか する ポケモンが いるんだって!{EOS}"
	.if (. - gText_Rom_1E008B) > 0x25
	.error "gText_Rom_1E008B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E008B) < 0x25
	.space 0x25 - (. - gText_Rom_1E008B)
	.endif
	@ data/maps/FortreeCity/scripts.inc:133 FortreeCity_Text_SomethingUnseeable (+1 aliases)
	.globl gText_Rom_1E00B0
gText_Rom_1E00B0: @ 0x081E00B0
	.string "みえない なにかが いるようだ{EOS}"
	.if (. - gText_Rom_1E00B0) > 0x10
	.error "gText_Rom_1E00B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E00B0) < 0x10
	.space 0x10 - (. - gText_Rom_1E00B0)
	.endif
	@ data/maps/FortreeCity/scripts.inc:136 FortreeCity_Text_UnseeableUseDevonScope (+1 aliases)
	.globl gText_Rom_1E00C0
gText_Rom_1E00C0: @ 0x081E00C0
	.string "みえない なにかが いるようだ\pデボンスコープを つかいますか?{EOS}"
	.if (. - gText_Rom_1E00C0) > 0x21
	.error "gText_Rom_1E00C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E00C0) < 0x21
	.space 0x21 - (. - gText_Rom_1E00C0)
	.endif
	@ data/maps/FortreeCity/scripts.inc:140 FortreeCity_Text_UsedDevonScopePokemonFled
	.globl gText_Rom_1E00E1
gText_Rom_1E00E1: @ 0x081E00E1
	.string "{PLAYER}は\nデボンスコープを つかった!\pとうめいに なっていた\nポケモンの すがたが まるわかりだ!\pポケモンは\nおどろいて にげだした!{EOS}"
	.if (. - gText_Rom_1E00E1) > 0x45
	.error "gText_Rom_1E00E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E00E1) < 0x45
	.space 0x45 - (. - gText_Rom_1E00E1)
	.endif
	@ data/maps/FortreeCity/scripts.inc:146 FortreeCity_Text_CitySign
	.globl gText_Rom_1E0126
gText_Rom_1E0126: @ 0x081E0126
	.string "ここは ヒワマキ シティ\nきの うえで しぜんと たわむれる まち{EOS}"
	.if (. - gText_Rom_1E0126) > 0x22
	.error "gText_Rom_1E0126 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0126) < 0x22
	.space 0x22 - (. - gText_Rom_1E0126)
	.endif
	@ data/maps/FortreeCity/scripts.inc:151 FortreeCity_Text_GymSign
	.globl gText_Rom_1E0148
gText_Rom_1E0148: @ 0x081E0148
	.string "ヒワマキ シティ ポケモンジム\nリーダー ナギ\lせかいに はばたく とりつかい!{EOS}"
	.if (. - gText_Rom_1E0148) > 0x29
	.error "gText_Rom_1E0148 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0148) < 0x29
	.space 0x29 - (. - gText_Rom_1E0148)
	.endif
	@ analyzed canonical ROM range 0x081E0171-0x081E0695
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_LilycoveCity_OnTransition_OnLoad: @ 0x081E0171
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081E017C
	.byte 0x01
	.4byte EventScript_JP_081E0196
	.byte 0
EventScript_JP_081E017C: @ 0x081E017C
	setflag 0x087B
	setvar 0x4086, 0x0000
	setflag 0x0322
	checkflag 0x088A
	call_if 0x01, 0x08243106
	call 0x08242F63
	end
EventScript_JP_081E0196: @ 0x081E0196
	checkflag 0x0070
	call_if 0x00, EventScript_JP_081E01A0
	end
EventScript_JP_081E01A0: @ 0x081E01A0
	setmetatile 0x004C, 0x000C, 0x0290, 0x0001
	setmetatile 0x004D, 0x000C, 0x0291, 0x0001
	setmetatile 0x004C, 0x000D, 0x02A0, 0x0001
	setmetatile 0x004D, 0x000D, 0x02A1, 0x0001
	setmetatile 0x004C, 0x000E, 0x0298, 0x0001
	setmetatile 0x004D, 0x000E, 0x0299, 0x0001
	setmetatile 0x004C, 0x000F, 0x02A0, 0x0001
	setmetatile 0x004D, 0x000F, 0x02A1, 0x0001
	setmetatile 0x004D, 0x0010, 0x0298, 0x0001
	setmetatile 0x004E, 0x0010, 0x0299, 0x0001
	setmetatile 0x004D, 0x0011, 0x02A0, 0x0001
	setmetatile 0x004E, 0x0011, 0x02A1, 0x0001
	return
.globl EventScript_JP_081E020D
EventScript_JP_081E020D: @ 0x081E020D
	lock
	faceplayer
	dotimebasedevents
	checkflag 0x092F
	goto_if 0x01, EventScript_JP_081E024D
	loadword 0x00, gText_Rom_263A58
	callstd 0x04
	random 0x000A
	addvar 0x800D, 0x0085
	setorcopyvar 0x8000, 0x800D
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x092F
	loadword 0x00, gText_Rom_263A9E
	callstd 0x04
	release
	end
EventScript_JP_081E024D: @ 0x081E024D
	loadword 0x00, gText_Rom_263ABA
	callstd 0x04
	release
	end
.globl EventScript_JP_081E0257
EventScript_JP_081E0257: @ 0x081E0257
	loadword 0x00, gText_Rom_1E0DD4
	callstd 0x02
	end
.globl EventScript_JP_081E0260
EventScript_JP_081E0260: @ 0x081E0260
	lock
	faceplayer
	checkflag 0x086D
	goto_if 0x01, EventScript_JP_081E0275
	loadword 0x00, gText_Rom_1E0E2F
	callstd 0x04
	release
	end
EventScript_JP_081E0275: @ 0x081E0275
	loadword 0x00, gText_Rom_1E0E50
	callstd 0x04
	release
	end
.globl EventScript_JP_081E027F
EventScript_JP_081E027F: @ 0x081E027F
	loadword 0x00, gText_Rom_1E0EA8
	callstd 0x02
	end
.globl EventScript_JP_081E0288
EventScript_JP_081E0288: @ 0x081E0288
	lock
	faceplayer
	checkflag 0x0070
	goto_if 0x01, EventScript_JP_081E029D
	loadword 0x00, gText_Rom_1E0F11
	callstd 0x04
	release
	end
EventScript_JP_081E029D: @ 0x081E029D
	loadword 0x00, gText_Rom_1E0F57
	callstd 0x04
	release
	end
.globl EventScript_JP_081E02A7
EventScript_JP_081E02A7: @ 0x081E02A7
	lock
	faceplayer
	checkflag 0x0070
	goto_if 0x01, EventScript_JP_081E02BC
	loadword 0x00, gText_Rom_1E0FA2
	callstd 0x04
	release
	end
EventScript_JP_081E02BC: @ 0x081E02BC
	loadword 0x00, gText_Rom_1E0FFF
	callstd 0x04
	release
	end
.globl EventScript_JP_081E02C6
EventScript_JP_081E02C6: @ 0x081E02C6
	loadword 0x00, gText_Rom_1E1021
	callstd 0x02
	end
.globl EventScript_JP_081E02CF
EventScript_JP_081E02CF: @ 0x081E02CF
	loadword 0x00, gText_Rom_1E1092
	callstd 0x03
	end
.globl EventScript_JP_081E02D8
EventScript_JP_081E02D8: @ 0x081E02D8
	loadword 0x00, gText_Rom_1E10D3
	callstd 0x03
	end
.globl EventScript_JP_081E02E1
EventScript_JP_081E02E1: @ 0x081E02E1
	lock
	faceplayer
	checkflag 0x086D
	goto_if 0x01, EventScript_JP_081E02F6
	loadword 0x00, gText_Rom_1E111B
	callstd 0x04
	release
	end
EventScript_JP_081E02F6: @ 0x081E02F6
	loadword 0x00, gText_Rom_1E11AF
	callstd 0x04
	release
	end
.globl EventScript_JP_081E0300
EventScript_JP_081E0300: @ 0x081E0300
	loadword 0x00, gText_Rom_1E1431
	callstd 0x02
	end
.globl EventScript_JP_081E0309
EventScript_JP_081E0309: @ 0x081E0309
	loadword 0x00, gText_Rom_1E145A
	callstd 0x02
	end
.globl EventScript_JP_081E0312
EventScript_JP_081E0312: @ 0x081E0312
	lockall
	loadword 0x00, gText_Rom_1E148D
	callstd 0x02
	@ event command: applymovement
	applymovement 0x0014, PetalburgCity_Ext_FaceOriginalDirection
	end
.globl EventScript_JP_081E0323
EventScript_JP_081E0323: @ 0x081E0323
	lockall
	loadword 0x00, gText_Rom_1E14F9
	callstd 0x02
	@ event command: applymovement
	applymovement 0x0013, PetalburgCity_Ext_FaceOriginalDirection
	end
.globl EventScript_JP_081E0334
EventScript_JP_081E0334: @ 0x081E0334
	loadword 0x00, gText_Rom_1E11F4
	callstd 0x03
	end
.globl EventScript_JP_081E033D
EventScript_JP_081E033D: @ 0x081E033D
	loadword 0x00, gText_Rom_1E1213
	callstd 0x03
	end
.globl EventScript_JP_081E0346
EventScript_JP_081E0346: @ 0x081E0346
	loadword 0x00, gText_Rom_1E1234
	callstd 0x03
	end
.globl EventScript_JP_081E034F
EventScript_JP_081E034F: @ 0x081E034F
	lockall
	specialvar_ 0x8004, 0x0089
	copyvar 0x8000, 0x8004
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081E036F
	loadword 0x00, gText_Rom_1E1276
	callstd 0x04
	releaseall
	end
EventScript_JP_081E036F: @ 0x081E036F
	loadword 0x00, gText_Rom_1E1254
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_081E0379
EventScript_JP_081E0379: @ 0x081E0379
	lockall
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_081E038D
	loadword 0x00, gText_Rom_1E129D
	callstd 0x04
	releaseall
	end
EventScript_JP_081E038D: @ 0x081E038D
	loadword 0x00, gText_Rom_1E12E3
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_081E0397
EventScript_JP_081E0397: @ 0x081E0397
	loadword 0x00, gText_Rom_1E1318
	callstd 0x03
	end
.globl EventScript_JP_081E03A0
EventScript_JP_081E03A0: @ 0x081E03A0
	loadword 0x00, gText_Rom_1E1350
	callstd 0x03
	end
.globl EventScript_JP_081E03A9
EventScript_JP_081E03A9: @ 0x081E03A9
	loadword 0x00, gText_Rom_1E1383
	callstd 0x03
	end
.globl EventScript_JP_081E03B2
EventScript_JP_081E03B2: @ 0x081E03B2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	checkflag 0x00DA
	goto_if 0x01, EventScript_JP_081E03E5
	loadword 0x00, gText_Rom_1E0D86
	callstd 0x04
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1E0DA6
	callstd 0x04
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	setflag 0x00DA
	releaseall
	end
EventScript_JP_081E03E5: @ 0x081E03E5
	loadword 0x00, gText_Rom_1E0D86
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_081E03EF
EventScript_JP_081E03EF: @ 0x081E03EF
	loadword 0x00, gText_Rom_1E0C6D
	callstd 0x02
	end
.globl EventScript_JP_081E03F8
EventScript_JP_081E03F8: @ 0x081E03F8
	loadword 0x00, gText_Rom_1E0CAE
	callstd 0x02
	end
.globl EventScript_JP_081E0401
EventScript_JP_081E0401: @ 0x081E0401
	loadword 0x00, gText_Rom_1E0D08
	callstd 0x02
	end
.globl EventScript_JP_081E040A
EventScript_JP_081E040A: @ 0x081E040A
	loadword 0x00, gText_Rom_1E0D4E
	callstd 0x02
	end
.globl EventScript_JP_081E0413
EventScript_JP_081E0413: @ 0x081E0413
	lock
	faceplayer
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081E042D
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081E04A0
	end
EventScript_JP_081E042D: @ 0x081E042D
	playbgm 0x019F, 0x01
	checkflag 0x011E
	call_if 0x01, EventScript_JP_081E047D
	checkflag 0x011E
	call_if 0x00, EventScript_JP_081E0486
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081E048F
	loadword 0x00, gText_Rom_1E078B
	callstd 0x04
	copyvar 0x8000, 0x4023
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081E0513
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081E0523
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081E0533
	end
EventScript_JP_081E047D: @ 0x081E047D
	loadword 0x00, gText_Rom_1E0769
	callstd 0x05
	return
EventScript_JP_081E0486: @ 0x081E0486
	loadword 0x00, gText_Rom_1E0696
	callstd 0x05
	return
EventScript_JP_081E048F: @ 0x081E048F
	setflag 0x011E
	loadword 0x00, gText_Rom_1E0733
	callstd 0x04
	savebgm 0x0000
	fadedefaultbgm
	release
	end
EventScript_JP_081E04A0: @ 0x081E04A0
	playbgm 0x01A5, 0x01
	checkflag 0x011E
	call_if 0x01, EventScript_JP_081E04F0
	checkflag 0x011E
	call_if 0x00, EventScript_JP_081E04F9
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081E0502
	loadword 0x00, gText_Rom_1E0A56
	callstd 0x04
	copyvar 0x8000, 0x4023
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081E0543
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081E0553
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081E0563
	end
EventScript_JP_081E04F0: @ 0x081E04F0
	loadword 0x00, gText_Rom_1E0A2F
	callstd 0x05
	return
EventScript_JP_081E04F9: @ 0x081E04F9
	loadword 0x00, gText_Rom_1E09A9
	callstd 0x05
	return
EventScript_JP_081E0502: @ 0x081E0502
	setflag 0x011E
	loadword 0x00, gText_Rom_1E0A1B
	callstd 0x04
	savebgm 0x0000
	fadedefaultbgm
	release
	end
EventScript_JP_081E0513: @ 0x081E0513
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0299, 0x0000, gText_Rom_1E07B9
	goto EventScript_JP_081E0573
	.byte 0x02
EventScript_JP_081E0523: @ 0x081E0523
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x029A, 0x0000, gText_Rom_1E07B9
	goto EventScript_JP_081E0573
	.byte 0x02
EventScript_JP_081E0533: @ 0x081E0533
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0298, 0x0000, gText_Rom_1E07B9
	goto EventScript_JP_081E0573
	.byte 0x02
EventScript_JP_081E0543: @ 0x081E0543
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0296, 0x0000, gText_Rom_1E0A72
	goto EventScript_JP_081E05DF
	.byte 0x02
EventScript_JP_081E0553: @ 0x081E0553
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0297, 0x0000, gText_Rom_1E0A72
	goto EventScript_JP_081E05DF
	.byte 0x02
EventScript_JP_081E0563: @ 0x081E0563
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0295, 0x0000, gText_Rom_1E0A72
	goto EventScript_JP_081E05DF
	.byte 0x02
EventScript_JP_081E0573: @ 0x081E0573
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_1E080D
	callstd 0x04
	setvar 0x800D, 0x0000
	checkflag 0x086C
	call_if 0x01, EventScript_JP_081E05AB
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_081E05BB
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_081E05C4
	clearflag 0x02D2
	clearflag 0x0351
	goto EventScript_JP_081E063B
	.byte 0x02
EventScript_JP_081E05AB: @ 0x081E05AB
	checkflag 0x086E
	goto_if 0x01, EventScript_JP_081E05B5
	return
EventScript_JP_081E05B5: @ 0x081E05B5
	setvar 0x800D, 0x0001
	return
EventScript_JP_081E05BB: @ 0x081E05BB
	loadword 0x00, gText_Rom_1E085C
	callstd 0x04
	return
EventScript_JP_081E05C4: @ 0x081E05C4
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_081E05D6
	loadword 0x00, gText_Rom_1E08C7
	callstd 0x04
	return
EventScript_JP_081E05D6: @ 0x081E05D6
	loadword 0x00, gText_Rom_1E0939
	callstd 0x04
	return
EventScript_JP_081E05DF: @ 0x081E05DF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_1E0AAF
	callstd 0x04
	setvar 0x800D, 0x0000
	checkflag 0x086C
	call_if 0x01, EventScript_JP_081E05AB
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_081E0617
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_081E0620
	clearflag 0x02F8
	clearflag 0x032F
	goto EventScript_JP_081E063B
	.byte 0x02
EventScript_JP_081E0617: @ 0x081E0617
	loadword 0x00, gText_Rom_1E0B06
	callstd 0x04
	return
EventScript_JP_081E0620: @ 0x081E0620
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_081E0632
	loadword 0x00, gText_Rom_1E0B58
	callstd 0x04
	return
EventScript_JP_081E0632: @ 0x081E0632
	loadword 0x00, gText_Rom_1E0BC3
	callstd 0x04
	return
EventScript_JP_081E063B: @ 0x081E063B
	closemessage
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x0032
	setfieldeffectargument 0x00, 0x0001
	dofieldeffect 0x001E
	delay 0x000F
	@ event command: removeobject
	removeobject 0x800F
	waitfieldeffect 0x001E
	savebgm 0x0000
	fadedefaultbgm
	setflag 0x0124
	release
	end
.globl EventScript_JP_081E0662
EventScript_JP_081E0662: @ 0x081E0662
	lock
	faceplayer
	loadword 0x00, gText_Rom_1E13A5
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_081E0684
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_081E068D
	release
	end
EventScript_JP_081E0684: @ 0x081E0684
	loadword 0x00, gText_Rom_1E13C0
	callstd 0x04
	return
EventScript_JP_081E068D: @ 0x081E068D
	loadword 0x00, gText_Rom_1E13F5
	callstd 0x04
	return
