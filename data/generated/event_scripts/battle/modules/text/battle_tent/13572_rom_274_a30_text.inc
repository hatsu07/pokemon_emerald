	@ data/text/battle_tent.inc:1 FallarborTown_BattleTentLobby_Text_WelcomeToBattleTent
	.globl gText_Rom_274A30
gText_Rom_274A30: @ 0x08274A30
	.string "バトルテント ハジツゲかいじょうへ\nようこそ おいでなされた!\pこちらでは かちぬきチームバトルの\nあんないを しておりますぞ!{EOS}"
	.if (. - gText_Rom_274A30) > 0x41
	.error "gText_Rom_274A30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274A30) < 0x41
	.space 0x41 - (. - gText_Rom_274A30)
	.endif
