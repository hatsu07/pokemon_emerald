	@ data/text/match_call.inc:271 MatchCall_PersonalizedText20
	.globl gText_Rom_267124
gText_Rom_267124: @ 0x08267124
	.string "おれ おれ {STR_VAR_1}!\pいやあ おれも ほかの やまにも\nのぼって みても いいんだけどさー\lえんとつやま みたいに\lきれいな おねいさん たちが\lいるか どうか わからんもんなー\pきれいな おねいさんが いっぱいの\nやまが あったら おしえて くれよ!\lえへへへ またなあ!$"
	.if (. - gText_Rom_267124) > 0x89
	.error "gText_Rom_267124 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_267124) < 0x89
	.space 0x89 - (. - gText_Rom_267124)
	.endif
