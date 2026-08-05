	@ data/text/battle_tent.inc:194 VerdanturfTown_BattleTentLobby_Text_SaveBeforeChallenge
	.globl gText_Rom_27524A
gText_Rom_27524A: @ 0x0827524A
	.string "バトルテントへ むかうまえに\nレポートを かくが よろしいか?$"
	.if (. - gText_Rom_27524A) > 0x20
	.error "gText_Rom_27524A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27524A) < 0x20
	.space 0x20 - (. - gText_Rom_27524A)
	.endif
