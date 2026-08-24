	@ data/maps/RustboroCity_Mart/scripts.inc:67 RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish
	.globl gText_Rom_20366B
gText_Rom_20366B: @ 0x0820366B
	.string "トウカのもりで キノココが\nとびだして きたときの ため\lまひなおしや どくけしを かっておくの！{EOS}"
	.if (. - gText_Rom_20366B) > 0x32
	.error "gText_Rom_20366B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20366B) < 0x32
	.space 0x32 - (. - gText_Rom_20366B)
	.endif
	@ data/maps/RustboroCity_Mart/scripts.inc:70 RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead
	.globl gText_Rom_20369D
gText_Rom_20369D: @ 0x0820369D
	.string "ポケモン しんかして たいりょくが\nふえたから キズぐすり じゃなくて\lいいキズぐすりを かってあげようかな{EOS}"
	.if (. - gText_Rom_20369D) > 0x37
	.error "gText_Rom_20369D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20369D) < 0x37
	.space 0x37 - (. - gText_Rom_20369D)
	.endif
	@ data/maps/RustboroCity_Mart/scripts.inc:73 RustboroCity_Mart_Text_GettingEscapeRopeJustInCase
	.globl gText_Rom_2036D4
gText_Rom_2036D4: @ 0x082036D4
	.string "どうくつで まよった ときのため\nあなぬけのヒモを かっておこう っと！\pつかうと いっしゅんで\nいりぐちに もどれるもんね！{EOS}"
	.if (. - gText_Rom_2036D4) > 0x40
	.error "gText_Rom_2036D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2036D4) < 0x40
	.space 0x40 - (. - gText_Rom_2036D4)
	.endif
	@ analyzed canonical ROM range 0x08203714-0x08203726
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08203714: @ 0x08203714
	.byte 0x00
.globl EventScript_JP_08203715
EventScript_JP_08203715: @ 0x08203715
	loadword 0x00, gText_Rom_203727
	callstd 0x02
	end
.globl EventScript_JP_0820371E
EventScript_JP_0820371E: @ 0x0820371E
	loadword 0x00, gText_Rom_203755
	callstd 0x02
	end
