	@ data/maps/LilycoveCity/scripts.inc:492 LilycoveCity_Text_BrendanBattleMe
	.globl gText_Rom_1E0A2F
gText_Rom_1E0A2F: @ 0x081E0A2F
	.string "ユウキ『どっちが うまく\nポケモン そだてているか\lしょうぶ してやろうか?{EOS}"
	.if (. - gText_Rom_1E0A2F) > 0x27
	.error "gText_Rom_1E0A2F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0A2F) < 0x27
	.space 0x27 - (. - gText_Rom_1E0A2F)
	.endif
