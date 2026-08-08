	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1019 LilycoveCity_ContestLobby_Text_LavishedCareOnMon
	.globl gText_Rom_20771C
gText_Rom_20771C: @ 0x0820771C
	.string "まいにち だいじに だいじに\nそだてあげた わしの ポケモン\lコンディションは カンペキ!\lきょうは かつぞおおおおおうう!$"
	.if (. - gText_Rom_20771C) > 0x3f
	.error "gText_Rom_20771C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20771C) < 0x3f
	.space 0x3f - (. - gText_Rom_20771C)
	.endif
