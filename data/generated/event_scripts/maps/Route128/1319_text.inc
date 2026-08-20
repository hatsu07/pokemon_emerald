	@ data/maps/Route128/scripts.inc:244 Route128_Text_ArchieWhatHappened
	.globl gText_Rom_1EF029
gText_Rom_1EF029: @ 0x081EF029
	.string "アオギリ『なんだ……\nこの ひどい ありさまは……?\pおれは……\nとんでもない まちがいを……{EOS}"
	.if (. - gText_Rom_1EF029) > 0x30
	.error "gText_Rom_1EF029 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EF029) < 0x30
	.space 0x30 - (. - gText_Rom_1EF029)
	.endif
