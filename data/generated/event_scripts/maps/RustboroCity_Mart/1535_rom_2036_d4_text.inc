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
