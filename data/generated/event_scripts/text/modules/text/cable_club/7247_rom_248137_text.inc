	@ data/text/cable_club.inc:181 CableClub_Text_UnionRoomAdapterNotConnected
	.globl gText_Rom_248137
gText_Rom_248137: @ 0x08248137
	.string "こちらは\nポケモン ワイヤレス クラブ\lユニオン ルームです\pワイヤレスアダプタが\nつながって いません\pまた おこしください$"
	.if (. - gText_Rom_248137) > 0x40
	.error "gText_Rom_248137 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248137) < 0x40
	.space 0x40 - (. - gText_Rom_248137)
	.endif
