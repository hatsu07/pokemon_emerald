	@ data/maps/SootopolisCity_House6/scripts.inc:34 SootopolisCity_House6_Text_FirstGuestInWhileTakeDoll
	.globl gText_Rom_20F738
gText_Rom_20F738: @ 0x0820F738
	.string "わー ひさしぶりの おきゃくさん!\pなんだか うれしいから\nホエルコの おおきい ぬいぐるみ あげる!{EOS}"
	.if (. - gText_Rom_20F738) > 0x34
	.error "gText_Rom_20F738 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F738) < 0x34
	.space 0x34 - (. - gText_Rom_20F738)
	.endif
	@ data/maps/SootopolisCity_House6/scripts.inc:37 SootopolisCity_House6_Text_TakeGoodCareOfIt
	.globl gText_Rom_20F76C
gText_Rom_20F76C: @ 0x0820F76C
	.string "だいじに してね!{EOS}"
	.if (. - gText_Rom_20F76C) > 0xa
	.error "gText_Rom_20F76C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F76C) < 0xa
	.space 0xa - (. - gText_Rom_20F76C)
	.endif
	@ data/maps/SootopolisCity_House6/scripts.inc:40 SootopolisCity_House6_Text_IllHoldItForYou
	.globl gText_Rom_20F776
gText_Rom_20F776: @ 0x0820F776
	.string "ほしいけど いまは ダメ?\nじゃあ あずかっておいて あげるね{EOS}"
	.if (. - gText_Rom_20F776) > 0x20
	.error "gText_Rom_20F776 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F776) < 0x20
	.space 0x20 - (. - gText_Rom_20F776)
	.endif
	@ data/maps/SootopolisCity_House6/scripts.inc:43 SootopolisCity_House6_Text_DontWantThisDoll
	.globl gText_Rom_20F796
gText_Rom_20F796: @ 0x0820F796
	.string "そうなの?\nぬいぐるみ ほしくないの?{EOS}"
	.if (. - gText_Rom_20F796) > 0x14
	.error "gText_Rom_20F796 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F796) < 0x14
	.space 0x14 - (. - gText_Rom_20F796)
	.endif
	@ data/maps/SootopolisCity_House6/scripts.inc:46 SootopolisCity_House6_Text_LovePlushDolls
	.globl gText_Rom_20F7AA
gText_Rom_20F7AA: @ 0x0820F7AA
	.string "あたし ぬいぐるみ だいすき!{EOS}"
	.if (. - gText_Rom_20F7AA) > 0x10
	.error "gText_Rom_20F7AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F7AA) < 0x10
	.space 0x10 - (. - gText_Rom_20F7AA)
	.endif
	@ analyzed canonical ROM range 0x0820F7BA-0x0820F7CC
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820F7BA: @ 0x0820F7BA
	.byte 0x00
.globl EventScript_JP_0820F7BB
EventScript_JP_0820F7BB: @ 0x0820F7BB
	loadword 0x00, gText_Rom_20F7CD
	callstd 0x02
	end
.globl EventScript_JP_0820F7C4
EventScript_JP_0820F7C4: @ 0x0820F7C4
	loadword 0x00, gText_Rom_20F819
	callstd 0x02
	end
