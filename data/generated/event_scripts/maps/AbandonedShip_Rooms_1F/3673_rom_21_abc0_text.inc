	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:49 AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro (+1 aliases)
	.globl gText_Rom_21AB3F
gText_Rom_21AB3F: @ 0x0821AB3F
	.string "こんな ところまで なんども きて\nほんとに ものずきね キミって!"
	.byte EOS
	.if (. - gText_Rom_21AB3F) > 0x23
	.error "gText_Rom_21AB3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AB3F) < 0x23
	.space 0x23 - (. - gText_Rom_21AB3F)
	.endif
	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:52 AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat (+1 aliases)
	.globl gText_Rom_21AB62
gText_Rom_21AB62: @ 0x0821AB62
	.string "ちょっと つよすぎない?"
	.byte EOS
	.if (. - gText_Rom_21AB62) > 0xd
	.error "gText_Rom_21AB62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AB62) < 0xd
	.space 0xd - (. - gText_Rom_21AB62)
	.endif
	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:55 AbandonedShip_Rooms_1F_Text_ThaliaPostRematch
	.globl gText_Rom_21AB6F
gText_Rom_21AB6F: @ 0x0821AB6F
	.string "あの おじさん ぜったい\nわたしの ことを みているのよ!\lわざとらしすぎるわ!"
	.byte EOS
	.if (. - gText_Rom_21AB6F) > 0x29
	.error "gText_Rom_21AB6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AB6F) < 0x29
	.space 0x29 - (. - gText_Rom_21AB6F)
	.endif
	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:58 AbandonedShip_Rooms_1F_Text_DemetriusIntro (+1 aliases)
	.globl gText_Rom_21AB98
gText_Rom_21AB98: @ 0x0821AB98
	.string "わーっ!\nみつかった…… って あれ?"
	.byte EOS
	.if (. - gText_Rom_21AB98) > 0x14
	.error "gText_Rom_21AB98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AB98) < 0x14
	.space 0x14 - (. - gText_Rom_21AB98)
	.endif
	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:61 AbandonedShip_Rooms_1F_Text_DemetriusDefeat (+1 aliases)
	.globl gText_Rom_21ABAC
gText_Rom_21ABAC: @ 0x0821ABAC
	.string "なんだ\nかあちゃん じゃ なかったのか"
	.byte EOS
	.if (. - gText_Rom_21ABAC) > 0x14
	.error "gText_Rom_21ABAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21ABAC) < 0x14
	.space 0x14 - (. - gText_Rom_21ABAC)
	.endif
	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:64 AbandonedShip_Rooms_1F_Text_DemetriusPostBattle
	.globl gText_Rom_21ABC0
gText_Rom_21ABC0: @ 0x0821ABC0
	.string "かあちゃんに しかられて\nここまで にげて きたんだ\lボクが ここに いるのは ないしょだぞ!"
	.byte EOS
	.if (. - gText_Rom_21ABC0) > 0x30
	.error "gText_Rom_21ABC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21ABC0) < 0x30
	.space 0x30 - (. - gText_Rom_21ABC0)
	.endif
	@ Embedded ROM bytes: file offset 0x21ABF0, size 0xA6
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x05, 0xFB, 0xAB, 0x21, 0x08, 0x01, 0x04, 0xAC, 0x21, 0x08, 0x00, 0x40, 0x18, 0x3C, 0xFF, 0x05
	.byte 0x00, 0x04, 0x00, 0x02, 0x2B, 0xEF, 0x00, 0x07, 0x00, 0x17, 0xAC, 0x21, 0x08, 0x2B, 0xEF, 0x00
	.byte 0x07, 0x01, 0x21, 0xAC, 0x21, 0x08, 0x02, 0xA2, 0x0B, 0x00, 0x04, 0x00, 0x33, 0x02, 0x01, 0x00
	.byte 0x03, 0xA2, 0x0B, 0x00, 0x04, 0x00, 0x2B, 0x02, 0x01, 0x00, 0x03, 0x0F, 0x00
	.4byte gText_Rom_21AD11 @ ROM pointer 0x0821AD11
	.byte 0x09, 0x02, 0x02, 0x69, 0x2B, 0xEF, 0x00, 0x06, 0x01, 0x75, 0xAC, 0x21, 0x08, 0x47, 0x1D, 0x01
	.byte 0x01, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x6B, 0xAC, 0x21, 0x08, 0x0F, 0x00, 0x3C
	.byte 0xAD, 0x21, 0x08, 0x09, 0x04, 0x2F, 0x15, 0x00, 0x45, 0x1D, 0x01, 0x01, 0x00, 0x29, 0xEF, 0x00
	.byte 0x04, 0x21, 0xAC, 0x21, 0x08, 0x25, 0x8E, 0x00, 0x6B, 0x02, 0x0F, 0x00
	.4byte gText_Rom_21AD1E @ ROM pointer 0x0821AD1E
	.byte 0x09, 0x04, 0x6B, 0x02, 0x0F, 0x00, 0x6C, 0xAD, 0x21, 0x08, 0x09, 0x04, 0x6B, 0x02, 0x5C, 0x00
	.byte 0xF0, 0x01, 0x00, 0x00
	.4byte gText_Rom_21AC96 @ ROM pointer 0x0821AC96
	.4byte gText_Rom_21ACC7 @ ROM pointer 0x0821ACC7
	.byte 0x0F, 0x00, 0xD0, 0xAC, 0x21, 0x08, 0x09, 0x06, 0x02
