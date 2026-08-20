	@ data/text/battle_tent.inc:272 SlateportCity_BattleTentLobby_Text_ReturnRentalMonsSaveResults
	.globl gText_Rom_275524
gText_Rom_275524: @ 0x08275524
	.string "おつかれさまでした!\pレンタルポケモンと\nおあずかり していた ポケモンを\lこうかん します!\pレポートを かきますので\nしょうしょう おまちください!{EOS}"
	.if (. - gText_Rom_275524) > 0x4d
	.error "gText_Rom_275524 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275524) < 0x4d
	.space 0x4d - (. - gText_Rom_275524)
	.endif
