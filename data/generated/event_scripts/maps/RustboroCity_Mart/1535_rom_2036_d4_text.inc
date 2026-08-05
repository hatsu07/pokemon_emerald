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
	@ Replaced baserom.gba range: offset=0x203714, size=0x13
	.byte 0x00, 0x0F, 0x00, 0x27, 0x37, 0x20, 0x08, 0x09, 0x02, 0x02, 0x0F, 0x00, 0x55, 0x37, 0x20, 0x08
	.byte 0x09, 0x02, 0x02
