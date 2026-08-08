	@ data/text/battle_tent.inc:286 SlateportCity_BattleTentLobby_Text_WonThreeMatchesReturnMons
	.globl gText_Rom_275596
gText_Rom_275596: @ 0x08275596
	.string "3れんしょう おめでとう ございます!\pレンタルポケモンと\nおあずかり していた ポケモンを\lこうかん します!\pレポートを かきますので\nしょうしょう おまちください!$"
	.if (. - gText_Rom_275596) > 0x56
	.error "gText_Rom_275596 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275596) < 0x56
	.space 0x56 - (. - gText_Rom_275596)
	.endif
