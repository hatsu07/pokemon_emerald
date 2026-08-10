	@ data/maps/RustboroCity_Mart/scripts.inc:73 RustboroCity_Mart_Text_GettingEscapeRopeJustInCase
	.globl gText_Rom_2036D4
gText_Rom_2036D4: @ 0x082036D4
	.string "どうくつで まよった ときのため\nあなぬけのヒモを かっておこう っと！\pつかうと いっしゅんで\nいりぐちに もどれるもんね！$"
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
EventScript_JP_08203715: @ 0x08203715
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203727 @ gText_Rom_203727
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820371E: @ 0x0820371E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203755 @ gText_Rom_203755
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
