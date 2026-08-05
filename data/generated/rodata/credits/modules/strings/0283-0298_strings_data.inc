	@ src/strings.c:1025 gText_WirelessCommStatus
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C31DC
gText_Rom_2C31DC: @ 0x082C31DC
	.string "ワイヤレス つうしん じょうきょう$"
	.if (. - gText_Rom_2C31DC) != 0x12
	.error "gText_Rom_2C31DC must retain its original byte length"
	.endif
	.globl gText_Rom_2C31EA
	.set gText_Rom_2C31EA, gText_Rom_2C31DC + 0xe
	@ Decoded text from ROM range: offset=0x2C31EE, size=0x32
	.string "こうかん　しているひと$"
	.string "たいせん　しているひと$"
	.string "ユニオンルームに　いるひと$"
	.string "つうしん　しているひと$"
	.globl gUnknown_82C3220
gUnknown_82C3220: @ 0x082C3220

	@ src/strings.c:1030 gText_F700Players
	.globl gText_Rom_2C3220
gText_Rom_2C3220: @ 0x082C3220
	.string "{DYNAMIC 0}にん$"
	.if (. - gText_Rom_2C3220) > 0x5
	.error "gText_Rom_2C3220 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C3220) < 0x5
	.space 0x5 - (. - gText_Rom_2C3220)
	.endif
	.space 0x1, 0x00

	@ src/strings.c:1031 gText_F701Players
	.globl gText_Rom_2C3226
gText_Rom_2C3226: @ 0x082C3226
	.string "{DYNAMIC 1}にん$"
	.if (. - gText_Rom_2C3226) > 0x5
	.error "gText_Rom_2C3226 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C3226) < 0x5
	.space 0x5 - (. - gText_Rom_2C3226)
	.endif
	.space 0x1, 0x00

	@ src/strings.c:1032 gText_F702Players
	.globl gText_Rom_2C322C
gText_Rom_2C322C: @ 0x082C322C
	.string "{DYNAMIC 2}にん$"
	.if (. - gText_Rom_2C322C) > 0x5
	.error "gText_Rom_2C322C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C322C) < 0x5
	.space 0x5 - (. - gText_Rom_2C322C)
	.endif
	.space 0x1, 0x00

	@ src/strings.c:1033 gText_F703Players
	.globl gText_Rom_2C3232
gText_Rom_2C3232: @ 0x082C3232
	.string "{DYNAMIC 3}にん$"
	.if (. - gText_Rom_2C3232) > 0x5
	.error "gText_Rom_2C3232 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C3232) < 0x5
	.space 0x5 - (. - gText_Rom_2C3232)
	.endif
	.space 0x1, 0x00
	.globl gUnknown_82C3238
gUnknown_82C3238: @ 0x082C3238
	@ Replaced baserom.gba range: offset=0x2C3238, size=0x14
	.byte 0xDC, 0x31, 0x2C, 0x08, 0xEE, 0x31, 0x2C, 0x08, 0xFA, 0x31, 0x2C, 0x08, 0x06, 0x32, 0x2C, 0x08
	.byte 0x14, 0x32, 0x2C, 0x08
	.globl gUnknown_82C324C
gUnknown_82C324C: @ 0x082C324C
	@ Replaced baserom.gba range: offset=0x2C324C, size=0x60
	.byte 0x01, 0x01, 0x02, 0x02, 0x01, 0x02, 0x03, 0x01, 0x04, 0x04, 0x00, 0x02, 0x06, 0x03, 0x02, 0x07
	.byte 0x03, 0x02, 0x09, 0x03, 0x00, 0x0A, 0x03, 0x00, 0x0B, 0x03, 0x00, 0x0C, 0xFF, 0x00, 0x0D, 0x00
	.byte 0x00, 0x10, 0x03, 0x00, 0x0F, 0x03, 0x00, 0x40, 0x02, 0x01, 0x41, 0x02, 0x02, 0x44, 0x02, 0x02
	.byte 0x45, 0x02, 0x00, 0x48, 0x02, 0x02, 0x54, 0x02, 0x01, 0x53, 0x02, 0x02, 0x51, 0x02, 0x01, 0x52
	.byte 0x02, 0x01, 0x15, 0x03, 0x02, 0x16, 0x03, 0x02, 0x17, 0x03, 0x00, 0x18, 0x03, 0x00, 0x19, 0x03
	.byte 0x00, 0x1A, 0x03, 0x00, 0x1B, 0x03, 0x00, 0x1C, 0x01, 0x02, 0x0E, 0x01, 0x02, 0x00, 0x00, 0x00
	.globl gUnknown_82C32AC
gUnknown_82C32AC: @ 0x082C32AC
	@ Replaced baserom.gba range: offset=0x2C32AC, size=0x4
	.byte 0xFC, 0x01, 0x00, 0x00
	.globl gUnknown_82C32B0
gUnknown_82C32B0: @ 0x082C32B0
	@ Replaced baserom.gba range: offset=0x2C32B0, size=0x10
	.byte 0x00, 0x03, 0x0F, 0x18, 0x04, 0x0E, 0x14, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.globl gUnknown_82C32C0
gUnknown_82C32C0: @ 0x082C32C0
	@ Replaced baserom.gba range: offset=0x2C32C0, size=0x3
	.byte 0x01, 0x02, 0x03
	.globl gUnknown_82C32C3
gUnknown_82C32C3: @ 0x082C32C3

	@ src/strings.c:1145 gText_CommStandbyAwaitingOtherPlayer
	.globl gText_Rom_2C32C3
gText_Rom_2C32C3: @ 0x082C32C3
	.string "つうしんたいきちゅう\nあいての せんたくを まっています…$"
	.if (. - gText_Rom_2C32C3) > 0x1e
	.error "gText_Rom_2C32C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C32C3) < 0x1e
	.space 0x1e - (. - gText_Rom_2C32C3)
	.endif
	.globl gUnknown_82C32E1
gUnknown_82C32E1: @ 0x082C32E1

	@ src/strings.c:1146 gText_BattleWasRefused
	.globl gText_Rom_2C32E1
gText_Rom_2C32E1: @ 0x082C32E1
	.string "たいせんを ことわられました{PAUSE 60}$"
	.if (. - gText_Rom_2C32E1) > 0x12
	.error "gText_Rom_2C32E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C32E1) < 0x12
	.space 0x12 - (. - gText_Rom_2C32E1)
	.endif
	.globl gUnknown_82C32F3
gUnknown_82C32F3: @ 0x082C32F3

	@ src/strings.c:1147 gText_RefusedBattle
	.globl gText_Rom_2C32F3
gText_Rom_2C32F3: @ 0x082C32F3
	.string "たいせんを ことわりました{PAUSE 60}$"
	.if (. - gText_Rom_2C32F3) > 0x11
	.error "gText_Rom_2C32F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C32F3) < 0x11
	.space 0x11 - (. - gText_Rom_2C32F3)
	.endif
