	@ data/maps/Route104/scripts.inc:1033 Route104_Text_TMsAreOneTimeUse
	.globl gText_Rom_1E7C88
gText_Rom_1E7C88: @ 0x081E7C88
	.string "ひとこと アドバイスな!\pわざマシンは つかいすて!\nつかうと なくなるから\lよく かんがえてから つかえよな!$"
	.if (. - gText_Rom_1E7C88) > 0x39
	.error "gText_Rom_1E7C88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7C88) < 0x39
	.space 0x39 - (. - gText_Rom_1E7C88)
	.endif
