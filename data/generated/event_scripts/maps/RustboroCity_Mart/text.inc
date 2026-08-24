	@ data/maps/RustboroCity_Mart/scripts.inc:67 RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish
	.globl RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish
RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish: @ 0x0820366B
	.string "トウカのもりで キノココが\nとびだして きたときの ため\lまひなおしや どくけしを かっておくの！{EOS}"
	.if (. - RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish) > 0x32
	.error "RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish) < 0x32
	.space 0x32 - (. - RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish)
	.endif
	@ data/maps/RustboroCity_Mart/scripts.inc:70 RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead
	.globl RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead
RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead: @ 0x0820369D
	.string "ポケモン しんかして たいりょくが\nふえたから キズぐすり じゃなくて\lいいキズぐすりを かってあげようかな{EOS}"
	.if (. - RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead) > 0x37
	.error "RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead) < 0x37
	.space 0x37 - (. - RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead)
	.endif
	@ data/maps/RustboroCity_Mart/scripts.inc:73 RustboroCity_Mart_Text_GettingEscapeRopeJustInCase
	.globl RustboroCity_Mart_Text_GettingEscapeRopeJustInCase
RustboroCity_Mart_Text_GettingEscapeRopeJustInCase: @ 0x082036D4
	.string "どうくつで まよった ときのため\nあなぬけのヒモを かっておこう っと！\pつかうと いっしゅんで\nいりぐちに もどれるもんね！{EOS}"
	.if (. - RustboroCity_Mart_Text_GettingEscapeRopeJustInCase) > 0x40
	.error "RustboroCity_Mart_Text_GettingEscapeRopeJustInCase may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Mart_Text_GettingEscapeRopeJustInCase) < 0x40
	.space 0x40 - (. - RustboroCity_Mart_Text_GettingEscapeRopeJustInCase)
	.endif
	@ analyzed canonical ROM range 0x08203714-0x08203726
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08203714: @ 0x08203714
	.byte 0x00
.globl EventScript_JP_08203715
EventScript_JP_08203715: @ 0x08203715
	loadword 0x00, RustboroCity_Flat1_1F_Text_EveryPokemonHasAbility
	callstd 0x02
	end
.globl EventScript_JP_0820371E
EventScript_JP_0820371E: @ 0x0820371E
	loadword 0x00, RustboroCity_Flat1_1F_Text_PokemonStrange
	callstd 0x02
	end
