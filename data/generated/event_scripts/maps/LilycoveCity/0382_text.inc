	@ data/maps/LilycoveCity/scripts.inc:543 LilycoveCity_Text_MovedLootIntoHideoutToday
	.globl gText_Rom_1E0C6D
gText_Rom_1E0C6D: @ 0x081E0C6D
	.string "ふふふ……\pきょうも うばった ブツを\nアジトに はこびこんだぞ……\pなっ なんだ おまえ!\nいっ いまのは ひとりごと だぞ!$"
	.if (. - gText_Rom_1E0C6D) > 0x41
	.error "gText_Rom_1E0C6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0C6D) < 0x41
	.space 0x41 - (. - gText_Rom_1E0C6D)
	.endif
