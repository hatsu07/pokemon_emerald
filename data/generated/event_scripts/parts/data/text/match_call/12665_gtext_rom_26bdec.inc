	@ data/text/match_call.inc:871 MatchCall_Text_Norman4
	.globl gText_Rom_26BDEC
gText_Rom_26BDEC: @ 0x0826BDEC
	.string "パパ『{PLAYER}! たまには ママにも\nあいに いって あげるんだぞ!\pわたしは ここで\nじぶんを きたえなおす!\pポケモンしょうぶの みちは\nおくが ふかい からな!"
	.byte EOS
	.if (. - gText_Rom_26BDEC) > 0x52
	.error "gText_Rom_26BDEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BDEC) < 0x52
	.space 0x52 - (. - gText_Rom_26BDEC)
	.endif
