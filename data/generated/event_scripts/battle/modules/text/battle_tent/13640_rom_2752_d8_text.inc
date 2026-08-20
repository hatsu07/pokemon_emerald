	@ data/text/battle_tent.inc:212 VerdanturfTown_BattleTentLobby_Text_FeatWillBeRecorded
	.globl gText_Rom_2752D8
gText_Rom_2752D8: @ 0x082752D8
	.string "レポートに かくぞ\nしばし またれよ……{EOS}"
	.if (. - gText_Rom_2752D8) > 0x15
	.error "gText_Rom_2752D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2752D8) < 0x15
	.space 0x15 - (. - gText_Rom_2752D8)
	.endif
