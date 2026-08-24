	@ data/maps/SootopolisCity_House6/scripts.inc:34 SootopolisCity_House6_Text_FirstGuestInWhileTakeDoll
	.globl SootopolisCity_House6_Text_FirstGuestInWhileTakeDoll
SootopolisCity_House6_Text_FirstGuestInWhileTakeDoll: @ 0x0820F738
	.string "わー ひさしぶりの おきゃくさん!\pなんだか うれしいから\nホエルコの おおきい ぬいぐるみ あげる!{EOS}"
	.if (. - SootopolisCity_House6_Text_FirstGuestInWhileTakeDoll) > 0x34
	.error "SootopolisCity_House6_Text_FirstGuestInWhileTakeDoll may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_House6_Text_FirstGuestInWhileTakeDoll) < 0x34
	.space 0x34 - (. - SootopolisCity_House6_Text_FirstGuestInWhileTakeDoll)
	.endif
	@ data/maps/SootopolisCity_House6/scripts.inc:37 SootopolisCity_House6_Text_TakeGoodCareOfIt
	.globl SootopolisCity_House6_Text_TakeGoodCareOfIt
SootopolisCity_House6_Text_TakeGoodCareOfIt: @ 0x0820F76C
	.string "だいじに してね!{EOS}"
	.if (. - SootopolisCity_House6_Text_TakeGoodCareOfIt) > 0xa
	.error "SootopolisCity_House6_Text_TakeGoodCareOfIt may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_House6_Text_TakeGoodCareOfIt) < 0xa
	.space 0xa - (. - SootopolisCity_House6_Text_TakeGoodCareOfIt)
	.endif
	@ data/maps/SootopolisCity_House6/scripts.inc:40 SootopolisCity_House6_Text_IllHoldItForYou
	.globl SootopolisCity_House6_Text_IllHoldItForYou
SootopolisCity_House6_Text_IllHoldItForYou: @ 0x0820F776
	.string "ほしいけど いまは ダメ?\nじゃあ あずかっておいて あげるね{EOS}"
	.if (. - SootopolisCity_House6_Text_IllHoldItForYou) > 0x20
	.error "SootopolisCity_House6_Text_IllHoldItForYou may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_House6_Text_IllHoldItForYou) < 0x20
	.space 0x20 - (. - SootopolisCity_House6_Text_IllHoldItForYou)
	.endif
	@ data/maps/SootopolisCity_House6/scripts.inc:43 SootopolisCity_House6_Text_DontWantThisDoll
	.globl SootopolisCity_House6_Text_DontWantThisDoll
SootopolisCity_House6_Text_DontWantThisDoll: @ 0x0820F796
	.string "そうなの?\nぬいぐるみ ほしくないの?{EOS}"
	.if (. - SootopolisCity_House6_Text_DontWantThisDoll) > 0x14
	.error "SootopolisCity_House6_Text_DontWantThisDoll may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_House6_Text_DontWantThisDoll) < 0x14
	.space 0x14 - (. - SootopolisCity_House6_Text_DontWantThisDoll)
	.endif
	@ data/maps/SootopolisCity_House6/scripts.inc:46 SootopolisCity_House6_Text_LovePlushDolls
	.globl SootopolisCity_House6_Text_LovePlushDolls
SootopolisCity_House6_Text_LovePlushDolls: @ 0x0820F7AA
	.string "あたし ぬいぐるみ だいすき!{EOS}"
	.if (. - SootopolisCity_House6_Text_LovePlushDolls) > 0x10
	.error "SootopolisCity_House6_Text_LovePlushDolls may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_House6_Text_LovePlushDolls) < 0x10
	.space 0x10 - (. - SootopolisCity_House6_Text_LovePlushDolls)
	.endif
	@ analyzed canonical ROM range 0x0820F7BA-0x0820F7CC
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820F7BA: @ 0x0820F7BA
	.byte 0x00
.globl EventScript_JP_0820F7BB
EventScript_JP_0820F7BB: @ 0x0820F7BB
	loadword 0x00, SootopolisCity_House7_Text_CityFromEruptedVolcano
	callstd 0x02
	end
.globl EventScript_JP_0820F7C4
EventScript_JP_0820F7C4: @ 0x0820F7C4
	loadword 0x00, SootopolisCity_House7_Text_CaveMadeToKeepSomething
	callstd 0x02
	end
