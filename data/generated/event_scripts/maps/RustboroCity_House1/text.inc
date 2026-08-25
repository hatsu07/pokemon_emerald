	@ data/maps/RustboroCity_House1/scripts.inc:33 RustboroCity_House1_Text_IllTradeIfYouWant
	.globl RustboroCity_House1_Text_IllTradeIfYouWant
RustboroCity_House1_Text_IllTradeIfYouWant: @ 0x08203C72
	.string "え?\nぼくの ポケモンが かわいい?\lウン しってるよー\pあっ どうしても って いうなら\nこうかん して あげても いいよ\pじゃあ ぼくの {STR_VAR_2}\n{STR_VAR_1} となら こうかん するよ{EOS}"
	.if (. - RustboroCity_House1_Text_IllTradeIfYouWant) > 0x5a
	.error "RustboroCity_House1_Text_IllTradeIfYouWant may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_House1_Text_IllTradeIfYouWant) < 0x5a
	.space 0x5a - (. - RustboroCity_House1_Text_IllTradeIfYouWant)
	.endif
	@ data/maps/RustboroCity_House1/scripts.inc:36 RustboroCity_House1_Text_PleaseBeGoodToMyPokemon
	.globl RustboroCity_House1_Text_PleaseBeGoodToMyPokemon
RustboroCity_House1_Text_PleaseBeGoodToMyPokemon: @ 0x08203CCC
	.string "えへへ……\nちゃんと かわいがってね{EOS}"
	.if (. - RustboroCity_House1_Text_PleaseBeGoodToMyPokemon) > 0x13
	.error "RustboroCity_House1_Text_PleaseBeGoodToMyPokemon may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_House1_Text_PleaseBeGoodToMyPokemon) < 0x13
	.space 0x13 - (. - RustboroCity_House1_Text_PleaseBeGoodToMyPokemon)
	.endif
	@ data/maps/RustboroCity_House1/scripts.inc:39 RustboroCity_House1_Text_DoesntLookLikeMonToMe
	.globl RustboroCity_House1_Text_DoesntLookLikeMonToMe
RustboroCity_House1_Text_DoesntLookLikeMonToMe: @ 0x08203CDF
	.string "えー どうみても {STR_VAR_1}に\nみえないんだけど……{EOS}"
	.if (. - RustboroCity_House1_Text_DoesntLookLikeMonToMe) > 0x18
	.error "RustboroCity_House1_Text_DoesntLookLikeMonToMe may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_House1_Text_DoesntLookLikeMonToMe) < 0x18
	.space 0x18 - (. - RustboroCity_House1_Text_DoesntLookLikeMonToMe)
	.endif
	@ data/maps/RustboroCity_House1/scripts.inc:42 RustboroCity_House1_Text_YouDontWantToThatsOkay
	.globl RustboroCity_House1_Text_YouDontWantToThatsOkay
RustboroCity_House1_Text_YouDontWantToThatsOkay: @ 0x08203CF7
	.string "あ いやなら いいけど……\nせっかく かわいい ポケモンなのに{EOS}"
	.if (. - RustboroCity_House1_Text_YouDontWantToThatsOkay) > 0x20
	.error "RustboroCity_House1_Text_YouDontWantToThatsOkay may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_House1_Text_YouDontWantToThatsOkay) < 0x20
	.space 0x20 - (. - RustboroCity_House1_Text_YouDontWantToThatsOkay)
	.endif
	@ data/maps/RustboroCity_House1/scripts.inc:45 RustboroCity_House1_Text_AnyPokemonCanBeCute
	.globl RustboroCity_House1_Text_AnyPokemonCanBeCute
RustboroCity_House1_Text_AnyPokemonCanBeCute: @ 0x08203D17
	.string "だいじに そだてると\nどんな ポケモンも すごく かわいいよねー{EOS}"
	.if (. - RustboroCity_House1_Text_AnyPokemonCanBeCute) > 0x21
	.error "RustboroCity_House1_Text_AnyPokemonCanBeCute may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_House1_Text_AnyPokemonCanBeCute) < 0x21
	.space 0x21 - (. - RustboroCity_House1_Text_AnyPokemonCanBeCute)
	.endif
	@ data/maps/RustboroCity_House1/scripts.inc:48 RustboroCity_House1_Text_AllSortsOfPlaces
	.globl RustboroCity_House1_Text_AllSortsOfPlaces
RustboroCity_House1_Text_AllSortsOfPlaces: @ 0x08203D38
	.string "いろんな ばしょに\nいろんな ポケモンが いる\lいろんな ひとも いる\pそれが たのしみで わしも\nいろんな ところに でかけるのさ!{EOS}"
	.if (. - RustboroCity_House1_Text_AllSortsOfPlaces) > 0x44
	.error "RustboroCity_House1_Text_AllSortsOfPlaces may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_House1_Text_AllSortsOfPlaces) < 0x44
	.space 0x44 - (. - RustboroCity_House1_Text_AllSortsOfPlaces)
	.endif
	@ analyzed canonical ROM range 0x08203D7C-0x08203DBB
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08203D7C: @ 0x08203D7C
	.byte 0x00
.globl EventScript_JP_08203D7D
EventScript_JP_08203D7D: @ 0x08203D7D
	lock
	faceplayer
	checkflag 0x0089
	goto_if 0x01, EventScript_JP_08203DA9
	loadword 0x00, RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse
	callstd 0x04
	setorcopyvar 0x8000, 0x0153
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	setflag 0x0089
	loadword 0x00, RustboroCity_CuttersHouse_Text_ExplainCut
	callstd 0x04
	release
	end
EventScript_08203DA9: @ 0x08203DA9
EventScript_JP_08203DA9: @ 0x08203DA9
	loadword 0x00, RustboroCity_CuttersHouse_Text_ExplainCut
	callstd 0x04
	release
	end
.globl EventScript_JP_08203DB3
EventScript_JP_08203DB3: @ 0x08203DB3
	loadword 0x00, RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees
	callstd 0x02
	end
