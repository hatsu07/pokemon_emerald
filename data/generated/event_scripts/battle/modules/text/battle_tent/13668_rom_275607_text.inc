	@ data/text/battle_tent.inc:298 SlateportCity_BattleTentLobby_Text_NoRoomInBagMakeRoom
	.globl gText_Rom_275607
gText_Rom_275607: @ 0x08275607
	.string "おやや?\nどうぐが いっぱい ですねー\pどうぐを せいり してから\nまた きてください!{EOS}"
	.if (. - gText_Rom_275607) > 0x2d
	.error "gText_Rom_275607 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275607) < 0x2d
	.space 0x2d - (. - gText_Rom_275607)
	.endif
