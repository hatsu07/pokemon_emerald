	@ data/text/match_call.inc:229 MatchCall_PersonalizedText6
	.globl gText_Rom_266A18
gText_Rom_266A18: @ 0x08266A18
	.string "もぐもぐ……\nあ {STR_VAR_1}です\lすなはまで たべる おにぎりは うまいなー\pうーん ぼくも ポケモンも\nげんきに なったぞ!\lじゃ およいで くるね!$"
	.if (. - gText_Rom_266A18) > 0x4a
	.error "gText_Rom_266A18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266A18) < 0x4a
	.space 0x4a - (. - gText_Rom_266A18)
	.endif
