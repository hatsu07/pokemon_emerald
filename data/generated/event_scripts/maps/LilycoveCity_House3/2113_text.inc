	@ data/maps/LilycoveCity_House3/scripts.inc:103 LilycoveCity_House3_Text_OhAreYouSure
	.globl gText_Rom_20A24F
gText_Rom_20A24F: @ 0x0820A24F
	.string "あらあ そう?\nなんでも じぶん ひとりだけで\lがんばろうと しちゃ ダメよー！$"
	.if (. - gText_Rom_20A24F) > 0x29
	.error "gText_Rom_20A24F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A24F) < 0x29
	.space 0x29 - (. - gText_Rom_20A24F)
	.endif
