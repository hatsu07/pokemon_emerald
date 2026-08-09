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
sAnalyzedEventData_08203714: @ 0x08203714
EventScript_08203714: @ 0x08203714
	nop
	loadword 0x00, gText_Rom_203727
	callstd 0x02
	end
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0F, 0x00, 0x55, 0x37, 0x20, 0x08, 0x09, 0x02, 0x02
