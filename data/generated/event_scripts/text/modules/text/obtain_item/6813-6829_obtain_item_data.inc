	@ data/text/obtain_item.inc:1 gText_ObtainedTheItem (+1 aliases)
	.globl gText_Rom_24393C
gText_Rom_24393C: @ 0x0824393C
	.string "{STR_VAR_2}を てにいれた!$"
	.if (. - gText_Rom_24393C) > 0xb
	.error "gText_Rom_24393C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24393C) < 0xb
	.space 0xb - (. - gText_Rom_24393C)
	.endif

	@ data/text/obtain_item.inc:4 gText_TheBagIsFull
	.globl gText_Rom_243947
gText_Rom_243947: @ 0x08243947
	.string "バッグが いっぱいだ!$"
	.if (. - gText_Rom_243947) > 0xc
	.error "gText_Rom_243947 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243947) < 0xc
	.space 0xc - (. - gText_Rom_243947)
	.endif

	@ data/text/obtain_item.inc:7 gText_PutItemInPocket
	.globl gText_Rom_243953
gText_Rom_243953: @ 0x08243953
	.string "{PLAYER}は {STR_VAR_2}を\n{STR_VAR_3}ポケットに しまった!$"
	.if (. - gText_Rom_243953) > 0x16
	.error "gText_Rom_243953 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243953) < 0x16
	.space 0x16 - (. - gText_Rom_243953)
	.endif

	@ data/text/obtain_item.inc:11 gText_PlayerFoundOneItem
	.globl gText_Rom_243969
gText_Rom_243969: @ 0x08243969
	.string "{PLAYER}は {STR_VAR_2}を\nみつけた!$"
	.if (. - gText_Rom_243969) > 0xe
	.error "gText_Rom_243969 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243969) < 0xe
	.space 0xe - (. - gText_Rom_243969)
	.endif

	@ data/text/obtain_item.inc:15 gText_TooBadBagIsFull
	.globl gText_Rom_243977
gText_Rom_243977: @ 0x08243977
	.string "ざんねん!\nバッグが いっぱいだ……$"
	.if (. - gText_Rom_243977) > 0x13
	.error "gText_Rom_243977 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243977) < 0x13
	.space 0x13 - (. - gText_Rom_243977)
	.endif

	@ data/text/obtain_item.inc:19 gText_PlayerPutItemInBag
	.globl gText_Rom_24398A
gText_Rom_24398A: @ 0x0824398A
	.string "{PLAYER}は {STR_VAR_2}を\nバッグに しまった!$"
	.if (. - gText_Rom_24398A) > 0x13
	.error "gText_Rom_24398A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24398A) < 0x13
	.space 0x13 - (. - gText_Rom_24398A)
	.endif

	@ data/text/obtain_item.inc:1 gText_ObtainedTheItem (+1 aliases)
	.globl gText_Rom_24399D
gText_Rom_24399D: @ 0x0824399D
	.string "{STR_VAR_2}を てにいれた!$"
	.if (. - gText_Rom_24399D) > 0xb
	.error "gText_Rom_24399D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24399D) < 0xb
	.space 0xb - (. - gText_Rom_24399D)
	.endif

	@ data/text/obtain_item.inc:26 gText_NoRoomLeftForAnother
	.globl gText_Rom_2439A8
gText_Rom_2439A8: @ 0x082439A8
	.string "ざんねん! {STR_VAR_2}を\nいれる ばしょが いっぱいだ……$"
	.if (. - gText_Rom_2439A8) > 0x1b
	.error "gText_Rom_2439A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2439A8) < 0x1b
	.space 0x1b - (. - gText_Rom_2439A8)
	.endif

	@ data/text/obtain_item.inc:30 gText_TheDecorWasTransferredToThePC
	.globl gText_Rom_2439C3
gText_Rom_2439C3: @ 0x082439C3
	.string "{STR_VAR_2}は\nパソコンに てんそうされた!$"
	.if (. - gText_Rom_2439C3) > 0x13
	.error "gText_Rom_2439C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2439C3) < 0x13
	.space 0x13 - (. - gText_Rom_2439C3)
	.endif
