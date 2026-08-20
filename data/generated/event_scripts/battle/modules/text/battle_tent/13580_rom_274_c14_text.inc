	@ data/text/battle_tent.inc:40 FallarborTown_BattleTentLobby_Text_SaveBeforeChallenge
	.globl gText_Rom_274C14
gText_Rom_274C14: @ 0x08274C14
	.string "バトルテントへ おつれする まえに\nレポートを かきますが よろしいですかな?{EOS}"
	.if (. - gText_Rom_274C14) > 0x28
	.error "gText_Rom_274C14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274C14) < 0x28
	.space 0x28 - (. - gText_Rom_274C14)
	.endif
