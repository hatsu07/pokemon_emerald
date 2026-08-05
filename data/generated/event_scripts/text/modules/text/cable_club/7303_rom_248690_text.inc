	@ data/text/cable_club.inc:265 CableClub_Text_WelcomeUnionRoomEnter
	.globl gText_Rom_248690
gText_Rom_248690: @ 0x08248690
	.string "ポケモン ワイヤレス クラブ\nユニオン ルームに ようこそ!\pこちらでは みしらぬ ともだちと\nやりとり できます\pへやに はいりますか?$"
	.if (. - gText_Rom_248690) > 0x46
	.error "gText_Rom_248690 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248690) < 0x46
	.space 0x46 - (. - gText_Rom_248690)
	.endif
