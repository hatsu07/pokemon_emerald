	@ data/text/battle_tent.inc:431 VerdanturfTown_BattleTentLobby_Text_ExplainWhenInDangerRules
	.globl gText_Rom_275B4F
gText_Rom_275B4F: @ 0x08275B4F
	.string "ポケモンの せいかくの なかには\nピンチに なることで もともとの\lせいかくとは ちがう タイプの\lわざを つかう ように\lなるものが あります\pピンチに なって すこし かわった\nこうどうを はじめた ポケモンには\lじゅうぶん ちゅうい しましょう{EOS}"
	.if (. - gText_Rom_275B4F) > 0x7e
	.error "gText_Rom_275B4F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275B4F) < 0x7e
	.space 0x7e - (. - gText_Rom_275B4F)
	.endif
