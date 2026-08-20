	@ data/maps/Route109/scripts.inc:503 Route109_Text_LittleKidsDartAround
	.globl gText_Rom_1E8C80
gText_Rom_1E8C80: @ 0x081E8C80
	.string "こどもって あちこち うごきまわるから\nめを はなせなくて たいへん!\pポケモンが いっしょ だから\nだいじょうぶ だと おもってるけど……{EOS}"
	.if (. - gText_Rom_1E8C80) > 0x47
	.error "gText_Rom_1E8C80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E8C80) < 0x47
	.space 0x47 - (. - gText_Rom_1E8C80)
	.endif
