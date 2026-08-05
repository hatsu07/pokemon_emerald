	@ data/text/match_call.inc:289 MatchCall_PersonalizedText26
	.globl gText_Rom_2673DF
gText_Rom_2673DF: @ 0x082673DF
	.string "{STR_VAR_1} です!\pきのう ツツジさまに\nしょうぶ してもらったの!\pけっかは さんざん だったけど……\nツツジさまが あたしの あいてを\lしてくれた って いうことが\lすごく うれしいの!\lますます あこがれちゃうわ!\pいまから また もうべんきょうよ!\nだから さよなら!$"
	.if (. - gText_Rom_2673DF) > 0x88
	.error "gText_Rom_2673DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2673DF) < 0x88
	.space 0x88 - (. - gText_Rom_2673DF)
	.endif
