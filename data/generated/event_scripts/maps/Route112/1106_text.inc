	@ data/maps/Route112/scripts.inc:109 Route112_Text_LeaderGoingToAwakenThing
	.globl gText_Rom_1EB023
gText_Rom_1EB023: @ 0x081EB023
	.string "なあ おい リーダーは ほんとうに\nアイツを めざめさせる つもりか?$"
	.if (. - gText_Rom_1EB023) > 0x24
	.error "gText_Rom_1EB023 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EB023) < 0x24
	.space 0x24 - (. - gText_Rom_1EB023)
	.endif
