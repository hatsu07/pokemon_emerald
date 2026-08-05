	@ data/maps/Route119/scripts.inc:522 Route119_Text_BrendanIllGiveYouThis
	.globl gText_Rom_1ED49C
gText_Rom_1ED49C: @ 0x081ED49C
	.string "ユウキ『それなら どこで ポケモン\nさがしても だいじょうぶ だな\pこれ やるから つかってみろよ!$"
	.if (. - gText_Rom_1ED49C) > 0x33
	.error "gText_Rom_1ED49C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1ED49C) < 0x33
	.space 0x33 - (. - gText_Rom_1ED49C)
	.endif
