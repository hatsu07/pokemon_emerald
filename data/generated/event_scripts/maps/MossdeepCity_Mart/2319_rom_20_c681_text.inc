	@ data/maps/MossdeepCity_Mart/scripts.inc:39 MossdeepCity_Mart_Text_ReviveIsFantastic
	.globl MossdeepCity_Mart_Text_ReviveIsFantastic
MossdeepCity_Mart_Text_ReviveIsFantastic: @ 0x0820C5FD
	.string "げんきのかけら って すごい!\pこれを あたえると\nひんしの ポケモンも めざめるの!\pでも パワーポイントは\nかいふく しないから きをつけて!{EOS}"
	.if (. - MossdeepCity_Mart_Text_ReviveIsFantastic) > 0x4a
	.error "MossdeepCity_Mart_Text_ReviveIsFantastic may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Mart_Text_ReviveIsFantastic) < 0x4a
	.space 0x4a - (. - MossdeepCity_Mart_Text_ReviveIsFantastic)
	.endif
	@ data/maps/MossdeepCity_Mart/scripts.inc:42 MossdeepCity_Mart_Text_MaxRepelLastsLongest
	.globl MossdeepCity_Mart_Text_MaxRepelLastsLongest
MossdeepCity_Mart_Text_MaxRepelLastsLongest: @ 0x0820C647
	.string "ゴールドスプレーは\nよわい ポケモンを よせつけない\pかずある スプレーの なかで\nいちばん ながもち するんだ!{EOS}"
	.if (. - MossdeepCity_Mart_Text_MaxRepelLastsLongest) > 0x3a
	.error "MossdeepCity_Mart_Text_MaxRepelLastsLongest may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Mart_Text_MaxRepelLastsLongest) < 0x3a
	.space 0x3a - (. - MossdeepCity_Mart_Text_MaxRepelLastsLongest)
	.endif
	@ data/maps/MossdeepCity_Mart/scripts.inc:45 MossdeepCity_Mart_Text_NetAndDiveBallsRare
	.globl MossdeepCity_Mart_Text_NetAndDiveBallsRare
MossdeepCity_Mart_Text_NetAndDiveBallsRare: @ 0x0820C681
	.string "ネットボールと ダイブボールは\nここ トクサネでしか つくっていない\lめずらしい モンスターボール!\pネットボールは むしタイプや\nみずタイプの ポケモンに こうかてき!\pダイブボールは かいていに いる\nポケモンを つかまえ やすいんだ!{EOS}"
	.if (. - MossdeepCity_Mart_Text_NetAndDiveBallsRare) > 0x79
	.error "MossdeepCity_Mart_Text_NetAndDiveBallsRare may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Mart_Text_NetAndDiveBallsRare) < 0x79
	.space 0x79 - (. - MossdeepCity_Mart_Text_NetAndDiveBallsRare)
	.endif
	@ analyzed canonical ROM range 0x0820C6FA-0x0820C74D
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820C6FA: @ 0x0820C6FA
	.byte 0x00
.globl EventScript_JP_0820C6FB
EventScript_JP_0820C6FB: @ 0x0820C6FB
	lock
	faceplayer
	checkflag 0x0098
	goto_if 0x01, EventScript_JP_0820C73A
	loadword 0x00, MossdeepCity_House3_Text_YouWantSuperRod
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820C744
	loadword 0x00, MossdeepCity_House3_Text_SuperRodIsSuper
	callstd 0x04
	setorcopyvar 0x8000, 0x0108
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	setflag 0x0098
	loadword 0x00, MossdeepCity_House3_Text_TryDroppingRodInWater
	callstd 0x04
	release
	end
EventScript_0820C73A: @ 0x0820C73A
EventScript_JP_0820C73A: @ 0x0820C73A
	loadword 0x00, MossdeepCity_House3_Text_GoAfterSeafloorPokemon
	callstd 0x04
	release
	end
EventScript_0820C744: @ 0x0820C744
EventScript_JP_0820C744: @ 0x0820C744
	loadword 0x00, MossdeepCity_House3_Text_DontYouLikeToFish
	callstd 0x04
	release
	end
