	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1007 LilycoveCity_ContestLobby_Text_MasterRankHereICome
	.globl gText_Rom_207640
gText_Rom_207640: @ 0x08207640
	.string "いっ いよいよ\nマスターランクに でるぞ……\pおれの ポケモンちゃんが\nこのよで いちばん\lかわいいって ことを\lしょうめいする ときが きたんだ……\lうへへへへ$"
	.if (. - gText_Rom_207640) > 0x52
	.error "gText_Rom_207640 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207640) < 0x52
	.space 0x52 - (. - gText_Rom_207640)
	.endif
