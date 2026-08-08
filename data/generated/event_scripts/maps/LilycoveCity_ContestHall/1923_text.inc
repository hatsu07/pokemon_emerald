	@ data/maps/LilycoveCity_ContestHall/scripts.inc:337 LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext
	.globl gText_Rom_207CDC
gText_Rom_207CDC: @ 0x08207CDC
	.string "よし！ おれの ポケモンが\nこのつぎに かしこい わざをだせば\lいっきに かいじょうが エキサイトするぞ！$"
	.if (. - gText_Rom_207CDC) > 0x36
	.error "gText_Rom_207CDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207CDC) < 0x36
	.space 0x36 - (. - gText_Rom_207CDC)
	.endif
