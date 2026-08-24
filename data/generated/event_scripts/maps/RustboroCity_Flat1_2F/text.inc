	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:78 RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard
	.globl RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard
RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard: @ 0x08203886
	.string "もうね たいへん なのよ!\pなにが たいへんって\nそんなの きまってるでしょ!\pまいにちの おこんだて よッ!\pまいにち まいにち かんがえるのって\nほんとうに たいへん なんだからッ!{EOS}"
	.if (. - RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard) > 0x5e
	.error "RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard) < 0x5e
	.space 0x5e - (. - RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard)
	.endif
	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:81 RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase
	.globl RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase
RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase: @ 0x082038E4
	.string "やあ いらっしゃい\nハコガミけ へ ようこそ!\pちょっと しつもんが あるんだけど\nきみ こもり したこと ある?\pおじさん はじめて\nいくじ してるんだけどさ\pうちの アヤノ\nなかなか わらって くれないんだよね\pおもしろーい ことば で\nわらって くれないかなーって\lおもうんだけど\lおもしろーい ことば おしえて くれない?{EOS}"
	.if (. - RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase) > 0xa6
	.error "RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase) < 0xa6
	.space 0xa6 - (. - RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase)
	.endif
	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:84 RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase
	.globl RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase
RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase: @ 0x0820398A
	.string "いまは {STR_VAR_1} って\nことばを つかってるんだけど\pおもしろそうな ことば\nみつけて きたの?{EOS}"
	.if (. - RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase) > 0x2f
	.error "RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase) < 0x2f
	.space 0x2f - (. - RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase)
	.endif
	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:87 RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion
	.globl RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion
RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion: @ 0x082039B9
	.string "そうか そうか\nじゃあ さっそく おしえて くれよ{EOS}"
	.if (. - RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion) > 0x1a
	.error "RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion) < 0x1a
	.space 0x1a - (. - RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion)
	.endif
	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:90 RustboroCity_Flat1_2F_Text_OhIsThatRight
	.globl RustboroCity_Flat1_2F_Text_OhIsThatRight
RustboroCity_Flat1_2F_Text_OhIsThatRight: @ 0x082039D3
	.string "そうか そうか\nなにか おもしろそうな ことばを\lみつけたら おしえて くれよ{EOS}"
	.if (. - RustboroCity_Flat1_2F_Text_OhIsThatRight) > 0x28
	.error "RustboroCity_Flat1_2F_Text_OhIsThatRight may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Flat1_2F_Text_OhIsThatRight) < 0x28
	.space 0x28 - (. - RustboroCity_Flat1_2F_Text_OhIsThatRight)
	.endif
	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:93 RustboroCity_Flat1_2F_Text_LetsGiveItATry2 (+1 aliases)
	.globl RustboroCity_Flat1_2F_Text_LetsGiveItATry2_Copy_Rom_2039FB
RustboroCity_Flat1_2F_Text_LetsGiveItATry2_Copy_Rom_2039FB: @ 0x082039FB
	.string "なるほどー\nじゃあ ためして みようかな{EOS}"
	.if (. - RustboroCity_Flat1_2F_Text_LetsGiveItATry2_Copy_Rom_2039FB) > 0x15
	.error "RustboroCity_Flat1_2F_Text_LetsGiveItATry2_Copy_Rom_2039FB may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Flat1_2F_Text_LetsGiveItATry2_Copy_Rom_2039FB) < 0x15
	.space 0x15 - (. - RustboroCity_Flat1_2F_Text_LetsGiveItATry2_Copy_Rom_2039FB)
	.endif
	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:96 RustboroCity_Flat1_2F_Text_OhShesLaughing
	.globl RustboroCity_Flat1_2F_Text_OhShesLaughing
RustboroCity_Flat1_2F_Text_OhShesLaughing: @ 0x08203A10
	.string "{STR_VAR_1}\n{STR_VAR_1}\pわらってる わらってる!\nなんだか うれしいなあ{EOS}"
	.if (. - RustboroCity_Flat1_2F_Text_OhShesLaughing) > 0x1f
	.error "RustboroCity_Flat1_2F_Text_OhShesLaughing may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Flat1_2F_Text_OhShesLaughing) < 0x1f
	.space 0x1f - (. - RustboroCity_Flat1_2F_Text_OhShesLaughing)
	.endif
	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:93 RustboroCity_Flat1_2F_Text_LetsGiveItATry2 (+1 aliases)
	.globl RustboroCity_Flat1_2F_Text_LetsGiveItATry2_Copy_Rom_203A2F
RustboroCity_Flat1_2F_Text_LetsGiveItATry2_Copy_Rom_203A2F: @ 0x08203A2F
	.string "なるほどー\nじゃあ ためして みようかな{EOS}"
	.if (. - RustboroCity_Flat1_2F_Text_LetsGiveItATry2_Copy_Rom_203A2F) > 0x15
	.error "RustboroCity_Flat1_2F_Text_LetsGiveItATry2_Copy_Rom_203A2F may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Flat1_2F_Text_LetsGiveItATry2_Copy_Rom_203A2F) < 0x15
	.space 0x15 - (. - RustboroCity_Flat1_2F_Text_LetsGiveItATry2_Copy_Rom_203A2F)
	.endif
	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:102 RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll (+1 aliases)
	.globl RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll_Copy_Rom_203A44
RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll_Copy_Rom_203A44: @ 0x08203A44
	.string "{STR_VAR_1}\n{STR_VAR_1}\pうーん わらわないなあ\nこのこ クール なのかな{EOS}"
	.if (. - RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll_Copy_Rom_203A44) > 0x1f
	.error "RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll_Copy_Rom_203A44 may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll_Copy_Rom_203A44) < 0x1f
	.space 0x1f - (. - RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll_Copy_Rom_203A44)
	.endif
	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:105 RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase
	.globl RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase
RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase: @ 0x08203A63
	.string "いい ことば しらないかー\nじゃあ じぶんで かんがえるかー\pうーん\n{STR_VAR_1} とか どうかな\lよし! ためしてみよう{EOS}"
	.if (. - RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase) > 0x3a
	.error "RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase) < 0x3a
	.space 0x3a - (. - RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase)
	.endif
	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:102 RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll (+1 aliases)
	.globl RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll_Copy_Rom_203A9D
RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll_Copy_Rom_203A9D: @ 0x08203A9D
	.string "{STR_VAR_1}\n{STR_VAR_1}\pうーん わらわないなあ\nこのこ クール なのかな{EOS}"
	.if (. - RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll_Copy_Rom_203A9D) > 0x1f
	.error "RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll_Copy_Rom_203A9D may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll_Copy_Rom_203A9D) < 0x1f
	.space 0x1f - (. - RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll_Copy_Rom_203A9D)
	.endif
	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:111 RustboroCity_Flat1_2F_Text_OhYouDontKnowAny
	.globl RustboroCity_Flat1_2F_Text_OhYouDontKnowAny
RustboroCity_Flat1_2F_Text_OhYouDontKnowAny: @ 0x08203ABC
	.string "いい ことば しらないかー\nじゃあ まえの ことばで\lがんばって あやすかー\pおもしろそうな ことば みつけたら\nおじさんに おしえてね{EOS}"
	.if (. - RustboroCity_Flat1_2F_Text_OhYouDontKnowAny) > 0x45
	.error "RustboroCity_Flat1_2F_Text_OhYouDontKnowAny may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Flat1_2F_Text_OhYouDontKnowAny) < 0x45
	.space 0x45 - (. - RustboroCity_Flat1_2F_Text_OhYouDontKnowAny)
	.endif
	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:114 RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper
	.globl RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper
RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper: @ 0x08203B01
	.string "ありがとう!\pきみの おかげで アヤノが\nわらって くれたよ!\pじつは おじさん\nこう みえても\pデボンコーポレーションの\nすごうで けんきゅういん なんだよ\pそうだなー じゃあ おれいに\nきみが ポケモンを あずけている\lボックスの かべがみを\lふやして あげよう!\pかべがみの なかから\n「だいすき」って いうのを えらぶと\lあたらしい かべがみが えらべるよ!{EOS}"
	.if (. - RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper) > 0xb8
	.error "RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper) < 0xb8
	.space 0xb8 - (. - RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper)
	.endif
	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:117 RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll
	.globl RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll
RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll: @ 0x08203BB9
	.string "ポケモンの ぬいぐるみ だ!{EOS}"
	.if (. - RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll) > 0xf
	.error "RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll) < 0xf
	.space 0xf - (. - RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll)
	.endif
	@ analyzed canonical ROM range 0x08203BC8-0x08203C71
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x00
.globl EventScript_JP_08203BC9
EventScript_JP_08203BC9: @ 0x08203BC9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x0099
	goto_if 0x01, EventScript_JP_08203C5F
	setvar 0x8008, 0x0000
	copyvar 0x8004, 0x8008
	specialvar_ 0x800D, 0x00FC
	copyvar 0x8009, 0x800D
	loadword 0x00, RustboroCity_House1_Text_IllTradeIfYouWant
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08203C47
	@ event command: special
	special ChoosePartyMon
	waitstate
	copyvar 0x800A, 0x8004
	compare_var_to_value 0x8004, 0x00FF
	goto_if 0x01, EventScript_JP_08203C47
	copyvar 0x8005, 0x800A
	specialvar_ 0x800D, 0x00FF
	copyvar 0x800B, 0x800D
	compare_var_to_var 0x800D, 0x8009
	goto_if 0x05, EventScript_JP_08203C51
	copyvar 0x8004, 0x8008
	copyvar 0x8005, 0x800A
	@ event command: special
	special CreateInGameTradePokemon
	@ event command: special
	special DoInGameTradeScene
	waitstate
	loadword 0x00, RustboroCity_House1_Text_PleaseBeGoodToMyPokemon
	callstd 0x04
	setflag 0x0099
	release
	end
EventScript_JP_08203C47: @ 0x08203C47
	loadword 0x00, RustboroCity_House1_Text_YouDontWantToThatsOkay
	callstd 0x04
	release
	end
EventScript_JP_08203C51: @ 0x08203C51
	bufferspeciesname 0x00, 0x8009
	loadword 0x00, RustboroCity_House1_Text_DoesntLookLikeMonToMe
	callstd 0x04
	release
	end
EventScript_JP_08203C5F: @ 0x08203C5F
	loadword 0x00, RustboroCity_House1_Text_AnyPokemonCanBeCute
	callstd 0x04
	release
	end
.globl EventScript_JP_08203C69
EventScript_JP_08203C69: @ 0x08203C69
	loadword 0x00, RustboroCity_House1_Text_AllSortsOfPlaces
	callstd 0x02
	end
